---
title: "Method &#39;&lt;methodname&gt;&#39; does not have the same signature as delegate &#39;&lt;delegatename&gt;&#39;"
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
  - "bc30408"
  - "vbc30408"
helpviewer_keywords: 
  - "BC30408"
ms.assetid: 845f6686-388f-4253-b635-146e517015a1
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
# Method &#39;&lt;methodname&gt;&#39; does not have the same signature as delegate &#39;&lt;delegatename&gt;&#39;
There is a mismatch between the signatures of the method and delegate you are attempting to use. The `Delegate` statement defines the parameter types and return types of a delegate class. Any procedure with matching parameters, types, and return type may be used to create an instance of this delegate type. Each delegate class defines a constructor that is passed the specification of an object method.  
  
 **Error ID:** BC30408  
  
### To correct this error  
  
-   Check the signatures to find the mismatch, and correct it.  
  
## See Also  
 [Delegate Statement](../Topic/Delegate%20Statement.md)