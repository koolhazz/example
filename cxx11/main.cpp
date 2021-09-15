#include <stdio.h>
#include "shared_ptr.h"
#include "unique_ptr.h"
#include "constexpr.h"
#include "auto.h"
#include "map_initializer_list.h"

int 
main(int argc, char **argv)
{
	__shared_ptr();
	
	//__shared_ptr_2();
	
	__shared_ptr_3();
	
	__unique_ptr();
	__unique_ptr_2();
	
	__CONSOLE__("exit main.\n");
	
	
	int temp[MaxNums(10)];
	
	__func_handle_table_init();
	
	g_func_handle_table["H"]();
	
	return 0;
}