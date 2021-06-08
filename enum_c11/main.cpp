#include <stdio.h>

enum :int {
	ENO,
	EYES
};


enum class A : int {
	ENO,
	EYES
};


int 
main(int argc, char **argv)
{
	printf("E: %d\n", A::ENO);
	printf("E: %d\n", A::EYES);
	return 0;
}
