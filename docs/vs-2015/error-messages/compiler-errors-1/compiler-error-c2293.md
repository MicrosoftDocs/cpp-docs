---
title: "Compiler Error C2293 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2293"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2293"
ms.assetid: 17e7b4e2-368b-4dd7-a01b-d82be60f8e56
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2293
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2293](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2293).  
  
  
identifier': illegal to have a member variable as a __based specifier  
  
 Specifiers for `__based` modifier must be nonmember pointers.  
  
 The following sample generates C2293:  
  
```  
// C2293.cpp  
// compile with: /c  
class A {  
   static int *i;  
   void __based(i) *bp;   // C2293  
   void *bp2;   // OK  
};  
```

