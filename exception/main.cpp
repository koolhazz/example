#include <stdio.h>
#include <stdlib.h>
#include <exception>

using namespace std;

class A {
public:
	A() { printf("%s\n", __PRETTY_FUNCTION__); };
	~A() { printf("%s\n", __PRETTY_FUNCTION__); }
};


void unexception()
{
	printf("unexception\n");
	throw 'x';
}


void
error() throw(char) 
{
	A a;
	throw 1;
}

void
error_2() throw() //这里表示这个函数上抛出任何异常，否则直接按照默认异常terminate的处理abort
{
	A a;
	throw 'x';
}

int main(int argc, char **argv)
{
	set_unexpected(unexception);
	
	try {
		error();
		//error_2();
	//} catch (const int& e) {
	} catch (char) {
		printf("cautch char\n");
	} catch (...) {
		printf("cacth exception\n");
	}
	
	
	try {
		error_2();
	} catch (char) {
		printf("cautch int\n");
	} catch (...) {
		printf("cacth exception\n");
	}

	return 0;
}
