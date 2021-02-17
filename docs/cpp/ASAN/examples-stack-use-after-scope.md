# Stack use after scope

The use of a stack address outside the lexical scope of a variable's lifetime, can happen many ways in C or C++.  We provide several examples for this category of error caught with a simple recompile. All simple examples are compiled using:
>  `cl -fsanitize=address /Zi /EHsc uas_example.c`

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

![example1-screenshot](SRC_CODE/stack-use-after-scope/example1.PNG) 

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

![example2-screenshot](SRC_CODE/stack-use-after-scope/example2.PNG) 

## Example 3 - destructor ordering relative to locals

```cpp

// cl /O1 -fsanitize=address. This will not fire with /Od

#include <stdio.h>

struct IntHolder {
  explicit IntHolder(int *val = 0) : val_(val) { }
  ~IntHolder() {
    printf("Value: %d\n", *val_);  // Bom!
  }
  void set(int *val) { val_ = val; }
  int *get() { return val_; }

  int *val_;
};

int main(int argc, char *argv[]) {
  // It is incorrect to use "x" inside the IntHolder destructor, because the lifetime of "x"
  // ends earlier. Per C++ standard, local lLifetimes end in reverse order of declaration.

  IntHolder holder;
  int x = argc;
  holder.set(&x);

       // .. dtor for holder is inserted by compiler generated code and x is out of scope

  return 0;
}
```
## Resulting error

![example3-screenshot](SRC_CODE/stack-use-after-scope/example3.PNG) 

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

![example4-screenshot](SRC_CODE/stack-use-after-scope/example4.PNG) 
