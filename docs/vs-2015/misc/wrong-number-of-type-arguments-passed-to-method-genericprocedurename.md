---
title: "Wrong number of type arguments passed to method &#39;&lt;genericprocedurename&gt;&#39; | Microsoft Docs"
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
  - "bc30951"
  - "vbc30951"
helpviewer_keywords: 
  - "BC30951"
ms.assetid: 84c2f0cb-5706-4b4e-967c-0ca35a20913c
caps.latest.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Wrong number of type arguments passed to method &#39;&lt;genericprocedurename&gt;&#39;
A generic procedure is called with a number of type arguments that does not match the number of type parameters with which it is defined.  
  
 **Error ID:** BC30951  
  
### To correct this error  
  
-   Supply a type argument for every type parameter defined for the generic procedure.  
  
     -or-  
  
-   Call the generic procedure with no type arguments at all, and let the compiler attempt to infer the type arguments.  
  
## See Also  
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [AddressOf Operator](http://msdn.microsoft.com/library/8105a59d-60d8-4ab5-b221-5899cdfacbf4)   
 [Type List](http://msdn.microsoft.com/library/56db947a-2ae8-40f2-a70a-960764e9d0db)   
 [Generic Procedures in Visual Basic](http://msdn.microsoft.com/library/95577b28-137f-4d5c-a149-919c828600e5)