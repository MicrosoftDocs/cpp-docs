---
title: "Compiler Error C2711 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2711"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2711"]
ms.assetid: 9df9f808-7419-4e63-abdd-e6538ff0871f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2711

'function' : this function cannot be compiled as managed, consider using #pragma unmanaged

Some instructions will prevent the compiler from generating MSIL for the enclosing function.

The following sample generates C2711:

```
// C2711.cpp
// compile with: /clr
// processor: x86
using namespace System;
value struct V {
   static const t = 10;
};

void bar() {
   V::t;
   __asm int 3   // C2711 inline asm can't be compiled managed
}
```