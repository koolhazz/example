#include <iostream>
#include <vector>
 
int 
main() 
{
    std::vector<int> v = {0, 1, 2, 3, 4, 5};
 
    for (const int& i : v) // 以 const 引用访问
        std::cout << i << ' ';
    std::cout << '\n';
 
    for (auto i : v) // 以值访问，i 的类型是 int
        std::cout << i << ' ';
    std::cout << '\n';
 
    for (auto& i : v) // 以引用访问，i 的类型是 int&
        std::cout << i << ' ';
    std::cout << '\n';
 
    for (int n : {0, 1, 2, 3, 4, 5}) // 初始化器可以是花括号初始化器列表
        std::cout << n << ' ';
    std::cout << '\n';
 
    int a[] = {0, 1, 2, 3, 4, 5};
    for (int n : a) // 初始化器可以是数组
        std::cout << n << ' ';
    std::cout << '\n';
 
    for (int n : a)  
        std::cout << 1 << ' '; // 不必使用循环变量
    std::cout << '\n';
 
}