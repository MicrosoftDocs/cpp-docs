---
title: "Compiler Error C2193 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2193"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2193"]
ms.assetid: 9813e853-d581-4f51-bb75-4e242298a844
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2193
'identifier' : already in a segment  
  
 A function was placed in two different segments using `alloc_text` and `code_seg` pragmas.  
  
 The following sample generates C2193:  
  
```  
// C2193.cpp  
// compile with: /c  
extern "C" void MYFUNCTION();  
#pragma alloc_text(MYCODE, MYFUNCTION)  
#pragma code_seg("MYCODE2")  
extern "C" void MYFUNCTION() {}   // C2193  
extern "C" void MYFUNCTION2() {}  
```