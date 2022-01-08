#include <stdio.h>
#include <stdlib.h>
#include <new>


class A {
public:
	A(int i):_i(i) {}
	~A() {}
private:
	int _i;
};



int 
main(int argc, char **argv)
{
	int *p;
	A 	*p1;
	
	p = (int*)malloc(sizeof *p);
	
	p1 = new (p) A (10);
	
	
	return 0;
}
