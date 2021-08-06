#include <stdio.h>

#define __debug__(msg) ({			\
	printf("msg: %s\n", msg);		\
})

#define __return2__(i) ({i;})


int main(int argc, char **argv)
{
	int a;
	
	__debug__("hello");
	
	a = __return2__(10);
	
	printf("A: %d\n", a);
	
	
	return 0;
}
