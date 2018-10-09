---
title: "Compiler Error C2469 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2469"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2469"]
ms.assetid: 3814bdff-581a-4d3e-8b47-8de6887cea69
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2469

'operator': cannot allocate 'type' object

An operator was passed an invalid type.

The following sample generates C2469:

```
// C2469.cpp
int main() {
   int *i = new void;   // C2469
   int *i = new int;   // OK
}
```