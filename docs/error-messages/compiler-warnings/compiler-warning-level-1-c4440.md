---
description: "Learn more about: Compiler Warning (level 1) C4440"
title: "Compiler Warning (level 1) C4440"
ms.date: "11/04/2016"
f1_keywords: ["C4440"]
helpviewer_keywords: ["C4440"]
ms.assetid: 78b9642a-a93e-401e-9d92-372f6451bc5d
---
# Compiler Warning (level 1) C4440

calling convention redefinition from 'calling_convention1' to 'calling_convention2' ignored

An attempt to change the calling convention was ignored.

The following sample generates C4440:

```cpp
// C4440.cpp
// compile with: /W1 /LD /clr
typedef void __clrcall F();
typedef F __cdecl *PFV;   // C4440
```
