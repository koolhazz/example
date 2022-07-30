#include <stdio.h>
#include <stdlib.h>
#include "foo.h"

int main(int argc, char **argv)
{
	printf("g_x: %d\n", foo::g_x);
	
	return 0;
}
