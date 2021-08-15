---
description: "Learn more about: Compiler Error C2912"
title: "Compiler Error C2912"
ms.date: "11/04/2016"
f1_keywords: ["C2912"]
helpviewer_keywords: ["C2912"]
ms.assetid: bd55cecd-ab1a-4636-ab8a-a00393fe7b3d
---
# Compiler Error C2912

explicit specialization 'declaration' is not a specialization of a function template

You cannot specialize a non-template function.

The following sample generates C2912:

```cpp
// C2912.cpp
// compile with: /c
void f(char);
template<> void f(char);   // C2912
template<class T> void f(T);   // OK
```

This error will also be generated as a result of compiler conformance work that was done in Visual Studio .NET 2003: for every explicit specialization, you must choose the parameters of the explicit specialization, such that, they match the parameters of the primary template.

```cpp
// C2912b.cpp
class CF {
public:
   template <class A> CF(const A& a) {}   // primary template

   // attempted explicit specialization
   template <> CF(const char* p) {}   // C2912

   // try the following line instead
   // template <> CF(const char& p) {}
};
```
