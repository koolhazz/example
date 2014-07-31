#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#pragma pack(push, 1)

struct packed_1 {
	int a;
	long long b;
};


struct A_1 {
  char a;				//1Byte
  int b;				//4B
  unsigned short c;		//2B
  long d;				//4B
  unsigned long long e; //8B
  char f;               //1B
};

#pragma pack(pop)

struct aligned {
	int a;
	long long b;
} __attribute__((aligned(1), packed)); /* 同时定义多个属性 这里相当于 __attribute__((packed)) 或则 pack(1) */

struct aligned_2 {
	int a;
	long long b;
} __attribute__((aligned(8)));

struct __attribute__((packed)) aligned_3 {
	int a;
	long long b;
};

struct A{
  char a;				//1Byte
  int b;				//4B
  unsigned short c;		//2B
  long d;				//8B
  unsigned long long e; //8B
  char f;               //1B
};

struct B{
  char a;
  int b;
  unsigned short c;
  long d;
  unsigned long long e;
  char f;
}__attribute__((aligned));

struct C{
  char a;
  int b;
  unsigned short c;
  long d;
  unsigned long long e;
  char f;
}__attribute__((aligned(1)));


struct D {
  char a;
  int b;
  unsigned short c;
  long d;
  unsigned long long e;
  char f;
} __attribute__((aligned(4)));

struct E {
  char a;
  int b;
  unsigned short c;
  long d;
  unsigned long long e;
  char f;
}__attribute__((aligned(8)));

struct F {
  char a;
  int b;
  unsigned short c;
  long d;
  unsigned long long e;
  char f;
} __attribute__((packed));

typedef struct aligned aligned_t; /* struct aligned 定义了aligned属性，这里不需要定义 */

typedef struct T {
	char a;
	char b;
	char c;
} __attribute__((packed)) aligned_2_t; /* 这里的__attribute__ 需要放置在struct 与 新类型的中间位置 */

typedef struct __attribute__((packed)) U {
	char a;
	char b;
	char c;
} aligned_3_t; /* 这里的__attribute__ 需要放置在struct 与 新类型的中间位置 */

typedef struct M aligned_4_t;
struct M {
	char a;
	char b;
	char c;
} __attribute__((aligned(1), packed));

int x __attribute__((aligned(8)));
__attribute__((aligned(8))) int y;
int __attribute__((aligned(8))) z;

int 
main(int argc, char **argv){
	printf("sizeof(struct A) = %zu, sizeof(struct B) = %zu, sizeof(struct C) = %zu, sizeof(struct D) = %zu, sizeof(struct E) = %zu, sizeof(struct F) = %zu \
	sizeof(struct aligned) = %zu sizeof(struct aligned_2) = %zu sizeof(struct packed_1) = %zu sizeof(struct A_1) = %zu sizeof(struct aligned_3) = %zu sizeof(aligned_t) = %zu \
	sizeof(aligned_2_t) = %zu sizeof(aligned_3_t) = %zu sizeof(aligned_4_t) = %zu\n", 
	sizeof(struct A), sizeof(struct B), sizeof(struct C), sizeof(struct D), sizeof(struct E), sizeof(struct F), 
	sizeof(struct aligned), sizeof(struct aligned_2), sizeof(struct packed_1), sizeof(struct A_1), sizeof(struct aligned_3), sizeof(aligned_t), 
	sizeof(aligned_2_t), sizeof(aligned_3_t), sizeof(aligned_3_t));

	system("pause");
	
	return 0;
}

