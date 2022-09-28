---
description: "Learn about the causes of Compiler error C7510 and how to fix it."
title: "Compiler Error C7510"
ms.date: 04/21/2021
f1_keywords: ["C7510"]
helpviewer_keywords: ["C7510"]
---
# Compiler Error C7510

> '*type-name*': use of dependent template name must be prefixed with 'template'\
> '*type-name*': use of dependent type name must be prefixed with 'typename'

In [`/permissive-`](../../build/reference/permissive-standards-conformance.md) mode, the compiler requires the **`template`** keyword to precede a template name when it comes after a dependent [`nested-name-specifier`](../../cpp/scope-resolution-operator.md). Similar rules hold for types qualified by **`typename`**.

## Remarks

Compiler behavior has changed starting in Visual Studio 2017 version 15.8 under [`/permissive-`](../../build/reference/permissive-standards-conformance.md) mode. The compiler requires the **`template`** or **`typename`** keyword to precede a template or type name when it comes after a dependent *`nested-name-specifier`*. For more information, see [Name resolution for dependent types](../../cpp/name-resolution-for-dependent-types.md) and [Templates and name resolution](../../cpp/templates-and-name-resolution.md).

## Examples

The following code under [`/permissive-`](../../build/reference/permissive-standards-conformance.md) mode now raises C7510:

```cpp
template<typename T> struct Base
{
    template<class U> void example() {}
};

template<typename T>
struct X : Base<T>
{
    void example()
    {
        Base<T>::example<int>(); // C7510: 'example': use of dependent
            // template name must be prefixed with 'template'
            // note: see reference to class template instantiation
            // 'X<T>' being compiled
    }
};
```

To fix the error, add the **`template`** keyword to the `Base<T>::example<int>();` statement, as shown in the following example:

```cpp
template<typename T> struct Base
{
    template<class U> void example() {}
};

template<typename T>
struct X : Base<T>
{
    void example()
    {
        // Add template keyword here:
        Base<T>::template example<int>();
    }
};
```

In Visual Studio 2019 under **`/std:c++20`** or later, function template bodies that have **`if constexpr`** statements have extra parsing-related checks enabled. For example, in Visual Studio 2017 the following code produces C7510 only if the **`/permissive-`** option is set. In Visual Studio 2019 the same code raises errors even when the **`/permissive`** option is set:

```cpp
// C7510.cpp
// compile using: cl /EHsc /W4 /permissive /std:c++latest C7510.cpp
#include <iostream>

template <typename T>
int f()
{
    T::Type a; // error C7510: 'Type': use of dependent type name must be prefixed with 'typename'
    // To avoid the error, add the 'typename' keyword. Use this declaration instead:
    // typename T::Type a;

    if constexpr (a.val)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

struct X
{
    using Type = X;
    constexpr static int val = 1;
};

int main()
{
    std::cout << f<X>() << "\n";
}
```

## See also

[`/permissive-` (Standards conformance)](../../build/reference/permissive-standards-conformance.md)\
[Name resolution for dependent types](../../cpp/name-resolution-for-dependent-types.md)\
[Templates and name resolution](../../cpp/templates-and-name-resolution.md)\
[`typename`](../../cpp/typename.md)
