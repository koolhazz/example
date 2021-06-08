#include <stdio.h>
#include <string>

using std::string;

#define __BINDING__ 1

#if __BINDING__
#define __DYNAMIC__ virtual 
#else 
#define __DYNAMIC__ 
#endif

#define __ME__() printf("%s:%s:%d\n", __FILE__, __PRETTY_FUNCTION__, __LINE__);

class A {
public:
	A(const string& name):_name(name) {}
	virtual ~A() {}
public:
	__DYNAMIC__ void call() const { printf("%s: %s dynamic binding? %d\n", __PRETTY_FUNCTION__, _name.c_str(), __BINDING__); }
	void see() const { __ME__(); }
private:
	string _name;
};

class B {
public:
	B(const string& name):_name(name) {}
	virtual ~B() {}
public:
	__DYNAMIC__ void call() const { printf("%s: %s dynamic binding? %d\n", __PRETTY_FUNCTION__, _name.c_str(), __BINDING__); }
	void drink() const { __ME__(); }
private:
	std::string _name;
};

class C : public A, public B {
public:
	C(const string& name):_name(name), A(name), B(name) {}
	virtual ~C() {}
public:
	__DYNAMIC__ void call() const { printf("%s: %s dynamic binding? %d\n", __PRETTY_FUNCTION__, _name.c_str(), __BINDING__); }
	void run() const { __ME__(); }
private:
	std::string _name;
};


static void
__call_a(const A* a)
{
	a->call();
	a->see();
}

static void
__call_b(const B* b)
{
	b->call();
	b->drink();
}

static void
__call_c(const C* c)
{
	c->call();
	c->run();
}


int 
main(int argc, char **argv)
{
	C cc("chenbo");
	
	__call_a(&cc);
	__call_b(&cc);
	__call_c(&cc);
	
	return 0;
}
