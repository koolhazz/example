#include "cleanable.h"
#include <stdio.h>
#include <stdlib.h>

Cleanable::Cleanable()
			:_cleaner(NULL)
{
}

Cleanable::~Cleanable() 
{
	_cleaner = NULL;
}

void 
Cleanable::DelegateTo(Cleanable& rhs)
{
	_cleaner = rhs._cleaner;
	rhs._cleaner = NULL;
}

void
Cleanable::SetCleaner(CleanableDelegateFn cdf)
{
	_cleaner = cdf;
}

Worker::Worker()
		:_data(NULL), Cleanable()
{
}

Worker::~Worker() 
{
	if (_data && _cleaner) {
		_cleaner(_data);
	} else if (_data) {
		free(_data);
	}
}

void
Worker::Self() 
{
	printf("Is: %s\n", __PRETTY_FUNCTION__);
}

void
Worker::Alloc() 
{
	_data = malloc(10);
}

void 
Worker::DelegateTo(Worker& w) 
{
	_data = w._data;
	w._data = NULL;
	Cleanable::DelegateTo(w);
}