#include <stdio.h>

struct Base {
	int i;
	int get() { return i; }
	Base(int _i): i(_i) {}
};

class Dev : public Base {
public:
	//Dev(int _i): Base(_i) {}
	using Base::Base;
	int db() { return get() + 1; }
};


int main(int argc, char **argv)
{
	Dev dv(10);
	
	
	printf("N: %d\n", dv.db());
	return 0;
}
