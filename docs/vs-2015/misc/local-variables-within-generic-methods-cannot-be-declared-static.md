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
 [Static](http://msdn.microsoft.com/library/19013910-4658-47b6-a22e-1744b527979e)   
 [NOTINBUILD How to: Lengthen a Variable's Lifetime](http://msdn.microsoft.com/en-us/04e7c56c-1db0-4fe5-a678-859a39ec654b)   
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [Generic Procedures in Visual Basic](http://msdn.microsoft.com/library/95577b28-137f-4d5c-a149-919c828600e5)