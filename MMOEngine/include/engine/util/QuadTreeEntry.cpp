/*
 *	engine/util/QuadTreeEntry.cpp generated by engine3 IDL compiler 0.60
 */

#include "QuadTreeEntry.h"

#include "engine/core/ManagedObject.h"

#include "engine/util/Vector3.h"

#include "engine/util/QuadTree.h"

#include "engine/util/QuadTreeNode.h"

/*
 *	QuadTreeEntryStub
 */

QuadTreeEntry::QuadTreeEntry(QuadTreeNode* n) : Observable(DummyConstructorParameter::instance()) {
	QuadTreeEntryImplementation* _implementation = new QuadTreeEntryImplementation(n);
	_impl = _implementation;
	_impl->_setStub(this);
}

QuadTreeEntry::QuadTreeEntry(DummyConstructorParameter* param) : Observable(param) {
}

QuadTreeEntry::~QuadTreeEntry() {
}


void QuadTreeEntry::notifyAddedToCloseObjects() {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->notifyAddedToCloseObjects();
}

void QuadTreeEntry::notifyRemovedFromCloseObjects() {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		_implementation->notifyRemovedFromCloseObjects();
}

void QuadTreeEntry::addInRangeObject(QuadTreeEntry* obj, bool doNotifyUpdate) {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(obj);
		method.addBooleanParameter(doNotifyUpdate);

		method.executeWithVoidReturn();
	} else
		_implementation->addInRangeObject(obj, doNotifyUpdate);
}

QuadTreeEntry* QuadTreeEntry::getInRangeObject(int index) {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addSignedIntParameter(index);

		return (QuadTreeEntry*) method.executeWithObjectReturn();
	} else
		return _implementation->getInRangeObject(index);
}

void QuadTreeEntry::removeInRangeObject(QuadTreeEntry* obj) {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		_implementation->removeInRangeObject(obj);
}

void QuadTreeEntry::removeInRangeObject(int index) {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addSignedIntParameter(index);

		method.executeWithVoidReturn();
	} else
		_implementation->removeInRangeObject(index);
}

void QuadTreeEntry::removeInRangeObjects() {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		method.executeWithVoidReturn();
	} else
		_implementation->removeInRangeObjects();
}

bool QuadTreeEntry::containsInRangeObject(QuadTreeEntry* obj) {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addObjectParameter(obj);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->containsInRangeObject(obj);
}

bool QuadTreeEntry::isInRange(QuadTreeEntry* obj, float range) {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addObjectParameter(obj);
		method.addFloatParameter(range);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isInRange(obj, range);
}

bool QuadTreeEntry::isInRange(float x, float y, float range) {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addFloatParameter(x);
		method.addFloatParameter(y);
		method.addFloatParameter(range);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isInRange(x, y, range);
}

float QuadTreeEntry::getDistanceTo(QuadTreeEntry* obj) {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addObjectParameter(obj);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getDistanceTo(obj);
}

bool QuadTreeEntry::isInSWArea(QuadTreeNode* node) {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->isInSWArea(node);
}

bool QuadTreeEntry::isInSEArea(QuadTreeNode* node) {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->isInSEArea(node);
}

bool QuadTreeEntry::isInNWArea(QuadTreeNode* node) {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->isInNWArea(node);
}

bool QuadTreeEntry::isInArea(QuadTreeNode* node) {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->isInArea(node);
}

void QuadTreeEntry::notifyInsert(QuadTreeEntry* obj) {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		_implementation->notifyInsert(obj);
}

void QuadTreeEntry::notifyPositionUpdate(QuadTreeEntry* obj) {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		_implementation->notifyPositionUpdate(obj);
}

void QuadTreeEntry::notifyDissapear(QuadTreeEntry* obj) {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		_implementation->notifyDissapear(obj);
}

float QuadTreeEntry::getPositionX() {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getPositionX();
}

float QuadTreeEntry::getPositionZ() {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getPositionZ();
}

float QuadTreeEntry::getPositionY() {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getPositionY();
}

float QuadTreeEntry::getPreviousPositionX() {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getPreviousPositionX();
}

float QuadTreeEntry::getPreviousPositionZ() {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getPreviousPositionZ();
}

float QuadTreeEntry::getPreviousPositionY() {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getPreviousPositionY();
}

Vector3 QuadTreeEntry::getPosition() {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getPosition();
}

