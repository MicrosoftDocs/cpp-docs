---
title: "Specified access &#39;&lt;accesslevel1&gt;&#39; for &#39;&lt;partialtypename&gt;&#39; does not match the access &#39;&lt;accesslevel2&gt;&#39; specified on one of its other partial types | Microsoft Docs"
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
  - "vbc30925"
  - "BC30925"
helpviewer_keywords: 
  - "BC30925"
ms.assetid: aabe0f4a-dc02-4828-a837-20cd47a7bd43
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Specified access &#39;&lt;accesslevel1&gt;&#39; for &#39;&lt;partialtypename&gt;&#39; does not match the access &#39;&lt;accesslevel2&gt;&#39; specified on one of its other partial types
A class or structure is defined in multiple partial declarations with conflicting access level specifications.  
  
 When you divide the definition of a class or structure among several partial declarations, the compiler treats the type as the union of all its partial declarations. This applies not only to the members but also to the implementation, inheritance, and access level.  
  
 You cannot mix access levels in the definition of a class or structure. Even the combination `Protected Friend` is allowed only when the keywords are contiguous in the same declaration statement.  
  
 **Error ID:** BC30925  
  
### To correct this error  
  
-   Decide what the access level of the class should be, and remove any conflicting access level specifications.  
  
## See Also  
 [Partial](http://msdn.microsoft.com/library/7adaef80-f435-46e1-970a-269fff63b448)   
 [Access Levels in Visual Basic](http://msdn.microsoft.com/library/6e06c1ab-fd78-47f0-83a8-1152780b5e1a)   
 [Class Statement](http://msdn.microsoft.com/library/f2664f38-eb5a-4d4b-a374-1d041521fb6c)   
 [Structure Statement](http://msdn.microsoft.com/library/9bd1deea-2a89-4cdc-812c-6dcbb947c391)   
 [NOT IN BUILD: Classes: Blueprints for Objects](http://msdn.microsoft.com/en-us/2c86373d-0333-4616-a7d8-4790c4e89f7b)   
 [Structures](http://msdn.microsoft.com/library/55e86462-5e99-4d33-8018-6d097ca491b2)