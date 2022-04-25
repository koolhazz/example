#ifndef __TEST_H_
#define __TEST_H_

struct _test;

struct test {
	struct _test *t;
};

int
test_constructor(struct test* t);

int 
test_get(struct test* t);

void
test_set(struct test* t, int i);

void 
test_destructor(struct test* t);


#endif
