---
title: "Compiler Error C2570 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2570"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2570"]
ms.assetid: d65d0b32-2fac-464a-bcdf-0ebcedf3bf32
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2570

'identifier' : union cannot have base classes

A union derives from a class, structure, or union. This is not allowed. Declare the derived type as a class or structure instead.

The following sample generates C2570:

```
// C2570.cpp
// compile with: /c
class base {};
union hasPubBase : public base {};   // C2570
union hasNoBase {};   // OK
```