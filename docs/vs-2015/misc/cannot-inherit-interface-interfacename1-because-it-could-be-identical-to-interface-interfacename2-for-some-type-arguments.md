---
title: "Cannot inherit interface &#39;&lt;interfacename1&gt;&#39; because it could be identical to interface &#39;&lt;interfacename2&gt;&#39; for some type arguments | Microsoft Docs"
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
  - "vbc32120"
  - "bc32120"
helpviewer_keywords: 
  - "BC32120"
ms.assetid: c91f84a1-e61d-4b5f-8028-221e64ac044c
caps.latest.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Cannot inherit interface &#39;&lt;interfacename1&gt;&#39; because it could be identical to interface &#39;&lt;interfacename2&gt;&#39; for some type arguments
A generic interface inherits more than once from another generic interface, and two of the inheritances could conflict for certain values of type arguments.  
  
 The following statements can generate this error.  
  
 `Public Interface interfaceA(Of u)`  
  
 `End Interface`  
  
 `Public Interface derivedInterface(Of t1, t2)`  
  
 `Inherits interfaceA(Of t1), interfaceA(Of t2)`  
  
 `End Interface`  
  
 If `derivedInterface` is constructed or implemented supplying the same type to both `t1` and `t2`, it must inherit two versions of `interfaceA` with identical type arguments. Doing so would produce an ambiguity about which version to access.  
  
 **Error ID:** BC32120  
  
### To correct this error  
  
-   Change one of the type arguments supplied to the derived interface so that there is no conflict.  
  
     -or-  
  
-   Remove from the `Inherits` statement one of the interfaces causing the potential inheritance or implementation conflict.  
  
## See Also  
 [NOT IN BUILD: Interfaces Overview](http://msdn.microsoft.com/en-us/f96bb470-c1b8-4c73-89bc-6f536b798da1)   
 [Interface Statement](http://msdn.microsoft.com/library/8997af73-bda3-4f79-bd41-ca396b610260)   
 [Inheritance Basics](http://msdn.microsoft.com/library/dfc8deba-f5b3-4d1d-a937-7cb826446fc5)   
 [Inherits Statement](http://msdn.microsoft.com/library/9e6fe042-9af3-4341-8093-fc3537770cf2)   
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)