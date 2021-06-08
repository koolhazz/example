#include <memory>

struct dummy{
    static std::shared_ptr<dummy> create(){
      return std::shared_ptr<dummy>(new dummy());
    }
private:
    dummy(){}
};

int main(){
  dummy d{};//compile error!
  auto ptr = dummy::create();//ok
}
