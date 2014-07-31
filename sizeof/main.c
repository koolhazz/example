#include <stdio.h>
#include <stdlib.h>

#define SIZEOF(v) (char*)(&v + 1) - (char*)(&v)

int main(int argc, char **argv)
{
	int i = 99;
		
	char a[100];	
		
	printf("sizeof: %d\n", SIZEOF(i));
	printf("sizeof: %d\n", SIZEOF(a));
	
	system("pause");
	
	return 0;
}
