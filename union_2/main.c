#include <stdio.h>

typedef union data_u data_t;
union data_u {
	struct {
		int i1:8;
		int i2:8;
		int i3:8;
		int i4:8;
		int i5:8;
		int i6:8;
		int i7:8;
		int i8:8;
	};
	unsigned long d;
};

#ifdef __LITTLE_ENDIAN__
#undef __LITTLE_ENDIAN__
#define __LITTLE_ENDIAN__ ({ 	\
	data_t d;					\
	d.d = 1;					\
	d.i8 == 1 ? d.i1 : d.i1;	\
}) 
#endif 

#define __DEBUG_DATA__(data) printf("D: %lu {%d %d %d %d %d %d %d %d}\n", \
									data.d, data.i1, data.i2, data.i3, data.i4, data.i5, data.i6, data.i7, data.i8)


int 
main(int argc, char **argv)
{
	data_t data;

	data.d = 1;
	__DEBUG_DATA__(data);

	if (__LITTLE_ENDIAN__) {
		printf("little endian.\n");
	} else {
		printf("big endian.\n");
	}
	
	return 0;
}