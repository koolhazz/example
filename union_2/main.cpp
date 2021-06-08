#include <stdio.h>

typedef data_u data_t;
union data_u {
	struct {
		i1 : 8;
		i2 : 8;
		i3 : 8;
		i4 : 8;
		i5 : 8;
		i6 : 8;
		i7 : 8;
		i8 : 8;
	};
	unsigned long d;
};

#define __LITTLE_ENDIAN__ ({ 
	data_t _d;
	_d.d = 1;
	_d.i8 == 1 ? _d.i8 : _d.i8;
}) 


int 
main(int argc, char **argv)
{
	data_t data;

	data.d = 1;
	
	if __LITTLE_ENDIAN__ {
		printf("little endian.\n");
	} else {
		printf("big endian.\n");
	}
	
	
	return 0;
}
