#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct {
	int a;
	char b[]; //char b[0] 也可以
} StructHack_t;

typedef struct hack_s hack_t;
struct hack_s {
	int sz;
	char *b[];
};

#define __NEW_HACK__(p, size) do {							\
	p = (hack_t*)malloc(sizeof *p + sizeof(char*) * size);	\
	if (p) { (p)->sz = size;} 								\
} while (0)
#define __DEL_HACK__(p) free(p);p == NULL

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
	
	
	printf("pointer: %p\n", p);
	printf("pointer: %p\n", header);
	
	hack_t *phack;
	
	__NEW_HACK__(phack, 10);
	printf("pointer: %p\n", phack);
	printf("pointer: %p\n", phack->b);
	
	
#ifdef _WIN32	
	system("pause");
#endif
	
	return 0;
}
