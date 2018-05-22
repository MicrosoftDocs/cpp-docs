---
title: "Type of &#39;&lt;variablename&gt;&#39; cannot be inferred from an expression containing &#39;&lt;variablename&gt;&#39; | Microsoft Docs"
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
  - "vbc30980"
  - "bc30980"
helpviewer_keywords: 
  - "BC30980"
ms.assetid: 43a5d008-5362-481b-845b-b9bb00a61a83
caps.latest.revision: 21
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Type of &#39;&lt;variablename&gt;&#39; cannot be inferred from an expression containing &#39;&lt;variablename&gt;&#39;
The compiler cannot infer the data type of a variable if the variable is used in establishing its initial value in the declaration.  
  
 For example, with `Option Infer` set to `On`, the following examples do not compile:  
  
-   Declarations  
  
    ```  
    ' Does not compile with Option Infer on.  
    Dim m = m  
    Dim d = someFunction(d)  
    ```  
  
-   `For` loop  
  
    ```  
    ' Does not compile with Option Infer on.  
    For j = 1 To j  
    Next  
    ```  
  
-   `For Each` loop  
  
    ```  
    ' Does not compile with Option Infer on.  
    For Each customer In customer.Orders  
    Next  
    ```  
  
 **Error ID:** BC30980  
  
### To correct this error  
  
-   If the two variables were intended to refer to different values, change the name of the variable that you are declaring.  
  
-   Use a literal value instead of the variable name in the initial value, on the right side of the assignment.  
  
-   Use an `As` clause to specify the type of the variable you are declaring.  
  
## See Also  
 [Dim Statement](http://msdn.microsoft.com/library/fae3eca1-f0b2-4400-994b-7aa58a848448)   
 [For Each...Next Statement](http://msdn.microsoft.com/library/ebce3120-95c3-42b1-b70b-fa7da40c75e2)   
 [For...Next Statement](http://msdn.microsoft.com/library/f5fc0d51-67ce-4c36-9f09-31c9a91c94e9)   
 [Local Type Inference](http://msdn.microsoft.com/library/b8307f18-2e56-4ab3-a45a-826873f400f6)   
 [Option Infer Statement](http://msdn.microsoft.com/library/4ad3e6e9-8f5b-4209-a248-de22ef6e4652)