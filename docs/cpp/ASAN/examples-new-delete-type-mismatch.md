---
title: "New delete type mismatch."
description: "Source examples and live debug screen shots for new delete type mismatch errors."
ms.date: 02/05/2021
f1_keywords: ["ASan","Address Sanitizer","memory safety","New delete type mismatch", "ASan examples"]
help viewer_keywords: ["ASan","Address Sanitizer","ASan examples","New delete type mismatch"]
---

# New delete type mismatch

In the following example, only ~Base, and not ~Derived is called. The compiler generates a call to ~Base() because Base's `destructor()`isn't virtual. When we `delete b`, the object's destructor is bound to the default definition. The code will delete an empty base class (or 1 byte on Windows). Missing the **virtual** keyword for the destructor declaration, is a common C++ error when using inheritance.

## Example - virtual destructor

```cpp
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
```

Polymorphic base classes should declare **virtual destructors**. If a class has any virtual functions, it should have a virtual destructor

Fix this example by adding:

```cpp
struct Base {
  virtual ~Base() = default;
}
```

## Resulting error

![example1](SRC_CODE/new-delete-type-mismatch/example1.PNG)
