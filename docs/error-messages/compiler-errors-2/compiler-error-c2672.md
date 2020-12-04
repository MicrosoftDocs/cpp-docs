---
description: "Learn more about: Compiler Error C2672"
title: "Compiler Error C2672"
ms.date: "10/24/2017"
f1_keywords: ["C2672"]
helpviewer_keywords: ["C2672"]
ms.assetid: 7e86338a-2d4b-40fe-9dd2-ac6886f3f31a
---
# Compiler Error C2672

> '*function*': no matching overloaded function found

The compiler could not find an overloaded function that matches the specified function. No function was found that takes matching parameters, or no matching function has the required accessibility in context.

When used by certain standard library containers or algorithms, your types must provide accessible members or friend functions that satisfy the requirements of the container or algorithm. For example, your iterator types should derive from `std::iterator<>`. Comparison operations or use of other operators on container element types may require the type be considered as both a left-hand and a right-hand operand. Use of the type as a right-hand operand can require implementation of the operator as a non-member function of the type.

## Example

Versions of the compiler before Visual Studio 2017 did not perform access checking on qualified names in some template contexts. This can interfere with expected SFINAE behavior where the substitution is expected to fail due to the inaccessibility of a name. This could have potentially caused a crash or unexpected behavior at runtime due to the compiler incorrectly calling the wrong overload of the operator. In Visual Studio 2017, a compiler error is raised.

This example compiles in Visual Studio 2015 but raises an error in Visual Studio 2017. To fix this issue, make the template parameter member accessible where it is evaluated.

```cpp
#include <type_traits>

template <class T> class S {
// public:    // Uncomment this line to fix
    typedef typename T type;
};

template <class T, std::enable_if<std::is_integral<typename S<T>::type>::value, T> * = 0>
bool f(T x)
{
    return (x == 0);
}

int main()
{
    f(10); // C2672: No matching overloaded function found.
}
```
