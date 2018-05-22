---
title: "Named arguments cannot match ParamArray parameters | Microsoft Docs"
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
  - "vbrNamedArgumentOnParamArray"
ms.assetid: ba35fb86-329a-4ceb-864b-045c07661482
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Named arguments cannot match ParamArray parameters
Parameter arrays must be passed by value.  
  
### To correct this error  
  
1.  Pass the arguments `ByVal`, rather than by naming them.  
  
## See Also  
 [Parameter Arrays](http://msdn.microsoft.com/library/c43edfae-9114-4096-9ebc-8c5c957a1067)   
 [Passing Arguments by Value and by Reference](http://msdn.microsoft.com/library/fd8a9de6-7178-44d5-a9bf-458d4ad907c2)   
 [Passing Arguments by Position and by Name](http://msdn.microsoft.com/library/1ad7358f-1da9-48da-a95b-f3c7ed41eff3)