#include <stdlib.h>
#include "test.h"

struct _test {
	int v;
};

int
test_constructor(struct test* t) 
{
	t->t = calloc(1, sizeof(struct _test));
	
	if (!t->t) {
		return -1;
	}
	
	return 0;
}

int
test_get(struct test* t)
{
	return t->t->v;
}


void 
test_set(struct test* t, int i)
{
	t->t->v = i;
}

void 
test_destructor(struct test* t)
{
	free(t->t);
}