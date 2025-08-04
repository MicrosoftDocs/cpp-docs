---
title: "Compiler Error C2658"
description: "Learn more about: Compiler Error C2658"
ms.date: 11/04/2016
f1_keywords: ["C2658"]
helpviewer_keywords: ["C2658"]
---
# Compiler Error C2658

> 'member': redefinition in anonymous struct/union

## Remarks

Two anonymous structures or unions contained member declarations with the same identifier but with different types. Under [/Za](../../build/reference/za-ze-disable-language-extensions.md), you will also get this error for members with the same identifier and type.

## Example

The following example generates C2658:

```cpp
// C2658.cpp
// compile with: /c
struct X {
   union { // can be struct too
      int i;
   };
   union {
      int i;   // Under /Za, C2658
      // int i not needed here because it is defined in the first union
   };
};

struct Z {
   union {
      char *i;
   };

   union {
      void *i;   // C2658 redefinition of 'i'
      // try the following line instead
      // void *ii;
   };
};
```
