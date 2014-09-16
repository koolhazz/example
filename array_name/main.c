#include <stdio.h>
#include <stdlib.h>

int 
main(int argc, char **argv)
{
	char a[10];
	
	printf("a: 0x%x\n", a);
	printf("&a: 0x%x\n", &a);
	
	
	printf("&a[0]: 0x%x\n", &a[0]);
	printf("sizeof a : %d\n", sizeof a);
	
	system("pause");
	
	return 0;
}
