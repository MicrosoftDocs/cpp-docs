---
title: "Welcome back to C++ (Modern C++)"
ms.date: "11/19/2019"
ms.topic: "conceptual"
ms.assetid: 1cb1b849-ed9c-4721-a972-fd8f3dab42e2
---
# Welcome back to C++ (Modern C++)

Over the past 25 years, C++ has been one of the most widely used programming languages in the world. Well-written C++ programs are fast and efficient. The language is more flexible than other languages because it enables you to access low-level hardware features to maximize speed and minimize memory requirements. You can use it to create a wide range of apps—from games, to high-performance scientific software, to device drivers, embedded programs, libraries and compilers for other programming languages, Windows client apps, and much more.

One of the original requirements for C++ was backward compatibility with the C language. As a result C++ has always permitted C-style programming with raw pointers, arrays, null-terminated character strings, custom data structures, and other features that may enable great performance but can also spawn bugs and complexity. The evolution of C++ has emphasized features that greatly reduce the need to C-style idioms. The old C-programming facilities are there when you need them, but with modern C++ code you should need them less and less. Modern C++ code is simpler, safer, more elegant, and still as fast as ever.

The following sections provide an overview of the main features of modern C++. Unless noted otherwise, the features listed here are available in C++11 and later. In the Microsoft C++ compiler, you can set the [/std](../build/std-specify-language-standard-version.md) compiler option to specify which version of the standard to use for your project.

## Prevent memory leaks through RAII and smart pointers

One of the major classes of bugs in C-style programming is the *memory leak* due to failure to release memory or other resources. Modern C++ emphasizes the principle of *resource acquisition is initialization* which states that any resource (heap memory, file handles, sockets, and so on) should be *owned* by an object that creates, or receives, the newly-allocated resource in its constructor, and deletes in its destructor. By adhering to the principle of RAII, you guarantee that all resources will be properly returned to the operating system when the owning object goes out of scope. To support easy adoption of RAII principles, the C++ Standard Library provides three smart pointer types: [std::unique_ptr](../standard-library/unique-ptr-class.md), [std::shared_ptr](../standard-library/shared-ptr-class.md), and [std::weak_ptr](../standard-library/weak-ptr-class.md). A smart pointer handles the allocation and deletion of the memory it owns. The following example shows a class with an array member that is allocated on the heap in the call to `make_unique()`. The calls to **new** and **delete** are encapsulated by the `unique_ptr` class. When a `widget` object goes out of scope, the unique_ptr destructor will be invoked and it will release the memory that was allocated for the array.  

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

Whenever possible, use a smart pointer when allocating heap memory. If you must use the new and delete operators explicitly, follow the principle of RAII. For more information, see [Object lifetime and resource management (RAII)](object-lifetime-and-resource-management-modern-cpp.md).

## Use std::string and std::string_view instead of C-style char arrays

C-style strings are another major source of bugs. By using [std::string and std::wstring](../standard-library/basic-string-class.md) you can eliminate virtually all the errors associated with C-style strings, and gain the benefit of member functions for searching, appending, prepending, and so on. Both are highly optimized for speed. When passing a string to a function that requires only read-only access, in (C++17) you can use [std::string_view](../standard-library/basic-string-view-class.md) for even greater performance benefit.

## Use std::vector and other Standard Library containers whenever possible

The Standard Library containers all follow the principle of RAII, provide iterators for safe traversal of elements, are highly optimized for performance and have been thoroughly tested for correctness. By using these containers whenever possible, you eliminate the potential for bugs or inefficiencies that might be introduced in custom data structures. By default, use [vector](../standard-library/vector-class.md) as the preferred sequential container in C++. This is equivalent to `List<T>` in .NET languages.

```cpp
vector<string> apples;
apples.push_back("Granny Smith");
```

Use [map](../standard-library/map-class.md) (not `unordered_map`) as the default associative container. Use [set](../standard-library/set-class.md), [multimap](../standard-library/multimap-class.md), and [multiset](../standard-library/multiset-class.md) for degenerate and multi cases.

```cpp
map<string, string> apple_color;
// ...
apple_color["Granny Smith"] = "Green";
```

When performance optimization is needed, consider using:

- The [array](../standard-library/array-class-stl.md) type when embedding is important, for example, as a class member.

- Unordered associative containers such as [unordered_map](../standard-library/unordered-map-class.md). These have lower per-element overhead and constant-time lookup, but they can be harder to use correctly and efficiently.

- Sorted `vector`. For more information, see [Algorithms](../cpp/algorithms-modern-cpp.md).

Don’t use C-style arrays. For older APIs that need direct access to the data, use accessor methods such as `f(vec.data(), vec.size());` instead. For more information about containers, see [C++ Standard Library Containers](../standard-library/stl-containers.md).

## Prefer Standard Library algorithms

Before you assume that you need to write a custom algorithm for your program, first review the C++ Standard Library [algorithms](../standard-library/algorithm.md). The Standard Library contains an ever-growing assortment of algorithms for many common operations such as searching, sorting, filtering, and randomizing. The math library is extensive. Starting in C++17, parallel versions of many algorithms are provided.

Here are some important examples:

- **for_each**, which is the default traversal algorithm. (Also **transform** for not-in-place semantics.)

- **find_if**, which is the default search algorithm.

- **sort**, **lower_bound**, and the other default sorting and searching algorithms.

To write a comparator, use strict **<** and use *named lambdas* when you can.

```cpp
auto comp = [](const widget& w1, const widget& w2)
     { return w1.weight() < w2.weight(); }

sort( v.begin(), v.end(), comp );

auto i = lower_bound( v.begin(), v.end(), comp );
```

### Use auto instead of explicit type names

C++11 introduced the [auto](auto-cpp.md) keyword for use in variable, function, and template declarations. **auto** tells the compiler to deduce the type of the object so that you do not have to type it explicitly. **auto** is especially useful when the deduced type is a nested template:

```cpp
map<int,list<string>>::iterator i = m.begin(); // C-style
auto i = m.begin(); // modern C++
```

## Use range-based for loops to eliminate indexing errors

C-style iteration over arrays and containers is prone to indexing errors and is also tedious to type. To eliminate these errors, and make your code more readable, use range-based for loops with Standard Library containers as well as raw arrays. For more information, see [Range-based for statement](../cpp/range-based-for-statement-cpp.md).

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

For more information, see [Brace initialization](initializing-classes-and-structs-without-constructors-cpp.md).

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

As a general rule, modern C++ emphasizes exceptions rather than error codes as the best way to report and handle error conditions. For more information, see [Modern C++ best practices for exceptions and error handling](errors-and-exception-handling-modern-cpp.md).

## std::atomic for lock-free inter-thread communication

Use the C++ Standard Library [std::atomic](../standard-library/atomic-structure.md) struct and related types for inter-thread communication mechanisms.

## std::variant instead of unions (C++17)

Unions are commonly used in C-style programming to conserve memory by enabling members of different types to occupy the same memory location. However, unions are not type-safe and are prone to programming errors. C++17 introduces the [std::variant](../standard-library/variant-class.md) class as a more robust and safe alternative to unions. The [std::visit](../standard-library/visit) function can be used to access the members of a `variant` type in a type-safe manner.

## See also

[C++ Language Reference](../cpp/cpp-language-reference.md)<br/>
[Lambda Expressions](../cpp/lambda-expressions-in-cpp.md)<br/>
[C++ Standard Library](../standard-library/cpp-standard-library-reference.md)<br/>
[Microsoft C++ language conformance table](../overview/visual-cpp-language-conformance.md)