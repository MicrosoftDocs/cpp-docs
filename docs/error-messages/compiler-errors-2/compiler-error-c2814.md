---
title: "Compiler Error C2814 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2814"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2814"]
ms.assetid: 7d165136-a08b-4497-a76d-60a21bb19404
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2814

'member' : a native type cannot be nested within a managed or WinRT type 'type'

## Example

A native type cannot be nested in a CLR or WinRT type. The following sample generates C2814 and shows how to fix it.

```
// C2814.cpp
// compile with: /clr /c
ref class A {
   class B {};   // C2814
   ref class C {};   // OK
};
```
