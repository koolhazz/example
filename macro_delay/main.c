#include <stdio.h>


#define __SELF__() printf("%s\n", __PRETTY_FUNCTION__)

#define get5th(a1, a2, a3, a4, a5, ...) a5
#define leftBracket (
#define eatComma(...) ,##__VA_ARGS__

#define select0_3(m0, m1, m2, m3, ...) get5th leftBracket eatComma(__VA_ARGS__), m3, m2, m1, m0)
#define foo(...) select0_3(foo0, foo1, foo2, foo3, __VA_ARGS__)

#define merge_var(a, b) a##b
#define merge(a, b) merge_var leftBracket a, b)

static void 
foo0()
{
	__SELF__();
}

static void 
foo1(int a)
{
	__SELF__();	
}

static void 
foo2(int a, int b)
{
	__SELF__();	
}

static void 
foo3(int a, int b, int c)
{
	__SELF__();
}

int main(int argc, char **argv)
{
	//foo();
	int a, b;
	
	merge(a, b);
	
	return 0;
}
