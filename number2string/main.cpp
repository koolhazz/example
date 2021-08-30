#include <stdio.h>
#include <stdint.h>

namespace detail
{
    template<uint8_t... digits> struct positive_to_chars { 
        static const char value[];
        static constexpr size_t size = sizeof...(digits);
     };
    template<uint8_t... digits> const char positive_to_chars<digits...>::value[] = {('0' + digits)..., 0};

    template<uint8_t... digits> struct negative_to_chars { static const char value[]; };
    template<uint8_t... digits> const char negative_to_chars<digits...>::value[] = {'-', ('0' + digits)..., 0};

    template<bool neg, uint8_t... digits>
    struct to_chars : positive_to_chars<digits...> {};

    template<uint8_t... digits>
    struct to_chars<true, digits...> : negative_to_chars<digits...> {};

    template<bool neg, uintmax_t rem, uint8_t... digits>
    struct explode : explode<neg, rem / 10, rem % 10, digits...> {};

    template<bool neg, uint8_t... digits>
    struct explode<neg, 0, digits...> : to_chars<neg, digits...> {};

    template<typename T>
    constexpr uintmax_t cabs(T num) { return (num < 0) ? -num : num; }
}

template<typename T, T num>
struct string_from : ::detail::explode<num < 0, ::detail::cabs(num)> {};

static void 
__meta_string(const unsigned int i)
{
	string_from<unsigned, 1>::value; //"1"
}


int main(int argc, char **argv)
{
	printf("hello world\n");
	return 0;
}
