#include <stdio.h>

//template <typename Function>
//struct doDefer {
//    Function f;
//    doDefer(Function f) : f(f) {}
//    ~doDefer() { f(); }
//};
//
//template <typename Function>
//doDefer<Function> deferer(Function F) {
//    return doDefer<Function>(F);
//}
//
//#define defer(expr) auto __defered = deferer([&](){expr;})

#define DEFER_1(x, y) x##y
#define DEFER_2(x, y) DEFER_1(x, y)
#define DEFER_0(x)    DEFER_2(x, __COUNTER__)
#define defer(expr)   auto DEFER_0(_defered_option) = deferer([&](){expr;})

template <typename Function>
struct doDefer {
    Function f;
    doDefer(Function f) : f(f) {}
    ~doDefer() { f(); }
};

template <typename Function>
doDefer<Function> deferer(Function f) {
    return doDefer<Function>(f);
}


int main(int argc, char **argv)
{
	
	int i = 100;
	
	defer(i = 0; printf("I: %d\n", i));
	defer(i = 99;printf("I: %d\n", i));
	
	
	return 0;
}
