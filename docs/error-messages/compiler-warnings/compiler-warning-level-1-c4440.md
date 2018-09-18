---
title: "Compiler Warning (level 1) C4440 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4440"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4440"]
ms.assetid: 78b9642a-a93e-401e-9d92-372f6451bc5d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4440

calling convention redefinition from 'calling_convention1' to 'calling_convention2' ignored

An attempt to change the calling convention was ignored.

The following sample generates C4440:

```
// C4440.cpp
// compile with: /W1 /LD /clr
typedef void __clrcall F();
typedef F __cdecl *PFV;   // C4440
```