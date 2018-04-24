---
title: "Overload resolution failed because no accessible &#39;&lt;method&gt;&#39; can be called without a narrowing conversion: &lt;error&gt; | Microsoft Docs"
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
  - "vbc30519"
  - "bc30519"
helpviewer_keywords: 
  - "BC30519"
ms.assetid: 3b3e724d-6fad-4146-b47d-6525493b2fa8
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Overload resolution failed because no accessible &#39;&lt;method&gt;&#39; can be called without a narrowing conversion: &lt;error&gt;
You have made a call to an overloaded method, but the compiler cannot find a method that can be called without a narrowing conversion. A narrowing conversion changes a value to a data type that might not be able to precisely hold some of the possible values.  
  
 **Error ID:** BC30519  
  
### To correct this error  
  
-   Specify `Option Strict Off`.  
  
## See Also  
 [Overloaded Properties and Methods](http://msdn.microsoft.com/library/b686fb97-e7d7-4001-afaa-6650cba08f0d)   
 [Widening and Narrowing Conversions](http://msdn.microsoft.com/library/058c3152-6c28-4268-af44-2209e774f0bd)   
 [Option Strict Statement](http://msdn.microsoft.com/library/5883e0c1-a920-4274-8e46-b0ff047eaee5)