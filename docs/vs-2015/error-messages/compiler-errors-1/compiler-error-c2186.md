---
title: "Compiler Error C2186 | Microsoft Docs"
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
  - "C2186"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2186"
ms.assetid: 284bfb7e-ab85-4fcb-9864-1ddf7f6c94ae
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2186
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2186](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2186).  
  
  
operator' : illegal operand of type 'void'  
  
 The operator has a `void` operand.  
  
 The following sample generates C2186:  
  
```  
// C2186.cpp  
// compile with: /c  
void func1( void );  
int  func2( void );  
int i = 2 + func1();   // C2186 func1() is type void  
int j = 2 + func2();   // OK both operands are type int  
```

