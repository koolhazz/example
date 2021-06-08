#include <stdio.h>
#include <string>

using namespace std;

static void 
__string_ref(string& str)
{
	printf("str: %s\n", str.c_str());
}

static void
__string_const_ref(const string& str)
{
	printf("str: %s\n", str.c_str());	
}

static void
__string_value(string str)
{
	printf("str: %s\n", str.c_str());
}

int main(int argc, char **argv)
{
	string temp("hello");
	
	printf("len: %d\n", *((char*)&temp - 24));
	
	//__string_ref(string("world"));

	__string_const_ref(string("world"));
	
	__string_value(string("world"));
	
	
	return 0;
}
