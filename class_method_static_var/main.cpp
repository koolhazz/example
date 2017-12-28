#include <stdio.h>

class A {
public:
	void printf_var() { static unsigned long _id; printf("id: %lu ", _id++); } // 针对class的method 是唯一的
	void printf_var2() { static unsigned long _id; printf("id: %lu ", _id++); }
};

int main(int argc, char **argv)
{
	A a1, a2;
	
	for (unsigned int idx = 0; idx < 10; idx++) {
		a1.printf_var();
		a2.printf_var();
	}
	
	return 0;
}
