---
title: "Welcome Back to C++ (Modern C++)"
ms.date: "11/12/2019"
ms.topic: "conceptual"
ms.assetid: 1cb1b849-ed9c-4721-a972-fd8f3dab42e2
---
# Welcome Back to C++ (Modern C++)

Over the past 25 years, C++ has been one of the most widely used programming languages in the world. Well-written C++ programs are fast and efficient. The language is more flexible than other languages because it enables you to access low-level hardware features to maximize speed and minimize memory requirements. You can use it to create a wide range of apps—from games, to high-performance scientific software, to device drivers, embedded programs, libraries and compilers for other programming languages, Windows client apps, and much more.

One of the original requirements for C++ was backward compatibility with the C language. As a result C++ has always permitted C-style programming with raw pointers, arrays, null-terminated character strings, custom data structures, and other features that may enable great performance but can also spawn bugs and complexity. The evolution of C++ has emphasized features that greatly reduce the need to C-style idioms. The old C-programming facilities are there when you need them, but with modern C++ code you should need them less and less. Modern C++ code is simpler, safer, more elegant, and still as fast as ever.

The following sections provide an overview of the main features of modern C++:

## Stack-based scope for smaller objects

It has been said that the reason C++ has no built-in garbage collection mechanism is because it doesn't produce much "garbage", in other words, memory allocations on the heap that need to be deleted. Small objects should be allocated directly on the stack, which is much faster than heap allocations and requires no deletions. The object simply goes out of scope along with its enclosing block:

```cpp
EXAMPLE TBD
```

## Pointers and memory management

When heap allocation is needed, use one of the Standard Library smart pointer types and declare the smart pointer on the stack. A smart pointer is a class that contains a pointer and possibly a few helper functions. Its destructor deletes the pointer memory automatically when the object goes out of scope. The Standard Library provides std::unique_ptr for pointers that don't need to be copied, and std::shared_ptr for pointers that enable copying. std::weak_ptr is provided to help avoid cycles in 

```cpp
EXAMPLE TBD
```

### Smart pointers for heap-allocated objects

### [Object Lifetime And Resource Management](../cpp/object-lifetime-and-resource-management-modern-cpp.md)

### [Objects Own Resources (RAII)](../cpp/objects-own-resources-raii.md)

## Variable and function declarations

### Auto type inference instead of explicit type names

for variables and function return types

### constexpr expressions instead of macros

Use in place of macros. 

### Uniform initialization

## Data structures

### std::vector and other Standard Library containers

[C++ Standard Library](../standard-library/cpp-standard-library-header-files.md) containers like `vector`, `list`, and `map` instead of raw arrays or custom containers. See [\<vector>](../standard-library/vector.md), [\<list>](../standard-library/list.md), and [\<map>](../standard-library/map.md).

## Range-based for loops

Use range-based for loops to write more robust loops that work with arrays, C++ Standard Library containers, and Windows Runtime collections in the form `for ( for-range-declaration : expression )`. This is part of the Core Language support. For more information, see [Range-based for Statement (C++)](../cpp/range-based-for-statement-cpp.md).

### String classes instead of character arrays

`std::string`, `std::wstring` and [std:;string_view](../standard-library/string-view-class.md)types (see [\<string>](../standard-library/string.md)) instead of raw `char[]` arrays.


## Standard Library algorithms

C++ Standard Library [algorithms](../standard-library/algorithm.md) instead of manually coded ones. parallel versions in C++17


## Move semantics

## Lambda expressions instead of function pointers

Inline [lambda expressions](../cpp/lambda-expressions-in-cpp.md) instead of small functions implemented separately.

## Exceptions

Exceptions, to report and handle error conditions.


## Lock-free inter-thread communication

 using C++ Standard Library `std::atomic<>` (see [\<atomic>](../standard-library/atomic.md)) instead of other inter-thread communication mechanisms.

## - [Pimpl For Compile-Time Encapsulation](../cpp/pimpl-for-compile-time-encapsulation-modern-cpp.md)

## [Portability At ABI Boundaries](../cpp/portability-at-abi-boundaries-modern-cpp.md)- 

## std::variant instead of unions

## structured bindings, std::any, std::optional, std::tuple

## literals, digit separators

## standard attributes


Modern C++ incorporates two kinds of polymorphism: compile-time, through templates, and run-time, through inheritance and virtualization. You can mix the two kinds of polymorphism to great effect. The C++ Standard Library template `shared_ptr` uses internal virtual methods to accomplish its apparently effortless type erasure. But don't over-use virtualization for polymorphism when a template is the better choice. Templates can be very powerful.

If you're coming to C++ from another language, especially from a managed language in which most of the types are reference types and very few are value types, know that C++ classes are value types by default. But you can specify them as reference types to enable polymorphic behavior that supports object-oriented programming. A helpful perspective: value types are more about memory and layout control, reference types are more about base classes and virtual functions to support polymorphism. By default, value types are copyable—they each have a copy constructor and a copy assignment operator. When you specify a reference type, make the class non-copyable—disable the copy constructor and copy assignment operator—and use a virtual destructor, which supports the polymorphism. Value types are also about the contents, which, when they are copied, give you two independent values that you can modify separately. But reference types are about identity—what kind of object it is—and for this reason are sometimes referred to as polymorphic types.


- [C++ Type System](../cpp/cpp-type-system-modern-cpp.md)

- [Uniform Initialization and Delegating Constructors](../cpp/uniform-initialization-and-delegating-constructors.md)


- [Smart Pointers](../cpp/smart-pointers-modern-cpp.md)

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