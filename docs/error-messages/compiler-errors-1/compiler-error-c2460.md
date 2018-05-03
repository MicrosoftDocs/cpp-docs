---
title: "Compiler Error C2460 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2460"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2460"]
ms.assetid: d969fca9-3ac5-4e4e-88fc-df05510e2093
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2460
'identifier1' : uses 'identifier2', which is being defined  
  
 A class or structure (`identifier2`) is declared as a member of itself (`identifier1`). Recursive definitions of classes and structures are not allowed.  
  
 The following sample generates C2460:  
  
```  
// C2460.cpp  
class C {  
   C aC;    // C2460  
};  
```  
  
 Instead, use a pointer reference in the class.  
  
```  
// C2460.cpp  
class C {  
   C * aC;    // OK  
};  
```