---
title: "Compiler Error C2258 | Microsoft Docs"
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
  - "C2258"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2258"
ms.assetid: 105eaa87-befb-4ecb-9a3f-e09e14d2f5bf
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2258
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2258](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2258).  
  
  
illegal pure syntax, must be '= 0'  
  
 A pure virtual function is declared with incorrect syntax.  
  
 The following sample generates C2258:  
  
```  
// C2258.cpp  
// compile with: /c  
class A {  
public:  
   void virtual func1() = 1; // C2258  
   void virtual func2() = 0;   // OK  
};  
```

