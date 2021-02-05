#include <iostream>

struct S {
    void Init(const int* v) { p = v; }
    ~S() { std::cout << *p; }    // Boom!
    const int* p;
};

void uas_in_destructor() {
    S s;
    int v = 5;
    s.Init(&v);

              // The destructor for "s" called here

    std::cout <<  "The lifetime of v ends before the destructor of local s is called by compiler";
    return;
}

int main() {
    uas_in_destructor();
    return 0;
}
