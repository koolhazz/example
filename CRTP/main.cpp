#include <stdio.h>
#include <iostream>
#include "f.h"

using namespace std;

template<typename T> 
class Base {
public:
	void foo() { static_cast<T *>(this)->internal_foo(); }
	void bar() { static_cast<T *>(this)->internal_bar(); }
};

class Derived1 : public Base<Derived1> {
public:
	void internal_foo() { cout << "Derived1 foo" << endl; }
	void internal_bar() { cout << "Derived1 bar" << endl; }
};

class Derived2 : public Base<Derived2> {
public:
	void internal_foo() { cout << "Derived2 foo" << endl; }
	void internal_bar() { cout << "Derived2 bar" << endl; }
};


template <typename T> 
static void 
foo(Base<T>* obj) 
{ 
	obj->foo(); 
}

template <typename T> 
static void 
bar(Base<T>* obj) 
{ 
	obj->bar(); 
}

int 
main(int argc, char **argv)
{
	Derived1 d1;
	Derived2 d2;
	foo(&d1);
	foo(&d2);
	bar(&d1);
	bar(&d2);
	
	B<D> *pb = new D;
	
	pb->f(10);
	
	printf("I: %d\n", pb->get());
	
	delete pb;

	return 0;
}
