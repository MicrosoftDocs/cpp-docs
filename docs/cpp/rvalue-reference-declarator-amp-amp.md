---
description: "Learn more about: Rvalue reference declarator: &&"
title: "Rvalue reference declarator: &&"
ms.date: 09/27/2022
f1_keywords: ["&&"]
helpviewer_keywords: ["&& rvalue reference declarator"]
ms.assetid: eab0ce3a-c5a3-4992-aa70-6a8ab1f7491d
---
# Rvalue reference declarator: `&&`

Holds a reference to an rvalue expression.

## Syntax

*`rvalue-reference-type-id`*:\
&emsp;*`type-specifier-seq`* **`&&`** *`attribute-specifier-seq`*<sub>opt</sub> *`ptr-abstract-declarator`*<sub>opt</sub>

## Remarks

Rvalue references enable you to distinguish an lvalue from an rvalue. Lvalue references and rvalue references are syntactically and semantically similar, but they follow slightly different rules. For more information about lvalues and rvalues, see [Lvalues and Rvalues](../cpp/lvalues-and-rvalues-visual-cpp.md). For more information about lvalue references, see [Lvalue Reference Declarator: &](../cpp/lvalue-reference-declarator-amp.md).

The following sections describe how rvalue references support the implementation of *move semantics* and *perfect forwarding*.

## Move semantics

Rvalue references support the implementation of *move semantics*, which can significantly increase the performance of your applications. Move semantics enables you to write code that transfers resources (such as dynamically allocated memory) from one object to another. Move semantics works because it enables transfer of resources from temporary objects: ones that can't be referenced elsewhere in the program.

To implement move semantics, you typically provide a *move constructor,* and optionally a move assignment operator (**`operator=`**), to your class. Copy and assignment operations whose sources are rvalues then automatically take advantage of move semantics. Unlike the default copy constructor, the compiler doesn't provide a default move constructor. For more information about how to write and use a move constructor, see [Move constructors and move assignment operators](../cpp/move-constructors-and-move-assignment-operators-cpp.md).

You can also overload ordinary functions and operators to take advantage of move semantics. Visual Studio 2010 introduces move semantics into the C++ Standard Library. For example, the `string` class implements operations that use move semantics. Consider the following example that concatenates several strings and prints the result:

```cpp
// string_concatenation.cpp
// compile with: /EHsc
#include <iostream>
#include <string>
using namespace std;

int main()
{
   string s = string("h") + "e" + "ll" + "o";
   cout << s << endl;
}
```

Before Visual Studio 2010, each call to **`operator+`** allocates and returns a new temporary `string` object (an rvalue). **`operator+`** can't append one string to the other because it doesn't know whether the source strings are lvalues or rvalues. If the source strings are both lvalues, they might be referenced elsewhere in the program, and so must not be modified. You can modify **`operator+`** to take rvalues by using rvalue references, which can't be referenced elsewhere in the program. With this change, **`operator+`** can now append one string to another. The change significantly reduces the number of dynamic memory allocations that the `string` class must make. For more information about the `string` class, see [`basic_string` Class](../standard-library/basic-string-class.md).

Move semantics also helps when the compiler can't use Return Value Optimization (RVO) or Named Return Value Optimization (NRVO). In these cases, the compiler calls the move constructor if the type defines it.

To better understand move semantics, consider the example of inserting an element into a `vector` object. If the capacity of the `vector` object is exceeded, the `vector` object must reallocate enough memory for its elements, and then copy each element to another memory location to make room for the inserted element. When an insertion operation copies an element, it first creates a new element. Then it calls the copy constructor to copy the data from the previous element to the new element. Finally, it destroys the previous element. Move semantics enables you to move objects directly without having to make expensive memory allocation and copy operations.

To take advantage of move semantics in the `vector` example, you can write a move constructor to move data from one object to another.

For more information about the introduction of move semantics into the C++ Standard Library in Visual Studio 2010, see [C++ Standard Library](../standard-library/cpp-standard-library-reference.md).

