---
title: "Compiler Error C2791 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2791"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2791"]
ms.assetid: 938ad1fb-75d9-4ce2-ad92-83d6249005b5
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2791

illegal use of 'super': 'class' does not have any base classes

The keyword [super](../../cpp/super.md) was used within the context of a member function of a class that does not have any base classes.

The following sample generates C2791:

```
// C2791.cpp
struct D {
   void mf() {
      __super::mf();   // C2791
   }
};
```