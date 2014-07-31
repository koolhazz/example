#include <stdio.h>
#include <stdlib.h>

static void func(char* p) {
	printf("is func char* \n");
}

static void 
func(int i) {
	printf("is func int \n");
}

int main(int argc, char **argv)
{
	func(NULL); // c++03 c++11 invoke func(int i)
	func(nullptr); //c++11 invoke func(char* p)
	
	system("pause");
}
