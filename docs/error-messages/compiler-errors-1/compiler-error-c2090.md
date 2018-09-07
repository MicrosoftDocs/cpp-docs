---
title: "Compiler Error C2090 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2090"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2090"]
ms.assetid: e8176e55-382b-453d-aa27-6597f0274afd
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2090
function returns array  
  
 A function cannot return an array. Return a pointer to an array instead.  
  
 The following sample generates C2090:  
  
```  
// C2090.cpp  
int func1(void)[] {}   // C2090  
```  
  
 Possible resolution:  
  
```  
// C2090b.cpp  
// compile with: /c  
int* func2(int * i) {  
   return i;  
}  
```