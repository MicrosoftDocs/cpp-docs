---
title: "Compiler Warning (level 1) C4272 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4272"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4272"]
ms.assetid: 0d6c1de4-2eef-42c4-b861-c221f8b495ef
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4272
'function' : is marked __declspec(dllimport); must specify native calling convention when importing a function.  
  
 It is an error to export a function marked with the [__clrcall](../../cpp/clrcall.md) calling convention, and the compiler issues this warning if you attempt to import a function marked `__clrcall`.  
  
 The following sample generates C4272:  
  
```  
// C4272.cpp  
// compile with: /c /W1 /clr  
__declspec(dllimport) void __clrcall Test();   // C4272  
__declspec(dllimport) void Test2();   // OK  
```