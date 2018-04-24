#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

class CCard
{
public:
	/*CCard(int id_)
		:id(id_)
	{}*/
	
	CCard():id(0) {}
	
	~CCard() {}
private:
	int id;
};

class Base
{
public:
	Base(): com_id(999){}
	~Base() {}
	
	void ShowName() { cout << "Name: " << name << " Age: " << age << endl; }
	void SetName(const string& str) { name.assign(str);}
	
	static const int id  = 100;
	//static const int id; 
	const int com_id;
	static int school_id; //静态非常量成员需要在类外赋值
	
private:
	string name;
	int age;
	CCard card;
	
	static const int nick[id];
};

//const 
//int
//Base::id = 100;	可以采用定义外的初始化方式

int
Base::school_id = 888;

const int Base::nick[id] = {0}; /* 数组必须在类的声明外定义 */

int main(int argc, char **argv)
{
	Base b;
	
	//b.SetName("chenbo");
	b.ShowName();
	
	printf("你好\n");
	system("pause");
	
	return 0;
}
