#include <stdio.h>
#include <stdlib.h>
#include <vector>


union U {
	unsigned int 	a;
	float 		 	b;
	unsigned long 	c;
};


int 
main(int argc, char **argv)
{
	std::vector<U> vec;
	
	for (unsigned int idx = 0; idx < 10; idx++) {
		vec.push_back(U{idx});
	}
	
	for (unsigned int idx = 0; idx < 10; idx++) {
		printf("v[%u]: %u\n", idx, vec[idx]);
	}
	return 0;
}
