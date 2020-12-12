---
description: "Learn more about: Compiler Error C2146"
title: "Compiler Error C2146"
ms.date: "11/04/2016"
f1_keywords: ["C2146"]
helpviewer_keywords: ["C2146"]
ms.assetid: 6bfb7de6-6723-4486-9350-c66ef88d7a64
---
# Compiler Error C2146

syntax error : missing 'token' before identifier 'identifier'

The compiler expected `token` and found `identifier` instead.  Possible causes:

1. Spelling or capitalization error.

1. Missing type specifier in the declaration of the identifier.

This error may be caused by a typographical error. Error [C2065](../../error-messages/compiler-errors-1/compiler-error-c2065.md) usually precedes this error.

## Examples

The following sample generates C2146.

```cpp
// C2146.cpp
class CDeclaredClass {};

class CMyClass {
   CUndeclared m_myClass;   // C2146
   CDeclaredClass m_myClass2;   // OK
};

int main() {
   int x;
   int t x;   // C2146 : missing semicolon before 'x'
}
```

This error can also be generated as a result of compiler conformance work that was done for Visual Studio .NET 2003: missing **`typename`** keyword.

The following sample compiles in Visual Studio .NET 2002 but will fail in Visual Studio .NET 2003:

```cpp
// C2146b.cpp
// compile with: /c
template <typename T>
struct X {
   struct Y {
      int i;
   };
   Y memFunc();
};

template <typename T>
X<T>::Y func() { }   // C2146

// OK
template <typename T>
typename X<T>::Y func() { }
```

You will also see this error as a result of compiler conformance work that was done for Visual Studio .NET 2003: explicit specializations no longer find template parameters from primary template.

The use of `T` from the primary template is not allowed in the explicit specialization. For code to be valid in the Visual Studio .NET 2003 and Visual Studio .NET, replace all instances of the template parameter in the specialization with the explicitly specialized type.

The following sample compiles in Visual Studio .NET but will fail in Visual Studio .NET 2003:

```cpp
// C2146_c.cpp
// compile with: /c
template <class T>
struct S;

template <>
struct S<int> {
   T m_t;   // C2146
   int m_t2;   // OK
};
```
