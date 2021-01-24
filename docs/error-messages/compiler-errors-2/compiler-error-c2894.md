---
description: "Learn more about: Compiler Error C2894"
title: "Compiler Error C2894"
ms.date: "11/04/2016"
f1_keywords: ["C2894"]
helpviewer_keywords: ["C2894"]
ms.assetid: 4e250579-2b59-4993-a6f4-49273e7ecf06
---
# Compiler Error C2894

templates cannot be declared to have 'C' linkage

This error can be caused by a template defined inside an `extern "C"` block.

The following sample generates C2894:

```cpp
// C2894.cpp
extern "C" {
   template<class T> class stack {};   // C2894 fail

   template<class T> void f(const T &aT) {}   // C2894
}
```

The following sample generates C2894:

```cpp
// C2894b.cpp
// compile with: /c
extern "C" template<class T> void f(const T &aT) {}   // C2894

template<class T> void f2(const T &aT) {}   // OK
```
