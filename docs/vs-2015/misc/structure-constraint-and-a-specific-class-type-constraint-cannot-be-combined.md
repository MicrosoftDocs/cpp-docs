---
title: "&#39;Structure&#39; constraint and a specific class type constraint cannot be combined | Microsoft Docs"
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
  - "vbc32108"
  - "bc32108"
helpviewer_keywords: 
  - "BC32108"
ms.assetid: de461824-5aec-48d1-967d-b0e0609a8ba6
caps.latest.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Structure&#39; constraint and a specific class type constraint cannot be combined
A constraint list includes both the [Structure (Visual Basic)](http://msdn.microsoft.com/en-us/263ce115-ac36-4c05-8cb7-0e0eead5c6d0) constraint and the name of a defined class.  
  
 A constraint list imposes requirements on the type argument passed to the type parameter. You can specify the following requirements in any combination:  
  
-   The type argument must implement one or more interfaces  
  
-   The type argument must inherit from at most one class  
  
-   The type argument must expose a parameterless constructor that the creating code can access (include the `New` constraint)  
  
 If you do not include any specific class or interface in the constraint list, you can impose a more general requirement by specifying one of the following:  
  
-   The type argument must be a value type (include the `Structure` constraint)  
  
-   The type argument must be a reference type (include the `Class` constraint)  
  
 You cannot specify both `Structure` and `Class` for the same type parameter, and you cannot specify either one more than once.  
  
 **Error ID:** BC32108  
  
### To correct this error  
  
-   If you want the type argument to be a value type, remove the class name from the constraint list.  
  
-   If you want the type argument to inherit from the specified class name, remove the `Structure` keyword from the constraint list.  
  
## See Also  
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [Value Types and Reference Types](http://msdn.microsoft.com/library/fc82ce15-5a40-4c5c-a1e1-a556830e7391)