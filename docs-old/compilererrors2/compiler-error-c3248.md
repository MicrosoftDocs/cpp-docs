---
title: "Compiler Error C3248"
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
  - "C3248"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3248"
ms.assetid: d00b9d7d-b6be-4a5b-bb52-48174ea71fc4
caps.latest.revision: 12
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
# Compiler Error C3248
'function1': function declared as '__sealed' cannot be overridden by 'function2'  
  
 A derived class tried to override a [__sealed](../notintoc/__sealed.md) virtual method.  
  
 C3248 is only reachable using **/clr:oldSyntax**.  
  
 The following sample generates C3248:  
  
```  
// C3248b.cpp  
// compile with: /clr:oldSyntax  
using namespace System;  
  
__gc struct B {  
   __sealed virtual void func();  
};  
  
__gc struct D : B {  
   void func();   // C3248  
};  
```