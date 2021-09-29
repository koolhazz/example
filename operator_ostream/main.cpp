#include <stdio.h>
#include <iostream>
#include <string>
#include <ostream>
#include <vector>

std::ostream& 
operator<< (std::ostream& src, std::vector<std::string>& ss)
{
	for (unsigned int idx = 0; idx < ss.size(); idx++) {
		src << ss[idx];
	}
	
	return src;
} 


int 
main(int argc, char **argv)
{
	std::vector<std::string> ss(10, "A");
	
	std::cout << ss << std::endl;	
	
	return 0;
}
