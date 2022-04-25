#ifndef __INHERIT_H_
#define __INHERIT_H_

#include <string.h>

typedef void (*do_some_t)();

#define offsetof(TYPE, MEMBER) ((size_t) &((TYPE *)0)->MEMBER)

#define container_of(ptr, type, member) ({ 					\
     const typeof( ((type *)0)->member ) *__mptr = (ptr); 	\
     (type *)( (char *)__mptr - offsetof(type, member) );})

struct base {
	int 		id;
	do_some_t 	act;
};

struct dev {
	int 		age;
	do_some_t 	act;
	struct base base;
};

void 
dev_do(struct base* b);

void 
base_do(struct base* b);

#endif 
