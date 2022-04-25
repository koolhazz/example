/*
 * 根据宏定义可推算在32位系统中MINSIZE为16字节，在64位系统中MINSIZE一般为32字节。从request2size还可以知道，
 * 如果是64位系统，申请内存为1~24字节时，系统内存消耗32字节，当申请内存为25字节时，系统内存消耗48字节。 
 * 如果是32位系统，申请内存为1~12字节时，系统内存消耗16字节，当申请内存为13字节时，系统内存消耗24字节。 
 * 32位系统按照8字节递增, 64位系统按照16字节递增
 * 
 * */
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define __ALIGNED_ADDR__(addr, sz) 	(((addr) + sz - 1) & 0xFFFFFFFFFFFFFFF8)
#define __DBG_ADDR__(addr) 			printf("ORGIN: %lx AADDR: %lx usable: %d\n", addr, __ALIGNED_ADDR__((addr), 8))		

int main()
{
	char * p1;
	char * p2;
	
	printf("%zu\n",sizeof(char *));
	
	for (unsigned i = 0;i<10;i++) {
		p1=NULL;
		p2=NULL;
		
		p1=(char *)malloc(i*sizeof(char));
		p2=(char *)malloc(1*sizeof(char));
		printf("i=%d    %lu\n", i, (p2-p1));
		__DBG_ADDR__((unsigned long)p1);
		__DBG_ADDR__((unsigned long)p2);
		
	}

	getchar();
}