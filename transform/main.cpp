#include <stdio.h>
#include <string>
#include <algorithm>


int main(int argc, char **argv)
{
	std::string temp("hello world!");
	
	std::transform(temp.begin(), temp.end(), temp.begin(), ::toupper);
	
	printf("U: %s\n", temp.c_str());
	
	return 0;
}
