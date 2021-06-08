#include <iostream>
#include <array>
using namespace std;

constexpr int foo(int i)
{
    return i + 5;
}


class Point { //literal type
   int x;
   int y;
 public:
   constexpr Point(int ix, int iy) : x{ix}, y{iy} {}
   constexpr int getX() const { return x; }
   constexpr int getY() const { return y; }
 };
 
 


int main()
{
    int i = 10;
    std::array<int, foo(5)> arr; // OK
    
    foo(i); // Call is Ok
    
    // But...
    std::array<int, foo(i)> arr1; // Error i not is complie const
	
	
	
	constexpr Point p{1, 2};      //OK, 因为有constexpr构造函数
	constexpr int 	py = p.getY();  //OK, 因为y的getter是constexpr的。
	double 			darry[py] {};
	
	return 0;
}
