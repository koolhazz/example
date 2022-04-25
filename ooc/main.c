#include <stdio.h>
#include "test.h"
#include "inherit.h"

static void 
__test_test()
{
	struct test tt;
	
	printf("test begin...\n");
	
	test_constructor(&tt);
	test_set(&tt, 100);
	printf("V: %d\n", test_get(&tt));
	test_destructor(&tt);
	
	printf("test end...\n");
}


static void
__hello_base()
{
	printf("this is base.\n");
}

static void 
__hello_dev()
{
	printf("this is dev.\n");
}

static void 
__test_inherit()
{
	struct dev dd = { age: 10, 
					  act: __hello_dev, 
					  base: { id: 100, act: __hello_base}};
	
	base_do(&dd.base);
	dev_do(&dd.base);
}


int 
main(int argc, char **argv)
{
	__test_test();
	
	__test_inherit();
	
	return 0;
}
