#include <stdio.h>

int 
main(int argc, char **argv)
{
	char a[5] = {[0] = 'a', [1] = 'b', [3] = 'c', [2] = 'd', [4] = 'e'};

    int b[10] = {
        [0 ... 1] = 1,
        [2 ... 8] = 2,
        [9] = 3
    };
	
	
	return 0;
}
