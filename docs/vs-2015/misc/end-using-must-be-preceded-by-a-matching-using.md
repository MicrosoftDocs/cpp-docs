---
title: "&#39;End Using&#39; must be preceded by a matching &#39;Using&#39; | Microsoft Docs"
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
  - "bc36007"
  - "vbc36007"
helpviewer_keywords: 
  - "BC36007"
ms.assetid: 10fb31ba-9b6c-403f-bacc-c7b5df14f1dd
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;End Using&#39; must be preceded by a matching &#39;Using&#39;
An `End Using` statement appears with no matching `Using` declaration preceding it.  
  
 **Error ID:** BC36007  
  
### To correct this error  
  
-   Remove the `End Using` statement if it is redundant.  
  
-   Supply the missing [Using Statement](http://msdn.microsoft.com/library/665d1580-dd54-4e96-a9a9-6be2a68948f1) if one is missing.  
  
-   Move the `End Using` statement to the appropriate place in the code.  
  
## See Also  
 [End \<keyword> Statement](http://msdn.microsoft.com/library/42d6e088-ab0f-4cda-88e8-fdce3e5fcf4f)