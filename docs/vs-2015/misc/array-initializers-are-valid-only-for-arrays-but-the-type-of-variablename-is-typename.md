---
title: "Array initializers are valid only for arrays, but the type of &#39;&lt;variablename&gt;&#39; is &#39;&lt;typename&gt;&#39; | Microsoft Docs"
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
  - "bc30679"
  - "vbc30679"
helpviewer_keywords: 
  - "BC30679"
ms.assetid: 3cf34882-7a58-4074-8ebb-52e58199a506
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Array initializers are valid only for arrays, but the type of &#39;&lt;variablename&gt;&#39; is &#39;&lt;typename&gt;&#39;
An attempt was made to initialize a non-array variable with a list of values.  
  
 **Error ID:** BC30679  
  
### To correct this error  
  
-   Declare and initialize the variable as an array; for example:  
  
     `Dim intarray As Integer() = {1, 5, 9}`  
  
-   Initialize the variable as a single value; for example:  
  
     `Dim intvalue As Integer = 1`  
  
## See Also  
 [Dim Statement](http://msdn.microsoft.com/library/fae3eca1-f0b2-4400-994b-7aa58a848448)   
 [Variable Declaration](http://msdn.microsoft.com/library/d8f10226-92b1-480f-9f53-df377b2d7e15)   
 [Arrays](http://msdn.microsoft.com/library/dbf29737-b589-4443-bee6-a27588d9c67e)