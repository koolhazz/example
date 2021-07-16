#include <stdio.h>
#include <stdlib.h>

#define __SEQARAET__ printf("=============================->\n")

#define __PHASE__(s)  s __SEQARAET__;
//#define __SEQARAET__(s) s

// template 不能定义在函数体内或者{} 范围内，namespace 除外
namespace VEC {
	template <typename T>
	struct vec {
		union {
			struct { 
				T x; 
				T y; 
				T z; 
			};
			struct { 
				T a;
				T b;
				T c;
			};
			
			T v[3];
		};
	};
}



int main(int argc, char **argv)
{
	__PHASE__(
		{
			union {
				int 	id;
				char 	*name;
			};
		
			id = 10;
			name = (char*)malloc(sizeof(char) * 10);
			
			printf("Id: %d\n", id);
			printf("Name: %p\n", name);
		
		}
	)
	
	__PHASE__(
		{
			class Anonymous {
			public:
				union {
					int 	id;
					char 	*name;
				};
			};
			
			printf("SizeOf(Anonymous): %zu\n", sizeof(Anonymous));
			
			Anonymous non;
			
			non.id = 10;
			non.name = (char*)malloc(sizeof(char) * 10);
			
			printf("Id: %d\n", non.id);
			printf("Name: %p\n", non.name);
		}
	)

	__PHASE__(
		{
			class Anonymous {
			public:
				union {
					int 	id;
					char 	*name;
				};
				struct {
					int age;
					int sex;
				} p;
			};
			
			printf("SizeOf(Anonymous): %zu\n", sizeof(Anonymous));
			
			Anonymous non;
			
			non.id = 10;
			non.name = (char*)malloc(sizeof(char) * 10);
			non.p.age = 30;
			non.p.sex = 0;
			
			
			printf("Id: %d\n", non.id);
			printf("Name: %p\n", non.name);
			printf("Age: %d\n", non.p.age);
			printf("Sex: %d\n", non.p.sex);
		}
	)
	
	__PHASE__(
		{
			union {
				struct {
					int age;
					int sex;
				} p;
				int 	id;
				char 	*name;
			};
		
			p.age = 30;
			p.sex = 0;
			
			id = 10;
			name = (char*)malloc(sizeof(char) * 10);
			
			
			printf("Id: %d\n", id);
			printf("Name: %p\n", name);
			printf("Age: %d\n", p.age);
			printf("Sex: %d\n", p.sex);
		}
	)

	__PHASE__(
		{
			union {
				struct { 
					  float x;
					  float y;
					  float z; 
				} p;
				float 		v[3] ;
			};
			
			p.x = 0;
			p.y = 1;
			p.z = 2;
			
			for (unsigned int idx = 0; idx < 3; idx++) {
				printf("v[%u]: %f\n", idx, v[idx]);
			}
		}
	)
	return 0;
}
