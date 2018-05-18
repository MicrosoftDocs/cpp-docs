---
title: "Compiler Error C2888 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2888"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2888"]
ms.assetid: 244f593e-ff25-4dad-b31f-84dafa3bc84a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2888
'identifier' : symbol cannot be defined within namespace 'namespace'  
  
 A symbol belonging to namespace A must be defined in a namespace that encloses A.  
  
 The following sample generates C2888:  
  
```  
// C2888.cpp  
// compile with: /c  
namespace M {  
   namespace N {  
      void f1();  
      void f2();  
   }  
  
   void N::f1() {}   // OK: namspace M encloses N  
}  
  
namespace O {  
   void M::N::f2() {}   // C2888 namespace O does not enclose M  
}  
```