---
title: "Compiler Error C2186"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "C2186"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2186"
ms.assetid: 284bfb7e-ab85-4fcb-9864-1ddf7f6c94ae
caps.latest.revision: 8
ms.author: "corob"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Compiler Error C2186
'operator' : illegal operand of type 'void'  
  
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