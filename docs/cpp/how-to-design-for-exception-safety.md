---
description: "Learn more about: How to: Design for exception safety"
title: "How to: Design for exception safety"
ms.custom: "how-to"
ms.date: "11/19/2019"
ms.topic: "conceptual"
ms.assetid: 19ecc5d4-297d-4c4e-b4f3-4fccab890b3d
---
# How to: Design for exception safety

One of the advantages of the exception mechanism is that execution, together with data about the exception, jumps directly from the statement that throws the exception to the first catch statement that handles it. The handler may be any number of levels up in the call stack. Functions that are called between the try statement and the throw statement are not required to know anything about the exception that is thrown.  However, they have to be designed so that they can go out of scope "unexpectedly" at any point where an exception might propagate up from below, and do so without leaving behind partially created objects, leaked memory, or data structures that are in unusable states.

## Basic techniques

A robust exception-handling policy requires careful thought and should be part of the design process. In general, most exceptions are detected and thrown at the lower layers of a software module, but typically these layers do not have enough context to handle the error or expose a message to end users. In the middle layers, functions can catch and rethrow an exception when they have to inspect the exception object, or they have additional useful information to provide for the upper layer that ultimately catches the exception. A function should catch and "swallow" an exception only if it is able to completely recover from it. In many cases, the correct behavior in the middle layers is to let an exception propagate up the call stack. Even at the highest layer, it might be appropriate to let an unhandled exception terminate a program if the exception leaves the program in a state in which its correctness cannot be guaranteed.

No matter how a function handles an exception, to help guarantee that it is "exception-safe," it must be designed according to the following basic rules.

### Keep resource classes simple

When you encapsulate manual resource management in classes, use a class that does nothing except manage a single resource. By keeping the class simple, you reduce the risk of introducing resource leaks. Use [smart pointers](smart-pointers-modern-cpp.md) when possible, as shown in the following example. This example is intentionally artificial and simplistic to highlight the differences when `shared_ptr` is used.

```cpp
// old-style new/delete version
class NDResourceClass {
private:
    int*   m_p;
    float* m_q;
public:
    NDResourceClass() : m_p(0), m_q(0) {
        m_p = new int;
        m_q = new float;
    }

    ~NDResourceClass() {
        delete m_p;
        delete m_q;
    }
    // Potential leak! When a constructor emits an exception,
    // the destructor will not be invoked.
};

// shared_ptr version
#include <memory>

using namespace std;

class SPResourceClass {
private:
    shared_ptr<int> m_p;
    shared_ptr<float> m_q;
public:
    SPResourceClass() : m_p(new int), m_q(new float) { }
    // Implicitly defined dtor is OK for these members,
    // shared_ptr will clean up and avoid leaks regardless.
};

// A more powerful case for shared_ptr

class Shape {
    // ...
};

class Circle : public Shape {
    // ...
};

class Triangle : public Shape {
    // ...
};

class SPShapeResourceClass {
private:
    shared_ptr<Shape> m_p;
    shared_ptr<Shape> m_q;
public:
    SPShapeResourceClass() : m_p(new Circle), m_q(new Triangle) { }
};
```

### Use the RAII idiom to manage resources

To be exception-safe, a function must ensure that objects that it has allocated by using `malloc` or **`new`** are destroyed, and all resources such as file handles are closed or released even if an exception is thrown. The *Resource Acquisition Is Initialization* (RAII) idiom ties management of such resources to the lifespan of automatic variables. When a function goes out of scope, either by returning normally or because of an exception, the destructors for all fully-constructed automatic variables are invoked. An RAII wrapper object such as a smart pointer calls the appropriate delete or close function in its destructor. In exception-safe code, it is critically important to pass ownership of each resource immediately to some kind of RAII object. Note that the `vector`, `string`, `make_shared`, `fstream`, and similar classes handle acquisition of the resource for you.  However, `unique_ptr` and traditional `shared_ptr` constructions are special because resource acquisition is performed by the user instead of the object; therefore, they count as *Resource Release Is Destruction* but are questionable as RAII.

## The three exception guarantees

Typically, exception safety is discussed in terms of the three exception guarantees that a function can provide: the *no-fail guarantee*, the *strong guarantee*, and the *basic guarantee*.

### No-fail guarantee

The no-fail (or, "no-throw") guarantee is the strongest guarantee that a function can provide. It states that the function will not throw an exception or allow one to propagate. However, you cannot reliably provide such a guarantee unless (a) you know that all the functions that this function calls are also no-fail, or (b) you know that any exceptions that are thrown are caught before they reach this function, or (c) you know how to catch and correctly handle all exceptions that might reach this function.

Both the strong guarantee and the basic guarantee rely on the assumption that the destructors are no-fail. All containers and types in the Standard Library guarantee that their destructors do not throw. There is also a converse requirement: The Standard Library requires that user-defined types that are given to it—for example, as template arguments—must have non-throwing destructors.

### Strong guarantee

The strong guarantee states that if a function goes out of scope because of an exception, it will not leak memory and program state will not be modified. A function that provides a strong guarantee is essentially a transaction that has commit or rollback semantics: either it completely succeeds or it has no effect.

### Basic guarantee

The basic guarantee is the weakest of the three. However, it might be the best choice when a strong guarantee is too expensive in memory consumption or in performance. The basic guarantee states that if an exception occurs, no memory is leaked and the object is still in a usable state even though the data might have been modified.

## Exception-safe classes

A class can help ensure its own exception safety, even when it is consumed by unsafe functions, by preventing itself from being partially constructed or partially destroyed. If a class constructor exits before completion, then the object is never created and its destructor will never be called. Although automatic variables that are initialized prior to the exception will have their destructors invoked, dynamically allocated memory or resources that are not managed by a smart pointer or similar automatic variable will be leaked.

The built-in types are all no-fail, and the Standard Library types support the basic guarantee at a minimum. Follow these guidelines for any user-defined type that must be exception-safe:

- Use smart pointers or other RAII-type wrappers to manage all resources. Avoid resource management functionality in your class destructor, because the destructor will not be invoked if the constructor throws an exception. However, if the class is a dedicated resource manager that controls just one resource, then it's acceptable to use the destructor to manage resources.

- Understand that an exception thrown in a base class constructor cannot be swallowed in a derived class constructor. If you want to translate and re-throw the base class exception in a derived constructor, use a function try block.

- Consider whether to store all class state in a data member that is wrapped in a smart pointer, especially if a class has a concept of "initialization that is permitted to fail." Although C++ allows for uninitialized data members, it does not support uninitialized or partially initialized class instances. A constructor must either succeed or fail; no object is created if the constructor does not run to completion.

- Do not allow any exceptions to escape from a destructor. A basic axiom of C++ is that destructors should never allow an exception to propagate up the call stack. If a destructor must perform a potentially exception-throwing operation, it must do so in a try catch block and swallow the exception. The standard library provides this guarantee on all destructors it defines.

## See also

[Modern C++ best practices for exceptions and error handling](errors-and-exception-handling-modern-cpp.md)<br/>
[How to: Interface Between Exceptional and Non-Exceptional Code](how-to-interface-between-exceptional-and-non-exceptional-code.md)
