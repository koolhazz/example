#include <stdio.h>
#include <stdlib.h>

static inline void deferer(void (^*expr)(void)) { (*expr)(); printf("cleanuped...\n"); }
#define DEFER_1(x,y) x##y
#define DEFER_2(x, y) DEFER_1(x, y)
#define DEFER_0(x)    DEFER_2(x, __COUNTER__)
#define defer __CLEANUP__(deferer) void (^DEFER_0(_defered_option))(void) =
#define __CLEANUP__(f) __attribute__((cleanup(f))


int main(int argc, char **argv)
{
	int i = 100;
	
	defer ^{ i = 0; }
	return 0;
}
