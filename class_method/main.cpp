#include <iostream>
#include <stdio.h>
#include "Base.h"

using namespace std;

int main(int argc, char **argv)
{
	CBase* pBase = new CDev(2, 9);
	
	pBase->Show(); 
	pBase->show_i(); /* 虚函数 调用子类的方法 */
	pBase->age(); /* 非虚函数不是动态绑定，调用基类的方法 */
	
	delete pBase;

	printf("\n");	
	
	CDev* pDev = new CDev(2, 9);
	pDev->age();
	pDev->Show();
	
	delete pDev;
	
	printf("\n");	
	
	pBase = new CBase(1);
	
	pBase->Show();
	pBase->show_i(); /* 调用基类的方法 */
	pBase->age(); /* 非虚函数不是动态绑定，调用基类的方法 */
	
	delete pBase;
	
	printf("\n");
	
	CDev dev(2, 10);
	
	dev.age();
	
	CBase::version();
	
	int i;
	
	cin >> i;
}
