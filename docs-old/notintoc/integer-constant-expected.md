---
title: "Integer constant expected"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "bc30204"
  - "vbc30204"
helpviewer_keywords: 
  - "BC30204"
ms.assetid: e8d2fe24-7e63-4c30-b022-3b0323f00f4e
caps.latest.revision: 11
ms.author: "billchi"
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
# Integer constant expected
An `#ExternalSource` directive occurs in which the second argument is not an integer literal. Only an integer literal is valid in this context. A named constant or enumeration member is not valid.  
  
 **Error ID:** BC30204  
  
### To correct this error  
  
1.  Use a named constant or enumeration member instead of a literal.  
  
2.  Supply an integer literal as the second argument to the `#ExternalSource` directive.  
  
## See Also  
 [#ExternalSource Directive](../Topic/%23ExternalSource%20Directive.md)