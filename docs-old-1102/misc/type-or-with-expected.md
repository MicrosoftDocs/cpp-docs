---
title: "Type or &#39;With&#39; expected"
ms.custom: ""
ms.date: "2015-07-20"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc30988"
  - "bc30988"
helpviewer_keywords: 
  - "BC30988"
ms.assetid: ab9c0cee-9fe4-4764-a3c2-aec16e709d4c
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
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
# Type or &#39;With&#39; expected
When you declare an instance of a class, the `New` keyword must be followed by a type name or by `With`. For example, the following statements each declare `client` to be an instance of the `Customer` class. The type name `Customer` follows `New`.  
  
```  
' Dim client As New Customer()  
' The next declaration uses an object initializer.  
Dim client As New Customer() With {.Name = "Litware, Inc."}  
```  
  
 Beginning with [!INCLUDE[vb_orcas_long](../misc/includes/vb_orcas_long_md.md)], you can declare an object to be an instance of an anonymous type, in which case you do not specify a data type. In anonymous type declarations, the keyword `With` follows `New`.  
  
```  
Dim person = New With {.Name ="Mike Nash", .Age = 27}  
```  
  
 **Error ID:** BC30988  
  
### To correct this error  
  
-   Change the declaration so that `With` or a type name follows `New`.  
  
## See Also  
 [Anonymous Types](../Topic/Anonymous%20Types%20\(Visual%20Basic\).md)   
 [Object Initializers: Named and Anonymous Types](../Topic/Object%20Initializers:%20Named%20and%20Anonymous%20Types%20\(Visual%20Basic\).md)   
 [New Operator](../Topic/New%20Operator%20\(Visual%20Basic\).md)   
 [NotInBuild:Declaration Statements in Visual Basic](http://msdn.microsoft.com/en-us/81f3c398-f45c-4d95-80bf-aa39d1a0fb30)