---
title: "&#39;&lt;typename&gt;&#39; is a generic type and requires type arguments | Microsoft Docs"
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
  - "BC32076"
  - "vbc32076"
helpviewer_keywords: 
  - "BC32076"
ms.assetid: 57f63727-c544-4012-8f03-5d77fbdd1135
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;typename&gt;&#39; is a generic type and requires type arguments
A variable, procedure parameter, or function return is declared to have the type of a generic class or structure, but the declaration does not supply any type arguments.  
  
 By its nature, every generic class and structure is defined with at least one type parameter. When you use a generic type to declare a constructed class or structure, you must supply a type argument for every type parameter defined by the generic type.  
  
 **Error ID:** BC32076  
  
### To correct this error  
  
-   Add a type list to the declaration, enclosed in parentheses and beginning with the `Of` keyword.  
  
## See Also  
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [Of](http://msdn.microsoft.com/library/0db8f65c-65af-4089-ab7f-6fcfecb60444)   
 [Type List](http://msdn.microsoft.com/library/56db947a-2ae8-40f2-a70a-960764e9d0db)