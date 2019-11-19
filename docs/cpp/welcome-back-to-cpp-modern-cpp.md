---
title: "Welcome Back to C++ (Modern C++)"
ms.date: "11/12/2019"
ms.topic: "conceptual"
ms.assetid: 1cb1b849-ed9c-4721-a972-fd8f3dab42e2
---
# Welcome Back to C++ (Modern C++)

Over the past 25 years, C++ has been one of the most widely used programming languages in the world. Well-written C++ programs are fast and efficient. The language is more flexible than other languages because it enables you to access low-level hardware features to maximize speed and minimize memory requirements. You can use it to create a wide range of apps—from games, to high-performance scientific software, to device drivers, embedded programs, libraries and compilers for other programming languages, Windows client apps, and much more.

One of the original requirements for C++ was backward compatibility with the C language. As a result C++ has always permitted C-style programming with raw pointers, arrays, null-terminated character strings, custom data structures, and other features that may enable great performance but can also spawn bugs and complexity. The evolution of C++ has emphasized features that greatly reduce the need to C-style idioms. The old C-programming facilities are there when you need them, but with modern C++ code you should need them less and less. Modern C++ code is simpler, safer, more elegant, and still as fast as ever.

The following sections provide an overview of the main features of modern C++. Unless noted otherwise, the features listed here are available in C++11 and later. In the Microsoft C++ compiler, you can set the [/std](../build/std-specify-language-standard-version.md) compiler option to specify which version of the standard to use for your project.

## Prevent memory leaks through RAII and smart pointers

Unlike managed languages, C++ has no garbage collection process that releases heap memory and other resources as a program runs. A program is responsible for returning all acquired resources to the operating system. Failure to release a resource results in a *leak* and renders the resource unavailable to other programs. Memory leaks in particular are a common cause of bugs in C-style programming. Modern C++ avoids using heap memory as much as possible by declaring objects on the stack. When an resource is too large for the stack, then it should be *owned* by an object that is responsible for releasing the resource in its destructor. The principle that *objects own resources* is also known as "resource acquisition is initialization" or "RAII". The owning object itself is declared on the stack, so that when the goes out of scope, its destructor is automatically invoked. In this way, garbage collection in C++ is closely related to object lifetime and is deterministic. A resource is always released at a known point in the program, which you can control. Only deterministic destructors like those in C++ can handle memory and non-memory resources equally. 

The following example shows a simple object `w`. It is declared on the stack at function scope, and is destroyed at the end of the function block. The object `w` owns no *resources* (such as heap-allocated memory). Its only member `g` is itself declared on the stack and simply goes out of scope along with `w`. Therefore, no special code is needed in the `widget` destructor.

```cpp
class widget {
private:
    gadget g;   // lifetime automatically tied to enclosing object
public:
    void draw();
};

void functionUsingWidget () {
    widget w;   // lifetime automatically tied to enclosing scope
                // constructs w, including the w.g gadget member
    // ...
    w.draw();
    // ...
} // automatic destruction and deallocation for w and w.g
  // automatic exception safety,
  // as if "finally { w.dispose(); w.g.dispose(); }"
```

In the following example, `w` owns a memory resource and therefore must have code in its destructor to delete the memory.
 
```cpp
class widget
{
private:
    int* data;
public:
    widget(const int size) { data = new int[size]; } // acquire
    ~widget() { delete[] data; } // release
    void do_something() {}
};

void functionUsingWidget() {
    widget w(1000000);   // lifetime automatically tied to enclosing scope
                        // constructs w, including the w.data member
    w.do_something();

} // automatic destruction and deallocation for w and w.data

```

Since C++11, there is a better way to write the previous example, by using a smart pointer from the Standard Library. The smart pointer handles the allocation and deletion of the memory it owns. This eliminates the need for an explicit destructor in the `widget` class.

