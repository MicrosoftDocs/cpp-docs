---
title: "Compiler Warning (level 1) C4630 | Microsoft Docs"
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
  - "C4630"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4630"
ms.assetid: d8926376-7acc-4fc7-8438-6f0de3468870
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4630
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4630](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4630).  
  
  
symbol' : 'extern' storage class specifier illegal on member definition  
  
 A data member or member function is defined as `extern`. Members cannot be external, although entire objects can. The compiler ignores the `extern` keyword. The following sample generates C4630:  
  
```  
// C4630.cpp  
// compile with: /W1 /LD  
class A {  
   void func();  
};  
  
extern void A::func() {   // C4630, remove 'extern' to resolve  
}  
```

