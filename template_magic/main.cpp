#include <stdio.h>
#include <string>
#include <iostream>

template<char ...C>
struct FixStringOld
{
    constexpr static std::size_t N = sizeof...(C) + 1;
    constexpr static const char data[N] = { C...,0 };
	
	void InfoPrint()
	{
		std::cout <<"Type:FixStringOld"<<"   Length:" << N  << "   String:"\
			<<  data << std::endl;
	}
};


template<std::size_t M,std::size_t N>
constexpr char
GetCharFromStr(const char(&arr)[N])
{
	return arr[ M < N ? M : N-1];
}

template<char ...C>
auto MakeFixStringOld(FixStringOld<C...>)->FixStringOld<C...>;

#define MakeCharIndex(n,str)        GetCharFromStr<0x##n##0>(str),GetCharFromStr<0x##n##1>(str),\
                                    GetCharFromStr<0x##n##2>(str),GetCharFromStr<0x##n##3>(str),\
                                    GetCharFromStr<0x##n##4>(str),GetCharFromStr<0x##n##5>(str),\
                                    GetCharFromStr<0x##n##6>(str),GetCharFromStr<0x##n##7>(str),\
                                    GetCharFromStr<0x##n##8>(str),GetCharFromStr<0x##n##9>(str),\
                                    GetCharFromStr<0x##n##a>(str),GetCharFromStr<0x##n##b>(str),\
                                    GetCharFromStr<0x##n##c>(str),GetCharFromStr<0x##n##d>(str),\
                                    GetCharFromStr<0x##n##e>(str),GetCharFromStr<0x##n##f>(str)
#define MakeCharIndex64_L(str)      MakeCharIndex(0,str),MakeCharIndex(1,str),\
                                    MakeCharIndex(2,str),MakeCharIndex(3,str)
#define MakeCharIndex64_H(str)      MakeCharIndex(4,str),MakeCharIndex(5,str),\
                                    MakeCharIndex(6,str),MakeCharIndex(7,str)
#define MakeCharIndexSequence(str)  MakeCharIndex64_L(str),MakeCharIndex64_H(str)

//#define MAKESTRINGCHAR(str) decltype(MakeFixStringOld(FixStringOld<MakeCharIndexSequence(str)>{}))
#define MAKESTRINGTINY(str) decltype(AutoSplitString(FixStringOld<MakeCharIndexSequence(str)>{}))


#define MAKESTRINGCHAR(str) \
    decltype(MakeFixStringOld(FixStringOld<MakeCharIndexSequence(str)>{}))


int 
main(int argc, char **argv)
{
	MAKESTRINGCHAR("myhelloworld") a3;
	a3.InfoPrint();
	
	return 0;
}
