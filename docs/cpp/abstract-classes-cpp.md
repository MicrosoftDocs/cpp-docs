---
description: "Learn more about: Abstract Classes (C++)"
title: "Abstract Classes (C++)"
ms.date: "11/04/2016"
helpviewer_keywords: ["classes [C++], abstract", "base classes [C++], abstract classes [C++]", "abstract classes [C++]", "derived classes [C++], abstract classes [C++]"]
ms.assetid: f0c5975b-39de-4d68-9640-6ce57f4632e6
---
# Abstract Classes (C++)

Abstract classes act as expressions of general concepts from which more specific classes can be derived. You cannot create an object of an abstract class type; however, you can use pointers and references to abstract class types.

A class that contains at least one pure virtual function is considered an abstract class. Classes derived from the abstract class must implement the pure virtual function or they, too, are abstract classes.

Consider the example presented in [Virtual Functions](../cpp/virtual-functions.md). The intent of class `Account` is to provide general functionality, but objects of type `Account` are too general to be useful. Therefore, `Account` is a good candidate for an abstract class:

```cpp
// deriv_AbstractClasses.cpp
// compile with: /LD
class Account {
public:
   Account( double d );   // Constructor.
   virtual double GetBalance();   // Obtain balance.
   virtual void PrintBalance() = 0;   // Pure virtual function.
private:
    double _balance;
};
```

The only difference between this declaration and the previous one is that `PrintBalance` is declared with the pure specifier (`= 0`).

## Restrictions on abstract classes

Abstract classes cannot be used for:

- Variables or member data

- Argument types

- Function return types

- Types of explicit conversions

Another restriction is that if the constructor for an abstract class calls a pure virtual function, either directly or indirectly, the result is undefined. However, constructors and destructors for abstract classes can call other member functions.

Pure virtual functions can be defined for abstract classes, but they can be called directly only by using the syntax:

*abstract-class-name*::*function-name*()

This helps when designing class hierarchies whose base class(es) include pure virtual destructors, because base class destructors are always called in the process of destroying an object. Consider the following example:

```cpp
// Declare an abstract base class with a pure virtual destructor.
// deriv_RestrictionsonUsingAbstractClasses.cpp
class base {
public:
    base() {}
    virtual ~base()=0;
};

// Provide a definition for destructor.
base::~base() {}

class derived:public base {
public:
    derived() {}
    ~derived(){}
};

int main() {
    derived *pDerived = new derived;
    delete pDerived;
}
```

When the object pointed to by `pDerived` is deleted, the destructor for class `derived` is called and then the destructor for class `base` is called. The empty implementation for the pure virtual function ensures that at least some implementation exists for the function.

> [!NOTE]
> In the preceding example, the pure virtual function `base::~base` is called implicitly from `derived::~derived`. It is also possible to call pure virtual functions explicitly using a fully qualified member-function name.

## See also

[Inheritance](../cpp/inheritance-cpp.md)