void QuadTreeEntry::setPosition(float x, float z, float y) {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);
		method.addFloatParameter(x);
		method.addFloatParameter(z);
		method.addFloatParameter(y);

		method.executeWithVoidReturn();
	} else
		_implementation->setPosition(x, z, y);
}

void QuadTreeEntry::initializePosition(float x, float z, float y) {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);
		method.addFloatParameter(x);
		method.addFloatParameter(z);
		method.addFloatParameter(y);

		method.executeWithVoidReturn();
	} else
		_implementation->initializePosition(x, z, y);
}

int QuadTreeEntry::compareTo(QuadTreeEntry* obj) {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);
		method.addObjectParameter(obj);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->compareTo(obj);
}

bool QuadTreeEntry::isInQuadTree() {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isInQuadTree();
}

int QuadTreeEntry::inRangeObjectCount() {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->inRangeObjectCount();
}

QuadTreeNode* QuadTreeEntry::getNode() {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getNode();
}

unsigned long long QuadTreeEntry::getObjectID() {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);

		return method.executeWithUnsignedLongReturn();
	} else
		return _implementation->getObjectID();
}

float QuadTreeEntry::getRadius() {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getRadius();
}

bool QuadTreeEntry::isBounding() {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isBounding();
}

void QuadTreeEntry::setNode(QuadTreeNode* n) {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->setNode(n);
}

void QuadTreeEntry::setBounding() {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);

		method.executeWithVoidReturn();
	} else
		_implementation->setBounding();
}

void QuadTreeEntry::clearBounding() {
	QuadTreeEntryImplementation* _implementation = (QuadTreeEntryImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);

		method.executeWithVoidReturn();
	} else
		_implementation->clearBounding();
}

DistributedObjectServant* QuadTreeEntry::_getImplementation() {

	_updated = true;
	return _impl;
}

void QuadTreeEntry::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	QuadTreeEntryImplementation
 */

QuadTreeEntryImplementation::QuadTreeEntryImplementation(DummyConstructorParameter* param) : ObservableImplementation(param) {
	_initializeImplementation();
}


QuadTreeEntryImplementation::~QuadTreeEntryImplementation() {
}


void QuadTreeEntryImplementation::finalize() {
}

void QuadTreeEntryImplementation::_initializeImplementation() {
	_setClassHelper(QuadTreeEntryHelper::instance());

	_serializationHelperMethod();
}

void QuadTreeEntryImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (QuadTreeEntry*) stub;
	ObservableImplementation::_setStub(stub);
}

DistributedObjectStub* QuadTreeEntryImplementation::_getStub() {
	return _this;
}

QuadTreeEntryImplementation::operator const QuadTreeEntry*() {
	return _this;
}

void QuadTreeEntryImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void QuadTreeEntryImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void QuadTreeEntryImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void QuadTreeEntryImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void QuadTreeEntryImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void QuadTreeEntryImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void QuadTreeEntryImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void QuadTreeEntryImplementation::_serializationHelperMethod() {
	ObservableImplementation::_serializationHelperMethod();

	_setClassName("QuadTreeEntry");

	addSerializableVariable("bounding", &bounding);
	addSerializableVariable("positionX", &positionX);
	addSerializableVariable("positionY", &positionY);
	addSerializableVariable("positionZ", &positionZ);
	addSerializableVariable("radius", &radius);
}

void QuadTreeEntryImplementation::notifyAddedToCloseObjects() {
}

void QuadTreeEntryImplementation::notifyRemovedFromCloseObjects() {
}

void QuadTreeEntryImplementation::addInRangeObject(QuadTreeEntry* obj, bool doNotifyUpdate) {
	// engine/util/QuadTreeEntry.idl(45):  
	if ((&closeobjects)->put(obj) != -1){
	// engine/util/QuadTreeEntry.idl(46):  			notifyInsert(obj);
	notifyInsert(obj);
	// engine/util/QuadTreeEntry.idl(47):  			obj.notifyAddedToCloseObjects();
	obj->notifyAddedToCloseObjects();
}

	else 	// engine/util/QuadTreeEntry.idl(48):  	}
	if (doNotifyUpdate){
	// engine/util/QuadTreeEntry.idl(49):  			notifyPositionUpdate(obj);
	notifyPositionUpdate(obj);
}
}

QuadTreeEntry* QuadTreeEntryImplementation::getInRangeObject(int index) {
	// engine/util/QuadTreeEntry.idl(54):  		return closeobjects.get(index);
	return (&closeobjects)->get(index);
}

