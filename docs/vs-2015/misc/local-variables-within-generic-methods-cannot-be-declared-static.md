---
title: "Local variables within generic methods cannot be declared &#39;Static&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc32068"
  - "bc32068"
helpviewer_keywords: 
  - "BC32068"
ms.assetid: cb5df484-76f9-4092-9d19-f26ddcf1c035
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Local variables within generic methods cannot be declared &#39;Static&#39;
The declaration of a local variable within a generic procedure specifies `Static`.  
  
 Visual Basic and the .NET Framework do not currently support any combination of static variables and generic procedures.  
  
 **Error ID:** BC32068  
  
### To correct this error  
  
-   Remove the `Static` keyword from the variable declaration.  
  
## See Also  
 [Static](../Topic/Static%20\(Visual%20Basic\).md)   
 [NOTINBUILD How to: Lengthen a Variable's Lifetime](http://msdn.microsoft.com/en-us/04e7c56c-1db0-4fe5-a678-859a39ec654b)   
 [Generic Types in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md)