---
title: "Named argument cannot match a ParamArray parameter | Microsoft Docs"
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
  - "bc30587"
  - "vbc30587"
helpviewer_keywords: 
  - "BC30587"
ms.assetid: aff179af-96f2-4157-971e-881d8e08f5f2
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Named argument cannot match a ParamArray parameter
You have supplied a named argument (specified with the argument's declared name followed by a colon and an equal sign, followed by the argument value); however you cannot pass a parameter array by name. When you call the procedure, you supply an indefinite number of comma-separated arguments for the parameter array, and the compiler cannot associate more than one argument with a single name.  
  
 **Error ID:** BC30587  
  
### To correct this error  
  
-   Pass the argument by position, rather than by name.  
  
## See Also  
 [ParamArray](http://msdn.microsoft.com/library/a5f18789-92bd-488f-9c7e-cf3719963635)   
 [Passing Arguments by Position and by Name](http://msdn.microsoft.com/library/1ad7358f-1da9-48da-a95b-f3c7ed41eff3)