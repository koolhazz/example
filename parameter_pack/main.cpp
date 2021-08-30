#include <stdio.h>

template <char... C>
struct Symbol {
    static constexpr char const value[sizeof...(C) + 1] = {C..., '\0'};
};

template <char * CP>
struct String {
	static constexpr const char *value = CP;
};

struct Temp {
	static const int ID = 0;
};

int main(int argc, char **argv)
{
	
	const char * temp = "hello";
	printf("String: %s\n", String<const_cast<char * const>("hello")>::value);
	printf("ID: %d\n", Temp::ID);
	
	return 0;
}
