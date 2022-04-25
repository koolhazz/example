#include "inherit.h"

void 
dev_do(struct base* b)
{
	struct dev *this = container_of(b, struct dev, base);
	
	this->act();
}

void 
base_do(struct base* b)
{
	struct base *this = b;
	
	this->act();
}
