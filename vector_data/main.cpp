#include <stdio.h>
#include <vector>
#include <string>
#include <stdlib.h>

using namespace std;

int main(int argc, char **argv)
{
	vector<string> list(1, "hello");
    
    printf("data: %p\n", list.data());
    
    list.clear();
    list.resize(0);
    list.reserve(0);
    
    printf("data: %p\n", list.data());
	
	list.push_back(string("hello", 5)); // temp var ok.
    
	return 0;
}
