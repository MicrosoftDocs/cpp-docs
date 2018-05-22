---
title: "Option Strict On disallows narrowing from type &#39;&lt;typename1&gt;&#39; to type &#39;&lt;typename2&gt;&#39; in copying the value of ByRef parameter &lt;parametername&gt;&#39; back to the matching argument | Microsoft Docs"
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
  - "bc32029"
  - "vbc32029"
helpviewer_keywords: 
  - "BC32029"
ms.assetid: fc9ae5d2-b506-47cf-a50c-116fda5ed206
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Option Strict On disallows narrowing from type &#39;&lt;typename1&gt;&#39; to type &#39;&lt;typename2&gt;&#39; in copying the value of ByRef parameter &lt;parametername&gt;&#39; back to the matching argument
A procedure call supplies a `ByRef` argument with a data type that widens to the argument's declared type, and `Option Strict` is `On`. The widening conversion is allowed when the argument is passed to the procedure, but when the procedure modifies the contents of the variable argument in the calling code, the reverse conversion is narrowing. Narrowing conversions are not allowed with `Option Strict On`.  
  
 **Error ID:** BC32029  
  
### To correct this error  
  
-   Supply each `ByRef` argument in the procedure call with the same data type as the declared type, or turn `Option Strict Off`.  
  
## See Also  
 [Option Strict Statement](http://msdn.microsoft.com/library/5883e0c1-a920-4274-8e46-b0ff047eaee5)   
 [Passing Arguments by Value and by Reference](http://msdn.microsoft.com/library/fd8a9de6-7178-44d5-a9bf-458d4ad907c2)   
 [Widening and Narrowing Conversions](http://msdn.microsoft.com/library/058c3152-6c28-4268-af44-2209e774f0bd)   
 [Implicit and Explicit Conversions](http://msdn.microsoft.com/library/77de1659-af8a-492c-967e-e7ef60ccce66)