#include <stdio.h>
#include <stdlib.h>

int 
main(int argc, char **argv)
{
	int i = 10;
	
	switch (i) {
		case 1 ... 9:
			printf("I is in\n");
			break;
		default:
			break;
	}
	
	system("pause");
	
	return 0;
}
