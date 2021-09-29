#include <stdio.h>
#include "fn.h"

class Base {
public:
	virtual ~Base() {};
	
	virtual inline void foo() {};
};

class Derived : public Base {
public:
	virtual ~Derived() {};
	
	virtual inline void foo() {};
};



int main(int argc, char **argv)
{
	FunInline fi;
	
	fi.version();
	
	Base *pb = new Derived();
	
	pb->foo();
	pb->Base::foo();
	
	return 0;
}
