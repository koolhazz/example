#include <stdio.h>

#define __debug__(msg) ({			\
	printf("msg: %s\n", msg);		\
})

#define __return2__(i) ({i;})

#define __IS_OK__(r) ({ r > 0 && r < 10; })


int main(int argc, char **argv)
{
	int a;
	
	__debug__("hello");
	
	a = __return2__(10);
	
	printf("A: %d\n", a);
	
	if (__IS_OK__(9)) {
		printf("is ok.\n");
	} else {
		printf("not ok.\n");
	}
	return 0;
}
