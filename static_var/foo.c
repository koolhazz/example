#include "foo.h"
#include <stdio.h>

static int invoke_cnt; // 只在该文件范围中有效

void
foo_var()
{
	invoke_cnt++;
	printf("%d %d\n", invoke_cnt, id++);
}