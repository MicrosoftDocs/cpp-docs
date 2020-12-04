---
description: "Learn more about: Compiler Error C3445"
title: "Compiler Error C3445"
ms.date: "04/10/2017"
f1_keywords: ["C3445"]
helpviewer_keywords: ["C3445"]
ms.assetid: 0d272bfc-136b-4025-a9ba-5e4eea5f8215
---
# Compiler Error C3445

> copy-list-initialization of '*type*' cannot use an explicit constructor

According to the ISO C++17 standard, the compiler is required to consider an explicit constructor for overload resolution in copy-list-initialization, but must raise an error if that overload is actually chosen.

Starting in Visual Studio 2017, the compiler finds errors related to object creation by using an initializer list that were not found by Visual Studio 2015. These errors could lead to crashes or undefined behavior at runtime.

## Example

The following sample generates C3445.

```cpp
// C3445.cpp
struct A
{
    explicit A(int) {}
    A(double) {}
};

int main()
{
    A a1 = { 1 };     // error C3445: copy-list-initialization of
                      //     'A' cannot use an explicit constructor
}
```

To correct the error, use direct initialization instead:

```cpp
// C3445b.cpp
struct A
{
    explicit A(int) {}
    A(double) {}
};

int main()
{
    A a1{ 1 };
}
```
