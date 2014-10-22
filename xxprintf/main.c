#include <stdio.h>
#include <stdlib.h>

int 
main(int argc, char **argv)
{
	char *temp = "1234567890";
	
	char buff[11] = {0};
	
	sprintf(buff, "%.2s", temp); // ".2"表示最大宽度
	printf("buff: %s\n", buff);
	
	
	system("pause");
	
	return 0;
}
