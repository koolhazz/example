#ifndef __TEMPLATE_H_
#define __TEMPLATE_H_

#include <iostream>

using namespace std;

template <typename Fn, typename Arg1> 
struct Clo

template <class T>
void
Add(T a, T b)
{
	cout << "a + b: " << a + b << endl; 
}


//specialization
template <>
void
Add<float>(float a, float b)
{
	cout << "Is Float." << endl;
}

// function template overload
template <class T>
void
Add(T* a, T* b)
{
	cout << "is overload." << endl;
	cout << "a + b: " << *a + *b << endl;
}


template <typename Fn, typename Arg1> 
void Callback(Fn& fn, const Arg1& arg1)
{
	int ret = 0;
	
	ret = fn(arg1);
	
	printf("ret: %d\n", ret);
}


template <typename Fn, typename Arg1> 
void Callback(Fn* fn, Arg1* arg1)
{
	int ret = 0;
	
	ret = fn(arg1);
	
	printf("ret2: %d\n", ret);
}


#endif