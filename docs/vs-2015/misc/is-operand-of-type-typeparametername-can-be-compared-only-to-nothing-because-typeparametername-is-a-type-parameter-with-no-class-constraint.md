---
title: "&#39;Is&#39; operand of type &#39;&lt;typeparametername&gt;&#39; can be compared only to &#39;Nothing&#39; because &#39;&lt;typeparametername&gt;&#39; is a type parameter with no class constraint | Microsoft Docs"
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
  - "vbc32052"
  - "bc32052"
helpviewer_keywords: 
  - "BC32052"
ms.assetid: 0bbf2249-eb0d-4b74-a555-8868c7ebe91d
caps.latest.revision: 12
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Is&#39; operand of type &#39;&lt;typeparametername&gt;&#39; can be compared only to &#39;Nothing&#39; because &#39;&lt;typeparametername&gt;&#39; is a type parameter with no class constraint
A type parameter is used as an operand for the [Is Operator](http://msdn.microsoft.com/library/8045a6c8-2a83-45b6-ad47-d09a704c656d) when the type parameter is defined without either the [Class (Visual Basic)](http://msdn.microsoft.com/en-us/0777c6e6-46bc-451b-ad70-57b49d4ef4f7) keyword or a specific class name in its constraint list.  
  
 `Is` compares two reference types to determine whether they point to the same object instance in memory. It cannot take an operand that is not a reference type unless the other operand is [Nothing](http://msdn.microsoft.com/library/06176e2d-bbf7-4a37-afaa-a86ad21ee99f).  
  
 **Error ID:** BC32052  
  
### To correct this error  
  
-   If you can require that the type argument supplied to this type parameter always be a reference type, add either the `Class` keyword or a specific class name to the constraint list for the type parameter.  
  
-   If you cannot require that the type argument supplied to this type parameter always be a reference type, remove it from the `Is` expression. You cannot compare it to other reference types with the `Is` operator.  
  
## See Also  
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [Type List](http://msdn.microsoft.com/library/56db947a-2ae8-40f2-a70a-960764e9d0db)   
 [Value Types and Reference Types](http://msdn.microsoft.com/library/fc82ce15-5a40-4c5c-a1e1-a556830e7391)   
 [Comparison Operators in Visual Basic](http://msdn.microsoft.com/library/0b570339-5407-474f-8421-e183a8b303ee)