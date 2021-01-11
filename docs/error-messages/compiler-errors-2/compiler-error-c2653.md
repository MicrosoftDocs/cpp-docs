---
description: "Learn more about: Compiler Error C2653"
title: "Compiler Error C2653"
ms.date: "11/30/2017"
f1_keywords: ["C2653"]
helpviewer_keywords: ["C2653"]
ms.assetid: 3f49e731-affd-43a0-a8d0-181db7650bc3
---
# Compiler Error C2653

> '*identifier*' : is not a class or namespace name

The language syntax requires a class, structure, union, or namespace name here.

This error can occur when you use a name that has not been declared as a class, structure, union, or namespace in front of a scope operator. To fix this issue, declare the name or include the header that declares the name before it is used.

C2653 is also possible if you try to define a *compound namespace*, a namespace that contains one or more scope-nested namespace names. Compound namespace definitions are not allowed in C++ prior to C++17. Compound namespaces are supported starting in Visual Studio 2015 Update 3 when you specify the [/std:c++latest](../../build/reference/std-specify-language-standard-version.md) compiler option. Starting in Visual Studio 2017 version 15.5, the compiler supports compound namespace definitions when the [/std:c++17](../../build/reference/std-specify-language-standard-version.md) option is specified.

## Examples

This sample generates C2653 because a scope name is used but not declared. The compiler expects a class, structure, union, or namespace name before a scope operator (::).

```cpp
// C2653.cpp
// compile with: /c
class yy {
   void func1(int i);
};

void xx::func1(int m) {}   // C2653, xx is not declared
void yy::func1(int m) {}   // OK
```

In code that is not compiled for C++17 or later standards, nested namespaces must use an explicit namespace declaration at each nesting level:

```cpp
// C2653b.cpp
namespace a::b {int i;}   // C2653 prior to Visual Studio 2015 Update 3,
                          // C2429 thereafter. Use /std:c++17 or /std:c++latest to fix.

namespace a {             // Use this form for compliant code under /std:c++14 (the default)
   namespace b {          // or when using compilers before Visual Studio 2015 update 3.
      int i;
   }
}

int main() {
   a::b::i = 2;
}
```
