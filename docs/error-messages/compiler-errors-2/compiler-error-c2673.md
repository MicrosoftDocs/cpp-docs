---
title: "Compiler Error C2673 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2673"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2673"]
ms.assetid: 780230c0-619b-4a78-b01d-ff5886306741
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2673

'function' : global functions do not have 'this' pointers

A global function tried to access `this`.

The following sample generates C2673:

```
// C2673.cpp
int main() {
   this = 0;   // C2673
}
```