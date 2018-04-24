---
title: "MSBuild Error MSB1008 | Microsoft Docs"
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
  - "MSBuild.DuplicateProjectSwitchError"
helpviewer_keywords: 
  - "MSB1008"
ms.assetid: 16012f0d-b2d7-424c-9fa0-067e4df1b3e7
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB1008
**Only one project can be specified.**  
  
 [!INCLUDE[vstecmsbuild](../includes/vstecmsbuild-md.md)] can build only one project.  
  
### To correct this error  
  
1.  Specify only one project to build. If you want to build two projects, build one project then build the other project. For example, instead of typing `msbuild myapp1.proj myapp2.proj`, build the first project by typing `msbuild myapp1.proj`, and then, when that build is complete, build the second project by typing `msbuild myapp2.proj`.  
  
## See Also  
 [Command-Line Reference](../Topic/MSBuild%20Command-Line%20Reference.md)   
 [MSBuild Task](../Topic/MSBuild%20Task.md)
 [MSBuild](MSBuild1.md)