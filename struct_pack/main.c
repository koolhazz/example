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
	short 	b; // 4 这里需要采用4个字节的对齐
};

struct C {
	char	a; // 4  这里由于后面字段是int型，在32位环境下必须要占用4个字节，所有a只能占用4个字节对齐
	int		c; // 4
	short 	b; // 2
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

typedef struct F{
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

int
main(int argc, char** argv)
{
	printf("A: %llu\n", sizeof(struct A));
	printf("B: %llu\n", sizeof(struct B));
	printf("C: %llu\n", sizeof(struct C));
	printf("D: %llu\n", sizeof(struct D));
	printf("E: %llu\n", sizeof(struct E));
	printf("F: %llu\n", sizeof(struct F));
	int i = 0;
	
	scanf("%d", &i);
	
	return 0;
}