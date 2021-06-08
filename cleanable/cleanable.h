#ifndef __CLEANABLE_H__
#define __CLEANABLE_H__


//typedef void (*CleanableDelegateFn)(void*);

using CleanableDelegateFn = void (*)(void*);

class Cleanable {
public:
	Cleanable();
	virtual ~Cleanable();
	
public:
	void DelegateTo(Cleanable& rhs);
	void SetCleaner(CleanableDelegateFn cdf);
protected:
	CleanableDelegateFn _cleaner;
};

class Worker : public Cleanable {
public:
	Worker();
	virtual ~Worker();
public:
	void Self();
	void Alloc();
	void DelegateTo(Worker& w);
private:
	void *_data;
};


#endif