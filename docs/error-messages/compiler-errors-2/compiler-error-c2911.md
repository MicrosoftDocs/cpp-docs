---
description: "Learn more about: Compiler Error C2911"
title: "Compiler Error C2911"
ms.date: "11/04/2016"
f1_keywords: ["C2911"]
helpviewer_keywords: ["C2911"]
ms.assetid: 83c7c01a-ab6a-4179-9fb0-289a9ec8d44e
---
# Compiler Error C2911

'member' : cannot be declared or defined in the current scope

Inside a namespace, class, or function, you can only define a member of the same namespace, class, or function or a member that is enclosed by the same namespace, class, or function.

The following sample generates C2911:

```cpp
// C2911.cpp
struct A;

namespace M {
   struct D;
}

namespace N {
   struct C;

   namespace O {
      struct B;
   }

   // in N
   struct ::A {};   // C2911  A is member of global NS
   struct O::B{};   // OK B is in O, O is inside of N
   struct C {};     // OK C is member of N
   struct M::D {};  // C2911 D is member of M, M not enclosed by N
}
```
