---
title: "Compiler Error C3395 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3395"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3395"]
ms.assetid: 26a9ebc9-ed97-47ce-b436-19aa2bcf6e50
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3395

'function' : __declspec(dllexport) cannot be applied to a function with the \__clrcall calling convention

`__declspec(dllexport)` and [__clrcall](../../cpp/clrcall.md) are not compatible.  For more information, see [dllexport, dllimport](../../cpp/dllexport-dllimport.md).

The following sample generates C3395:

```
// C3395.cpp
// compile with: /clr /c

__declspec(dllexport) void __clrcall Test(){}   // C3395
void __clrcall Test2(){}   // OK
__declspec(dllexport) void Test3(){}   // OK
```