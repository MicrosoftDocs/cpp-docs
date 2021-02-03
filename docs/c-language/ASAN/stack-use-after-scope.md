# Stack use after scope

The use of a stack address outside the lexical scope of a variable's lifetime, can happen many ways in C or C++.  We provide several examples for this category of error caught with a simple recompile. All simple examples are compiled using:
>  **`cl -fsanitize=address /Zi /EHsc uas_example.c`**

## Example 1 - simple nested local

```cpp
int *gp;
bool b = true;

int main() {
    if (b) {
        int x[5];
        gp = x+1;
    }
    return *gp;  // Boom!
}
```
## Resulting error

## Example 2 - lambda capture
```cpp
#include <functional>

int main() {
  std::function<int()> f;
  {
    int x = 0;
    f = [&x]() {
      return x;  // Boom!
    };
  }
  return f();  // Boom!
}
```
## Resutling Error

## Example 3 - destructor

```cpp
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

    std:cout <<  "The lifetime of v ends before the destructor of local s is called by compiler";
}

void main() {
    uas_in_destructor();
}
```
## Resulting error

## Example 4 - temporaries
```cpp
#include <iostream>

struct A {
    A(const int& v) {
        p = &v;
    }
    void print() {
        std::cout << *p;
    }
    const int* p;
};

void explicit_temp() {
    A a(5);     // the temp for 5 is no longer live;
    a.print();
}

void temp_from_conversion() {
    double v = 5;
    A a(v);     // local v is no longer live.
    a.print();
}

void main() {
    explicit_temp();
    temp_from_conversion(); 
}
```
## Resulting error