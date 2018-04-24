---
title: "Method cannot have both a ParamArray and Optional parameters | Microsoft Docs"
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
  - "vbc30046"
  - "bc30046"
helpviewer_keywords: 
  - "BC30046"
ms.assetid: 41066df8-c9ee-4f67-9f6c-4f62e3abc7be
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Method cannot have both a ParamArray and Optional parameters
A `ParamArray` argument is automatically optional, and it must be the only optional argument in the procedure declaration. All preceding arguments must be required.  
  
 **Error ID:** BC30046  
  
### To correct this error  
  
-   Remove the optional arguments in the declaration.  
  
## See Also  
 [Parameter Arrays](http://msdn.microsoft.com/library/c43edfae-9114-4096-9ebc-8c5c957a1067)   
 [ParamArray](http://msdn.microsoft.com/library/a5f18789-92bd-488f-9c7e-cf3719963635)