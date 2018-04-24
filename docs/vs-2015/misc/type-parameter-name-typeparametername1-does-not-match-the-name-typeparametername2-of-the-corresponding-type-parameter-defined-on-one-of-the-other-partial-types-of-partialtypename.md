---
title: "Type parameter name &#39;&lt;typeparametername1&gt;&#39; does not match the name &#39;&lt;typeparametername2&gt;&#39; of the corresponding type parameter defined on one of the other partial types of &#39;&lt;partialtypename&gt;&#39; | Microsoft Docs"
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
  - "vbc30931"
  - "bc30931"
helpviewer_keywords: 
  - "BC30931"
ms.assetid: 01b053c3-d1b5-4e69-b908-3d5cfc73913b
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Type parameter name &#39;&lt;typeparametername1&gt;&#39; does not match the name &#39;&lt;typeparametername2&gt;&#39; of the corresponding type parameter defined on one of the other partial types of &#39;&lt;partialtypename&gt;&#39;
A generic class or structure is defined in multiple partial declarations with conflicting type parameter specifications.  
  
 When you divide the definition of a class or structure among several partial declarations, the compiler treats the type as the union of all its partial declarations. This applies not only to the members but also to the implementation, inheritance, and access level.  
  
 You cannot specify multiple names for any type parameter in the definition of a generic class or structure.  
  
 **Error ID:** BC30931  
  
### To correct this error  
  
-   Decide what name the type parameter should have, and use the same name in every partial declaration.  
  
## See Also  
 [Partial](http://msdn.microsoft.com/library/7adaef80-f435-46e1-970a-269fff63b448)   
 [Class Statement](http://msdn.microsoft.com/library/f2664f38-eb5a-4d4b-a374-1d041521fb6c)   
 [Structure Statement](http://msdn.microsoft.com/library/9bd1deea-2a89-4cdc-812c-6dcbb947c391)   
 [NOT IN BUILD: Classes: Blueprints for Objects](http://msdn.microsoft.com/en-us/2c86373d-0333-4616-a7d8-4790c4e89f7b)   
 [Structures](http://msdn.microsoft.com/library/55e86462-5e99-4d33-8018-6d097ca491b2)   
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [Type List](http://msdn.microsoft.com/library/56db947a-2ae8-40f2-a70a-960764e9d0db)