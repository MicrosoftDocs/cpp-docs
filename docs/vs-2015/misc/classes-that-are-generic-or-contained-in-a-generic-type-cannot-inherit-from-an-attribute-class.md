---
title: "Classes that are generic or contained in a generic type cannot inherit from an attribute class | Microsoft Docs"
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
  - "vbc32074"
  - "BC32074"
helpviewer_keywords: 
  - "BC32074"
ms.assetid: 3552ac98-d86a-4962-9d51-b9a8acc38ea1
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Classes that are generic or contained in a generic type cannot inherit from an attribute class
A class that is either generic or nested within a generic type specifies that it inherits from an attribute class.  
  
 Visual Basic and the .NET Framework do not currently support any combination of attributes and generic types. This means the following limitations apply:  
  
-   An attribute cannot be a generic type or be declared within a generic type.  
  
-   An attribute cannot inherit from a generic class, nor can a generic class inherit from an attribute.  
  
-   When you apply an attribute, you cannot supply an argument that is any of the following:  
  
    -   A generic type,  
  
    -   A type constructed from a generic type,  
  
    -   A type parameter of a containing type, or  
  
    -   A type constructed from a type parameter of a containing type.  
  
 **Error ID:** BC32074  
  
### To correct this error  
  
-   Change the base class to something other than an attribute class, or remove the `Inherits` statement entirely.  
  
## See Also  
 <xref:System.Attribute>   
 [NOT IN BUILD: Attributes Overview in Visual Basic](http://msdn.microsoft.com/en-us/0d0cff64-892d-4f57-83bd-bef388553d4f)   
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [Inheritance Basics](http://msdn.microsoft.com/library/dfc8deba-f5b3-4d1d-a937-7cb826446fc5)   
 [Inherits Statement](http://msdn.microsoft.com/library/9e6fe042-9af3-4341-8093-fc3537770cf2)