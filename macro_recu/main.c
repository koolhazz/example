#include <stdio.h>

#define __debug__(msg) ({			\
	printf("msg: %s\n", msg);		\
	__debug__(msg);					\
})


int main(int argc, char **argv)
{
	__debug__("hello");
	return 0;
}
