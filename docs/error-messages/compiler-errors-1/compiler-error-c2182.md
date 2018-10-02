---
title: "Compiler Error C2182 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2182"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2182"]
ms.assetid: dfd8d47d-9606-496e-bd96-4bf41ba1f857
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2182

'identifier' : illegal use of type 'void'

A variable is declared type `void`.

The following sample generates C2182:

```
// C2182.cpp
// compile with: /c
int main() {
   int i = 10;
   void &ir = i;   // C2182 cannot have a reference to type void
   int &ir = i;   // OK
}
```