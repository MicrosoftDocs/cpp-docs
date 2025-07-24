---
title: "Compiler Error C2365"
description: "Learn more about: Compiler Error C2365"
ms.date: 11/04/2016
f1_keywords: ["C2365"]
helpviewer_keywords: ["C2365"]
---
# Compiler Error C2365

> 'class member' : redefinition; previous definition was 'class member'

## Remarks

You attempted to redefine a class member.

## Example

The following example generates C2365.

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
