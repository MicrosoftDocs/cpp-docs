---
title: "Compiler Error C3248 | Microsoft Docs"
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
  - "C3248"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3248"
ms.assetid: d00b9d7d-b6be-4a5b-bb52-48174ea71fc4
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3248
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3248](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3248).  
  
  
function1': function declared as '__sealed' cannot be overridden by 'function2'  
  
 A derived class tried to override a [__sealed](../../misc/sealed.md) virtual method.  
  
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

