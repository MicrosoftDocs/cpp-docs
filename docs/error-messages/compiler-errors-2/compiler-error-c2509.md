---
description: "Learn more about: Compiler Error C2509"
title: "Compiler Error C2509"
ms.date: "11/04/2016"
f1_keywords: ["C2509"]
helpviewer_keywords: ["C2509"]
ms.assetid: 339c1fcd-ec4a-456c-9f18-a9b24d9921af
---
# Compiler Error C2509

'identifier' : member function not declared in 'class'

The function is not declared in the specified class.

## Example

The following sample generates C2509.

```cpp
// C2509.cpp
// compile with: /c
struct A {
   virtual int vfunc() = 0;
   virtual int vfunc2() = 0;
};

struct B : private A {
   using A::vfunc;
   virtual int vfunc2();
};

int B::vfunc() { return 1; }   // C2509
int B::vfunc2() { return 1; }   // OK
```
