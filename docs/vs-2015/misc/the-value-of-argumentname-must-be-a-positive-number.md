---
title: "The value of &lt;argumentname&gt; must be a positive number | Microsoft Docs"
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
  - "vbrApplicationLog_NegativeNumber"
ms.assetid: 597c412c-499e-49d2-b656-af2d90c292a5
caps.latest.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# The value of &lt;argumentname&gt; must be a positive number
The value of the <xref:Microsoft.VisualBasic.Logging.FileLogTraceListener.ReserveDiskSpace%2A> property must be greater than zero.  
  
 The <xref:Microsoft.VisualBasic.Logging.FileLogTraceListener.ReserveDiskSpace%2A> property specifies the amount of free disk space, in bytes, necessary before messages can be written to the log file  
  
### To correct this error  
  
-   Set the <xref:Microsoft.VisualBasic.Logging.FileLogTraceListener.ReserveDiskSpace%2A> property to a positive number.  
  
## See Also  
 <xref:Microsoft.VisualBasic.Logging.FileLogTraceListener.ReserveDiskSpace%2A>   
 [My.Application.Log Object](http://msdn.microsoft.com/library/296147f9-1109-4a55-9b5e-047f1ab9466c)   
 [My.Log Object](http://msdn.microsoft.com/library/309b14b4-8875-4b2f-9661-a734b8cbff07)