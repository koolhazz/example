#include <stdio.h>

class A {
public:
    A() {}
public:
    template <class T> T add(T a, T b) 
    {
        return a + b;
    }
};


int main(int argc, char **argv)
{
	A a;
    
    a.add<int>(1, 2);
    
    printf("hello world\n");
	return 0;
}
