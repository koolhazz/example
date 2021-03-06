#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/* struct 字段排列循序的不同，造成sizeof 大小不同 */

struct A {
	char 	a;
	short 	b;
	int		c;
};

struct B {
	char	a; // 4
	int		c; // 4
	short 	b; // 4 这里需要采用4个字节的对齐，因为对的字段空间为4
};

struct BB { // 占用空间的大小和字段的排列顺序有关系，按照字段大小升序排列
	char	a; // 
	short 	b; // 4  a + b + c 实际占用7个字节，所有成员中空间最大是int 为 4 所以按照 4Byte 对齐, 所以sizeof(struct BB) = 8  
	int		c; // 4
};

struct BBB { // 占用空间的大小和字段的排列顺序有关系，按照字段大小升序排列
	int		c;
	short 	b;
	char	a; // 4  a + b + c 实际占用7个字节，所有成员中空间最大是int 为 4 所以按照 4Byte 对齐, a + b 合起来按照4对齐 所以sizeof(struct BBB) = 8  
};

struct BBBB { // 占用空间的大小和字段的排列顺序有关系，按照字段大小升序排列
	int		c;
	short 	b;
	char	a; // 4  a + b + c + d 实际占用11个字节，所有成员中空间最大是int 为 4 所以按照 4Byte 对齐, 所以sizeof(struct BBBB) = 12
	int 	d; 
	//struct BB e;
};

struct C {
	char	a; // 4  这里由于后面字段是int型，在32位环境下必须要占用4个字节，所有a只能占用4个字节对齐
	int		c; // 4
	short 	b; // 2
	//struct BBB d;
} __attribute__((packed));

struct D {
	char 	a;
	int		c;
	short 	b;
} __attribute__((aligned(1), packed));

#define MAX_CONTENT_LEN 512
#pragma pack(1)
typedef struct E{
    uint32_t    create_time;
    uint32_t    modify_time;
    uint32_t    public_time;
    uint64_t    source_id;
    uint64_t    item_id;
    uint64_t    group_id;
    uint16_t    type;
    uint16_t    duration;
    char        video[512];
    char        original_video[512];
    char        original_thumbnails[512];
    char        category[32];
    char        data_type[32];
    char        url_source[32];
    char        source[32];
    char        title[256];
    char        content[MAX_CONTENT_LEN];
    char        url[512];
    char        thumbnails[512];
    char        url_target[512];
    char        extra[1024];
} E;
#pragma pack()

typedef struct F {
    uint64_t    source_id;
    uint64_t    item_id;
    uint64_t    group_id;
    uint32_t    create_time;
    uint32_t    modify_time;
    uint32_t    public_time;
    uint16_t    type;
    uint16_t    duration;
    char        video[512];
    char        original_video[512];
    char        original_thumbnails[512];
    char        category[32];
    char        data_type[32];
    char        url_source[32];
    char        source[32];
    char        title[256];
    char        content[MAX_CONTENT_LEN];
    char        url[512];
    char        thumbnails[512];
    char        url_target[512];
    char        extra[1024];
} F;


typedef struct {
	double 	a;
	short 	b;
	int 	c;
	char 	d;
} G;

typedef struct {
	double 	a;
	short 	b;
	int 	c;
	char 	d;
} __attribute__((aligned(1), packed)) GG;

typedef struct {
	double 	a;
	short 	b;
	int 	c;
	char 	d;
} __attribute__((packed)) GGG;

typedef struct hhh_s hhh_t;
struct hhh_s {
	unsigned long a;
	struct {
		unsigned int b;
		unsigned int c;
	};
};

int
main(int argc, char** argv)
{
	printf("A: %lu\n", sizeof(struct A));
	printf("B: %lu\n", sizeof(struct B));
	printf("BB: %lu\n", sizeof(struct BB));
	printf("BBB: %lu\n", sizeof(struct BBB));
	printf("BBBB: %lu\n", sizeof(struct BBBB));
	printf("C: %lu\n", sizeof(struct C));
	printf("D: %lu\n", sizeof(struct D));
	printf("E: %lu\n", sizeof(struct E));
	printf("F: %lu\n", sizeof(struct F));
	printf("G: %lu\n", sizeof(G));
	printf("GG: %lu\n", sizeof(GG));
	printf("GGG: %lu\n", sizeof(GGG));
	printf("H: %lu\n", sizeof(hhh_t));
	
	
	hhh_t hhh;
	
	hhh.b = 1;
	hhh.c = 2;
	
	int i = 0;
	
	scanf("%d", &i);
	
	return 0;
}