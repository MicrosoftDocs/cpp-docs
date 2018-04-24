---
title: "Labels are not valid outside methods-multiline lambdas | Microsoft Docs"
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
  - "vbc30016"
  - "bc30016"
helpviewer_keywords: 
  - "BC30016"
ms.assetid: 17d12a96-d759-4df9-882c-5e45c1d814a5
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Labels are not valid outside methods/multiline lambdas
You can add a label to a statement only within a `Sub`, `Function`, property `Get`, or property `Set` procedure. Only an executable statement can have a label, and all executable statements must be inside procedures.  
  
 **Error ID:** BC30016  
  
### To correct this error  
  
1.  Remove the label from the statement, or move the statement inside a procedure.  
  
## See Also  
 [How to: Label Statements](http://msdn.microsoft.com/library/38f1ff43-2054-42cb-963b-1998e60c6ed4)   
 [Sub Statement](http://msdn.microsoft.com/library/e347d700-d06c-405b-b302-e9b1edb57dfc)   
 [Function Statement](http://msdn.microsoft.com/library/a4497077-0f46-4ede-a27f-9e8670df52b9)   
 [Get Statement](http://msdn.microsoft.com/library/56b05cdc-bd64-4dfd-bb12-824eacec6f94)   
 [Set Statement](http://msdn.microsoft.com/library/9ecc27b4-df84-420d-9075-db25455fb3cd)