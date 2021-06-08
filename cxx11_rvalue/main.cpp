#include <stdio.h>
#include <stdlib.h>
#include <utility>


class shape {
public:
	shape() {}
	virtual ~shape() {}
};

class circle : public shape {
public:
	circle() {}
	~circle() {}
};


void foo(const shape&)
{
	puts("foo(const shape&)");
}

void foo(shape&&)
{
	puts("foo(shape&&)");
}

void bar(const shape& s)
{
	puts("bar(const shape&)");
	foo(s);
}

void bar(shape&& s)
{
	puts("bar(shape&&)");
	foo(std::forward<shape>(s));
	foo(std::move(s));
}

int main()
{
  bar(circle());
}