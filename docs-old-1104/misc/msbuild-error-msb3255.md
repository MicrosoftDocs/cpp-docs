---
title: "MSBuild Error MSB3255 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "MSB3255"
ms.assetid: baac844e-a662-4421-bed1-2bc98f2e1cdf
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
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
# MSBuild Error MSB3255
**MSB3255: Could not find any Target Framework Subset files in the Target Framework Directories or at the locations specified in the InstalledAssemblySubsetTables.**  
  
 This error occurs when a name is passed into the <xref:Microsoft.Build.Tasks.ResolveAssemblyReference.FullTargetFrameworkSubsetNames*> property, but a subset with that name cannot be found.  
  
 The [!INCLUDE[net_client_v35_long](../misc/includes/net_client_v35_long_md.md)] is a subset of the full [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)] 3.5 run-time library. For more information about the [!INCLUDE[net_client_v35_long](../misc/includes/net_client_v35_long_md.md)], see [.NET Framework Client Profile](../Topic/.NET%20Framework%20Client%20Profile.md).  
  
 Procedures  
  
### To correct this error  
  
-   Put a copy of the subset file in the target framework folder or in one of the locations specified in <xref:Microsoft.Build.Tasks.ResolveAssemblyReference.InstalledAssemblySubsetTables*>.  
  
## See Also  
 [Project Element (MSBuild)](/visual-studio/msbuild/project-element-msbuild)   
 [Additional Resources](/visual-studio/msbuild/additional-msbuild-resources)