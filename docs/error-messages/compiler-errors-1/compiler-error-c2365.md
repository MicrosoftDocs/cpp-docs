---
description: "Learn more about: Compiler Error C2365"
title: "Compiler Error C2365"
ms.date: "11/04/2016"
f1_keywords: ["C2365"]
helpviewer_keywords: ["C2365"]
ms.assetid: 35839b0b-4055-4b79-8957-b3a0871bdd02
---
# Compiler Error C2365

'class member' : redefinition; previous definition was 'class member'

You attempted to redefine a class member.

The following sample generates C2365.

```cpp
// C2365.cpp
// compile with: /c
class C1 {
   int CFunc();
   char *CFunc;   // C2365, already exists as a member function

   int CMem;
   char *CMem();   // C2365, already exists as a data member
};
```
