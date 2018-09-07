---
title: "Compiler Error C2201 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2201"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2201"]
ms.assetid: ed927659-6e9c-447d-9963-19969ae1e957
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2201
'identifier' : must have external linkage in order to be exported/imported  
  
 The exported identifier is `static`.  
  
 The following sample generates C2286:  
  
```  
// C2201.cpp  
// compile with: /c  
__declspec(dllexport) static void func() {}   // C2201 func() is static  
__declspec(dllexport) void func2() {}   // OK  
```  
  
## See Also  
 [Types of Linkage](../../cpp/types-of-linkage.md)