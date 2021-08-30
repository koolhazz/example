#include <stdio.h>
#include <vector>

using namespace std;

int 
main(int argc, char **argv)
{
	vector<unsigned int> vc;

	for (unsigned int idx = 0; idx < 10; idx++) {
		vc.push_back(idx);
	}
	
	printf("vc: %p\n", &*vc.begin());
	printf("vc: %u\n", *(&vc[1]));
	printf("vc: %u\n", *(vc.end() - 1));
	printf("vc: %u\n", *(vc.end() - 2));
	
	int i;
	
	scanf("%d", &i);
	
	return 0;
}
