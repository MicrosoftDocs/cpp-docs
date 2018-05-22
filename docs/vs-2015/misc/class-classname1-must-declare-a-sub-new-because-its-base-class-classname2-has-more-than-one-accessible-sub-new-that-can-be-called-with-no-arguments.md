---
title: "Class &#39;&lt;classname1&gt;&#39; must declare a &#39;Sub New&#39; because its base class &#39;&lt;classname2&gt;&#39; has more than one accessible &#39;Sub New&#39; that can be called with no arguments | Microsoft Docs"
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
  - "bc32036"
  - "vbc32036"
helpviewer_keywords: 
  - "BC32036"
ms.assetid: 9b96387e-337e-4b2a-b49f-783c7e13811a
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Class &#39;&lt;classname1&gt;&#39; must declare a &#39;Sub New&#39; because its base class &#39;&lt;classname2&gt;&#39; has more than one accessible &#39;Sub New&#39; that can be called with no arguments
A derived class does not declare a constructor, and [!INCLUDE[vbprvb](../includes/vbprvb-md.md)] cannot generate one because it cannot determine which base class constructor to call.  
  
 When a derived class does not declare a constructor, [!INCLUDE[vbprvb](../includes/vbprvb-md.md)] attempts to generate an implicit parameterless constructor that calls `MyBase.New()`. If there is no accessible constructor in the base class that can be called without arguments, or if there is more than one, [!INCLUDE[vbprvb](../includes/vbprvb-md.md)] cannot generate an implicit constructor.  
  
 This situation can arise, for example, if one base class constructor has a single `Optional` argument and another has a single `ParamArray` argument. Each of these can be called with no arguments.  
  
 **Error ID:** BC32036  
  
### To correct this error  
  
1.  Declare and implement at least one `Sub New` constructor somewhere in the derived class.  
  
2.  Add a call to a base class constructor, `MyBase.New()`, as the first line of every `Sub New`.  
  
## See Also  
 [Object Lifetime: How Objects Are Created and Destroyed](http://msdn.microsoft.com/library/f1ee8458-b156-44e0-9a8a-5dd171648cd8)   
 [NOT IN BUILD: Using Constructors and Destructors](http://msdn.microsoft.com/en-us/548eebe1-86c4-4377-b2f5-447cb8be3d90)   
 [Optional](http://msdn.microsoft.com/library/4571ce88-a539-4115-b230-54eb277c6aa7)   
 [ParamArray](http://msdn.microsoft.com/library/a5f18789-92bd-488f-9c7e-cf3719963635)   
 [Optional Parameters](http://msdn.microsoft.com/library/398d2845-1069-4e94-b934-a73b545c8b87)   
 [Parameter Arrays](http://msdn.microsoft.com/library/c43edfae-9114-4096-9ebc-8c5c957a1067)