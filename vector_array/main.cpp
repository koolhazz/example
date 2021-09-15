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
	
	
	for (vector<unsigned int>::iterator it = vc.begin(); it != vc.end(); it+=2, printf("VC: %u\n", *it));
	
	
	vector<unsigned int> vc2(vc.begin(), vc.end() - 2);
	
	for (vector<unsigned int>::iterator it = vc.begin(); it != vc.end(); it++) {
			printf("VC: %u\n", *it);
	}
		
	for (vector<unsigned int>::iterator it = vc2.begin(); 
		it != vc2.end(); printf("VC2: %u\n", *it), it++); // 放置在for判断条件中的执行语句，打印的顺序和放在循环体中的不一致，主要愿意是
	
	int i;
	
	scanf("%d", &i);
	
	return 0;
}
