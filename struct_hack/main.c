#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct {
	int a;
	char b[]; //char b[0] 也可以
} StructHack_t;

int main(int argc, char **argv)
{
	StructHack_t* p = (StructHack_t*)malloc(sizeof(StructHack_t) + sizeof(char) * 10);
	
	char* hack = p->b;
	
	StructHack_t* header =  hack - (((StructHack_t*)0)->b); //hack - sizeof(StructHack_t); /* 根据数组获取结构体的指针 */
	
	strcpy(p->b, "hello");
	
	printf("StructHack_t: %d\n", sizeof(StructHack_t));
	printf("B: %s\n", p->b);
	printf("P-Size: %d\n", sizeof(*p));
	printf("char[]: %zu\n", sizeof *hack);
	
	
	printf("pointer: 0x%p\n", p);
	printf("pointer: 0x%p\n", header);
	
	system("pause");
	
	return 0;
}
