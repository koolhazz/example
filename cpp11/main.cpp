#include <stdio.h>
#include <functional>

using namespace std;

typedef function<void()> cb_func_t;

static void
__foo() 
{
	printf("Call %s\n", __PRETTY_FUNCTION__);
}


class AA {
public:
	AA() {}
	~AA() {}
public:
	void Who() &&  {
		printf("I'm RR %s\n", __PRETTY_FUNCTION__);
	}
	
	void Who() & {
		printf("I'm %s\n", __PRETTY_FUNCTION__);	
	}
};


static void 
__call4aa(AA&& rr) 
{
	std::forward<AA>(rr).Who();
}


int main(int argc, char **argv)
{
	cb_func_t cb(__foo);
	cb_func_t cb2(bind(&__foo));
	
	cb();
	cb2();

	{
		AA aa;
		
		aa.Who();
		
		AA &&raa = std::move(aa);
		
		raa.Who();
		
		__call4aa(std::move(aa));
		
		std::move(aa).Who();
	}

	
	return 0;
}
