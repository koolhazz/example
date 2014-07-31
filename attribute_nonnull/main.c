#include <stdio.h>

void 
print_pointer(const char* p1, const char* p2) 
__attribute__((__nonnull__(1, 2)));

int main(int argc, char **argv)
{
	print_pointer(NULL, NULL);
	
	return 0;
}

void 
print_pointer(const char* p1, const char* p2) 
{
	
}
