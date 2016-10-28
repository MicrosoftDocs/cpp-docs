---
title: "Compiler Warning (level 1) C4935"
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
  - "C4935"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4935"
ms.assetid: a36c56d3-571a-44dd-bb0f-bcc6b020e134
caps.latest.revision: 9
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
# Compiler Warning (level 1) C4935
assembly access specifier modified from 'access'  
  
 The assembly visibility of a type was modified. The compiler uses the last specifier that it encounters. For example, the assembly visibility of a forward declaration may be different from the assembly visibility of the class definition.  
  
 C4935 is only reachable using **/clr:oldSyntax**.  
  
 The following sample generates C4935:  
  
```  
// C4935.cpp  
// compile with: /clr:oldSyntax /W1 /c  
public __gc public class X {   // C4935  
   int i;  
};  
```