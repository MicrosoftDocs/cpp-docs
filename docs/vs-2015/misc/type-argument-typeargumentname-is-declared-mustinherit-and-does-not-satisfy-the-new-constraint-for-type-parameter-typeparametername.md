---
title: "Type argument &#39;&lt;typeargumentname&gt;&#39; is declared &#39;MustInherit&#39; and does not satisfy the &#39;New&#39; constraint for type parameter &#39;&lt;typeparametername&gt;&#39; | Microsoft Docs"
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
  - "vbc32082"
  - "BC32082"
helpviewer_keywords: 
  - "BC32082"
ms.assetid: 597e5944-a61b-4858-ada5-efb80b27f26b
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Type argument &#39;&lt;typeargumentname&gt;&#39; is declared &#39;MustInherit&#39; and does not satisfy the &#39;New&#39; constraint for type parameter &#39;&lt;typeparametername&gt;&#39;
A generic type is invoked with a `MustInherit` class as a type argument, while the corresponding type parameter is declared with the `New` constraint.  
  
 The `New` constraint requires that the type passed in the corresponding type argument must support the creation of objects. However, an *abstract* class, that is, a class declared as `MustInherit`, does not expose any constructors because you cannot create any objects from it.  
  
 **Error ID:** BC32082  
  
### To correct this error  
  
1.  If the class used in the type argument does not need to be abstract, then remove the `MustInherit` keyword from its declaration.  
  
2.  If the class used in the type argument needs to be abstract but does not need to be used to construct the generic type, then pass a different class in the type argument.  
  
3.  If the corresponding type parameter does not need to create any objects from the type passed to it, then remove the `New` constraint from its declaration.  
  
## See Also  
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [New Operator](http://msdn.microsoft.com/library/d7d566d7-fe0e-4336-91f7-641a542de4d0)   
 [MustInherit](http://msdn.microsoft.com/library/b8f05185-90e3-4dd7-adc2-90d852fab5b4)