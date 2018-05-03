---
title: "Compiler Error C2495 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2495"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2495"]
ms.assetid: bb7066fe-3549-4901-97e4-157f3c04dd57
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2495
'identifier' : 'nothrow' can only be applied to function declarations or definitions  
  
 The [nothrow](../../cpp/nothrow-cpp.md) extended attribute can be applied to function declarations or definitions only.  
  
 The following sample generates C2495:  
  
```  
// C2495.cpp  
// compile with: /c  
__declspec(nothrow) class X {   // C2495  
   int m_data;  
} x;  
  
__declspec(nothrow) void test();   // OK  
```