#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "obj_pool.h"

using namespace std;

#define __BEGIN__(f) cout << "-------- " << __FUNCTION__ << #f << " begin --------"  <<endl
#define __END__(f) 	cout << "-------- " <<__func__ << #f << " end --------"  <<endl

#if 0
template <typename ... T>  
void DummyWrapper(T... t){};  
  
template <class T>  
T unpacker(const T& t){  
    cout<<','<<t;  
    return t;  
}  
  
template <typename T, typename... Args>  
void write_line(const T& t, const Args& ... data){  
    cout << t;  
    DummyWrapper(unpacker(data)...);//直接用unpacker(data)...是非法的，（可以认为直接逗号并列一堆结果没有意义），需要包裹一下，好像这些结果还有用</span>  
    cout << '\n';  
}  
#endif 

#if 1
template <typename T>
void _write(const T& t){ // 最后参数的时候调用这个。
	__BEGIN__(2);
	cout << t << '\n';
	__END__(2);
}

template <typename T>
void _write(const T& t, const T& t1, const T& t3) {
	__BEGIN__(4);
	cout << t << '\n';
	__END__(4);
}

template <typename T, typename ... Args>
void _write(const T& t, Args... args)  
{
	__BEGIN__(1);
	cout << "sizeof: " << sizeof...(args) << endl;
	cout << t << ',';
	_write(args...);//递归解决，利用模板推导机制，每次取出第一个，缩短参数包的大小。
	__END__(1);
}

template <typename T, typename... Args>
inline void write_line(const T& t, const Args& ... data) 
{
	__BEGIN__(3);
	cout << "sizeof: " << sizeof...(data) << endl; // data 的内容为 2 ~ 6
	_write(t, data...);
	__END__(3);
}
#endif 


static void 
_new_object(int id, const char* name, float m)
{
	__BEGIN__(6);
	
	cout << id << ":" << name << ":" << m << endl;
	
	
	__END__(6);
}


template <typename... Args> 
void
new_object(const Args&... data) 
{
	_new_object(data...);
}

class NodeData {
public:
	NodeData(obj_id_t id, string name):_id(id), _name(name) {}
	~NodeData() {}
private:
	obj_id_t 	_id;
	string 		_name;
};

class ZooData {
public:
	ZooData(obj_id_t id, int age, int grade):_id(id), _age(age),_grade(grade) {}
	~ZooData() {}
private:
	obj_id_t 	_id;
	int 		_age;
	int 		_grade;
};

int 
main(int argc, char **argv)
{
	write_line(1, 2, 3);
	
	new_object(1, "chenbo", 10.5);
	
	ObjPool<NodeData> _datas;
	
	_datas.Extend(10, 99, string("chenbo"));
	printf("ObjPoolSize: %u\n", _datas.Size());
	
	ObjPool<ZooData> _zoos;
	
	_zoos.Extend(20, 100, 40, 39);
	printf("ObjPoolSize: %u\n", _zoos.Size());
	
	return 0;
}

