#include <stdio.h>
#include <stdlib.h>
#include <typeinfo>
#include <iostream>

using namespace std;

#define t(v) typeid(v).name()
#define pt(v) printf("type of "#v": %s\n", t(v))

int main(int argc, char **argv)
{
	int i;
	int* p;
	
	int a[2][3];
	
	int*** ppp;
	
	printf("type of i: %s\n", typeid(i).name());
	printf("type of p: %s\n", typeid(p).name());
	printf("type of int: %s\n", typeid(int).name());
	
	printf("type of a: %s\n", t(a));
	printf("type of *a: %s\n", t(*a));
	printf("type of &a: %s\n", t(&a));
	
	pt(a);
	pt(ppp);
	pt('a');

	system("pause");
	
	return 0;
}
