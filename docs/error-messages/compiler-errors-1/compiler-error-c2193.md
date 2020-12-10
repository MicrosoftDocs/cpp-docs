---
description: "Learn more about: Compiler Error C2193"
title: "Compiler Error C2193"
ms.date: "11/04/2016"
f1_keywords: ["C2193"]
helpviewer_keywords: ["C2193"]
ms.assetid: 9813e853-d581-4f51-bb75-4e242298a844
---
# Compiler Error C2193

'identifier' : already in a segment

A function was placed in two different segments using `alloc_text` and `code_seg` pragmas.

The following sample generates C2193:

```cpp
// C2193.cpp
// compile with: /c
extern "C" void MYFUNCTION();
#pragma alloc_text(MYCODE, MYFUNCTION)
#pragma code_seg("MYCODE2")
extern "C" void MYFUNCTION() {}   // C2193
extern "C" void MYFUNCTION2() {}
```
