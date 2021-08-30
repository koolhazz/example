#include <stdio.h>

class A {
public:
	typedef enum { // 匿名枚举
		EAA = 0,
		EAB
	} pub_enum_t;
private:
	typedef enum {
		EBA = 0,
		EBB
	} pri_enum_t;
};


int main(int argc, char **argv)
{
	A::pub_enum_t pe;
	//A::pri_enum_t pi;
	
	pe = A::EAA;
	
	return 0;
}
