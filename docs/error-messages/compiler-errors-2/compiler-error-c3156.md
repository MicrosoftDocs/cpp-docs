---
title: "Compiler Error C3156 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3156"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3156"]
ms.assetid: 1876da78-b94e-4af7-9795-28f72b209b3e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3156

'class' : you cannot have a local definition of a managed or WinRT type

A function cannot contain the definition, or declaration, of a managed or WinRT class, struct, or interface.

## Example

The following sample generates C3156.

```
// C3156.cpp
// compile with: /clr /c
void f() {
   ref class X {};   // C3156
   ref class Y;   // C3156
}
```
