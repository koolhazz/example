#include <iostream>
#include <cstdlib>

using namespace std;

class MyClass
{
public:
	MyClass()
	{
		cout <<"Constructors"<< endl;
	}

	~MyClass()
	{
		cout <<"Destructors"<< endl;
	}

};


class A 
{
public:
	A(int _i) : i(_i) {}
	~A() {}
private:
	int i;
};

class B : public A
{
public:
	B(int _i) : A(_i), i(_i)  {} /* 初始化列表中直接调用基类的构造函数 */
	~B() {}
private:
	int i;
};

class AA {
public:
	explicit AA(string name) { __name = name; }
	~AA() {}
private:
	string __name;
};

class AAA {
public:
	AAA():__aa("aa") {}
private:
	AA __aa;
};

int
main(int argc, char* argv[])
{
	//MyClass* pMyClass =new MyClass;
	
	void* temp = (MyClass*)malloc(sizeof(MyClass));
	
	MyClass* pMyClass = new (temp)MyClass();
//	pMyClass->MyClass::MyClass();
	
	pMyClass->~MyClass();
	delete pMyClass;
	
	
	AAA aaa;
	
	system("pause");
}