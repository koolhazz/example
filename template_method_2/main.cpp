#include <stdio.h>

template <typename T> 
struct Value {
	unsigned long _id;
	
	template <typename T2>
	Value<T2> cast() const
	{
		//return Value<T2>{ _id = _id };
		
		Value<T2> id = { _id };
		
		return id;
	}
};


int main(int argc, char **argv)
{
	Value<int> v = { 10 };
	
	Value<long> vv = v.cast<long>();
	
	return 0;
}
