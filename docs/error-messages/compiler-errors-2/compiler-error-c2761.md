---
description: "Learn more about: Compiler Error C2761"
title: "Compiler Error C2761"
ms.date: "11/04/2016"
f1_keywords: ["C2761"]
helpviewer_keywords: ["C2761"]
ms.assetid: 38c79a05-b56d-485b-820f-95e8c0cb926f
---
# Compiler Error C2761

'function' : member function redeclaration not allowed

You cannot redeclare a member function. You can define it, but not redeclare it.

## Examples

The following sample generates C2761.

```cpp
// C2761.cpp
class a {
   int t;
   void test();
};

void a::a;     // C2761
void a::test;  // C2761
```

Nonstatic members of a class or structure cannot be defined.  The following sample generates C2761.

```cpp
// C2761_b.cpp
// compile with: /c
struct C {
   int s;
   static int t;
};

int C::s;   // C2761
int C::t;   // OK
```
