---
description: "Learn more about: Compiler Error C2663"
title: "Compiler Error C2663"
ms.date: "11/04/2016"
f1_keywords: ["C2663"]
helpviewer_keywords: ["C2663"]
ms.assetid: 1e93e368-fd52-42bf-9908-9b6df467c8c9
---
# Compiler Error C2663

'function' : number overloads have no legal conversions for 'this' pointer

The compiler could not convert **`this`** to any of the overloaded versions of the member function.

This error can be caused by invoking a non-**`const`** member function on a **`const`** object.  Possible resolutions:

1. Remove the **`const`** from the object declaration.

1. Add **`const`** to one of the member function overloads.

The following sample generates C2663:

```cpp
// C2663.cpp
struct C {
   void f() volatile {}
   void f() {}
};

struct D {
   void f() volatile;
   void f() const {}
};

const C *pcc;
const D *pcd;

int main() {
   pcc->f();    // C2663
   pcd->f();    // OK
}
```
