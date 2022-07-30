#include <stdio.h>
#include <exception>

static int 
__inc(int n) 
try {
	n++;
	throw n;
} catch (int i) {
	printf("n: %d\n", i);
	return i;
}

static void 
__show_me()
try {
	printf("%s %d\n", __PRETTY_FUNCTION__, __inc(10));
} catch (std::exception& e) {
	printf("what: %s\n", e.what());
}

int main(int argc, char **argv)
{
	__show_me();
	return 0;
}
