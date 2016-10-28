---
title: "Unable to write to log file because writing to it would cause it to exceed MaximumSize value"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vbrApplicationLog_FileExceedsMaximumSize"
ms.assetid: 61747a9c-e460-424b-a365-73cdba9dd428
caps.latest.revision: 10
ms.author: "billchi"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Unable to write to log file because writing to it would cause it to exceed MaximumSize value
The \<xref:Microsoft.VisualBasic.Logging.FileLogTraceListener> class could not write to the log file because:  
  
-   The log file size (in bytes) is greater than the value of the \<xref:Microsoft.VisualBasic.Logging.FileLogTraceListener.MaxFileSize*> property  
  
     —and—  
  
-   The value of the \<xref:Microsoft.VisualBasic.Logging.FileLogTraceListener.DiskSpaceExhaustedBehavior*> property was \<xref:Microsoft.VisualBasic.Logging.DiskSpaceExhaustedOption>.  
  
### To correct this error  
  
1.  Archive the existing logs and remove them from the computer to allow the \<xref:Microsoft.VisualBasic.Logging.FileLogTraceListener> object to create new logs.  
  
2.  Change the value of the \<xref:Microsoft.VisualBasic.Logging.FileLogTraceListener.MaxFileSize*> property to allow for larger logs.  
  
3.  Set the \<xref:Microsoft.VisualBasic.Logging.FileLogTraceListener.DiskSpaceExhaustedBehavior*> property to \<xref:Microsoft.VisualBasic.Logging.DiskSpaceExhaustedOption> to discard messages without warning if the log is too large.  
  
## See Also  
 \<xref:Microsoft.VisualBasic.Logging.FileLogTraceListener.MaxFileSize*>   
 \<xref:Microsoft.VisualBasic.Logging.FileLogTraceListener.DiskSpaceExhaustedBehavior*>   
 \<xref:Microsoft.VisualBasic.Logging.FileLogTraceListener>   
 [My.Application.Log Object](../Topic/My.Application.Log%20Object.md)   
 [My.Log Object](../Topic/My.Log%20Object.md)