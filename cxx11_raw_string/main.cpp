#include <stdio.h>
#include <string>

using std::string;

int 
main(int argc, char **argv)
{
	string raw = R"(hello \n world!)";
	string raw1 = R"DD(R ())DD";
	
	printf("RAW: %s\n", raw.c_str());
	printf("RAW1: %s\n", raw1.c_str());
	
	return 0;
}
