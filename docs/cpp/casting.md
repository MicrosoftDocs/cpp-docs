---
title: "Casting"
description: "Learn more about: Casting in C++"
ms.date: 6/11/2024
helpviewer_keywords: ["casting [C++]", "coercion [C++]", "virtual functions [C++], in derived classes [C++]", "static cast operator", "dynamic cast operator", "polymorphic classes [C++]", "classes [C++], polymorphism"]
ai-usage: ai-assisted
---
# Casting

In C++, if a class is derived from a base class containing one or more virtual functions, a pointer to that base class type can be used to call virtual functions in the derived class object. A class containing virtual functions is sometimes called a "polymorphic class."

![Diagram of a class hierarchy where C derives from B, which derives from A.](media/vc38zz1.gif "Class hierarchy")\
Class hierarchy

An object of type `C` can be visualized as follows:

![Diagram of Class C with subobjects B and A.](media/vc38zz2.gif "Class C with subobjects B and A")\
Class C with subobjects B and A

Given an instance of class `C`, there's a `B` subobject and an `A` subobject. The instance of `C`, including the `A` and `B` subobjects, is the "complete object."

Because a derived class completely contains the definitions of all the base classes from which it's derived, it's safe to cast a pointer to any of its base classes (also called an upcast). Given a pointer to a base class, it may be safe to cast the pointer to an instance of a derived class (also called a downcast).

Using run-time type information, it's possible to check whether a pointer actually points to a complete object and can be safely cast to point to another object in its hierarchy. The [dynamic_cast](dynamic-cast-operator.md) operator performs a run-time check to ensure that the operation is safe. It's better to design your class hierarchy so that you can use virtual functions to avoid the need for downcasting. However, if you must downcast, use `dynamic_cast` to ensure that the operation is safe.

For conversion of nonpolymorphic types, you can use the [static_cast](static-cast-operator.md) operator (this topic explains the difference between static and dynamic casting conversions, and when it's appropriate to use each).

The following example demonstrates the use of `dynamic_cast` and `static_cast`:

```cpp
#include <iostream>

class Base {
public:
    virtual void print() { std::cout << "Base\n"; }
};

class Derived1 : public Base {
public:
    void print() override { std::cout << "Derived1\n"; }
};

class Derived2 : public Base {
public:
    void print() override { std::cout << "Derived2\n"; }
};

class MostDerived : public Derived1, public Derived2 {
public:
    void print() override { std::cout << "MostDerived\n"; }
};

int main() {
    MostDerived md;
    Base* b1 = static_cast<Derived1*>(&md); // Upcast to Derived1 is safe
    Base* b2 = static_cast<Derived2*>(&md); // Upcast to Derived2 is safe

    // Downcast to MostDerived is ambiguous and unsafe
    // MostDerived* md1 = static_cast<MostDerived*>(b1); // This won't compile
    // MostDerived* md2 = static_cast<MostDerived*>(b2); // This won't compile

    // Correct way to downcast in this situation
    MostDerived* md1 = dynamic_cast<MostDerived*>(b1); // This is safe
    MostDerived* md2 = dynamic_cast<MostDerived*>(b2); // This is safe

    md1->print(); // Prints "MostDerived"
    md2->print(); // Prints "MostDerived"

    return 0;
}
```

This section covers the following topics:

- [Casting operators](casting-operators.md)
- [Run-time type information](run-time-type-information.md)

## See also

[Expressions](expressions-cpp.md)
