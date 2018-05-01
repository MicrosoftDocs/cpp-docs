---
title: "Unable to retrieve resource information | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.resx_scan_failed"
ms.assetid: e4389ff0-eb64-4c31-b32f-5216c73fadfb
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Unable to retrieve resource information
Scanning the hierarchy for .resx files failed.  
  
 As part of the `Preparing resources` build step, which is shown in the **Output** window, the project system scans the project hierarchy for all files with an .resx extension. This action will produce a list of .resx XML files that need to be transformed into binary .resources files before they can be included as resources in the project output.  
  
 **To correct this error**  
  
-   Restart [!INCLUDE[vsprvs](../includes/vsprvs-md.md)]. If this does not work, call Microsoft Product Support Services to report the issue.  
  
     This error will cause a build to fail.  
  
## See Also  
 [File Types and File Extensions in Visual Basic and Visual C#](http://msdn.microsoft.com/en-us/f793852c-da06-4d52-a826-65f635844772)