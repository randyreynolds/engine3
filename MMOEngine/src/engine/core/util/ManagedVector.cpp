/*
 *	engine/core/util/ManagedVector.cpp generated by engine3 IDL compiler 0.55
 */

#include "ManagedVector.h"

#include "ManagedVectorImplementation.h"

/*
 *	ManagedVectorStub
 */

ManagedVector::ManagedVector(DummyConstructorParameter* param) {
	_impl = NULL;
}

ManagedVector::~ManagedVector() {
}

/*
 *	ManagedVectorAdapter
 */

ManagedVectorAdapter::ManagedVectorAdapter(ManagedVectorImplementation* obj) : DistributedObjectAdapter((DistributedObjectServant*) obj) {
}

Packet* ManagedVectorAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	default:
		return NULL;
	}

	return resp;
}

/*
 *	ManagedVectorHelper
 */

ManagedVectorHelper* ManagedVectorHelper::staticInitializer = ManagedVectorHelper::instance();

ManagedVectorHelper::ManagedVectorHelper() {
	className = "ManagedVector";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ManagedVectorHelper::finalizeHelper() {
	ManagedVectorHelper::finalize();
}

DistributedObject* ManagedVectorHelper::instantiateObject() {
	return new ManagedVector(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ManagedVectorHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ManagedVectorAdapter((ManagedVectorImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	ManagedVectorServant
 */

ManagedVectorServant::ManagedVectorServant() {
	_classHelper = ManagedVectorHelper::instance();
}

ManagedVectorServant::~ManagedVectorServant() {
}

void ManagedVectorServant::_setStub(DistributedObjectStub* stub) {
	_this = (ManagedVector*) stub;
}

DistributedObjectStub* ManagedVectorServant::_getStub() {
	return _this;
}

