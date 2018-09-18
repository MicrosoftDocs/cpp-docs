---
title: "Compiler Error C2192 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2192"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2192"]
ms.assetid: a147197e-e72d-4620-939b-f9e08d7c7c12
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2192

parameter 'number' declaration different

A C function was declared a second time with a different parameter list. C does not support overloaded functions.

The following sample generates C2192:

```
// C2192.c
// compile with: /Za /c
void func( float, int );
void func( int, float );   // C2192, different parameter list
void func2( int, float );   // OK
```