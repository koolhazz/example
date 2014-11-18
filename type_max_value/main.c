#include <stdio.h>
#include <stdlib.h>

#define int_max (1 << 31) - 1 // ~(1 << 31)
#define uint_max (~0)
#define ulong_max (~0)
#define ulonglong_max (~0LLU)


int main(int argc, char **argv)
{
	printf("int_max: %d\n", int_max);
	printf("uint_max: %u\n", uint_max);
	printf("uint_max: %lu\n", ulong_max);
	printf("ulonglong_max: %llu\n", ulonglong_max);
	
	system("pause");
	
	return 0;
}
