#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char *p;
} p_t;

int main(int argc, char **argv)
{
	char *p;
	
	p = 0x4;
	
	if (p) {
		printf("p is not full.\n");
	} else {
		printf("p is full.\n");
	}
	
	p_t* pp = NULL;
	
	if (pp->p) {
		printf("pp.p is not full.\n");
		
	} else {
		printf("pp.p is full.\n");
	}	
	
	
	system("pause");
	return 0;
}
