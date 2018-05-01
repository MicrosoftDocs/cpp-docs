---
title: "Compiler Error C2283 | Microsoft Docs"
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
  - "C2283"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2283"
ms.assetid: 8a5b3175-b480-4598-a1f7-0b50504c5caa
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2283
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2283](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2283).  
  
  
identifier' : pure specifier or abstract override specifier not allowed on unnamed struct  
  
 A member function of an unnamed class or structure is declared with a pure specifier, which is not permitted.  
  
 The following sample generates C2283:  
  
```  
// C2283.cpp  
// compile with: /c  
struct {  
   virtual void func() = 0;   // C2283  
};  
struct T {  
   virtual void func() = 0;   // OK  
};  
```

