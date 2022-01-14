#include <iostream>

struct ctor_dtor_test{

    std::string text;
    ctor_dtor_test(std::string text) {
        this->text = text;
    }

    ~ctor_dtor_test() {
        std::cout << "DESTRUCTION!\n";
        std::cout << text << "\n";
    }
};

int main(){

    ctor_dtor_test x {"Destruction test"};

    return 0;
}
