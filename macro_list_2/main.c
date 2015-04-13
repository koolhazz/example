#include <stdio.h>

#define WRITE(type, param) 	\
	int message_write_#type(message_t* m, #type #param)
#define READ(type) \
	type message_read_#type(message_t* m) 

WRITE(int, i);


int main(int argc, char **argv)
{
	printf("hello world\n");
	
	int i = 0;
	
	
	
	return 0;
}
