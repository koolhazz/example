#include "cleanable.h"
#include <stdio.h>
#include <stdlib.h>

static void 
__cleaner(void* arg)
{
	printf("Is: %s\n", __PRETTY_FUNCTION__);
	free(arg);
}

int 
main(int argc, char **argv)
{
	Worker w;
	Worker w2;
	
	w.Alloc();
	w.SetCleaner(__cleaner);
	
		
	w2.DelegateTo(w);
	
	return 0;
}
