---
title: "Compiler Error C2351 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2351"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2351"]
ms.assetid: 5439ccf6-66f6-4859-964c-c73f5eddfc1b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2351

obsolete C++ constructor initialization syntax

In a new-style initialization list for a constructor, you must explicitly name each direct base class, even if it is the only base class.

The following sample generates C2351:

```
// C2351.cpp
// compile with: /c
class B {
public:
   B() : () {}   // C2351
   B() {}   // OK
};
```