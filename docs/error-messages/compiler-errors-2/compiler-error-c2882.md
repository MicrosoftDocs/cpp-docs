---
title: "Compiler Error C2882 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2882"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2882"]
ms.assetid: 617018ee-5a0d-4b8d-9612-77e8ae52679b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2882
'name' : illegal use of namespace identifier in expression  
  
 You tried to use the name of a namespace in an expression.  
  
 The following sample generates C2882:  
  
```  
// C2882.cpp  
// compile with: /c  
namespace A {  
   int k;  
}  
  
int i = A;   // C2882, can't assign A to i  
```