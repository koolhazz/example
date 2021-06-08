#include <stdio.h>
#include <iostream>

#include "nn2.h"

namespace STD = std; // namespace alias

static void
__func()
{
}

using FF = void (*)();

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
	using Father::id; // 引用父类的成员变成自己的成员
};

int main(int argc, char **argv)
{
	STD::cout << "hello" << STD::endl;
	
	nn2::nn_var = 100;
	
	{
		Son ss;
		
		nn2::nn_var = ss.getId();
		nn2::nn2_var = ss.id;
	}
	
	return 0;
}
