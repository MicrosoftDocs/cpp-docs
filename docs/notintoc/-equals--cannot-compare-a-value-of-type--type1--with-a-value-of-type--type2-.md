---
title: "&#39;Equals&#39; cannot compare a value of type &lt;type1&gt; with a value of type &lt;type2&gt;"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vbc36621"
  - "bc36621"
helpviewer_keywords: 
  - "BC36621"
ms.assetid: bd40bf57-3a12-407a-8622-7e428850c77c
caps.latest.revision: 5
ms.author: "billchi"
manager: "douge"
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
# &#39;Equals&#39; cannot compare a value of type &lt;type1&gt; with a value of type &lt;type2&gt;
An `Equals` operator in a `Join` or `Group Join` clause has attempted to compare one data type to another in a way that is not defined. An example of this is a comparison of a `Boolean` value to a `Date` type.  
  
 **Error ID:** BC36621  
  
### To correct this error  
  
-   Make sure that the values on each side of the `Equals` operator can be converted to a common data type. Some options for accomplishing this are:  
  
    -   Use the `CType` function to convert one or more of the values to a specific type.  
  
    -   Use the \<xref:System.Convert> class or conversion methods to convert one or more of the values to a common, immutable type.  
  
    -   Convert the values to strings by using the `ToString` method.  
  
## See Also  
 [CType Function](../Topic/CType%20Function%20\(Visual%20Basic\).md)   
 [Type Conversions in Visual Basic](../Topic/Type%20Conversions%20in%20Visual%20Basic.md)   
 [Join Clause](../Topic/Join%20Clause%20\(Visual%20Basic\).md)   
 [Group Join Clause](../Topic/Group%20Join%20Clause%20\(Visual%20Basic\).md)   
 [Introduction to LINQ in Visual Basic](../Topic/Introduction%20to%20LINQ%20in%20Visual%20Basic.md)   
 [LINQ](../Topic/LINQ%20in%20Visual%20Basic.md)