---
title: "Compiler Error C2380 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2380"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2380"]
ms.assetid: 717b1e6e-ddfe-4bac-a5f3-7f9a4dcb1572
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2380
type(s) preceding 'identifier' (constructor with return type, or illegal redefinition of current class-name?)  
  
 A constructor returns a value or redefines the class name.  
  
 The following sample generates C2326:  
  
```  
// C2380.cpp  
// compile with: /c  
class C {  
public:  
   int C();   // C2380, specifies an int return  
   int C;   // C2380, redefinition of i  
   C();   // OK  
};  
```