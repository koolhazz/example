#ifndef __BASE_H_
#define __BASE_H_

#include <iostream>

using namespace std;

class CBase
{
public:
	CBase(int _i);
	virtual ~CBase();

	int i;

	void Show();

	void show_i();

	void age() { cout << "base age: " << i << endl; }
private:
	virtual void showme(); //这里是virtual 才能有多态的作用
	void name() { cout << "base name: " << "base" << endl; }
	
public:
	static void version();
};

class CDev : public CBase
{
public:
	CDev(int _i, int _bi);

	int i;

	void show_i();
	void age() { cout << "dev age: " << i << endl; }

	virtual ~CDev();
private:
	virtual void showme();
	void name() { cout << "dev name: " << "dev" << endl; }
	
};

#endif
