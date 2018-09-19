---
title: "Compiler Error C2861 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2861"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2861"]
ms.assetid: 012bb44d-6c9b-4def-b54e-b19f1f8ddd1b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2861

'function name' : an interface member function cannot be defined

The compiler encountered the interface keyword or deduced a struct as an interface but then found a member function definition.  An interface cannot contain a definition for a member function.

## Example

The following sample generates C2861:

```
// C2861.cpp
// compile with: /c
#include <objbase.h>   // required for IUnknown definition
[ object, uuid("00000000-0000-0000-0000-000000000001") ]
__interface IMyInterface : IUnknown {
   HRESULT mf(int a);
};

HRESULT IMyInterface::mf(int a) {}   // C2861

```