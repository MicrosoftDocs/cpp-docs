---
title: "Compiler Error C3640 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3640"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3640"]
ms.assetid: fcc56894-0f98-48af-8561-3bf7c7b2b93f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3640

'member' : a referenced or virtual member function of a local class must be defined

The compiler requires certain functions to be defined.

The following sample generates C3640:

```
// C3640.cpp
void f()
{
   struct S
   {
      virtual void f1();   // C3640
      // Try the following line instead:
      // virtual void f1(){}
   };
}
```