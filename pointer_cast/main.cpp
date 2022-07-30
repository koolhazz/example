#include <stdio.h>
#include <stdlib.h>


#define PP(p) printf(#p"[%p]\n", p)

int main(int argc, char **argv)
{
	char 			*buff = NULL;
	unsigned long 	*pul = NULL;
	unsigned long 	**ppul = NULL;
	double 		  	*pd = NULL;
	
	
	buff = (char*)malloc(64);
	PP(buff);
	
	pul = (unsigned long*)malloc(sizeof *pul);
	PP(pul);
	
	*pul = 9999;
	
	ppul = (unsigned long**)buff;
	PP(ppul);
	
	*ppul = pul;
	PP(*ppul);
	
	printf("PPUL->: %lu\n", **ppul);
	
	//保存目标指针地址为整型
	
	*(unsigned long*)buff = (unsigned long)pul;
	PP((unsigned long*)buff);
	PP(*(unsigned long*)buff);
	
	
	pd = (double*)malloc(sizeof *pd);
	
	*pd = 1.01F;
	
	*(double*)(buff + sizeof(unsigned long)) = *pd;
	printf("DOUBLE->: %f\n", *(unsigned long*)(buff + sizeof(unsigned long))); // 0.00
	printf("DOUBLE->: %f\n", *(double*)(buff + sizeof(unsigned long)));
	
	
	return 0;
}
