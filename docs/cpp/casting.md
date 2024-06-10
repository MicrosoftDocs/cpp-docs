---
description: "Learn more about: Casting in C++"
title: "Casting"
ms.date: 6/10/2024
helpviewer_keywords: ["casting [C++]", "coercion [C++]", "virtual functions [C++], in derived classes [C++]", "static cast operator", "dynamic cast operator", "polymorphic classes [C++]", "classes [C++], polymorphism"]
ai.
---
# Casting

The C++ language provides that if a class is derived from a base class containing virtual functions, a pointer to that base class type can be used to call virtual functions in the derived class object. A class containing virtual functions is sometimes called a "polymorphic class".

![Diagram of a class hierarchy where C derives from B, which derives from A.](../cpp/media/vc38zz1.gif "Class hierarchy") <br/>
Class hierarchy

An object of type `C` could be visualized as shown in the following figure.

![Diagram of Class C with subobjects B and A.](../cpp/media/vc38zz2.gif "Class C with subobjects B and A") <br/>
Class C with sub-objects B and A

Given an instance of class `C`, there is a `B` subobject and an `A` subobject. The instance of `C`, including the `A` and `B` subobjects, is the "complete object."

Since a derived class completely contains the definitions of all the base classes from which it is derived, it is safe to cast a pointer to any of the base classes (an upcast). Given a pointer to a base class, it may be safe to cast the pointer to an instance of a derived class (downcast). The actual object is said to be the "complete object." The pointer to the base class is said to point to a "subobject" of the complete object. For example, consider the class hierarchy shown in the following figure.

Using run-time type information, it is possible to check whether a pointer actually points to a complete object and can be safely cast to point to another object in its hierarchy. Use the [dynamic_cast](../cpp/dynamic-cast-operator.md) operator to make safe casts. It performs the run-time check necessary to ensure that the operation is safe.

For conversion of nonpolymorphic types, you can use the [static_cast](../cpp/static-cast-operator.md) operator (this topic explains the difference between static and dynamic casting conversions, and when it is appropriate to use each).

The following example demonstrates the use of the `dynamic_cast` and `static_cast` operators:

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

- [Casting operators](../cpp/casting-operators.md)\
- [Run-time type information](../cpp/run-time-type-information.md)

## See also

[Expressions](../cpp/expressions-cpp.md)
