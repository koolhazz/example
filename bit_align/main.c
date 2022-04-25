#include <stdio.h>
#include <stdlib.h>

#define __ALIGN_SIZE__ 		8
#define __ALIGN_MASK__ 		(__ALIGN_SIZE__ - 1)
#define __ALIGN_UP__(n) 		(n + __ALIGN_MASK__) & ~(__ALIGN_MASK__)
#define __ALIGN_DOWN__(n) 	(n) & ~(__ALIGN_MASK__)

int main(int argc, char **argv)
{
	for (unsigned int idx = 0; idx < 10; printf("U: %d D: %d\n", __ALIGN_UP__(idx), __ALIGN_DOWN__(idx)), idx++);
	
	
	return 0;
}
