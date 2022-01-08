#include <stdio.h>
#include <stdbool.h>

#define __NOTHING__() int __nothing; __nothing = 0;

#define __OK__(r) ({ \
	switch (r) {	\
		case 1:		\
			false;	\
			break;	\
		case 2:		\
			true;	\
			break;	\
		case 3:		\
			true;	\
			break;	\
		default:	\
			false;	\
			break;	\
	}				\
})

int main(int argc, char **argv)
{
	long ex = 0, px = 0;
	
	1 == 1 ? (ex = 10) : (px = 20); // 单一赋值语句使用括号；
	
	1 == 1 ? printf("") : printf(""); // 单一函数调用直接使用；
	
	1 == 2 ? ex = 10 : ({ printf("__COMPLEX__\n"); goto __COMPLEX__; __NOTHING__(); }); // 单一函数调用直接使用；
	
	1 == 1 ? ex = 10 : ({}); // 单一函数调用直接使用；
	
	1 == 1 ? ({ex = 10; printf("ex: %ld\n", ex); }) : 
			 ({px = 20; printf("px: %ld\n", px); });
			 
			 
__COMPLEX__:		
	1 != 1 ? ({ 2 == 2 ? ({ ex = 10; printf("ex: %ld\n", ex); }) : 
						 ({px = 20; printf("px: %ld\n", px); }); }) :
			 ({ 3 == 3 ? ({ ex = 30; printf("ex2: %ld\n", ex); }) : 
						 ({px = 40; printf("px2: %ld\n", px); }); });
	
	if (__OK__(ex)) {
		printf("true.\n");
	} else {
		printf("false.\n");
	} 
	
	return 0;
}
