#include <stdio.h>
#include <stdlib.h>

int 
main(int argc, char **argv)
{
	char *temp = "1234567890";
	
	char buff[11] = {0};
	
	sprintf(buff, "%.2s", temp); // ".2"表示最大宽度
	printf("buff: %s\n", buff);
	
	printf("NUMBER: %010d\n", 123456);
	printf("NUMBER: %10d\n", 123456); // 最小输出宽度 10 小于的话就补0
	printf("NUMBER: %10.4f\n", 123456.123456);
	
	printf("STRING: %010.4s\n", "123456");
	printf("STRING: %.10s\n", "123456");
	printf("STRING: %*.*s\n", 10, 4, "123456");
	
	
	system("pause");
	return 0;
}
