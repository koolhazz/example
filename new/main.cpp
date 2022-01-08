#include <stdio.h>
#include <stdlib.h>
#include <new>
#include <iostream>

using namespace std;

class A
{
public:
	A():i(0) {}
	A(int _i):i(_i) {}
	~A() {}
	
	void Show();
	int get_i() { return i; }
	operator int() { return i; }
private:
	int i;
};

void
A::Show()
{
	cout << "I: " << i << endl;
}


int main(int argc, char **argv)
{
	void* p = operator new(sizeof(char) * 100); /* 作用同malloc */
	
	printf("is %p\n", p);

	A* pa = new (p)A;//placement new
	
	pa->Show();
	
	pa->~A();
	operator delete(pa, p); // placement delete 使用时与 placement new 配对 placement new 生成的对象必须用placement delete
	
//	delete[] p;
	
//	A a;
//	
//	A* paa = new(a) A;
	
	char* a = new (p)char[10];
	
	if (a) printf("is %p\n", a);
	
	::operator delete(a, p);
	
	delete[] a;
	
	
    
    char* buff = (char*)operator new(100);
    A *paa = new (buff)A;
    
    paa->Show();
    paa->~A();
    ::operator delete(paa, buff);
    delete[] buff;
    
    A *paaa = new A[10];
	for (unsigned int idx = 0; idx < 10; idx++) {
		printf("A[%u]: %d\n", idx, (paaa + idx)->get_i());
	}
	
	
	void *ppp = malloc(sizeof(A));
	A *paaaa = new (ppp) A(999);
	
	printf("A: %d\n", (int)(*(A*)ppp));
	
	paaaa->~A();
	free(ppp);
}
