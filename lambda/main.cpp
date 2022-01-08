#include <stdio.h>
#include <iostream>
#include <functional>

static void 
print_num(int x) 
{
	printf("X: %d\n", x);
}

int main(int argc, char **argv)
{
	{
		int m = [](int x) { return [](int y) { return y * 2; }(x)+6; }(5);
		std::cout << "m:" << m << std::endl;

		std::cout << "n:" << [](int x, int y) { return x + y; }(5, 4) << std::endl;

		auto gFunc = [](int x) -> std::function<int(int)> { return [=](int y) { return x + y; }; };
		auto lFunc = gFunc(4);
		std::cout << lFunc(5) << std::endl;

		{	
			auto hFunc = [](const std::function<int(int)>& f, int z) { return f(z) + 1; };
			auto a = hFunc(gFunc(7), 8);
		}
		
		int a = 111, b = 222;
		auto func = [=, &b]()mutable { a = 22; b = 333; std::cout << "a:" << a << " b:" << b << std::endl; };

		func();
		std::cout << "a:" << a << " b:" << b << std::endl;

		a = 333;
		auto func2 = [=, &a] { a = 444; std::cout << "a:" << a << " b:" << b << std::endl; };
		func2();

		auto func3 = [](int x) -> std::function<int(int)> { return [=](int y) { return x + y; }; };

		std::function<void(int x)> f_display_42 = [](int x) { print_num(x); };
		f_display_42(44);
	}
}
