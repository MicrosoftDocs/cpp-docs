---
title: "Compiler Error C2365 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["C2365"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2365"]
ms.assetid: 35839b0b-4055-4b79-8957-b3a0871bdd02
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Compiler Error C2365
'class member' : redefinition; previous definition was 'class member'  
  
 You attempted to redefine a class member.  
  
 The following sample generates C2365.  
  
```  
// C2365.cpp  
// compile with: /c  
class C1 {  
   int CFunc();  
   char *CFunc;   // C2365, already exists as a member function  
  
   int CMem;  
   char *CMem();   // C2365, already exists as a data member  
};  
```