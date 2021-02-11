#include <memory>
#include <vector>

struct T {
    T() : v(100) {}
    std::vector<int> v;
};

struct Base {};

struct Derived : public Base {
    T t;
};

int main() {
    Base *b = new Derived;

    delete b;  // Boom! 

    std::unique_ptr<Base> b1 = std::make_unique<Derived>();

    return 0;
}