## Perfect forwarding

Perfect forwarding reduces the need for overloaded functions and helps avoid the forwarding problem. The *forwarding problem* can occur when you write a generic function that takes references as its parameters. If it passes (or *forwards*) these parameters to another function, for example, if it takes a parameter of type `const T&`, then the called function can't modify the value of that parameter. If the generic function takes a parameter of type `T&`, then the function can't be called by using an rvalue (such as a temporary object or integer literal).

Ordinarily, to solve this problem, you must provide overloaded versions of the generic function that take both `T&` and `const T&` for each of its parameters. As a result, the number of overloaded functions increases exponentially with the number of parameters. Rvalue references enable you to write one version of a function that accepts arbitrary arguments. Then that function can forward them to another function as if the other function had been called directly.

Consider the following example that declares four types, `W`, `X`, `Y`, and `Z`. The constructor for each type takes a different combination of **`const`** and non-**`const`** lvalue references as its parameters.

```cpp
struct W
{
   W(int&, int&) {}
};

struct X
{
   X(const int&, int&) {}
};

struct Y
{
   Y(int&, const int&) {}
};

struct Z
{
   Z(const int&, const int&) {}
};
```

Suppose you want to write a generic function that generates objects. The following example shows one way to write this function:

```cpp
template <typename T, typename A1, typename A2>
T* factory(A1& a1, A2& a2)
{
   return new T(a1, a2);
}
```

The following example shows a valid call to the `factory` function:

```cpp
int a = 4, b = 5;
W* pw = factory<W>(a, b);
```

However, the following example doesn't contain a valid call to the `factory` function. It's because `factory` takes lvalue references that are modifiable as its parameters, but it's called by using rvalues:

```cpp
Z* pz = factory<Z>(2, 2);
```

Ordinarily, to solve this problem, you must create an overloaded version of the `factory` function for every combination of `A&` and `const A&` parameters. Rvalue references enable you to write one version of the `factory` function, as shown in the following example:

```cpp
template <typename T, typename A1, typename A2>
T* factory(A1&& a1, A2&& a2)
{
   return new T(std::forward<A1>(a1), std::forward<A2>(a2));
}
```

