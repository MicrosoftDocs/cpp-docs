---
title: "Type parameter &#39;&lt;typeparametername1&gt;&#39; must have either a &#39;New&#39; constraint or a &#39;Structure&#39; constraint to satisfy the &#39;New&#39; constraint for type parameter &#39;&lt;typeparametername2&gt;&#39; | Microsoft Docs"
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
  - "vbc32084"
  - "BC32084"
helpviewer_keywords: 
  - "BC32084"
ms.assetid: a7ff58d3-8c67-40e4-9fd8-92cc00524c22
caps.latest.revision: 12
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Type parameter &#39;&lt;typeparametername1&gt;&#39; must have either a &#39;New&#39; constraint or a &#39;Structure&#39; constraint to satisfy the &#39;New&#39; constraint for type parameter &#39;&lt;typeparametername2&gt;&#39;
A statement constructs a generic type passing a type parameter that is not constrained to satisfy a `New` constraint.  
  
 The `New` constraint means that the type argument supplied to that type parameter must expose a parameterless constructor accessible to the code that creates objects from it. All value types have parameterless constructors, but not all reference types do. Therefore the `Structure` constraint satisfies the `New` constraint, but the `Class` constraint, or a class or interface name, does not.  
  
 The following statements can generate this error.  
  
```  
Public Class c1(Of t As New)  
End Class  
Public Class c2(Of u)  
    Public testObject As New c1(Of u)  
End Class  
```  
  
 When class `c2` creates an object from `c1`, type parameter `u` does not satisfy the `New` constraint on type parameter `t`.  
  
 **Error ID:** BC32084  
  
### To correct this error  
  
-   If the type parameter to be passed to the generic type can satisfy the `Structure` or `New` constraint, then add the appropriate constraint to its definition.  
  
    ```  
    Public Class c2(Of u As Structure)  
    ```  
  
-   If the type parameter cannot satisfy the `Structure` or `New` constraint, then do not pass it to the generic type. You must pass something else as the type argument.  
  
## See Also  
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [New Operator](http://msdn.microsoft.com/library/d7d566d7-fe0e-4336-91f7-641a542de4d0)   
 [Structure (Visual Basic)](http://msdn.microsoft.com/en-us/263ce115-ac36-4c05-8cb7-0e0eead5c6d0)   
 [Class (Visual Basic)](http://msdn.microsoft.com/en-us/0777c6e6-46bc-451b-ad70-57b49d4ef4f7)   
 [Value Types and Reference Types](http://msdn.microsoft.com/library/fc82ce15-5a40-4c5c-a1e1-a556830e7391)