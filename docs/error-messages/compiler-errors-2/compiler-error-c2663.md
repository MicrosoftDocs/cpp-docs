---
title: "Compiler Error C2663"
description: "Learn more about: Compiler Error C2663"
ms.date: 11/04/2016
f1_keywords: ["C2663"]
helpviewer_keywords: ["C2663"]
---
# Compiler Error C2663

> 'function' : number overloads have no legal conversions for 'this' pointer

## Remarks

The compiler could not convert **`this`** to any of the overloaded versions of the member function.

This error can be caused by invoking a non-**`const`** member function on a **`const`** object.  Possible resolutions:

1. Remove the **`const`** from the object declaration.

1. Add **`const`** to one of the member function overloads.

## Example

The following example generates C2663:

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
