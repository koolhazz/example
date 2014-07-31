#include <stdio.h>

typedef void FUNC(int);

static void show(int i)
{
	
}

int main(int argc, char **argv)
{
	FUNC* f;
	
	f = &show;

	return 0;
}
