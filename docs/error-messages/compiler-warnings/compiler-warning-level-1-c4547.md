---
description: "Learn more about: Compiler Warning (level 1) C4547"
title: "Compiler Warning (level 1) C4547"
ms.date: "11/04/2016"
f1_keywords: ["C4547"]
helpviewer_keywords: ["C4547"]
ms.assetid: 3edf1c2e-c0d5-444d-ae83-44a7cce24bb2
---
# Compiler Warning (level 1) C4547

'operator' : operator before comma has no effect; expected operator with side-effect

The compiler detected an ill-formed comma expression.

This warning is off by default. For more information, see [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

The following sample generates C4547:

```cpp
// C4547.cpp
// compile with: /W1
#pragma warning (default : 4547)
int i = 0;
int j = 1;
int main() {
   int l = (i != i,0);   // C4547
   // try the following line instead
   // int l = (i != i);
   // or
   // int l = ((void)(i != i),0);
}
```
