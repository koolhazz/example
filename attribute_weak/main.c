#include <stdio.h>
#include <stdlib.h>

/*
   关于弱符号的解释：若两个或两个以上全局符号（函数或变量名）名字一样，而其中之一声明为weak symbol（弱符号），则这些全局符号不会引发重定义错误。
 * 链接器会忽略弱符号，去使用普通的全局符号来解析所有对这些符号的引用，但当普通的全局符号不可用时，链接器会使用弱符号。当有函数或变量名可能被用户覆盖时，
 * 该函数或变量名可以声明为一个弱符号。当weak和alias属性连用时，还可以声明弱别名。
 * */

int main(int argc, char **argv)
{
	show_me();
	
	system("pause");
	
	return 0;
}
