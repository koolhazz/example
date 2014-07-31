#include <stdio.h>
#include <stdlib.h>

struct A {
	char 	a;
	short 	b;
	int		c;
};

struct B {
	char	a; // 4
	int		c; // 4
	short 	b; // 4 这里需要采用4个字节的对齐
};

struct C {
	char	a; // 4  这里由于后面字段是int型，在32位环境下必须要占用4个字节，所有a只能占用4个字节对齐
	int		c; // 4
	short 	b; // 2
} __attribute__((packed));

 struct D {
	char 	a;
	int		c;
	short 	b;
} __attribute__((aligned(1), packed));

int
main(int argc, char** argv)
{
	printf("A: %zu\n", sizeof(struct A));
	printf("B: %zu\n", sizeof(struct B));
	printf("C: %zu\n", sizeof(struct C));
	printf("D: %zu\n", sizeof(struct D));
	
	int i = 0;
	
	scanf("%d", &i);
	
	return 0;
}