---
title: "&#39;TryCast&#39; operands must be class-constrained type parameters, but &#39;&lt;typeparametername&gt;&#39; has no class constraint | Microsoft Docs"
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
  - "BC30793"
  - "vbc30793"
helpviewer_keywords: 
  - "BC30793"
ms.assetid: a38a1da9-4413-4a69-a2ce-0b6d51c2c4ef
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;TryCast&#39; operands must be class-constrained type parameters, but &#39;&lt;typeparametername&gt;&#39; has no class constraint
The [TryCast Operator](http://msdn.microsoft.com/library/d1ef5d47-fef4-491e-b014-1d910628f65c) operator is used with a type parameter operand that is not guaranteed to be a reference type.  
  
 `TryCast` operates only on reference types, such as classes or interfaces. When you pass a type parameter as an argument to `TryCast`, you must constrain that type parameter to be a reference type. You can do this by including one or more of the following in the type parameter's constraint list:  
  
-   One or more interface names (the type argument must implement all of them)  
  
-   At most one class name (the type argument must inherit from it)  
  
-   The [New Operator](http://msdn.microsoft.com/library/d7d566d7-fe0e-4336-91f7-641a542de4d0) constraint (the type argument must expose a parameterless constructor that the creating code can access, and therefore it must be a class)  
  
-   The [Class (Visual Basic)](http://msdn.microsoft.com/en-us/0777c6e6-46bc-451b-ad70-57b49d4ef4f7) constraint (the type argument must be a reference type)  
  
 **Error ID:** BC30793  
  
### To correct this error  
  
-   If you need to pass this type parameter to `TryCast`, constrain it with one or more of the constraints in the preceding list.  
  
-   If you cannot require the type parameter to accept only a reference type, you cannot use it with `TryCast`. You might be able to use the [CType Function](http://msdn.microsoft.com/library/dd4b29e7-6fa1-428c-877e-69955420bb72) instead.  
  
## See Also  
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [Type List](http://msdn.microsoft.com/library/56db947a-2ae8-40f2-a70a-960764e9d0db)   
 [Value Types and Reference Types](http://msdn.microsoft.com/library/fc82ce15-5a40-4c5c-a1e1-a556830e7391)   
 [Widening and Narrowing Conversions](http://msdn.microsoft.com/library/058c3152-6c28-4268-af44-2209e774f0bd)   
 [Implicit and Explicit Conversions](http://msdn.microsoft.com/library/77de1659-af8a-492c-967e-e7ef60ccce66)