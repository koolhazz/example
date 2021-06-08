#ifndef __OBJ_POOL_H__
#define __OBJ_POOL_H__

#include <vector>
#include <set>
#include <mutex>

using namespace std;

typedef unsigned int obj_id_t;

template <typename T>
class ObjPool {
public:
	ObjPool();
	~ObjPool();
public:
	template <typename ...Args> bool Extend(unsigned int osz, Args ...args);
	obj_id_t Out();
	void In(obj_id_t id);
	unsigned int Size();
private:
	vector<T*> 		_objs;
	set<obj_id_t> 	_frees;
	mutex			_objs_mtx;
	mutex 			_frees_mtx;
}; 


template <typename T>
ObjPool<T>::ObjPool() 
{
	
}

template <typename T>
ObjPool<T>::~ObjPool() 
{
	typename vector<T*>::iterator it;
	
	for (it = _objs.begin(); it != _objs.end(); it++) {
		delete *it;
	}
	
	_objs.clear();
}

template <typename T>
template <typename ...Args>
bool
ObjPool<T>::Extend(unsigned int osz, Args ...args)
{
	lock_guard<mutex> _lock(_objs_mtx);
	
	for (unsigned int idx = 0; idx < osz; idx++) {
		_objs.push_back(new T(args...));
		_frees.insert(idx);
	}
}

template <typename T>
void
ObjPool<T>::In(obj_id_t id) 
{
	lock_guard<mutex> _lock(_frees_mtx);
	
	_frees.insert(id);
}

template <typename T>
obj_id_t 
ObjPool<T>::Out()
{
	obj_id_t id;
	
	lock_guard<mutex> _lock(_frees_mtx);
	
	id = *_objs.begin();
	
	_objs.erase(_objs.begin());
	
	return id;
}

template <typename T>
unsigned int 
ObjPool<T>::Size()
{
	return _objs.size();
}

#endif