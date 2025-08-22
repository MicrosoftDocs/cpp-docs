---
title: "Compiler Error C3740"
description: "Learn more about: Compiler Error C3740"
ms.date: 11/04/2016
f1_keywords: ["C3740"]
helpviewer_keywords: ["C3740"]
---
# Compiler Error C3740

> templates cannot source or receive events

## Remarks

A templated class or struct cannot contain [events](../../cpp/event-handling.md).

## Example

The following example generates C3740:

```cpp
// C3740.cpp
template <typename T>   // Delete the template specification
struct E {
   __event void f();   // C3740
};

int main() {
}
```
