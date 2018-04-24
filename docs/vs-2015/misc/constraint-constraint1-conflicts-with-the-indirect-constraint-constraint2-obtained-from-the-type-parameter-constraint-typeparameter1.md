---
title: "Constraint &#39;&lt;constraint1&gt;&#39; conflicts with the indirect constraint &#39;&lt;constraint2&gt;&#39; obtained from the type parameter constraint &#39;&lt;typeparameter1&gt;&#39; | Microsoft Docs"
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
  - "bc32110"
  - "vbc32110"
helpviewer_keywords: 
  - "BC32110"
ms.assetid: e799214d-23b4-4a3f-b61a-0b9d3387ead3
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Constraint &#39;&lt;constraint1&gt;&#39; conflicts with the indirect constraint &#39;&lt;constraint2&gt;&#39; obtained from the type parameter constraint &#39;&lt;typeparameter1&gt;&#39;
A generic type is declared with conflicting constraints due to a combination of direct and indirect constraints.  
  
 The following statement can generate this error.  
  
 `Public Class testClass(Of t1 As {Structure, t2}, t2 As Class)`  
  
 The direct constraint `Structure` and the indirect constraint `Class` cause a conflict for type parameter `t1`, because the `Structure` constraint requires that the corresponding type argument be a value type, while `Class` requires that it be a reference type.  
  
 **Error ID:** BC32110  
  
### To correct this error  
  
-   Change the type parameter constraints to avoid conflicting constraints.  
  
## See Also  
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [Type List](http://msdn.microsoft.com/library/56db947a-2ae8-40f2-a70a-960764e9d0db)   
 [Structure (Visual Basic)](http://msdn.microsoft.com/en-us/263ce115-ac36-4c05-8cb7-0e0eead5c6d0)   
 [Class (Visual Basic)](http://msdn.microsoft.com/en-us/0777c6e6-46bc-451b-ad70-57b49d4ef4f7)   
 [Value Types and Reference Types](http://msdn.microsoft.com/library/fc82ce15-5a40-4c5c-a1e1-a556830e7391)