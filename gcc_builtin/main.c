#include <stdio.h>
#include <stdlib.h>

static int __attribute__((always_inline))
__sum(int a, int b) 
{
	return a + b;
}

static int
___builtin_apply(int a, int b)
{
	void	*args, *result;
	
	args = result = NULL;
	
	args = __builtin_apply_args();
	
	result = __builtin_apply((void(*)())__sum, args, 20);
	
	__builtin_return(result);
}


int main(int argc, char **argv)
{
	printf("R: %d\n", ___builtin_apply(10, 20));
	
	system("pause");
	
	return 0;
}
