---
title: "Argument matching parameter &#39;&lt;parametername&gt;&#39; narrows from &#39;&lt;type1&gt;&#39; to &#39;&lt;type2&gt;&#39; | Microsoft Docs"
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
  - "vbc30520"
  - "bc30520"
helpviewer_keywords: 
  - "BC30520"
ms.assetid: 652ff70b-156d-4d1c-af19-fa1c53e2d0b5
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Argument matching parameter &#39;&lt;parametername&gt;&#39; narrows from &#39;&lt;type1&gt;&#39; to &#39;&lt;type2&gt;&#39;
You have made a call to an overloaded method, but the compiler cannot find a method that can be called without a narrowing conversion. A narrowing conversion changes a value to a data type that might not be able to precisely hold some of the possible values.  
  
 **Error ID:** BC30520  
  
### To correct this error  
  
-   Specify `Option Strict Off`.  
  
## See Also  
 [Overloaded Properties and Methods](http://msdn.microsoft.com/library/b686fb97-e7d7-4001-afaa-6650cba08f0d)   
 [Widening and Narrowing Conversions](http://msdn.microsoft.com/library/058c3152-6c28-4268-af44-2209e774f0bd)   
 [Option Strict Statement](http://msdn.microsoft.com/library/5883e0c1-a920-4274-8e46-b0ff047eaee5)