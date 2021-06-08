#include <stdio.h>
#include <vector>
using namespace std;


typedef int* __IntP;


class A {
public:
	A(int i):_i(i) {}
	~A() {}
public:
	operator int() { return _i; }
	operator __IntP() { return &_i; }
	operator vector<int>() { return vector<int>(1, _i); }
private:
	int _i;
};


int main(int argc, char **argv)
{
	A 			a(10);
	int 		temp = a;
	__IntP 		pp = a;
	vector<int> vv = a;
	
	return 0;
}
