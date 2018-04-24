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
An import alias is defined with an [Of](http://msdn.microsoft.com/library/0db8f65c-65af-4089-ab7f-6fcfecb60444) clause that passes type arguments to the import alias.  
  
 Type arguments are used for generic types, and only classes, structures, interfaces, procedures, and delegates can be generic. Neither namespaces nor import aliases can be generic.  
  
 **Error ID:** BC32058  
  
### To correct this error  
  
-   Remove the `Of` clause and its type arguments from the import alias.  
  
## See Also  
 [Imports Statement (.NET Namespace and Type)](http://msdn.microsoft.com/library/7062f8aa-d890-4232-9eed-92836e13fb6e)   
 [References and the Imports Statement](http://msdn.microsoft.com/library/38149bd4-0a6f-4b31-b5f8-94a8c33f1600)   
 [NOTINBUILD: Resolving a Reference When Multiple Variables Have the Same Name](http://msdn.microsoft.com/en-us/9601e39f-1911-44e1-ace5-3f6e090408b9)   
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [Type List](http://msdn.microsoft.com/library/56db947a-2ae8-40f2-a70a-960764e9d0db)