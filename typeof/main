#include <stdio.h>
#include <stdlib.h>

#define array(T, N) typeof(T [N])
#define pointer(T) typeof(T *)

#define min(x, y) ({ \ 
	typeof(x) _min1 = (x); \ 
	typeof(y) _min2 = (y); \ 
	(void) (&_min1 == &_min2); \ 
	_min1 < _min2 ? _min1 : _min2; })


int 
main(int argc, char **argv)
{
	array(pointer(char), 4) y; /* char* [4] */
	
	for (int i = 0; i < 4; i++) {
		*(y + i) = "1";
	}
	
	printf("y: %s\n", y[0]);
	printf("y: %s\n", y[1]);
	printf("y: %s\n", y[2]);
	printf("y: %s\n", y[3]);
	
	int i = 10;
	
	int j = -100;
	
	printf("x: %02x\n", i);
	
	if (min(1, 2)) {
		printf("true\n");
	} else {
		printf("false\n");
	}
	
	system("pause");
	
	return 0;
}
