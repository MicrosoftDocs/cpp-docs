---
title: "Local variables within generic methods cannot be declared &#39;Static&#39;"
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
  - "vbc32068"
  - "bc32068"
helpviewer_keywords: 
  - "BC32068"
ms.assetid: cb5df484-76f9-4092-9d19-f26ddcf1c035
caps.latest.revision: 10
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
# Local variables within generic methods cannot be declared &#39;Static&#39;
The declaration of a local variable within a generic procedure specifies `Static`.  
  
 Visual Basic and the .NET Framework do not currently support any combination of static variables and generic procedures.  
  
 **Error ID:** BC32068  
  
### To correct this error  
  
-   Remove the `Static` keyword from the variable declaration.  
  
## See Also  
 [Static](../Topic/Static%20\(Visual%20Basic\).md)   
 [NOTINBUILD How to: Lengthen a Variable's Lifetime](assetId:///04e7c56c-1db0-4fe5-a678-859a39ec654b)   
 [Generic Types in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md)