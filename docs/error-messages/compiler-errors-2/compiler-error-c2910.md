---
description: "Learn more about: Compiler Error C2910"
title: "Compiler Error C2910"
ms.date: "11/04/2016"
f1_keywords: ["C2910"]
helpviewer_keywords: ["C2910"]
ms.assetid: 09c50e6a-e099-42f6-8ed6-d80e292a7a36
---
# Compiler Error C2910

'function' : cannot be explicitly specialized

The compiler detected an attempt to explicitly specialize a function twice.

The following sample generates C2910:

```cpp
// C2910.cpp
// compile with: /c
template <class T>
struct S;

template <> struct S<int> { void f() {} };
template <> void S<int>::f() {}   // C2910 delete this specialization
```

C2910 can also be generated if you try to explicitly specialize a non-template member. That is, you can only explicitly specialize a function template.

The following sample generates C2910:

```cpp
// C2910b.cpp
// compile with: /c
template <class T> struct A {
   A(T* p);
};

template <> struct A<void> {
   A(void* p);
};

template <class T>
inline A<T>::A(T* p) {}

template <> A<void>::A(void* p){}   // C2910
// try the following line instead
// A<void>::A(void* p){}
```

This error will also be generated as a result of compiler conformance work that was done in Visual Studio .NET 2003:.

For code will be valid in the Visual Studio .NET 2003 and Visual Studio .NET versions of Visual C++, remove `template <>`.

The following sample generates C2910:

```cpp
// C2910c.cpp
// compile with: /c
template <class T> class A {
   void f();
};

template <> class A<int> {
   void f();
};

template <> void A<int>::f() {}   // C2910
// try the following line instead
// void A<int>::f(){}   // OK
```
