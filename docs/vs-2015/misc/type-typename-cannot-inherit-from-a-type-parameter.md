---
title: "Type &#39;&lt;typename&gt;&#39; cannot inherit from a type parameter | Microsoft Docs"
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
  - "bc32055"
  - "vbc32055"
helpviewer_keywords: 
  - "BC32055"
ms.assetid: 97af7cad-6e40-41e3-892d-1fbcbd86356d
caps.latest.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Type &#39;&lt;typename&gt;&#39; cannot inherit from a type parameter
A class or interface includes an [Inherits Statement](http://msdn.microsoft.com/library/9e6fe042-9af3-4341-8093-fc3537770cf2) specifying a generic type parameter.  
  
 A type cannot inherit from a type that is not yet defined. Inheritance involves the ability to reuse members of the base class, which in turn requires that these members be defined. A generic type parameter is a placeholder that is to be replaced by a specific type supplied by a type argument. Therefore, a type cannot inherit from the placeholder.  
  
 **Error ID:** BC32055  
  
### To correct this error  
  
-   If the inheriting type must inherit from another type, use a specific type instead of a type parameter.  
  
-   If the base type must be represented by a generic type parameter, no other type can inherit from it. Remove the [Inherits Statement](http://msdn.microsoft.com/library/9e6fe042-9af3-4341-8093-fc3537770cf2).  
  
## See Also  
 [NOT IN BUILD: Inheritance in Visual Basic](http://msdn.microsoft.com/en-us/e5e6e240-ed31-4657-820c-079b7c79313c)   
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)