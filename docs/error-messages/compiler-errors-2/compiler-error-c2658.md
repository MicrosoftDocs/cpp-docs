---
title: "Compiler Error C2658 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2658"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2658"]
ms.assetid: 638368e8-7893-4a14-abec-13c768a9543a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2658
'member': redefinition in anonymous struct/union  
  
 Two anonymous structures or unions contained member declarations with the same identifier but with different types. Under [/Za](../../build/reference/za-ze-disable-language-extensions.md), you will also get this error for members with the same identifier and type.  
  
 The following sample generates C2658:  
  
```  
// C2658.cpp  
// compile with: /c  
struct X {  
   union { // can be struct too  
      int i;  
   };  
   union {  
      int i;   // Under /Za, C2658  
      // int i not needed here because it is defined in the first union  
   };  
};  
  
struct Z {  
   union {  
      char *i;  
   };  
  
   union {  
      void *i;   // C2658 redefinition of 'i'  
      // try the following line instead  
      // void *ii;  
   };  
};  
```