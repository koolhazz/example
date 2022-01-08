#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 5;
	
	
	do {
		if (i & 1) {
			continue;
		}
		printf("I: %d\n", i);
	} while (--i);
	
	return 0;
}
