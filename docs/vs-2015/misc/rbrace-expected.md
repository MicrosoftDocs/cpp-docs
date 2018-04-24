---
title: "&#39;}&#39; expected | Microsoft Docs"
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
  - "vbc30370"
  - "bc30370"
helpviewer_keywords: 
  - "BC30370"
ms.assetid: a4ce9be9-fc5d-46ec-a217-c3428bd0b97e
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;}&#39; expected
An array initializer or a constraint list has not been ended in a valid fashion.  
  
 The element values with which to initialize an array must be enclosed in braces (`{}`).  
  
```  
Dim demoArray() As Integer = New Integer() {1, 2, 3}   
```  
  
 Similarly, the constraints in a constraint list for a generic type parameter must be enclosed in braces.  
  
```  
Public Class dictionaryMaker(Of t As {IComparable, IDisposable, New})   
```  
  
 **Error ID:** BC30370  
  
### To correct this error  
  
-   Use "}" to end the array initializer or constraint list.  
  
## See Also  
 [Arrays](http://msdn.microsoft.com/library/dbf29737-b589-4443-bee6-a27588d9c67e)   
 [How to: Initialize an Array Variable in Visual Basic](http://msdn.microsoft.com/library/aadd7a60-7ca4-4608-b986-091f19e7fc10)   
 [Type List](http://msdn.microsoft.com/library/56db947a-2ae8-40f2-a70a-960764e9d0db)   
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)