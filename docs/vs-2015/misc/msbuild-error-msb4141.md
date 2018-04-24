---
title: "MSBuild Error MSB4141 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "MSB4141"
ms.assetid: 0d190884-e64d-4d6b-817d-ce4644788fce
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB4141
**MSB4141: MSBuildToolsPath is not specified for the ToolsVersion "\<x.x>."**  
  
 A custom Toolset is defined but no value is specified for `MSBuildToolsPath`.  
  
### To correct this error  
  
-   Specify a valid value for `MSBuildToolsPath` when you define a custom Toolset in the registry or the [!INCLUDE[vstecmsbuild](../includes/vstecmsbuild-md.md)] configuration file.  
  
## See Also  
 [Standard and Custom Toolset Configurations](../Topic/Standard%20and%20Custom%20Toolset%20Configurations.md)   
 [Project Element (MSBuild)](../Topic/Project%20Element%20\(MSBuild\).md)   
 [Additional Resources](../Topic/Additional%20MSBuild%20Resources.md)