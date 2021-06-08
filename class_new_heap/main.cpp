#include <stdio.h>
#include <memory>

struct dummy{
    class token {
    private:
        token() {}
        friend dummy;
    };

    static std::shared_ptr<dummy> create()
	{
      return std::make_shared<dummy>(token {});
    }

    dummy(token t) : dummy() {
    }

private:
    dummy() {}
};

int main() {
	//dummy d{}; //compile error
	//dummy d(token{}); //compile error
	std::shared_ptr<dummy> ptr = dummy::create(); //ok
}
