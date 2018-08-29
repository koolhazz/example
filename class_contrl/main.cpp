#include <stdio.h>


class Data {
public:
	Data(int id, int age):_id(id), _age(age) {}
	~Data() {}
public:
	void CopyFrom(const Data& rsh) { //方法可以访问其他对象的private和protected的成员
		_age = rsh._age;
		_id = rsh._id;
	}
	
	void toString() {
		printf("id[%d] age[%d]\n", _id, _age);
	}
protected:
	int _age;
private:
	int _id;
};



int main(int argc, char **argv)
{
	Data data1(100, 29), data2(200, 39);
	
	data1.toString();
	data1.CopyFrom(data2);
	data1.toString();
	
	return 0;
}
