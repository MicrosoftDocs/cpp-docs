---
description: "Learn more about: Compiler Error C3113"
title: "Compiler Error C3113"
ms.date: "11/04/2016"
f1_keywords: ["C3113"]
helpviewer_keywords: ["C3113"]
ms.assetid: 3afdc668-b29e-474e-9ea3-aa027d42db7c
---
# Compiler Error C3113

an 'structure' cannot be a template/generic

You attempted to make a class template or class generic out of an interface or an enum.

The following sample generates C3113:

```cpp
// C3113.cpp
// compile with: /c
template <class T>
enum E {};   // C3113
// try the following line instead
// class MyClass{};
```
