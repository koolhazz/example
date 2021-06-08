#include <stdio.h>

typedef struct a_s a_t;
struct a_s {
    int id;
    union {
        int key;
        long long sid;
    };
    struct {
        int age;
    };
};

typedef struct b_s b_t;
struct b_s {
	int id;
	struct {
		int age;
		int sex;
	};
};

struct c_s {
	int id;
	union {
		long count;
		struct {
			unsigned int bc;
			unsigned int cc;
		};
	};
};


// 结构的Union
struct vec4_UoS
{
    union
    {
        struct { float x, y, z, w; };
        struct { float r, g, b, a; };
        struct { float s, t, p, q; };
    };
};

// Union的结构
struct vec4_SoU
{
    union { float x, r, s; };
    union { float y, g, t; };
    union { float z, b, p; };
    union { float w, a, q; };
};



int main(int argc, char **argv)
{
	a_t t;
    
    t.id = 1;
    t.key = 2;
    t.age = 3;
    (void)t;
    
    {
		struct vec4_SoU v1 = { 10.00, 20.00, 30.00, 40.00 };
		v1.a = 100.00;
		v1.w = 200.00;
		printf("v1.a: %f, v1.w: %f \n", v1.a, v1.w);
		
		struct vec4_UoS v2 = { 10.00, 20.00, 30.00, 40.00 };		
		v2.a = 100.00;
		v2.w = 200.00;		
		printf("v2.a: %f, v2.w: %f \n", v2.a, v2.w);
		
		
	}
	
	return 0;
}