void QuadTreeEntryImplementation::removeInRangeObject(QuadTreeEntry* obj) {
	// engine/util/QuadTreeEntry.idl(60):  	}
	if ((&closeobjects)->drop(obj)){
	// engine/util/QuadTreeEntry.idl(61):  			notifyDissapear(obj);
	notifyDissapear(obj);
	// engine/util/QuadTreeEntry.idl(62):  			obj.notifyRemovedFromCloseObjects();
	obj->notifyRemovedFromCloseObjects();
}
}

void QuadTreeEntryImplementation::removeInRangeObject(int index) {
	// engine/util/QuadTreeEntry.idl(76):  		QuadTreeEntry entry = closeobjects.remove(index);
	QuadTreeEntry* entry = (&closeobjects)->remove(index);
	// engine/util/QuadTreeEntry.idl(78):  		entry.notifyRemovedFromCloseObjects();
	entry->notifyRemovedFromCloseObjects();
}

void QuadTreeEntryImplementation::removeInRangeObjects() {
	// engine/util/QuadTreeEntry.idl(84):  
	for (	// engine/util/QuadTreeEntry.idl(84):  		for (int i = 0;
	int i = 0;
	i < (&closeobjects)->size();
 ++i) {
	// engine/util/QuadTreeEntry.idl(85):  			closeobjects.get(i).notifyRemovedFromCloseObjects();
	(&closeobjects)->get(i)->notifyRemovedFromCloseObjects();
}
	// engine/util/QuadTreeEntry.idl(88):  		closeobjects.removeAll();
	(&closeobjects)->removeAll();
}

bool QuadTreeEntryImplementation::containsInRangeObject(QuadTreeEntry* obj) {
	// engine/util/QuadTreeEntry.idl(92):  		return closeobjects.contains(obj);
	return (&closeobjects)->contains(obj);
}

bool QuadTreeEntryImplementation::isInRange(QuadTreeEntry* obj, float range) {
	// engine/util/QuadTreeEntry.idl(96):  		return isInRange(obj.getPositionX(), obj.getPositionY(), range);
	return isInRange(obj->getPositionX(), obj->getPositionY(), range);
}

bool QuadTreeEntryImplementation::isInRange(float x, float y, float range) {
	// engine/util/QuadTreeEntry.idl(100):  	 	float rangesq = range * range;
	float rangesq = range * range;
	// engine/util/QuadTreeEntry.idl(102):  		float deltaX = x - positionX;
	float deltaX = x - positionX;
	// engine/util/QuadTreeEntry.idl(103):  		float deltaY = y - positionY;
	float deltaY = y - positionY;
	// engine/util/QuadTreeEntry.idl(105):  
	if (deltaX * deltaX + deltaY * deltaY <= rangesq)	// engine/util/QuadTreeEntry.idl(106):  			return true;
	return true;

	else 	// engine/util/QuadTreeEntry.idl(108):  			return false;
	return false;
}

float QuadTreeEntryImplementation::getDistanceTo(QuadTreeEntry* obj) {
	// engine/util/QuadTreeEntry.idl(112):  		float x = obj.getPositionX();
	float x = obj->getPositionX();
	// engine/util/QuadTreeEntry.idl(113):  		float y = obj.getPositionY();
	float y = obj->getPositionY();
	// engine/util/QuadTreeEntry.idl(115):  		float deltaX = x - positionX;
	float deltaX = x - positionX;
	// engine/util/QuadTreeEntry.idl(116):  		float deltaY = y - positionY;
	float deltaY = y - positionY;
	// engine/util/QuadTreeEntry.idl(118):  		return Math.sqrt(deltaX * deltaX + deltaY * deltaY);
	return Math::sqrt(deltaX * deltaX + deltaY * deltaY);
}

bool QuadTreeEntryImplementation::isInSWArea(QuadTreeNode* node) {
	// engine/util/QuadTreeEntry.idl(123):   	positionY >= node.minY && positionY < node.dividerY;
	return positionX >= node->minX && positionX < node->dividerX && positionY >= node->minY && positionY < node->dividerY;
}

bool QuadTreeEntryImplementation::isInSEArea(QuadTreeNode* node) {
	// engine/util/QuadTreeEntry.idl(129):   			positionY >= node.minY && positionY < node.dividerY;
	return positionX >= node->dividerX && positionX < node->maxX && positionY >= node->minY && positionY < node->dividerY;
}

bool QuadTreeEntryImplementation::isInNWArea(QuadTreeNode* node) {
	// engine/util/QuadTreeEntry.idl(135):   	positionY >= node.dividerY && positionY < node.maxY;
	return positionX >= node->minX && positionX < node->dividerX && positionY >= node->dividerY && positionY < node->maxY;
}

