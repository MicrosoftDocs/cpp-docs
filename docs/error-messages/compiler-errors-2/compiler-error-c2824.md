---
title: "Compiler Error C2824"
description: "Learn more about: Compiler Error C2824"
ms.date: 11/04/2016
f1_keywords: ["C2824"]
helpviewer_keywords: ["C2824"]
---
# Compiler Error C2824

> return type for 'operator new' must be 'void *'

## Remarks

With non-based pointers, overloads of operator `new` must return `void *`.

## Example

The following example generates C2824:

```cpp
// C2824.cpp
// compile with: /c
class   A {
   A* operator new(size_t i, char *m);   // C2824
   // try the following line instead
   // void* operator new(size_t i, char *m);
};
```
