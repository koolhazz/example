#include <stdio.h>
#include <utility>


#define __N__(n) printf("%d\n", n)

#define __SELF__() printf("%s:%d %s\n", __FILE__, __LINE__, __PRETTY_FUNCTION__)
#define __BEGIN__ printf("*****************************************\n")
#define __END__ printf("-------------------------------------------\n")
#define __MOVE__(...) static_cast<decltype(__VA_ARGS__)&&>(__VA_ARGS__) //static_cast<typeof(V)&&>(V)  //static_cast<std::remove_reference_t<decltype(__VA_ARGS__)>&&>(__VA_ARGS__)
#define __FORWARD__(...) static_cast<decltype(__VA_ARGS__)&&>(__VA_ARGS__) //

class A {
public:
	A():_i(0) { __SELF__(); }
	A(A& rsh) { __SELF__(); }
	A(A&& rsh) { __SELF__();}
	~A() { __SELF__(); }
	
public:
	A& operator =(const A& rsh) 
	{
		__SELF__();
		return *this;
	}
	A& operator =(A&& rsh)
	{
		__SELF__();
		return *this;
	}
private:
	int _i;
};



int 
main(int argc, char **argv)
{
	A a(std::forward<A>(A())); // if it has a name, it's an lvalue。 use std::move or std::forward
	
	A b(std::move(A())); // if it has a name, it's an lvalue。 use std::move or std::forward
	
	a = b;
	
	a = std::move(b);
	
	a = __MOVE__(b);
	
	__BEGIN__;
	{
		A c(); //这里声明的是一个返回A类型对象实例的函数
		A d;
	}
	__END__;
	
	return 0;
}
