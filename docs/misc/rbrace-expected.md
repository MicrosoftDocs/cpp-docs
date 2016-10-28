---
title: "&#39;}&#39; expected"
ms.custom: ""
ms.date: "2015-07-20"
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
 [Arrays](../Topic/Arrays%20in%20Visual%20Basic.md)   
 [How to: Initialize an Array Variable in Visual Basic](../Topic/How%20to:%20Initialize%20an%20Array%20Variable%20in%20Visual%20Basic.md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)   
 [Generic Types in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)