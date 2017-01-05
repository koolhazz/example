#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

class A {
public:
    void show() { cout << "Name: " << "A" << endl;}
private:
    static void version() { cout << "version: " << 1.00 << endl; }
};


class B {
public:
    void show() { cout << "Name: " << "B" << endl;}
public:
    static void version() { cout << "version: " << 2.00 << endl; } //基类 和 子类共用静态方法和成员
};

class BB : public B {
public:
	void show() { cout << "Name: " << "BB" << endl; }
};

struct C {
    int ii;
};

int main(int argc, char **argv)
{
    A a;
    B b;
    
    a.show();
    //a.version(); 
	//A::version();
    
    b.show();
    b.version();
	
	BB::version();

    system("pause");
	return 0;
}
