---
title: "Type parameters or types constructed with type parameters are not allowed in attribute arguments"
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
  - "BC32079"
  - "vbc32079"
helpviewer_keywords: 
  - "BC32079"
ms.assetid: 93eb59bd-e7db-4f73-a37f-405a83df48c1
caps.latest.revision: 9
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
# Type parameters or types constructed with type parameters are not allowed in attribute arguments
An attribute is applied using an argument that is either a type parameter or is constructed using a type parameter.  
  
 Visual Basic and the .NET Framework do not currently support any combination of attributes and generic types. This means the following limitations apply:  
  
-   An attribute cannot be a generic type or be declared within a generic type.  
  
-   An attribute cannot inherit from a generic class, nor can a generic class inherit from an attribute.  
  
-   When you apply an attribute, you cannot supply an argument that is any of the following:  
  
    -   A generic type,  
  
    -   A type constructed from a generic type,  
  
    -   A type parameter of a containing type, or  
  
    -   A type constructed from a type parameter of a containing type.  
  
 **Error ID:** BC32079  
  
### To correct this error  
  
-   Reconstruct the arguments supplied to the attribute so that they do not include any type parameters or any type constructed from a type parameter.  
  
## See Also  
 \<xref:System.Attribute>   
 [NOT IN BUILD: Attributes Overview in Visual Basic](assetId:///0d0cff64-892d-4f57-83bd-bef388553d4f)   
 [Generic Types in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)