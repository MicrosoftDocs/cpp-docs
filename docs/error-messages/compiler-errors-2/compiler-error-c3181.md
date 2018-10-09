---
title: "Compiler Error C3181 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3181"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3181"]
ms.assetid: 5d450f8b-6cef-4452-a0c4-2076e967451d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3181

'type' : invalid operand for operator

An invalid parameter was passed to the [typeid](../../windows/typeid-cpp-component-extensions.md) operator. The parameter must be a managed type.

Note that the compiler uses aliases for native types that map to types in the common language runtime.

The following sample generates C3181:

```
// C3181a.cpp
// compile with: /clr
using namespace System;

int main() {
   Type ^pType1 = interior_ptr<int>::typeid;   // C3181
   Type ^pType2 = int::typeid;   // OK
}
```
