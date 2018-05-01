---
title: "Type arguments for method &#39;&lt;procedurename&gt;&#39; could not be inferred from the delegate &#39;&lt;delegatename&gt;&#39; | Microsoft Docs"
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
  - "vbc30952"
  - "bc30952"
helpviewer_keywords: 
  - "BC30952"
ms.assetid: 5eb804ce-2e93-4668-b655-7fe00815e552
caps.latest.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Type arguments for method &#39;&lt;procedurename&gt;&#39; could not be inferred from the delegate &#39;&lt;delegatename&gt;&#39;
An assignment statement uses `AddressOf` to assign the address of a generic procedure to a delegate, but it does not supply any type arguments to the generic procedure.  
  
 Normally, when you invoke a generic type, you supply a type argument for each type parameter that the generic type defines. If you do not supply any type arguments, the compiler attempts to infer the types to be passed to the type parameters. If the context does not provide enough information for the compiler to infer the types, it generates an error.  
  
 **Error ID:** BC30952  
  
### To correct this error  
  
-   Specify the type arguments for the generic procedure in the `AddressOf` expression.  
  
## See Also  
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [AddressOf Operator](http://msdn.microsoft.com/library/8105a59d-60d8-4ab5-b221-5899cdfacbf4)   
 [Generic Procedures in Visual Basic](http://msdn.microsoft.com/library/95577b28-137f-4d5c-a149-919c828600e5)   
 [Type List](http://msdn.microsoft.com/library/56db947a-2ae8-40f2-a70a-960764e9d0db)