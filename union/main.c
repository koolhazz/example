#include <stdio.h>
#include <stdlib.h>

typedef union
{
	void * ptr;
	short  i;
} PP;

struct vec4_SoU
{
    union { float x, r, s; };
    union { float y, g, t; };
    union { float z, b, p; };
    union { float w, a, q; };
};


int main(int argc, char **argv)
{
	PP p;
	
	p.i = 1;
	
	p.ptr = malloc(10);	
	
	printf("P.I: %d\n", p.i);
	printf("P.I: %d\n", p.ptr);
	
	return 0;
}
