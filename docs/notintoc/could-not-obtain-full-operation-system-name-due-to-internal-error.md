---
title: "Could not obtain full operation system name due to internal error"
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
  - "vbrDiagnosticInfo_FullOSName"
ms.assetid: f69da02b-eb9a-4284-bb9e-3025517ae6c1
caps.latest.revision: 9
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
# Could not obtain full operation system name due to internal error
Could not obtain full operation system name due to internal error. This might be caused by WMI not existing on the current machine.  
  
 A call to the `My.Computer.Info.OSFullName` property failed. A possible cause for this failure is if Windows Management Instrumentation (WMI) is not installed on the current computer.  
  
### To correct this error  
  
1.  Add a `Try...Catch` block around the call to the `My.Computer.Info.OSFullName` property.  
  
2.  For more information about WMI and how to install it, go to  and search for "Windows Management Instrumentation Core".  
  
## See Also  
 [My.Computer.Info.OSFullName Property](assetId:///b3b0fbd1-4dc5-428a-ad04-0d9fc9c2a9be)   
 [Exception and Error Handling in Visual Basic](assetId:///3e351e73-cf23-40ab-8b60-05794160529e)   
 [Try...Catch...Finally Statement](../Topic/Try...Catch...Finally%20Statement%20\(Visual%20Basic\).md)