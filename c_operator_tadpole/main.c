#include <stdio.h>

/*
 * 语法     含义     助记
-~y      y + 1   蝌蚪游向一个值让它变大
~-y      y - 1   蝌蚪离开一个值让它变小
 x = (y + 1) % 10;
x = (y + 1) * (z - 1);
x = (double)(f(y) + 1);
  * 
  * */


int main(int argc, char **argv)
{
	{
		int x = 0, y = 0;
		
		x = -~y % 10;
		printf("x: %d\n", x);
	}
//	x = -~y * ~-z;
//	x = (double)-~f(y);
	
	return 0;
}
