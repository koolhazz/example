#ifndef __AUTO_H_
#define __AUTO_H_

int (*(*pf())())() 
{
	return nullptr;
}


auto ppf() -> auto (*)() -> int (*)();


#endif