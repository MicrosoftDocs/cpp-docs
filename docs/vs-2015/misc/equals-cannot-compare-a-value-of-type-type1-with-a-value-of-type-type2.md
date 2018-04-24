---
title: "&#39;Equals&#39; cannot compare a value of type &lt;type1&gt; with a value of type &lt;type2&gt; | Microsoft Docs"
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
  - "vbc36621"
  - "bc36621"
helpviewer_keywords: 
  - "BC36621"
ms.assetid: bd40bf57-3a12-407a-8622-7e428850c77c
caps.latest.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Equals&#39; cannot compare a value of type &lt;type1&gt; with a value of type &lt;type2&gt;
An `Equals` operator in a `Join` or `Group Join` clause has attempted to compare one data type to another in a way that is not defined. An example of this is a comparison of a `Boolean` value to a `Date` type.  
  
 **Error ID:** BC36621  
  
### To correct this error  
  
-   Make sure that the values on each side of the `Equals` operator can be converted to a common data type. Some options for accomplishing this are:  
  
    -   Use the `CType` function to convert one or more of the values to a specific type.  
  
    -   Use the <xref:System.Convert> class or conversion methods to convert one or more of the values to a common, immutable type.  
  
    -   Convert the values to strings by using the `ToString` method.  
  
## See Also  
 [CType Function](http://msdn.microsoft.com/library/dd4b29e7-6fa1-428c-877e-69955420bb72)   
 [Type Conversions in Visual Basic](http://msdn.microsoft.com/library/1cdacd21-ba31-4b62-b5be-395e41eeaa17)   
 [Join Clause](http://msdn.microsoft.com/library/6dd37936-b27c-4e00-98ad-154b23f4de64)   
 [Group Join Clause](http://msdn.microsoft.com/library/37dbf79c-7b5c-421b-bbb7-dadfd2b92a1c)   
 [Introduction to LINQ in Visual Basic](http://msdn.microsoft.com/library/3047d86e-0d49-40e2-928b-dc02e46c7984)   
 [LINQ](http://msdn.microsoft.com/library/ddba5545-ff6e-46c3-8967-5c4280db5aca)