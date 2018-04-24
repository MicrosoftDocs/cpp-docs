---
title: "&#39;Handles&#39; in modules must specify a &#39;WithEvents&#39; variable qualified with a single identifier | Microsoft Docs"
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
  - "bc31418"
  - "vbc31418"
helpviewer_keywords: 
  - "BC31418"
ms.assetid: 7d866577-1e42-43f1-85d1-5d7eeba881b2
caps.latest.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Handles&#39; in modules must specify a &#39;WithEvents&#39; variable qualified with a single identifier
To specify an event handler, `Handles` statements must specify an object variable that was declared with the `WithEvents` keyword.  
  
 **Error ID:** BC31418  
  
### To correct this error  
  
-   Use the `WithEvents` modifier to declare variables that will be used with the `Handles` statement.  
  
## See Also  
 [Handles](http://msdn.microsoft.com/library/1b051c0e-f499-42f6-acb5-6f4f27824b40)   
 [WithEvents](http://msdn.microsoft.com/library/19d461f5-d72f-4de9-8c1d-0a6650316990)   
 [Events](http://msdn.microsoft.com/library/8fb0353a-e41b-4e23-b78f-da65db832f70)