#include <stdio.h>
#include <stdlib.h>

typedef void FUNC(int);

static 
void show(int i)
{
	printf("i: %d\n", i);
}

int main(int argc, char **argv)
{
	FUNC	*fp;
	FUNC  	ft;
	
	fp = &show;
	
	fp(20);

	return 0;
}