bool QuadTreeEntryImplementation::isInArea(QuadTreeNode* node) {
	// engine/util/QuadTreeEntry.idl(141):   (positionY + radius > node.dividerY && positionY - radius < node.dividerY);
	return (positionX + radius > node->dividerX && positionX - radius < node->dividerX) || (positionY + radius > node->dividerY && positionY - radius < node->dividerY);
}

void QuadTreeEntryImplementation::notifyInsert(QuadTreeEntry* obj) {
}

void QuadTreeEntryImplementation::notifyPositionUpdate(QuadTreeEntry* obj) {
}

void QuadTreeEntryImplementation::notifyDissapear(QuadTreeEntry* obj) {
}

float QuadTreeEntryImplementation::getPositionX() {
	// engine/util/QuadTreeEntry.idl(155):  		return Coordinate.getPositionX();
	return Coordinate::getPositionX();
}

float QuadTreeEntryImplementation::getPositionZ() {
	// engine/util/QuadTreeEntry.idl(159):  		return Coordinate.getPositionZ();
	return Coordinate::getPositionZ();
}

float QuadTreeEntryImplementation::getPositionY() {
	// engine/util/QuadTreeEntry.idl(163):  		return Coordinate.getPositionY();
	return Coordinate::getPositionY();
}

float QuadTreeEntryImplementation::getPreviousPositionX() {
	// engine/util/QuadTreeEntry.idl(167):  		return Coordinate.getPreviousPositionX();
	return Coordinate::getPreviousPositionX();
}

float QuadTreeEntryImplementation::getPreviousPositionZ() {
	// engine/util/QuadTreeEntry.idl(171):  		return Coordinate.getPreviousPositionZ();
	return Coordinate::getPreviousPositionZ();
}

float QuadTreeEntryImplementation::getPreviousPositionY() {
	// engine/util/QuadTreeEntry.idl(175):  		return Coordinate.getPreviousPositionY();
	return Coordinate::getPreviousPositionY();
}

Vector3 QuadTreeEntryImplementation::getPosition() {
	// engine/util/QuadTreeEntry.idl(181):  		return Coordinate.getPosition();
	return Coordinate::getPosition();
}

void QuadTreeEntryImplementation::setPosition(float x, float z, float y) {
	// engine/util/QuadTreeEntry.idl(185):  		Coordinate.setPosition(x, z, y);
	Coordinate::setPosition(x, z, y);
}

void QuadTreeEntryImplementation::initializePosition(float x, float z, float y) {
	// engine/util/QuadTreeEntry.idl(189):  		Coordinate.initializePosition(x, z, y);
	Coordinate::initializePosition(x, z, y);
}

int QuadTreeEntryImplementation::compareTo(QuadTreeEntry* obj) {
	// engine/util/QuadTreeEntry.idl(193):  
	if (getObjectID() < obj->getObjectID())	// engine/util/QuadTreeEntry.idl(194):  			return 1;
	return 1;

	else 	// engine/util/QuadTreeEntry.idl(195):  
	if (getObjectID() > obj->getObjectID())	// engine/util/QuadTreeEntry.idl(196):  			return -1;
	return -1;

	else 	// engine/util/QuadTreeEntry.idl(198):  			return 0;
	return 0;
}

bool QuadTreeEntryImplementation::isInQuadTree() {
	// engine/util/QuadTreeEntry.idl(202):  		return node != null;
	return node != NULL;
}

int QuadTreeEntryImplementation::inRangeObjectCount() {
	// engine/util/QuadTreeEntry.idl(206):  		return closeobjects.size();
	return (&closeobjects)->size();
}

QuadTreeNode* QuadTreeEntryImplementation::getNode() {
	// engine/util/QuadTreeEntry.idl(211):  		return node;
	return node;
}

unsigned long long QuadTreeEntryImplementation::getObjectID() {
	// engine/util/QuadTreeEntry.idl(215):  		return 0;
	return 0;
}

float QuadTreeEntryImplementation::getRadius() {
	// engine/util/QuadTreeEntry.idl(219):  		return radius;
	return radius;
}

bool QuadTreeEntryImplementation::isBounding() {
	// engine/util/QuadTreeEntry.idl(223):  		return bounding;
	return bounding;
}

void QuadTreeEntryImplementation::setNode(QuadTreeNode* n) {
	// engine/util/QuadTreeEntry.idl(228):  		node = n;
	node = n;
}

