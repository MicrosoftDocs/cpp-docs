---
title: "Compiler Warning (level 1) C4333 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4333"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4333"]
ms.assetid: d3763c52-6110-4da0-84db-5264e3f3f166
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4333

'operator' : right shift by too large amount, data loss

A right shift operation was too large an amount.  All significant bits are shifted out and the result will always be zero.

## Example

The following sample generates C4333.

```
// C4333.cpp
// compile with: /c /W1
unsigned shift8 (unsigned char c) {
   return c >> 8;   // C4333

   // try the following line instead
   // return c >> 4;   // OK
}
```