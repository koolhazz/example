#include <stdio.h>

class Data {
public:
	Data():_d(NULL) 
	{
	
	}
	
public:
	void destory() 
	{
		delete this;
	}
private:
	~Data() { delete _d; }
	int *_d;
};

int main(int argc, char **argv)
{
	//Data data; // can't alloc at stack
	
	Data *dd = NULL;
	
	dd = new Data;
	
	//delete dd;
	
	dd->destory();
 	
	
	return 0;
}
