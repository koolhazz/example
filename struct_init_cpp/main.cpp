#include <stdlib.h>
#include <stdio.h>

struct test
{
    int a;
    int b;
};

struct test_2 {
	char name[10];
	int age;
};

int main()
{
    struct test t1 = {0, 0}; 
	struct test t2 = { 
        .a=2, 
        .b=3
    };

    struct test t3 = { 
        a:12345,
        b:567890
    };  
    
	struct test_2 t5 = { "chenbo", 0};
	//struct test_2 t6 = {.name="chenbo", .age=0};
	
	printf("t1.a = %d, t1.b = %d\n", t1.a, t1.b);
    //printf("t2.a = %d, t2.b = %d\n", t2.a, t2.b);
    printf("t3.a = %d, t3.b = %d\n", t3.a, t3.b);
	
	
	
	system("pause");
    return 0;
}
