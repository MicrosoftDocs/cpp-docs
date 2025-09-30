---
title: "Compiler Error C2753"
description: "Learn more about: Compiler Error C2753"
ms.date: 11/04/2016
f1_keywords: ["C2753"]
helpviewer_keywords: ["C2753"]
---
# Compiler Error C2753

> '*template*' : partial specialization cannot match argument list for primary template

## Remarks

If the template argument list matches the parameter list, the compiler treats it as the same template. Defining the same template twice is not allowed.

## Example

The following example generates C2753 and shows a way to fix it:

```cpp
// C2753.cpp
// compile with: cl /c C2753.cpp
template<class T>
struct A {};

template<class T>
struct A<T> {};   // C2753
// try the following line instead
// struct A<int> {};

template<class T, class U, class V, class W, class X>
struct B {};
```
