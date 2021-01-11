---
description: "Learn more about: Compiler Error C2765"
title: "Compiler Error C2765"
ms.date: "11/04/2016"
f1_keywords: ["C2765"]
helpviewer_keywords: ["C2765"]
ms.assetid: 47ad86f3-a7e0-47ad-85ff-0f5534458cb9
---
# Compiler Error C2765

'function' : an explicit specialization of a function template cannot have any default arguments

Default arguments are not allowed on an explicit specialization of a function template. For more information, see [Explicit Specialization of Function Templates](../../cpp/explicit-specialization-of-function-templates.md).

The following sample generates C2765:

```cpp
// C2765.cpp
template<class T> void f(T t) {};

template<> void f<char>(char c = 'a') {}   // C2765
// try the following line instead
// template<> void f<char>(char c) {}
```
