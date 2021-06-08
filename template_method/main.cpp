#include <stdio.h>
#include "template.h"

static int 
__double(int i)
{
	return i * i;
}

static int 
__double2(int* i)
{
	return *i * *i;
}

int main(int argc, char **argv)
{
	Add(1, 2);
	
	Add<float>(1.2, 1.2);
	
	int i, j;
	
	i=j=100;
	
	Add(&i, &j);
	
	
	Callback(__double, 10);
	Callback(&__double2, &i);

	return 0;
}
