---
title: "Unable to remove the last generated output | Microsoft Docs"
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
  - "vs.tasklisterror.remove_last_genoutput_failure"
ms.assetid: 329a5e56-9b1f-4e41-8b0f-4bd64b8311d0
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Unable to remove the last generated output
The last known generated output was not removed from the disk and/or from the project.  
  
 If a custom tool returned a failure, the last generated output (if any) is removed from disk and from the project.  
  
 This might happen if the generated output is locked on disk.  
  
 **To correct this error**  
  
-   Close and restart [!INCLUDE[vsprvs](../includes/vsprvs-md.md)].