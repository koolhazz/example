#ifndef __A_H_
#define __A_H_

class A {
public:
	A():i(10) {}
	
	friend void __get4i(const A& a);
private:
	int i;
};

#endif
