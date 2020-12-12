---
description: "Learn more about: Compiler Error C3740"
title: "Compiler Error C3740"
ms.date: "11/04/2016"
f1_keywords: ["C3740"]
helpviewer_keywords: ["C3740"]
ms.assetid: edb17a90-2307-4df6-943d-580460d26d2b
---
# Compiler Error C3740

templates cannot source or receive events

A templated class or struct cannot contain [events](../../cpp/event-handling.md).

The following sample generates C3740:

```cpp
// C3740.cpp
template <typename T>   // Delete the template specification
struct E {
   __event void f();   // C3740
};

int main() {
}
```
