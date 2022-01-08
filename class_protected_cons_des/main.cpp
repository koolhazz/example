#include <stdio.h>
#include <stdlib.h>

class Father {
public:
protected:
    Father() {}
    ~Father() {}
};

class Son : public Father {
public:
    Son() {}
    ~Son() {}
};

int main(int argc, char **argv)
{
    Son     son;
    Father  father;
    
	return 0;
}
