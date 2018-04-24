---
title: "Compiler Error C2815 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2815"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2815"
ms.assetid: d0256fd6-0721-4c99-b03c-52d96e77a613
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2815
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2815](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2815).  
  
  
operator delete' : first formal parameter must be 'void *', but 'param' was used  
  
 Any user-defined [operator delete](http://msdn.microsoft.com/library/7c45e232-ceb2-4a77-b0af-da2a935d46a2) function must take a first formal parameter of type `void *`.  
  
 The following sample generates C2815:  
  
```  
// C2815.cpp  
// compile with: /c  
class CMyClass {  
public:  
   void mf1(int *a);  
   void operator delete(CMyClass *);   // C2815  
   void operator delete(void *);   
};  
```

