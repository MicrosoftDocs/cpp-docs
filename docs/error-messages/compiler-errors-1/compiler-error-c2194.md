---
title: "Compiler Error C2194 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2194"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2194"]
ms.assetid: df6e631c-0062-4844-9088-4cc7a0ff879f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2194
'identifier' : is a text segment  
  
 The `data_seg` pragma uses a segment name used with `code_seg`.  
  
 The following sample generates C2194:  
  
```  
// C2194.cpp  
// compile with: /c  
#pragma code_seg("MYCODE")  
#pragma data_seg("MYCODE")   // C2194  
#pragma data_seg("MYCODE2")   // OK  
```