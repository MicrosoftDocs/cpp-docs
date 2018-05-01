---
title: "&#39;End Function&#39; must be preceded by a matching &#39;Function&#39; | Microsoft Docs"
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
  - "bc30430"
  - "vbc30430"
helpviewer_keywords: 
  - "BC30430"
ms.assetid: de66a6b4-0321-45c2-aca0-87d2b4244b31
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;End Function&#39; must be preceded by a matching &#39;Function&#39;
An `End Function` statement appears in your code with no matching `Function` procedure definition preceding it.  
  
 **Error ID:** BC30430  
  
### To correct this error  
  
1.  Remove the `End Function` statement if it is redundant.  
  
2.  Supply the missing `Function` procedure if one is missing.  
  
3.  Move the `End Function` to the appropriate place in the code.  
  
## See Also  
 [Function Procedures](http://msdn.microsoft.com/library/1b9f632c-553b-4cb6-920a-ded117ead8c0)   
 [End \<keyword> Statement](http://msdn.microsoft.com/library/42d6e088-ab0f-4cda-88e8-fdce3e5fcf4f)