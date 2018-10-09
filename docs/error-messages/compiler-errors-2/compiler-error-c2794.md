---
title: "Compiler Error C2794 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2794"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2794"]
ms.assetid: d508191c-9044-4c6a-9119-4bca668c0b93
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2794

'function' : is not a member of any direct or indirect base class of 'class'

You tried to use [super](../../cpp/super.md) to call a nonexistent member function.

The following sample generates C2794

```
// C2794.cpp
struct B {
   void mf();
};

struct D : B {
   void mf() {
      __super::f();  // C2794
   }
};
```