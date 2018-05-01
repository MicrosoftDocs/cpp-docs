---
title: "No accessible non-generic &#39;&lt;procedurename&gt;&#39; found | Microsoft Docs"
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
  - "vbc32117"
  - "bc32117"
helpviewer_keywords: 
  - "BC32117"
ms.assetid: a7bf8b67-8a0a-499e-9992-dc00e09b7ff4
caps.latest.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# No accessible non-generic &#39;&lt;procedurename&gt;&#39; found
A statement calls a procedure that has more than one overloaded version, but all the overloaded versions are generic and the call does not supply type arguments.  
  
 If there is only one generic version and you call it without type arguments, the compiler can attempt *type inference*. For more information, see "Type Inference" in [Generic Procedures in Visual Basic](http://msdn.microsoft.com/library/95577b28-137f-4d5c-a149-919c828600e5). However, if there is more than one generic version, the compiler is not able to choose among them unless you supply type arguments. If you supply one type argument, you must supply a type argument for every type parameter that one of the overloaded versions defines.  
  
 **Error ID:** BC32117  
  
### To correct this error  
  
-   Call the procedure with a type argument list.  
  
## See Also  
 [Overloads](http://msdn.microsoft.com/library/0c6820b8-25b2-4664-bc59-5ca93c99c042)   
 [Procedure Overloading](http://msdn.microsoft.com/library/fbc7fb18-e3b2-48b6-b554-64c00ed09d2a)   
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [Generic Procedures in Visual Basic](http://msdn.microsoft.com/library/95577b28-137f-4d5c-a149-919c828600e5)