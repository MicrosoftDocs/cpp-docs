---
title: "Array declarations cannot specify lower bounds"
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
  - "vbc30805"
  - "bc30805"
helpviewer_keywords: 
  - "BC30805"
ms.assetid: f2055387-f4dc-4366-89fb-d752929a0258
caps.latest.revision: 9
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
# Array declarations cannot specify lower bounds
Arrays always have a lower bound of zero. You can specify zero as the lower bound to make your code more readable. However, you cannot specify any other value for the lower bound.  
  
 **Error ID:** BC30805  
  
### To correct this error  
  
-   Dimension arrays as one less than the total number of elements. For example, `Dim y(6)` has the same size (7 elements) as `Dim x(3 To 9)`. You can also specify `Dim y(0 To 6)`.  
  
-   Use offsets to simulate nonzero lower bounds. The following example simulates an array dimensioned from 3 to 9.  
  
    ```  
    Const offset As Integer = 3  
    Dim arrayIndex As Integer  
    ' arrayIndex can vary between 3 and 9.  
    Dim y(0 To 6)  
    ' The preceding statement allocates the same number of elements  
    ' as Dim y(3 To 9).  
    y(arrayIndex - offset) = value  
    ' The preceding statement converts arrayIndex to the  
    ' corresponding index of y.  
    ```  
  
## See Also  
 [Arrays](../Topic/Arrays%20in%20Visual%20Basic.md)   
 [Array Dimensions in Visual Basic](../Topic/Array%20Dimensions%20in%20Visual%20Basic.md)   
 [NOTINBUILD How to: Specify a Zero Lower Bound on an Array](assetId:///20ffd49a-64f7-4634-8ed0-46ba1049d935)