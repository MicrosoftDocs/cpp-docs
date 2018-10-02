---
title: "Compiler Error C2375 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2375"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2375"]
ms.assetid: 193c5e8b-1b20-4928-8a02-8c1cddaf2a26
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2375

'function' : redefinition; different linkage

The function is already declared with a different linkage specifier.

The following sample generates C2375:

```
// C2375.cpp
// compile with: /Za /c
extern void func( void );
static void func( void );   // C2375
static void func2( void );   // OK
```