```cpp
#include <memory>
class widget
{
private:
    std::unique_ptr<int> data;
public:
    widget(const int size) { data = std::make_unique<int>(size); }
    void do_something() {}
};

void functionUsingWidget() {
    widget w(1000000);   // lifetime automatically tied to enclosing scope
                // constructs w, including the w.data gadget member
    // ...
    w.do_something();
    // ...
} // automatic destruction and deallocation for w and w.data

```

By using smart pointers for memory allocation, and handling other resources such as file handles, sockets, and so on in a similar way in your own classes, you can eliminate the potential for memory leaks. For more information, see [Smart pointers](smart-pointers-modern-cpp.md).

C++ is designed to ensure that objects are destroyed at the correct times, that is, as blocks are exited, in reverse order of construction. When an object is destroyed, its bases and members are destroyed in a particular order. When objects are declared outside of any block, at global scope, problems can arise. When the constructor of a global object throws an exception, typically, the app faults in a way that can be difficult to debug.

```cpp
widget w; // avoid global scope!

int main()
{
    // local function scope OK
    widget w;
}
```

## Prefer std::string, std::vector and other Standard Library containers

Use [C++ Standard Library](../standard-library/cpp-standard-library-header-files.md) containers whenever possible instead of raw arrays or custom containers. Use `std::string`, `std::wstring` and [std::string_view](../standard-library/string-view-class.md) types instead of raw `char[]` arrays. Use [std::vector](../standard-library/vector-class.md) as the default choice for most other kinds of aggregate data. The Standard Library containers all follow the principle of RAII, provide iterators for safe traversal of elements, are highly optimized for performance and have been thoroughly tested for correctness. For more information, see [\<vector>](../standard-library/vector.md), [\<list>](../standard-library/list.md), and [\<map>](../standard-library/map.md).

## Prefer Standard Library algorithms

Before you assume that you need to write a custom algorithm for your program, first review the C++ Standard Library [algorithms](../standard-library/algorithm.md). The Standard Library contains an ever-growing assortment of algorithms for many common operations such as searching, sorting, filtering, and randomizing. The math library is extensive. Starting in C++17, parallel versions of many algorithms are provided.

### Use auto instead of explicit type names

C++11 introduced the [auto](auto-cpp.md) keyword for use in variable, function, and template declarations. **auto** tells the compiler to deduce the type of the object so that you do not have to type it explicitly. **auto** is especially useful when the deduced type is a nested template:

```cpp
map<int,list<string>>::iterator i = m.begin(); // C-style
auto i = m.begin(); // modern C++
```

## Use range-based for loops to eliminate indexing errors

C-style iteration over arrays and containers is prone to indexing errors and is also tedious to type. To eliminate these errors, and make your code more readable, use range-based for loops with Standard Library containers as well as raw arrays. For more information, see [Range-based for Statement (C++)](../cpp/range-based-for-statement-cpp.md).

```cpp
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v {1,2,3};

    // C-style
    for(int i = 0; i < v.size(); ++i)
    {
        std::cout << v[i];
    }

    // Modern C++:
    for(auto& num : v)
    {
        std::cout << num;
    }
}
```

### Use constexpr expressions instead of macros

Macros in C and C++ are tokens that are processed by the preprocessor prior to compilation. Each instance of a macro token is replaced with its defined value or expression before the file is compiled. Macros are commonly used in C-style programming to define compile-time constant values. However, macros are error-prone and difficult to debug. In modern C++, you should prefer [constexpr](constexpr-cpp.md) variables for compile-time constants:

```cpp
#define SIZE 10 / C-style
constexpr int size = 10; // modern C++
```

### Uniform initialization

In modern C++, you can use brace initialization for any type. This form of initialization is especially convenient when initializing arrays, vectors, or other containers. In the following example, `v2` is initialized with 3 instances of `S`. `v3` is initialized with 3 instances of `S` which are themselves initialized with braces. The compiler infers the type of each element based on the declared type of `v3`.

