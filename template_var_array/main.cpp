#include <stdio.h>
#include <stdlib.h>

template <typename T, size_t size>
struct varray_s {
	T _array[size];
};

typedef varray_s<int, 0> vIntArray;

int main(int argc, char **argv)
{
	vIntArray 	*vp = NULL;
	int 		*pi = NULL;
	
	vp = (vIntArray*)malloc(sizeof(int) * 10);
	
	pi = (int*)vp;
	for (unsigned int idx = 0; idx < 10; idx++) {
		
		*(pi + idx)  = idx;
		printf("A[%u]: %d ", idx, *(pi + idx));
//		*(vp->_array + idx) = idx;
//		printf("A[%u]: %u ", idx, *(vp->_array + idx));
	}
	
	return 0;
}
