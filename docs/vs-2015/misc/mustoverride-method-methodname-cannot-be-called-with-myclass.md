---
title: "&#39;MustOverride&#39; method &#39;&lt;methodname&gt;&#39; cannot be called with &#39;MyClass&#39; | Microsoft Docs"
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
  - "bc30614"
  - "vbc30614"
helpviewer_keywords: 
  - "BC30614"
ms.assetid: fc57af41-1552-46d1-9727-341f1835e661
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;MustOverride&#39; method &#39;&lt;methodname&gt;&#39; cannot be called with &#39;MyClass&#39;
`MyClass` is equivalent to `Me`, but all method invocations on it are treated as if the method being invoked were `NotOverridable`.  
  
 **Error ID:** BC30614  
  
### To correct this error  
  
-   Remove the `MustOverride` modifier, or declare the method in a base class and inherit and override that class.  
  
## See Also  
 [MustOverride](../Topic/MustOverride%20\(Visual%20Basic\).md)   
 [MustInherit](../Topic/MustInherit%20\(Visual%20Basic\).md)   
 [NotOverridable](../Topic/NotOverridable%20\(Visual%20Basic\).md)