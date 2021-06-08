#include <stdio.h>
#include <string>

static void 
__func(const std::string& str = std::string("hello"))
{
	printf("String: %s\n", str.c_str());
}


int main(int argc, char **argv)
{
	__func();
	
	return 0;
}
