#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ShowParam(char* p, size_t len)
{
	printf("ShowParam(char* p, size_t len) begin\n");
	printf("ShowParam(char* p, size_t len) end\n");
}

void ShowParam(char** p, size_t row, size_t col)
{
	printf("ShowParam(char** p, size_t row, size_t col)");
	for( int r = 0; r < row; r++)
		printf("name: %s\n", *(p + r));
}

void ShowParam(char (*p)[4], size_t row)
{
	printf("ShowParam(char (*p)[4], size_t row) begin\n");
	for(size_t r = 0; r < row; r++)
		printf("name: %s\n", *(p + r));
	printf("ShowParam(char (*p)[4], size_t row) end\n");
}

#if 1
void ShowParam(char p[][3][4], size_t row)
{
	printf("ShowParam(char p[][3][4], size_t row) begin\n");
	
	for (int r = 0; r < row; r++)
		for(int i = 0; i < 3; i++)
			printf("name: %s\n", *(*(p + r) + i));
			
	printf("name: %c\n", *(*(*(p + 1) + 1) + 1));
	printf("ShowParam(char p[][3][4], size_t row) end\n");
}
#endif

#if 0
void ShowParam(char (*p)[3][4], size_t row)
{
	printf("ShowParam(char (*p)[3][4], size_t row)\n");
	for (int r = 0; r < row; r++)
		for(int i = 0; i < 3; i++)
			printf("name: %s\n", *(*(p + r) + i));
			
	printf("name: %c\n", *(*(*(p + 1) + 1) + 1));
}
#endif 

void ShowParam(char* p, size_t x, size_t y, size_t z)
{
	printf("ShowParam(char* p, size_t x, size_t y, size_t z) begin\n");
	
	for (int i = 0; i < x * y * z; i++)
		printf("name: %c\n", *(p + i));
		
	printf("ShowParam(char* p, size_t x, size_t y, size_t z) end\n");	
}

#if 0
void ShowParam(char (*p)[3][4], size_t row)
{
}
#endif 

void ShowParam(char(*p)[4], size_t x, size_t y)
{
	printf("ShowParam(char(*p)[4], size_t x, size_t y)\n");
}

typedef int int_array_t[10]; /* 定义一个类型 */

void
array_int(int_array_t a)
{
	size_t len = sizeof(int_array_t) / sizeof(int);
	
	for (int i = 0; i < len; i++) {
		*(a + i) = i;
		printf("a[%d]: %d\n", i, *(a + i));
	}
}

int 
main(int argc, char **argv)
{
	char name[2][3][4] = {{"123", "456", "789"}, {"abc", "def", "ghi"}};
	
	
	// &name[0][0] ---> char (*)[4]
	
	char name2[3][4] = {"123", "456", "789"};
	
	char** p = new char*[3];
	
	char (*p1)[3] = new char[2][3];
	
	for (int i = 0; i < 4; i++)
	{
		*(p + i) = new char[4];
		
		memset(*(p + i), 0, 4);
	}
	
	ShowParam(name, 2);
	
	ShowParam(&name[0], 2);// &name[0] ---> char (*)[3][4]
	
	ShowParam(&name[0][0], 2) ;// &name[0][0] ---> char (*)[4]

	ShowParam(&name[0][0], 2, 3) ;// &name[0][0] ---> char (*)[4]	
	
	ShowParam(&name[0][0][0], 2, 3, 4); // char*
	
	ShowParam(name2, 3);
	
	ShowParam(p, 3, 4);

	/* 数组都是地址传递 */
	int_array_t ia;
	
	
	array_int(ia);
	
	for (int i = 0; i < 10; i++) {
		*(ia + i) = i;
		printf("a[%d]: %d\n", i, *(ia + i));
	}
	
	int* pi = (int*)malloc(sizeof(int) * 10);
	array_int(pi);
	
	for (int i = 0; i < 10; i++) {
		*(pi + i) = i;
		printf("a[%d]: %d\n", i, *(pi + i));
	}
	
	int_array_t* pa = (int_array_t*)malloc(sizeof *pa);
	
	array_int(*pa);
	for (int i = 0; i < 10; i++) {
		*(*pa + i) = i;
		printf("a[%d]: %d\n", i, *(*pa + i));
	}	
	
	system("pause");
	
	return 0;
}