void QuadTreeEntryImplementation::setBounding() {
	// engine/util/QuadTreeEntry.idl(232):  		bounding = true;
	bounding = true;
}

void QuadTreeEntryImplementation::clearBounding() {
	// engine/util/QuadTreeEntry.idl(236):  		bounding = false;
	bounding = false;
}

/*
 *	QuadTreeEntryAdapter
 */

QuadTreeEntryAdapter::QuadTreeEntryAdapter(QuadTreeEntryImplementation* obj) : ObservableAdapter(obj) {
}

Packet* QuadTreeEntryAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		notifyAddedToCloseObjects();
		break;
	case 7:
		notifyRemovedFromCloseObjects();
		break;
	case 8:
		addInRangeObject((QuadTreeEntry*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 9:
		resp->insertLong(getInRangeObject(inv->getSignedIntParameter())->_getObjectID());
		break;
	case 10:
		removeInRangeObject((QuadTreeEntry*) inv->getObjectParameter());
		break;
	case 11:
		removeInRangeObject(inv->getSignedIntParameter());
		break;
	case 12:
		removeInRangeObjects();
		break;
	case 13:
		resp->insertBoolean(containsInRangeObject((QuadTreeEntry*) inv->getObjectParameter()));
		break;
	case 14:
		resp->insertBoolean(isInRange((QuadTreeEntry*) inv->getObjectParameter(), inv->getFloatParameter()));
		break;
	case 15:
		resp->insertBoolean(isInRange(inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter()));
		break;
	case 16:
		resp->insertFloat(getDistanceTo((QuadTreeEntry*) inv->getObjectParameter()));
		break;
	case 17:
		notifyInsert((QuadTreeEntry*) inv->getObjectParameter());
		break;
	case 18:
		notifyPositionUpdate((QuadTreeEntry*) inv->getObjectParameter());
		break;
	case 19:
		notifyDissapear((QuadTreeEntry*) inv->getObjectParameter());
		break;
	case 20:
		resp->insertFloat(getPositionX());
		break;
	case 21:
		resp->insertFloat(getPositionZ());
		break;
	case 22:
		resp->insertFloat(getPositionY());
		break;
	case 23:
		resp->insertFloat(getPreviousPositionX());
		break;
	case 24:
		resp->insertFloat(getPreviousPositionZ());
		break;
	case 25:
		resp->insertFloat(getPreviousPositionY());
		break;
	case 26:
		setPosition(inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter());
		break;
	case 27:
		initializePosition(inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter());
		break;
	case 28:
		resp->insertSignedInt(compareTo((QuadTreeEntry*) inv->getObjectParameter()));
		break;
	case 29:
		resp->insertBoolean(isInQuadTree());
		break;
	case 30:
		resp->insertSignedInt(inRangeObjectCount());
		break;
	case 31:
		resp->insertLong(getObjectID());
		break;
	case 32:
		resp->insertFloat(getRadius());
		break;
	case 33:
		resp->insertBoolean(isBounding());
		break;
	case 34:
		setBounding();
		break;
	case 35:
		clearBounding();
		break;
	default:
		return NULL;
	}

	return resp;
}

void QuadTreeEntryAdapter::notifyAddedToCloseObjects() {
	((QuadTreeEntryImplementation*) impl)->notifyAddedToCloseObjects();
}

void QuadTreeEntryAdapter::notifyRemovedFromCloseObjects() {
	((QuadTreeEntryImplementation*) impl)->notifyRemovedFromCloseObjects();
}

void QuadTreeEntryAdapter::addInRangeObject(QuadTreeEntry* obj, bool doNotifyUpdate) {
	((QuadTreeEntryImplementation*) impl)->addInRangeObject(obj, doNotifyUpdate);
}

QuadTreeEntry* QuadTreeEntryAdapter::getInRangeObject(int index) {
	return ((QuadTreeEntryImplementation*) impl)->getInRangeObject(index);
}

void QuadTreeEntryAdapter::removeInRangeObject(QuadTreeEntry* obj) {
	((QuadTreeEntryImplementation*) impl)->removeInRangeObject(obj);
}

void QuadTreeEntryAdapter::removeInRangeObject(int index) {
	((QuadTreeEntryImplementation*) impl)->removeInRangeObject(index);
}

void QuadTreeEntryAdapter::removeInRangeObjects() {
	((QuadTreeEntryImplementation*) impl)->removeInRangeObjects();
}

