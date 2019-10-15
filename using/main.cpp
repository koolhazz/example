#include <stdio.h>
#include <iostream>

//using out = std::cout;
//using end = std::endl;

//using STD = std;
//namespace STD = std;

class Father {
public:
	Father():id(100) {}
	~Father() {}
//private: // 不能正常编译
protected:
	int id;
};

class Son : public Father {
public:
	Son() {}
	~Son() {}
	int getId() { return id; }
	using Father::id;
};

int main(int argc, char **argv)
{
	//out << "hello" << end;
	
	return 0;
}
