---
description: "Learn more about: Abstract classes (C++)"
title: "Abstract classes (C++)"
ms.date: 02/18/2021
helpviewer_keywords: ["classes [C++], abstract", "base classes [C++], abstract classes [C++]", "abstract classes [C++]", "derived classes [C++], abstract classes [C++]"]
---
# Abstract classes (C++)

Abstract classes act as expressions of general concepts from which more specific classes can be derived. You can't create an object of an abstract class type. However, you can use pointers and references to abstract class types.

You create an abstract class by declaring at least one pure virtual member function. That's a virtual function declared by using the *pure* specifier (`= 0`) syntax. Classes derived from the abstract class must implement the pure virtual function or they, too, are abstract classes.

Consider the example presented in [Virtual functions](../cpp/virtual-functions.md). The intent of class `Account` is to provide general functionality, but objects of type `Account` are too general to be useful. That means `Account` is a good candidate for an abstract class:

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

Abstract classes can't be used for:

- Variables or member data

- Argument types

- Function return types

- Types of explicit conversions

If the constructor for an abstract class calls a pure virtual function, either directly or indirectly, the result is undefined. However, constructors and destructors for abstract classes can call other member functions.

## Defined pure virtual functions

Pure virtual functions in abstract classes can be *defined*, or have an implementation. You can only call such functions by using the fully qualified syntax:

*abstract-class-name*::*function-name*()

Defined pure virtual functions are helpful when you design class hierarchies whose base classes include pure virtual destructors. That's because base class destructors are always called during object destruction. Consider the following example:

```cpp
// deriv_RestrictionsOnUsingAbstractClasses.cpp
// Declare an abstract base class with a pure virtual destructor.
// It's the simplest possible abstract class.
class base
{
public:
    base() {}
    // To define the virtual destructor outside the class:
    virtual ~base() = 0;
    // Microsoft-specific extension to define it inline:
//  virtual ~base() = 0 {};
};

base::~base() {} // required if not using Microsoft extension

class derived : public base
{
public:
    derived() {}
    ~derived() {}
};

int main()
{
    derived aDerived; // destructor called when it goes out of scope
}
```

The example shows how a Microsoft compiler extension lets you add an inline definition to pure virtual `~base()`. You can also define it outside the class by using `base::~base() {}`.

When the object `aDerived` goes out of scope, the destructor for class `derived` is called. The compiler generates code to implicitly call the destructor for class `base` after the `derived` destructor. The empty implementation for the pure virtual function `~base` ensures that at least some implementation exists for the function. Without it, the linker generates an unresolved external symbol error for the implicit call.

> [!NOTE]
> In the preceding example, the pure virtual function `base::~base` is called implicitly from `derived::~derived`. It's also possible to call pure virtual functions explicitly by using a fully qualified member-function name. Such functions must have an implementation, or the call results in an error at link time.

## See also

[Inheritance](../cpp/inheritance-cpp.md)
