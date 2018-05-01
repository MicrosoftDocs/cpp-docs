---
title: "Type &#39;&lt;typename&gt;&#39; has no type parameters and so cannot have type arguments | Microsoft Docs"
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
  - "bc32045"
  - "vbc32045"
helpviewer_keywords: 
  - "BC32045"
ms.assetid: b86e784c-6718-4585-bd39-2f0982068828
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Type &#39;&lt;typename&gt;&#39; has no type parameters and so cannot have type arguments
A declaration or assignment statement includes an [Of](http://msdn.microsoft.com/library/0db8f65c-65af-4089-ab7f-6fcfecb60444) clause when invoking a non-generic type.  
  
 By its definition, a *generic type* is a class, structure, interface, procedure, or delegate that operates on data types you can specify through one or more *type parameters*. When the using code creates a type from this generic type, it supplies a *type argument* to each type parameter. As part of the creation of the type, each type argument replaces every occurrence of its corresponding type parameter in the generated code.  
  
 Type parameters are defined with an `Of` clause inside parentheses, and type arguments are supplied using an `Of` clause inside parentheses. The `Of` clause is used only when dealing with generic types.  
  
 Non-generic types do not accept type parameters, and you cannot specify any type arguments when you invoke such a type.  
  
 **Error ID:** BC32045  
  
### To correct this error  
  
1.  Check the spelling of the type you are using in the declaration or assignment statement.  
  
2.  If you are invoking a non-generic type, remove the `Of` clause and its parentheses, if any. Do not remove parentheses surrounding a standard argument list for a procedure, delegate, or class constructor.  
  
## See Also  
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [Type List](http://msdn.microsoft.com/library/56db947a-2ae8-40f2-a70a-960764e9d0db)   
 [How to: Use a Generic Class](http://msdn.microsoft.com/library/242dd2a6-86c4-4ce7-83f2-f2661803f752)