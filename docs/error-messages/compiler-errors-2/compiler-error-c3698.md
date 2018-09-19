---
title: "Compiler Error C3698 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3698"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3698"]
ms.assetid: 3c02fb08-7ba4-4637-a06f-19926cb2b5f1
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3698

'type' : cannot use this type as argument of 'operator'

A managed object was declared incorrectly.

The following sample generates C3698:

```
// C3698.cpp
// compile with: /clr

int main() {
   array<int>^a = new array<int>^(20);   // C3698
   array<int>^a2 = gcnew array<int>(20);   // OK
}
```