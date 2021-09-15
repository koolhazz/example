#ifndef __MAP_INITALIZER_LIST_H_
#define __MAP_INITALIZER_LIST_H_

#include <map>

typedef void (*func_handle_t)(void);
typedef std::map<string, func_handle_t> func_handle_table_t;

func_handle_table_t g_func_handle_table;

static void 
__func()
{
	printf("%s\n", __PRETTY_FUNCTION__);
}

static void 
__func2()
{
	printf("%s\n", __PRETTY_FUNCTION__);	
}

static void 
__func_handle_table_init()
{
	g_func_handle_table.insert({
		{"H", __func},
		{"G", __func2},
	});
}


#endif 