bool QuadTreeEntryAdapter::containsInRangeObject(QuadTreeEntry* obj) {
	return ((QuadTreeEntryImplementation*) impl)->containsInRangeObject(obj);
}

bool QuadTreeEntryAdapter::isInRange(QuadTreeEntry* obj, float range) {
	return ((QuadTreeEntryImplementation*) impl)->isInRange(obj, range);
}

bool QuadTreeEntryAdapter::isInRange(float x, float y, float range) {
	return ((QuadTreeEntryImplementation*) impl)->isInRange(x, y, range);
}

float QuadTreeEntryAdapter::getDistanceTo(QuadTreeEntry* obj) {
	return ((QuadTreeEntryImplementation*) impl)->getDistanceTo(obj);
}

void QuadTreeEntryAdapter::notifyInsert(QuadTreeEntry* obj) {
	((QuadTreeEntryImplementation*) impl)->notifyInsert(obj);
}

void QuadTreeEntryAdapter::notifyPositionUpdate(QuadTreeEntry* obj) {
	((QuadTreeEntryImplementation*) impl)->notifyPositionUpdate(obj);
}

void QuadTreeEntryAdapter::notifyDissapear(QuadTreeEntry* obj) {
	((QuadTreeEntryImplementation*) impl)->notifyDissapear(obj);
}

float QuadTreeEntryAdapter::getPositionX() {
	return ((QuadTreeEntryImplementation*) impl)->getPositionX();
}

float QuadTreeEntryAdapter::getPositionZ() {
	return ((QuadTreeEntryImplementation*) impl)->getPositionZ();
}

float QuadTreeEntryAdapter::getPositionY() {
	return ((QuadTreeEntryImplementation*) impl)->getPositionY();
}

float QuadTreeEntryAdapter::getPreviousPositionX() {
	return ((QuadTreeEntryImplementation*) impl)->getPreviousPositionX();
}

float QuadTreeEntryAdapter::getPreviousPositionZ() {
	return ((QuadTreeEntryImplementation*) impl)->getPreviousPositionZ();
}

float QuadTreeEntryAdapter::getPreviousPositionY() {
	return ((QuadTreeEntryImplementation*) impl)->getPreviousPositionY();
}

void QuadTreeEntryAdapter::setPosition(float x, float z, float y) {
	((QuadTreeEntryImplementation*) impl)->setPosition(x, z, y);
}

void QuadTreeEntryAdapter::initializePosition(float x, float z, float y) {
	((QuadTreeEntryImplementation*) impl)->initializePosition(x, z, y);
}

int QuadTreeEntryAdapter::compareTo(QuadTreeEntry* obj) {
	return ((QuadTreeEntryImplementation*) impl)->compareTo(obj);
}

bool QuadTreeEntryAdapter::isInQuadTree() {
	return ((QuadTreeEntryImplementation*) impl)->isInQuadTree();
}

int QuadTreeEntryAdapter::inRangeObjectCount() {
	return ((QuadTreeEntryImplementation*) impl)->inRangeObjectCount();
}

unsigned long long QuadTreeEntryAdapter::getObjectID() {
	return ((QuadTreeEntryImplementation*) impl)->getObjectID();
}

float QuadTreeEntryAdapter::getRadius() {
	return ((QuadTreeEntryImplementation*) impl)->getRadius();
}

bool QuadTreeEntryAdapter::isBounding() {
	return ((QuadTreeEntryImplementation*) impl)->isBounding();
}

void QuadTreeEntryAdapter::setBounding() {
	((QuadTreeEntryImplementation*) impl)->setBounding();
}

void QuadTreeEntryAdapter::clearBounding() {
	((QuadTreeEntryImplementation*) impl)->clearBounding();
}

/*
 *	QuadTreeEntryHelper
 */

QuadTreeEntryHelper* QuadTreeEntryHelper::staticInitializer = QuadTreeEntryHelper::instance();

QuadTreeEntryHelper::QuadTreeEntryHelper() {
	className = "QuadTreeEntry";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void QuadTreeEntryHelper::finalizeHelper() {
	QuadTreeEntryHelper::finalize();
}

DistributedObject* QuadTreeEntryHelper::instantiateObject() {
	return new QuadTreeEntry(DummyConstructorParameter::instance());
}

DistributedObjectServant* QuadTreeEntryHelper::instantiateServant() {
	return new QuadTreeEntryImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* QuadTreeEntryHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new QuadTreeEntryAdapter((QuadTreeEntryImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

