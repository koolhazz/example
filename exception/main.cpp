#include <stdio.h>
#include <stdlib.h>

void
error() throw() 
{
	throw 1;
}

int main(int argc, char **argv)
{
	error();
		
	system("pause");
	
	return 0;
}
