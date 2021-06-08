#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv)
{
	int 		*pi = NULL;
	uintptr_t 	pi_addr = 0;
	int 		**ppi  = NULL;
	
	pi = (int*)malloc(sizeof(int));
	*pi = 100;
	
	pi_addr = (uintptr_t)pi;
	
	ppi = (int**)&pi_addr;
	
	printf("INT: %d\n", **ppi);
	
	return 0;
}
