---
title: "Compiler Error C3354"
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
  - "C3354"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3354"
ms.assetid: 185de401-231e-4999-a149-172ee4c69d84
caps.latest.revision: 10
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
# Compiler Error C3354
'function' : the function used to create a delegate cannot have return type 'type'  
  
 The following types are invalid as return types for a [delegate](../notintoc/__delegate.md):  
  
-   Pointer to function  
  
-   Pointer to member  
  
-   Pointer to member function  
  
-   Reference to function  
  
-   Reference to member function  
  
 The following sample generates C3354:  
  
```  
// C3354_2.cpp  
// compile with: /clr /c  
using namespace System;  
typedef void ( *VoidPfn )();  
  
delegate VoidPfn func(); // C3354  
// try the following line instead  
// delegate  void func();  
```  
  
 The following sample generates C3354:  
  
```  
// C3354.cpp  
// compile with: /clr:oldSyntax /c  
#using <mscorlib.dll>  
using namespace System;  
  
typedef void (*VoidPfn)();  
  
__delegate VoidPfn func();   // C3354  
// try the following line instead  
// __delegate void func();  
```