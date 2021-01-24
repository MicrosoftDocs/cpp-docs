---
description: "Learn more about: Compiler Warning (level 1) C4353"
title: "Compiler Warning (level 1) C4353"
ms.date: "11/04/2016"
f1_keywords: ["C4353"]
helpviewer_keywords: ["C4353"]
ms.assetid: 6e79f186-ed82-4c95-9923-0ad5bb9c4db1
---
# Compiler Warning (level 1) C4353

nonstandard extension used: constant 0 as function expression. Use '__noop' function intrinsic instead

You cannot use the constant zero (0) as a function expression. For more information, see [__noop](../../intrinsics/noop.md).

The following sample generates C4353:

```cpp
// C4353.cpp
// compile with: /W1
void MyPrintf(void){};
#define X 0
#if X
   #define DBPRINT MyPrint
#else
   #define DBPRINT 0   // C4353 expected
#endif
int main(){
DBPRINT();
}
```
