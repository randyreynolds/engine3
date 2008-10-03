/*
 *	engine/core/ManagedObject.h generated by engine3 IDL compiler 0.55
 */

#ifndef MANAGEDOBJECT_H_
#define MANAGEDOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

namespace engine {
namespace core {

class ManagedObject : public DistributedObjectStub {
public:
	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void setLockName(const string& name);

protected:
	ManagedObject(DummyConstructorParameter* param);

	virtual ~ManagedObject();

	void _lock(bool doLock);

	void _lock(ManagedObject* obj);

	void _wlock(bool doLock);

	void _wlock(ManagedObject* obj);

	void _unlock(bool doLock);

	void _setLockName(const string& name);

	friend class ManagedObjectHelper;
};

class ManagedObjectImplementation;

class ManagedObjectAdapter : public DistributedObjectAdapter {
public:
	ManagedObjectAdapter(ManagedObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void lock(bool doLock);

	void lock(ManagedObject* obj);

	void wlock(bool doLock);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock);

	void setLockName(const string& name);

protected:
	string _param0_setLockName__string_;
};

class ManagedObjectHelper : public DistributedObjectClassHelper, public Singleton<ManagedObjectHelper> {
	static ManagedObjectHelper* staticInitializer;

public:
	ManagedObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<ManagedObjectHelper>;
};

class ManagedObjectServant : public DistributedObjectServant {
public:
	ManagedObject* _this;

public:
	ManagedObjectServant();
	virtual ~ManagedObjectServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

} // namespace core
} // namespace engine

using namespace engine::core;

#endif /*MANAGEDOBJECT_H_*/
