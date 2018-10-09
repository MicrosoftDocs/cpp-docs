---
title: "Compiler Error C2581 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2581"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2581"]
ms.assetid: 24a4e4c1-24d3-4e42-b760-7dcaf9740b16
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2581

'type' : static 'operator =' function is illegal

The assignment (`=`) operator is incorrectly declared as `static`. Assignment operators cannot be `static`. For more information, see [User-Defined Operators (C++/CLI)](../../dotnet/user-defined-operators-cpp-cli.md).

## Example

The following sample generates C2581.

```
// C2581.cpp
// compile with: /clr /c
ref struct Y {
   static Y ^ operator = (Y^ me, int i);   // C2581
   Y^ operator =(int i);   // OK
};
```