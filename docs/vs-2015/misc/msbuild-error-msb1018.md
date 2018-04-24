---
title: "MSBuild Error MSB1018 | Microsoft Docs"
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
  - "MSBuild.InvalidVerbosityError"
helpviewer_keywords: 
  - "MSB1018"
ms.assetid: fb4deacc-a799-44e8-8980-d70d9da4caa1
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB1018
**Verbosity level is not valid.**  
  
 The verbosity level specified is not one of the available verbosity levels.  
  
### To correct this error  
  
1.  Check the spelling of the verbosity level. The available verbosity levels are: q[uiet], m[inimal], n[ormal], d[etailed], and diag[nostic], for example, `/verbosity:quiet`, `/verbosity:q`, or `/v:q`  
  
## See Also  
 [Command-Line Reference](../Topic/MSBuild%20Command-Line%20Reference.md)   
 [Build Loggers](../Topic/Build%20Loggers.md)