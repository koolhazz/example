#include <stdio.h>
#include <stdlib.h>

static int**
__get_2D()
{
	static int temp[10][10] = {0};
	
	return (int**)temp;
}

int 
main(int argc, char **argv)
{
	int **pa = NULL;
	
	pa = __get_2D();
	
	for (unsigned int idx = 0; idx < 10; idx++) {
		for (unsigned int inx = 0; inx < 10; inx++) {
			printf("P[%u][%u]: %d\n", idx, inx, *(*(pa + idx) + inx));
		}
	}
	
	return 0;
}
