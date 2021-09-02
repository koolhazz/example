#include <stdio.h>
#include <vector>
#include <string>
#include <stdlib.h>

using namespace std;

int main(int argc, char **argv)
{
	vector<string> list(1, "hello");
	vector<string> empty;
    
    printf("data: %p\n", list.data());
    
    list.clear();
    list.resize(0);
    list.reserve(0);
    
    printf("data: %p\n", list.data());
	
	list.push_back(string("hello", 5)); // temp var ok.
    
	
	if (empty.empty()) {
		if (empty.begin() == empty.end()) {
			printf("empty begin() == end().\n");
		} else {
			printf("empty begin() != end().\n");
		}
	}
	
	return 0;
}
