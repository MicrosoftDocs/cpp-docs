---
title: "Compiler Error C2894"
description: "Learn more about: Compiler Error C2894"
ms.date: 11/04/2016
f1_keywords: ["C2894"]
helpviewer_keywords: ["C2894"]
---
# Compiler Error C2894

> templates cannot be declared to have 'C' linkage

## Remarks

This error can be caused by a template defined inside an `extern "C"` block.

## Examples

The following example generates C2894:

```cpp
// C2894.cpp
extern "C" {
   template<class T> class stack {};   // C2894 fail

   template<class T> void f(const T &aT) {}   // C2894
}
```

The following example generates C2894:

```cpp
// C2894b.cpp
// compile with: /c
extern "C" template<class T> void f(const T &aT) {}   // C2894

template<class T> void f2(const T &aT) {}   // OK
```
