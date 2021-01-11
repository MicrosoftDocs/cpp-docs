---
description: "Learn more about: Compiler Warning (level 2) C4302"
title: "Compiler Warning (level 2) C4302"
ms.date: "11/04/2016"
f1_keywords: ["C4302"]
helpviewer_keywords: ["C4302"]
ms.assetid: f5e1c939-e134-4cca-ba1e-9b15a81549ae
---
# Compiler Warning (level 2) C4302

'conversion' : truncation from 'type 1' to 'type 2'

The compiler detected a conversion from a larger type to a smaller type. Information may be lost.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

The following sample generates C4302:

```cpp
// C4302.cpp
// compile with: /W2
#pragma warning(default : 4302)
int main() {
   int i;
   char c = (char) &i;     // C4302
   short s = (short) &i;   // C4302
}
```
