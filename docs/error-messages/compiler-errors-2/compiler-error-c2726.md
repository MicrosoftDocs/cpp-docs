---
title: "Compiler Error C2726 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2726"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2726"]
ms.assetid: f0191bb7-c175-450b-bf09-a3213db96d09
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2726

'gcnew' may only be used to create an object with managed or WinRT type

You cannot create an instance of a native type on the garbage-collected heap.

The following sample generates C2726 and shows how to fix it:

```
// C2726.cpp
// compile with: /clr
using namespace System;
class U {};
ref class V {};
value class W {};

int main() {
   U* pU = gcnew U;    // C2726
   U* pU2 = new U;   // OK
   V^ p2 = gcnew V;   // OK
   W p3;   // OK

}
```
