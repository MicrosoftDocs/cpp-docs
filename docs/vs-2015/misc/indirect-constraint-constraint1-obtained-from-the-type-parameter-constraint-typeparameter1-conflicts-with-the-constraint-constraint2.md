---
title: "Indirect constraint &#39;&lt;constraint1&gt;&#39; obtained from the type parameter constraint &#39;&lt;typeparameter1&gt;&#39; conflicts with the constraint &#39;&lt;constraint2&gt;&#39; | Microsoft Docs"
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
  - "bc32111"
  - "vbc32111"
helpviewer_keywords: 
  - "BC32111"
ms.assetid: b03b5840-5318-4844-b2da-1bca4c28d097
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Indirect constraint &#39;&lt;constraint1&gt;&#39; obtained from the type parameter constraint &#39;&lt;typeparameter1&gt;&#39; conflicts with the constraint &#39;&lt;constraint2&gt;&#39;
A generic type is declared with conflicting constraints due to a combination of direct and indirect constraints.  
  
 The following statement can generate this error.  
  
 `Public Class testClass(Of t1 As {t2, Class}, t2 As Structure)`  
  
 The indirect constraint `Structure` and the direct constraint `Class` cause a conflict for type parameter `t1`, because the `Structure` constraint requires that the corresponding type argument be a value type, while `Class` requires that it be a reference type.  
  
 **Error ID:** BC32111  
  
### To correct this error  
  
-   Change the type parameter constraints to avoid conflicting constraints.  
  
## See Also  
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [Type List](http://msdn.microsoft.com/library/56db947a-2ae8-40f2-a70a-960764e9d0db)   
 [Structure (Visual Basic)](http://msdn.microsoft.com/en-us/263ce115-ac36-4c05-8cb7-0e0eead5c6d0)   
 [Class (Visual Basic)](http://msdn.microsoft.com/en-us/0777c6e6-46bc-451b-ad70-57b49d4ef4f7)   
 [Value Types and Reference Types](http://msdn.microsoft.com/library/fc82ce15-5a40-4c5c-a1e1-a556830e7391)