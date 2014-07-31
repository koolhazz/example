#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char **argv)
{
	int i = 0;
	
	int *p = &i;
	
	uintptr_t j = p;
	
	printf("I: %d\n", i);
	printf("J: %x\n", j);
	
	printf("P: %x\n", p);
	
	system("pause");
}
