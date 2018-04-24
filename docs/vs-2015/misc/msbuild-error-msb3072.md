---
title: "MSBuild Error MSB3072 | Microsoft Docs"
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
  - "MSBuild.Exec.MissingCommandError"
helpviewer_keywords: 
  - "MSB3072"
ms.assetid: c8468e1c-d8c7-441c-b274-123ac856f147
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3072
**The "Exec" task needs a command to execute.**  
  
 The attribute `Command` is a required attribute for the `Exec` task.  
  
### To correct this error  
  
1.  In the project file, specify the attribute `Command` for the `Exec` task.  
  
## See Also  
 [Exec Task](../Topic/Exec%20Task.md)   
 [Tasks](../Topic/MSBuild%20Tasks.md)