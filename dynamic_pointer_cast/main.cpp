#include <iostream>


class base
{
public:
    virtual ~base(void) = default;
};

class derived : public base
{
};

class test : public base
{
};

int 
main(void)
{
    std::cout << std::boolalpha;

    // 两个不同的派生类对象
    auto derivedobj = std::make_shared<derived>();
    auto testobj = std::make_shared<test>();

    // 隐式转换 derived->base
    std::shared_ptr<base> pointer1 = derivedobj;

    // static_pointer_cast derived->base
    auto pointer2 = std::static_pointer_cast<base>(derivedobj);

    // dynamic_pointer_cast base->derived
    auto pointer3 = std::dynamic_pointer_cast<derived>(pointer1);
    std::cout << (pointer3 == nullptr) << std::endl;

    // dynamic_pointer_cast base->derived
    auto pointer4 = std::dynamic_pointer_cast<test>(pointer1);
    std::cout << (pointer4 == nullptr) << std::endl;

    return 0;
}