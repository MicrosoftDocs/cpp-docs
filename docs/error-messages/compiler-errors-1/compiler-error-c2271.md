---
description: "Learn more about: Compiler Error C2271"
title: "Compiler Error C2271"
ms.date: "11/04/2016"
f1_keywords: ["C2271"]
helpviewer_keywords: ["C2271"]
ms.assetid: ea47bf57-f55d-4171-8e98-95a71d62820e
---
# Compiler Error C2271

'operator' : new/delete cannot have formal list modifiers

The operator (**`new`** or **`delete`**) is declared with a memory-model specifier.

The following sample generates C2271:

```cpp
// C2271.cpp
// compile with: /c
void* operator new(size_t) const {   // C2271
// try the following line instead
// void* operator new(size_t) {
   return 0;
}

struct X {
   static void* operator new(size_t) const;   // C2271
   // try the following line instead
   // void * X::operator new(size_t) const;   // static member operator new
};
```
