#include <stdio.h>

static int cnt = 0;

static void
sum()
{
	printf("sum: %d\n", cnt);
}

template <typename T, typename ...Args>
void 
sum(T head, Args... arg)
{
	cnt += head;
	sum(arg...);
}


int main(int argc, char **argv)
{
	sum<int>(1, 2, 3, 4, 5);
	return 0;
}
