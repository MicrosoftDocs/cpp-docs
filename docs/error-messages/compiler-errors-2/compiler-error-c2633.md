---
title: "Compiler Error C2633 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2633"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2633"]
ms.assetid: a7aceb65-4255-42d6-a8fb-e3cb6c4d2270
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2633
'identifier' : 'inline' is the only legal storage class for constructors  
  
 A constructor is declared as a storage class other than inline.  
  
 The following sample generates C2633:  
  
```  
// C2633.cpp  
// compile with: /c  
class C {  
   extern C();   // C2633, not inline  
   inline C();   // OK  
};  
```