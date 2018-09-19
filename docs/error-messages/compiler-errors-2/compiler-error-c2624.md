---
title: "Compiler Error C2624 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2624"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2624"]
ms.assetid: 32f2ec15-a7cd-4049-a64b-131746d3152b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2624

local classes cannot be used to declare 'extern' variables

A local class or structure cannot be used to declare `extern` variables.

The following sample generates C2624:

```
// C2624.cpp
int main() {
   struct C {};
   extern C ac;   // C2624
}
```