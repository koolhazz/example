#ifndef __FN_H__
#define __FN_H__

class FunInline {
public:
	FunInline() {}
	~FunInline() {}
	
	inline void version();
};

inline void // inline 可以放在声明或者定义部分，或者同时使用，但是方法的定义必须放在类声明的头文件中，不能放在.cc文件中
FunInline::version() 
{
	
}


#endif
