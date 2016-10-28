---
title: "Array initializer cannot be specified for a non constant dimension; use the empty initializer &#39;{}&#39;"
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
  - "vbc30949"
  - "bc30949"
helpviewer_keywords: 
  - "BC30949"
ms.assetid: b3d27d9c-7a1f-4bac-ad71-388b24b807b3
caps.latest.revision: 7
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
# Array initializer cannot be specified for a non constant dimension; use the empty initializer &#39;{}&#39;
An array initializes a dimension that is not known at compile time.  
  
 The following code generates this error.  
  
```  
Dim j As Integer  
Dim intArray As Integer = New Integer(1, j) {{0, 100}, {1,101}}  
```  
  
 The following code avoids the error.  
  
```  
Dim intArray As Integer = New Integer(1, j) {}  
For i As Integer = 0 To j  
    intArray(0, i) = i  
    intArray(1, i) = 100 + i  
Next i  
```  
  
 **Error ID:** BC30949  
  
### To correct this error  
  
-   If possible, specify a constant dimension in the array declaration.  
  
-   If you cannot specify a constant dimension, then you must initialize the array using a loop when the nonconstant dimension becomes known.  
  
## See Also  
 [For Each...Next Statement](../Topic/For%20Each...Next%20Statement%20\(Visual%20Basic\).md)   
 [NOTINBUILD Overview of Arrays in Visual Basic](assetId:///ca50e2f2-b4d2-4c57-9169-9abbcc3392d8)   
 [How to: Initialize an Array Variable in Visual Basic](../Topic/How%20to:%20Initialize%20an%20Array%20Variable%20in%20Visual%20Basic.md)   
 [NOTINBUILD How to: Initialize a Multidimensional Array](assetId:///502dcf8b-d86c-46f1-ad7d-3ce809645774)