---
title: "Compiler Error C2391"
description: "Learn more about: Compiler Error C2391"
ms.date: 11/04/2016
f1_keywords: ["C2391"]
helpviewer_keywords: ["C2391"]
---
# Compiler Error C2391

> 'identifier' : 'friend' cannot be used during type definition

## Remarks

The **`friend`** declaration includes a complete class declaration. A **`friend`** declaration can specify a member function or an elaborated type specifier, but not a complete class declaration.

## Example

The following example generates C2326:

```cpp
// C2391.cpp
// compile with: /c
class D {
   void func( int );
};

class A {
   friend class B { int i; };   // C2391

   // OK
   friend class C;
   friend void D::func(int);
};
```
