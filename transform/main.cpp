#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>

int main(int argc, char **argv)
{
	std::string temp("hello world!");
	std::vector<std::string> vecs {"hello", "world"};
	
	//std::transform(temp.begin(), temp.end(), temp.begin(), ::toupper);
	std::transform(vecs.begin()->begin(), vecs.begin()->end(), temp.begin(), ::tolower);
	
	printf("U: %s\n", temp.c_str());
	
	return 0;
}
