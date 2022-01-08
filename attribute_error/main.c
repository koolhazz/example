#include <stdio.h>

static void 
__error() __attribute__((error("no call this func.")))
{
	
}


int main(int argc, char **argv)
{
	if (1) __error();
	
	return 0;
}
