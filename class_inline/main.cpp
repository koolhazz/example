#include <stdio.h>

class A 
{
public:
	A():age(10)
	{}
	~A() {}

public:
	static inline void Name();
	
	inline void Self();
private:
	int age;
};

inline void 
A::Name()
{
	printf("Name: A\n");
}

inline void
A::Self()
{
	printf("Age: %d\n", age);
}

int main(int argc, char **argv)
{
	printf("hello world\n");
	return 0;
}
