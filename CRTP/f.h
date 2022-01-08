#ifndef __F_H__
#define __F_H__

template <typename D> 
class B {
public:
    void f(int i) { static_cast<D*>(this)->f_impl(i); } // 调用模板类的f(i)
	int get() { return i_; }
	~B() { printf("%s\n", __PRETTY_FUNCTION__); }
protected:  
  void f_impl(int i) {} // 子类没有实现f_impl时的默认调用
  int i_;
};

class D : public B<D> {
public:
	~D() { printf("%s\n", __PRETTY_FUNCTION__); }
    void f_impl(int i) { i_ += i; }
};

#endif
