#include <stdio.h>
#include "f1.h"

unsigned int aaa; //不include头文件的时候，使用这种方式

unsigned int ccc; // 必须声明 但可以不用extern

int main(int argc, char **argv)
{
	printf("aaa: %u\n", aaa); // aaa 必须引用声明的头文件或者在引用的源文件中声明才可以使用
	
	show_var(aaa); // c 中 只要没有加static定义的函数就是全局有效的。不管定义是在头文件还是源文件中
	show_var_2(aaa);
	
	ccc = 5000;
	show_ccc();
	

	return 0;
}