This example uses rvalue references as the parameters to the `factory` function. The purpose of the [`std::forward`](../standard-library/utility-functions.md#forward) function is to forward the parameters of the factory function to the constructor of the template class.

The following example shows the `main` function that uses the revised `factory` function to create instances of the `W`, `X`, `Y`, and `Z` classes. The revised `factory` function forwards its parameters (either lvalues or rvalues) to the appropriate class constructor.

```cpp
int main()
{
   int a = 4, b = 5;
   W* pw = factory<W>(a, b);
   X* px = factory<X>(2, b);
   Y* py = factory<Y>(a, 2);
   Z* pz = factory<Z>(2, 2);

   delete pw;
   delete px;
   delete py;
   delete pz;
}
```

## Properties of rvalue references

**You can overload a function to take an lvalue reference and an rvalue reference.**

By overloading a function to take a **`const`** lvalue reference or an rvalue reference, you can write code that distinguishes between non-modifiable objects (lvalues) and modifiable temporary values (rvalues). You can pass an object to a function that takes an rvalue reference unless the object is marked as **`const`**. The following example shows the function `f`, which is overloaded to take an lvalue reference and an rvalue reference. The `main` function calls `f` with both lvalues and an rvalue.

```cpp
// reference-overload.cpp
// Compile with: /EHsc
#include <iostream>
using namespace std;

// A class that contains a memory resource.
class MemoryBlock
{
   // TODO: Add resources for the class here.
};

void f(const MemoryBlock&)
{
   cout << "In f(const MemoryBlock&). This version can't modify the parameter." << endl;
}

void f(MemoryBlock&&)
{
   cout << "In f(MemoryBlock&&). This version can modify the parameter." << endl;
}

int main()
{
   MemoryBlock block;
   f(block);
   f(MemoryBlock());
}
```

This example produces the following output:

```Output
In f(const MemoryBlock&). This version can't modify the parameter.
In f(MemoryBlock&&). This version can modify the parameter.
```

In this example, the first call to `f` passes a local variable (an lvalue) as its argument. The second call to `f` passes a temporary object as its argument. Because the temporary object can't be referenced elsewhere in the program, the call binds to the overloaded version of `f` that takes an rvalue reference, which is free to modify the object.

**The compiler treats a named rvalue reference as an lvalue and an unnamed rvalue reference as an rvalue.**

Functions that take an rvalue reference as a parameter treat the parameter as an lvalue in the body of the function. The compiler treats a named rvalue reference as an lvalue. It's because a named object can be referenced by several parts of a program. It's dangerous to allow multiple parts of a program to modify or remove resources from that object. For example, if multiple parts of a program try to transfer resources from the same object, only the first transfer succeeds.

The following example shows the function `g`, which is overloaded to take an lvalue reference and an rvalue reference. The function `f` takes an rvalue reference as its parameter (a named rvalue reference) and returns an rvalue reference (an unnamed rvalue reference). In the call to `g` from `f`, overload resolution selects the version of `g` that takes an lvalue reference because the body of `f` treats its parameter as an lvalue. In the call to `g` from `main`, overload resolution selects the version of `g` that takes an rvalue reference because `f` returns an rvalue reference.

```cpp
// named-reference.cpp
// Compile with: /EHsc
#include <iostream>
using namespace std;

// A class that contains a memory resource.
class MemoryBlock
{
   // TODO: Add resources for the class here.
};

void g(const MemoryBlock&)
{
   cout << "In g(const MemoryBlock&)." << endl;
}

void g(MemoryBlock&&)
{
   cout << "In g(MemoryBlock&&)." << endl;
}

MemoryBlock&& f(MemoryBlock&& block)
{
   g(block);
   return move(block);
}

int main()
{
   g(f(MemoryBlock()));
}
```

This example produces the following output:

```cpp
In g(const MemoryBlock&).
In g(MemoryBlock&&).
```

In the example, the `main` function passes an rvalue to `f`. The body of `f` treats its named parameter as an lvalue. The call from `f` to `g` binds the parameter to an lvalue reference (the first overloaded version of `g`).

- **You can cast an lvalue to an rvalue reference.**

The C++ Standard Library [`std::move`](../standard-library/utility-functions.md#move) function enables you to convert an object to an rvalue reference to that object. You can also use the **`static_cast`** keyword to cast an lvalue to an rvalue reference, as shown in the following example:

```cpp
// cast-reference.cpp
// Compile with: /EHsc
#include <iostream>
using namespace std;

// A class that contains a memory resource.
class MemoryBlock
{
   // TODO: Add resources for the class here.
};

void g(const MemoryBlock&)
{
   cout << "In g(const MemoryBlock&)." << endl;
}

void g(MemoryBlock&&)
{
   cout << "In g(MemoryBlock&&)." << endl;
}

int main()
{
   MemoryBlock block;
   g(block);
   g(static_cast<MemoryBlock&&>(block));
}
```

This example produces the following output:

```cpp
In g(const MemoryBlock&).
In g(MemoryBlock&&).
```

**Function templates deduce their template argument types and then use reference collapsing rules.**

A function template that passes (or *forwards*) its parameters to another function is a common pattern. It's important to understand how template type deduction works for function templates that take rvalue references.

If the function argument is an rvalue, the compiler deduces the argument to be an rvalue reference. For example, assume you pass an rvalue reference to an object of type `X` to a function template that takes type `T&&` as its parameter. Template argument deduction deduces `T` to be `X`, so the parameter has type `X&&`. If the function argument is an lvalue or **`const`** lvalue, the compiler deduces its type to be an lvalue reference or **`const`** lvalue reference of that type.

The following example declares one structure template and then specializes it for various reference types. The `print_type_and_value` function takes an rvalue reference as its parameter and forwards it to the appropriate specialized version of the `S::print` method. The `main` function demonstrates the various ways to call the `S::print` method.

```cpp
// template-type-deduction.cpp
// Compile with: /EHsc
#include <iostream>
#include <string>
using namespace std;

template<typename T> struct S;

// The following structures specialize S by
// lvalue reference (T&), const lvalue reference (const T&),
// rvalue reference (T&&), and const rvalue reference (const T&&).
// Each structure provides a print method that prints the type of
// the structure and its parameter.

template<typename T> struct S<T&> {
   static void print(T& t)
   {
      cout << "print<T&>: " << t << endl;
   }
};

template<typename T> struct S<const T&> {
   static void print(const T& t)
   {
      cout << "print<const T&>: " << t << endl;
   }
};

template<typename T> struct S<T&&> {
   static void print(T&& t)
   {
      cout << "print<T&&>: " << t << endl;
   }
};

template<typename T> struct S<const T&&> {
   static void print(const T&& t)
   {
      cout << "print<const T&&>: " << t << endl;
   }
};

// This function forwards its parameter to a specialized
// version of the S type.
template <typename T> void print_type_and_value(T&& t)
{
   S<T&&>::print(std::forward<T>(t));
}

// This function returns the constant string "fourth".
const string fourth() { return string("fourth"); }

int main()
{
   // The following call resolves to:
   // print_type_and_value<string&>(string& && t)
   // Which collapses to:
   // print_type_and_value<string&>(string& t)
   string s1("first");
   print_type_and_value(s1);

   // The following call resolves to:
   // print_type_and_value<const string&>(const string& && t)
   // Which collapses to:
   // print_type_and_value<const string&>(const string& t)
   const string s2("second");
   print_type_and_value(s2);

   // The following call resolves to:
   // print_type_and_value<string&&>(string&& t)
   print_type_and_value(string("third"));

   // The following call resolves to:
   // print_type_and_value<const string&&>(const string&& t)
   print_type_and_value(fourth());
}
```

This example produces the following output:

```cpp
print<T&>: first
print<const T&>: second
print<T&&>: third
print<const T&&>: fourth
```

To resolve each call to the `print_type_and_value` function, the compiler first does template argument deduction. The compiler then applies reference collapsing rules when it replaces the parameter types with the deduced template arguments. For example, passing the local variable `s1` to the `print_type_and_value` function causes the compiler to produce the following function signature:

```cpp
print_type_and_value<string&>(string& && t)
```

The compiler uses reference collapsing rules to reduce the signature:

```cpp
print_type_and_value<string&>(string& t)
```

This version of the `print_type_and_value` function then forwards its parameter to the correct specialized version of the `S::print` method.

The following table summarizes the reference collapsing rules for template argument type deduction:

| Expanded type | Collapsed type |
|--|--|
| `T& &` | `T&` |
| `T& &&` | `T&` |
| `T&& &` | `T&` |
| `T&& &&` | `T&&` |

Template argument deduction is an important element of implementing perfect forwarding. The [Perfect forwarding](#perfect-forwarding) section describes perfect forwarding in more detail.

## Summary

Rvalue references distinguish lvalues from rvalues. To improve the performance of your applications, they can eliminate the need for unnecessary memory allocations and copy operations. They also enable you to write a function that accepts arbitrary arguments. That function can forward them to another function as if the other function had been called directly.

## See also

[Expressions with unary operators](../cpp/expressions-with-unary-operators.md)\
[Lvalue reference declarator: `&`](../cpp/lvalue-reference-declarator-amp.md)\
[Lvalues and rvalues](../cpp/lvalues-and-rvalues-visual-cpp.md)\
[Move constructors and move assignment operators (C++)](../cpp/move-constructors-and-move-assignment-operators-cpp.md)\
[C++ Standard Library](../standard-library/cpp-standard-library-reference.md)
