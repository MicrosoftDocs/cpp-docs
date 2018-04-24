---
title: "&#39;AddressOf&#39; expressions are not valid in the first expression of a &#39;Select Case&#39; statement | Microsoft Docs"
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
  - "bc36636"
  - "vbc36636"
helpviewer_keywords: 
  - "BC36636"
ms.assetid: 2ccc0ccc-d4d0-4910-8859-dedfa57c8126
caps.latest.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;AddressOf&#39; expressions are not valid in the first expression of a &#39;Select Case&#39; statement
You cannot use an `AddressOf` expression for the test expression in a `Select Case` statement. `AddressOf` expressions return function delegates, and the test expression of a `Select Case` statement must be an elementary data type.  
  
 **Error ID:** BC36636  
  
### To correct this error  
  
-   Examine your code to determine whether a different conditional construction, such as an `If...Then...Else` statement, would work for you.  
  
## See Also  
 [AddressOf Operator](http://msdn.microsoft.com/library/8105a59d-60d8-4ab5-b221-5899cdfacbf4)   
 [If...Then...Else Statement](http://msdn.microsoft.com/library/790068a2-1307-4e28-8a72-be5ebda099e9)   
 [Select...Case Statement](http://msdn.microsoft.com/library/68877b65-5419-4bf0-a465-20cd0e4c7d44)