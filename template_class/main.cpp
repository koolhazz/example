#include <stdio.h>
#include <iostream>
#include "template.h"
#include "psTemplate.h"
#include "B.h"

#define printf(a, b) do	{ \
		a + b;		\
	}while(0)		\

using namespace std;


template <typename A = int, typename B = long, typename C = bool>
class ABC {
public:
	ABC(A _a, B _b, C _c):
		a(_a), b(_b), c(_c) {};
	virtual ~ABC() {};
public:
	A getA();
	B getB();
	C getC();
private:
	A a;
	B b;
	C c;
};

template<typename A, typename B, typename C >
A
ABC<A, B, C>::getA() 
{
	return a;
}

template<typename A, typename B, typename C >
B
ABC<A, B, C>::getB()
{
	return b;
}

template<typename A, typename B, typename C >
C
ABC<A, B, C>::getC()
{
	return c;
}

class D : public ABC<> {
public:
	D(int a, long b, bool c):ABC(a, b, c) {};
	~D() {};
};

class DD : public ABC<long, long, long> {
public:
	DD(long a, long b, long c);
	~DD() {};
};

DD::DD(long a, long b, long c)
	:ABC(a, b, c)
{
}

int main(int argc, char **argv)
{
	CExample<int> intAdd;
	
	CExample<string> strAdd;
	
	CExample<float> floatAdd;
	
	//CExample<> add;
	
	//B<int> b;
	
	//b.Say();
	
	intAdd.Add(1, 2);
	
	strAdd.Add("hello", " world!");
	
	floatAdd.Add(1.1, 2.2);
	
	//CPSExample<int, 100> psIntAdd;
	
	//psIntAdd.Add(1, 100);
	
	
	CParial<int*, int*> cp1;
	
	int i;
	
	cin >> i;
	
	return 0;
}
