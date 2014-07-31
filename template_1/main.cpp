#include <stdio.h>

class A {
public:
	template<class T> void show(T t);
};

template<class T>
void
A::show(T t)
{
	printf("Show\n");
}

int 
main(int argc, char **argv)
{
	A a;
	
	a.show(a);
	
	return 0;
}
