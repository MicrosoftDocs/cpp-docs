---
title: "Compiler Error C2792 | Microsoft Docs"
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
  - "C2792"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2792"
ms.assetid: 392cf748-4f5e-4e62-a364-3118d5658408
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2792
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2792](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2792).  
  
  
super' : this keyword must be followed by '::'  
  
 The only token that can follow the keyword `__super` is `::`.  
  
 The following sample generates C2792:  
  
```  
// C2792.cpp  
struct B {  
   void mf();  
};  
  
struct D : B {  
   void mf() {  
      __super.();   // C2792  
  
      // try the following line instead  
      // __super::mf();  
   }  
};  
```

