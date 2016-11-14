---
title: "Type arguments cannot be applied to the expression &#39;&lt;expression&gt;&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "2015-07-20"
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
# Type arguments cannot be applied to the expression &#39;&lt;expression&gt;&#39;
An import alias is defined with an [Of](/dotnet/visual-basic/language-reference/statements/of-clause) clause that passes type arguments to the import alias.  
  
 Type arguments are used for generic types, and only classes, structures, interfaces, procedures, and delegates can be generic. Neither namespaces nor import aliases can be generic.  
  
 **Error ID:** BC32058  
  
### To correct this error  
  
-   Remove the `Of` clause and its type arguments from the import alias.  
  
## See Also  
 [Imports Statement (.NET Namespace and Type)](/dotnet/visual-basic/language-reference/statements/imports-statement-net-namespace-and-type)   
 [References and the Imports Statement](/dotnet/visual-basic/programming-guide/program-structure/references-and-the-imports-statement)   
 [NOTINBUILD: Resolving a Reference When Multiple Variables Have the Same Name](http://msdn.microsoft.com/en-us/9601e39f-1911-44e1-ace5-3f6e090408b9)   
 [Generic Types in Visual Basic](/dotnet/visual-basic/programming-guide/language-features/data-types/generic-types)   
 [Type List](/dotnet/visual-basic/language-reference/statements/type-list)