```cpp
#include <vector>

struct S
{
    std::string name;
    float num;
    S(std::string s, float f) : name(s), num(f) {}
};

int main()
{
    // C-style initialization
    std::vector<S> v;
    S s1("Norah", 2.7);
    S s2("Frank", 3.5);
    S s3("Jeri", 85.9);

    v.push_back(s1);
    v.push_back(s2);
    v.push_back(s3);

    // Modern C++:
    std::vector<S> v2 {s1, s2, s3};

    // or...
    std::vector<S> v3{ {"Norah", 2.7}, {"Frank", 3.5}, {"Jeri", 85.9} };

}
```

## Move semantics to avoid unnecessary copies

Modern C++ provides *move semantics* which make it possible to eliminate unnecessary memory copies which in earlier versions of the language were unavoidable in certain situations. A *move* operation transfers ownership of a resource from one object to the next without making a copy. When implementing a class that owns a resource such as heap memory, file handles, and so on, you can define a *move constructor* and *move assignment operator* for it. The compiler will choose these special members during overload resolution in situations where a copy is not needed. The Standard Library container types invoke the move constructor on objects if one is defined. For more information, see [Move Constructors and Move Assignment Operators (C++)](move-constructors-and-move-assignment-operators-cpp.md).

## Lambda expressions instead of function pointers

In C-style programming, a function can be passed to another function by means of a *function pointer*. Function pointers are inconvenient to maintain and understand because the function they refer to may be defined elsewhere in the source code, far away from the point at which it is being invoked. Also, they are not type-safe. Modern C++ provides function objects, classes that override the [()](function-call-operator-parens.md) operator which enables them to be called like a function. The most convenient way to create function objects is with inline [lambda expressions](../cpp/lambda-expressions-in-cpp.md). The following example shows how to use a lambda expression to pass a function object, that the `for_each` function will invoke on each element in the vector:

```cpp
    std::vector<int> v {1,2,3,4,5};
    int x = 2;
    int y = 4;
    auto result = find_if(begin(v), end(v), [=](int i) { return i > x && i < y; });
```

The lambda expression `[=](int i) { return i > x && i < y; }` can be read as "function that takes a single argument of type `int` and returns a boolean that indicates whether the expression is true. Notice that the variables `x` and `y` from the surrounding context can be used in the lambda. The `[=]` specifies that those variables are *captured* by value; in other words the lambda expression has its own copies of those values.

## Exceptions

As a general rule, modern C++ emphasizes exceptions rather than error codes as the best way to report and handle error conditions. However, exceptions are not appropriate for all kinds of development projects. 

## Lock-free inter-thread communication

 using C++ Standard Library `std::atomic<>` (see [\<atomic>](../standard-library/atomic.md)) instead of other inter-thread communication mechanisms.

## - [Pimpl For Compile-Time Encapsulation](../cpp/pimpl-for-compile-time-encapsulation-modern-cpp.md)

## [Portability At ABI Boundaries](../cpp/portability-at-abi-boundaries-modern-cpp.md)- 

## std::variant instead of unions

## structured bindings, std::any, std::optional, std::tuple

## literals, digit separators

## standard attributes


 - Modules

 - Package managers 
- [C++ Type System](../cpp/cpp-type-system-modern-cpp.md)

- [Pimpl For Compile-Time Encapsulation](../cpp/pimpl-for-compile-time-encapsulation-modern-cpp.md)

- [Containers](../cpp/containers-modern-cpp.md)

- [Algorithms](../cpp/algorithms-modern-cpp.md)

- [String and I/O Formatting (Modern C++)](../cpp/string-and-i-o-formatting-modern-cpp.md)

- [Errors and Exception Handling](../cpp/errors-and-exception-handling-modern-cpp.md)

- [Portability At ABI Boundaries](../cpp/portability-at-abi-boundaries-modern-cpp.md)

## See also

[C++ Language Reference](../cpp/cpp-language-reference.md)<br/>
[Lambda Expressions](../cpp/lambda-expressions-in-cpp.md)<br/>
[C++ Standard Library](../standard-library/cpp-standard-library-reference.md)<br/>
[Microsoft C++ language conformance table](../overview/visual-cpp-language-conformance.md)