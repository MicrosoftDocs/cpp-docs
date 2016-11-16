---
title: "&#39;TryCast&#39; operands must be class-constrained type parameters, but &#39;&lt;typeparametername&gt;&#39; has no class constraint | Microsoft Docs"
ms.custom: ""
ms.date: "2015-07-20"
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
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# &#39;TryCast&#39; operands must be class-constrained type parameters, but &#39;&lt;typeparametername&gt;&#39; has no class constraint
The [TryCast Operator](/dotnet/articles/visual-basic/language-reference/operators/trycast-operator) operator is used with a type parameter operand that is not guaranteed to be a reference type.  
  
 `TryCast` operates only on reference types, such as classes or interfaces. When you pass a type parameter as an argument to `TryCast`, you must constrain that type parameter to be a reference type. You can do this by including one or more of the following in the type parameter's constraint list:  
  
-   One or more interface names (the type argument must implement all of them)  
  
-   At most one class name (the type argument must inherit from it)  
  
-   The [New Operator](/dotnet/articles/visual-basic/language-reference/operators/new-operator) constraint (the type argument must expose a parameterless constructor that the creating code can access, and therefore it must be a class)  
  
-   The [Class (Visual Basic)](http://msdn.microsoft.com/en-us/0777c6e6-46bc-451b-ad70-57b49d4ef4f7) constraint (the type argument must be a reference type)  
  
 **Error ID:** BC30793  
  
### To correct this error  
  
-   If you need to pass this type parameter to `TryCast`, constrain it with one or more of the constraints in the preceding list.  
  
-   If you cannot require the type parameter to accept only a reference type, you cannot use it with `TryCast`. You might be able to use the [CType Function](/dotnet/articles/visual-basic/language-reference/functions/ctype-function) instead.  
  
## See Also  
 [Generic Types in Visual Basic](/dotnet/articles/visual-basic/programming-guide/language-features/data-types/generic-types)   
 [Type List](/dotnet/articles/visual-basic/language-reference/statements/type-list)   
 [Value Types and Reference Types](/dotnet/articles/visual-basic/programming-guide/language-features/data-types/value-types-and-reference-types)   
 [Widening and Narrowing Conversions](/dotnet/articles/visual-basic/programming-guide/language-features/data-types/widening-and-narrowing-conversions)   
 [Implicit and Explicit Conversions](/dotnet/articles/visual-basic/programming-guide/language-features/data-types/implicit-and-explicit-conversions)