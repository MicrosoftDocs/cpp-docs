---
title: "Expression or statement is not valid in debug windows | Microsoft Docs"
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
  - "bc30706"
  - "vbc30706"
helpviewer_keywords: 
  - "BC30706"
ms.assetid: 229bb582-d962-4385-97e7-120dcf5d8991
caps.latest.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Expression or statement is not valid in debug windows
`Try...Catch...Finally` statements cannot be used in the debugging context.  
  
 **Error ID:** BC30706  
  
### To correct this error  
  
1.  Remove `Try...Catch...Finally` statements from debugging code.  
  
## See Also  
 [Try...Catch...Finally Statement](http://msdn.microsoft.com/library/d6488026-ccb3-42b8-a810-0d97b9d6472b)   
 [Debugging in Visual Studio](http://msdn.microsoft.com/library/590f152d-31e2-4e13-b808-a1b13e421483)