---
title: "Type arguments cannot be applied to the expression &#39;&lt;expression&gt;&#39; | Microsoft Docs"
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
  - "bc32058"
  - "vbc32058"
helpviewer_keywords: 
  - "BC32058"
ms.assetid: c6b9b49c-6fb2-47b8-a8bb-464562d3adfd
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Type arguments cannot be applied to the expression &#39;&lt;expression&gt;&#39;
An import alias is defined with an [Of](../Topic/Of%20Clause%20\(Visual%20Basic\).md) clause that passes type arguments to the import alias.  
  
 Type arguments are used for generic types, and only classes, structures, interfaces, procedures, and delegates can be generic. Neither namespaces nor import aliases can be generic.  
  
 **Error ID:** BC32058  
  
### To correct this error  
  
-   Remove the `Of` clause and its type arguments from the import alias.  
  
## See Also  
 [Imports Statement (.NET Namespace and Type)](../Topic/Imports%20Statement%20\(.NET%20Namespace%20and%20Type\).md)   
 [References and the Imports Statement](../Topic/References%20and%20the%20Imports%20Statement%20\(Visual%20Basic\).md)   
 [NOTINBUILD: Resolving a Reference When Multiple Variables Have the Same Name](http://msdn.microsoft.com/en-us/9601e39f-1911-44e1-ace5-3f6e090408b9)   
 [Generic Types in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)