---
title: "Compiler Error C2838 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2838"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2838"]
ms.assetid: 176b2ad6-7a84-4019-b97e-328866054457
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2838

'member' : illegal qualified name in member declaration

A class, structure, or union uses a fully qualified name to redeclare a member of another class, structure, or union.

The following sample generates C2838:

```
// C2838.cpp
// compile with: /c
class Bellini {
public:
    void Norma();
};

class Bottesini {
   Bellini::Norma();  // C2838
};
```