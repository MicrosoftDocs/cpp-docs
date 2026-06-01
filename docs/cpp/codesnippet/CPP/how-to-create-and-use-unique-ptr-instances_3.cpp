// Compile with: cl /EHsc /std:c++17

#include <iostream>
#include <memory>

class Engine {
public:
    Engine() { std::cout << "Engine created\n"; }
    ~Engine() { std::cout << "Engine destroyed\n"; }
    void Run() { std::cout << "Engine running\n"; }
};

class Car {
private:
    // Car owns the unique_ptr.
    std::unique_ptr<Engine> engine;
public:
    // Initialize by using make_unique in the member initializer list.
    Car() : engine(std::make_unique<Engine>()) {}

    void Start() {
        engine->Run();
    }
};

int main() {
    Car car;
    car.Start();
}