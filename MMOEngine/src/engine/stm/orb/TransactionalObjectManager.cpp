/*
Copyright (C) 2007 <SWGEmu>. All rights reserved.
Distribution of this file for usage outside of Core3 is prohibited.
*/

#include "engine/db/ObjectDatabaseManager.h"

#include "TransactionalObjectManager.h"

TransactionalObjectManager::TransactionalObjectManager() : Command() {
	objectBroker = DistributedObjectBroker::instance();
}

void TransactionalObjectManager::initialize() {
	ObjectDatabaseManager::instance()->startLocalTransaction();
}

void TransactionalObjectManager::execute() {
	LocalObjectManager* manager = getLocalObjectManager();

	manager->commitObjectChanges();

	ObjectDatabaseManager::instance()->commitLocalTransaction();
}

void TransactionalObjectManager::undo() {
	LocalObjectManager* manager = getLocalObjectManager();

	manager->clearObjectChanges();

	ObjectDatabaseManager::instance()->abortLocalTransaction();
}

void TransactionalObjectManager::registerClass(const String& name, DistributedObjectClassHelper* helper) {
	objectBroker->registerClass(name, helper);
}

void TransactionalObjectManager::deploy(DistributedObjectStub* obj) {
	LocalObjectManager* manager = getLocalObjectManager();

	manager->deploy(obj);
}

void TransactionalObjectManager::deploy(const String& name, DistributedObjectStub* obj) {
	LocalObjectManager* manager = getLocalObjectManager();

	manager->deploy(name, obj);
}

DistributedObjectStub* TransactionalObjectManager::undeploy(const String& name) {
	LocalObjectManager* manager = getLocalObjectManager();

	return manager->undeploy(name);
}

DistributedObject* TransactionalObjectManager::lookUp(const String& name) {
	LocalObjectManager* manager = getLocalObjectManager();

	return manager->lookUp(name);
}

DistributedObject* TransactionalObjectManager::lookUp(uint64 objid) {
	LocalObjectManager* manager = getLocalObjectManager();

	return manager->lookUp(objid);
}

bool TransactionalObjectManager::destroyObject(DistributedObjectStub* obj) {
	LocalObjectManager* manager = getLocalObjectManager();

	return manager->destroyObject(obj);
}

LocalObjectManager* TransactionalObjectManager::getLocalObjectManager() {
	LocalObjectManager* manager = localObjectManager.get();
	if (manager == NULL) {
		manager = new LocalObjectManager();

		localObjectManager.set(manager);
	}

	return manager;
}