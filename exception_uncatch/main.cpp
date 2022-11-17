#include <stdio.h>
#include <string>


class Done {
public:
	Done() {}
	~Done() {}
	
	void Run() { printf("something has done\n"); }
};

class Closure {
public:
	Closure(std::string _name):name_(_name) {}
	~Closure() { printf("%s\n", __FUNCTION__); }
private:
	std::string name_;
};



static void 
___call()
{
	Closure close(__FUNCTION__);
	
	throw "chenbo exception";
}

static void 
__call()
{
	Closure close(__FUNCTION__);
	___call();
}

static void 
_call() 
{
	Closure close(__FUNCTION__);
	
	__call();
}

int main(int argc, char **argv)
{
	_call();
	
	return 0;
}
