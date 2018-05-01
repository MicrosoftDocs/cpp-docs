---
title: "&#39;&lt;method1&gt;&#39; and &#39;&lt;method2&gt;&#39; cannot overload each other because they differ only by return types | Microsoft Docs"
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
  - "bc30301"
  - "vbc30301"
helpviewer_keywords: 
  - "BC30301"
ms.assetid: 5adc442b-9671-4d93-add8-42929b1a09b9
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;method1&gt;&#39; and &#39;&lt;method2&gt;&#39; cannot overload each other because they differ only by return types
You have attempted to overload a method with another method that differs from the first only in its return type. In overloading, you must differentiate any two versions of a method by their argument lists; you cannot use anything other than argument lists to differentiate the methods.  
  
 **Error ID:** BC30301  
  
### To correct this error  
  
-   Ensure that the methods are differentiated by their argument lists.  
  
## See Also  
 [Procedure Overloading](http://msdn.microsoft.com/library/fbc7fb18-e3b2-48b6-b554-64c00ed09d2a)   
 [Considerations in Overloading Procedures](http://msdn.microsoft.com/library/a2001248-10d0-42c5-b0ce-eeedc987319f)