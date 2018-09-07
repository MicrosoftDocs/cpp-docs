---
title: "Compiler Error C2034 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2034"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2034"]
ms.assetid: 953d70fa-bde9-4ce6-a55d-741e7bc63ff4
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2034
'identifier' : type of bit field too small for number of bits  
  
 The number of bits in the bit-field declaration exceeds the size of the base type.  
  
 The following sample generates C2034:  
  
```  
// C2034.cpp  
struct A {  
   char test : 9;   // C2034, char has 8 bits  
};  
```  
  
 Possible resolution:  
  
```  
// C2034b.cpp  
// compile with: /c  
struct A {  
   char test : 8;  
};  
```