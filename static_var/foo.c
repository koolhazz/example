#include "foo.h"
#include <stdio.h>

static int invoke_cnt;

void
foo_var()
{
	invoke_cnt++;
	printf("%d\n", invoke_cnt);
}