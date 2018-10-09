---
title: "Compiler Error C3239 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3239"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3239"]
ms.assetid: 22a518b7-020f-4f3c-9963-a094667fd1ac
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3239

'type' : pointer to interior/pin pointer is disallowed by the common language runtime

The compiler encountered an invalid type.

The following sample generates C3229:

```
// C3239.cpp
// compile with: /clr
int main() {
   interior_ptr<int>* pip0;   // C3239

   // OK
   int * pip1;
   interior_ptr<int> pip2;
   int ** pip;
}
```