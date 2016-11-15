---
title: "MSBuild Error MSB3252 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSB3252"
helpviewer_keywords: 
  - "MSB3252"
ms.assetid: 4e6982b8-84b3-4d21-94e1-05cc10bf1393
caps.latest.revision: 11
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
# MSBuild Error MSB3252
**MSB3252: The project has a reference to assembly \<name>. This assembly is not part of the .NET Framework Client Profile.  By not having this reference there may be compile or runtime errors.**  
  
 A call was made to a member in an assembly, or dependent assembly, that is not part of the [!INCLUDE[net_client_v35_long](../misc/includes/net_client_v35_long_md.md)]. Therefore, the call cannot be resolved and the application cannot be compiled.  
  
 For more information about the [!INCLUDE[net_client_v35_long](../misc/includes/net_client_v35_long_md.md)], see [.NET Framework Client Profile](http://msdn.microsoft.com/Library/f0219919-1f02-4588-8704-327a62fd91f1).  
  
### To correct this error  
  
-   Either remove the specified assembly reference from your project, or target the full [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)] instead of the [!INCLUDE[net_client_v35_long](../misc/includes/net_client_v35_long_md.md)] subset library. For information about how to target the full [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)], see [How to: Target a Version of the .NET Framework](http://msdn.microsoft.com/Library/dea62d25-3d1b-492e-a6cc-b5154489800a).  
  
## See Also  
 [Target Framework and Target Platform](/visualstudio/msbuild/msbuild-target-framework-and-target-platform)   
 [Project Element (MSBuild)](/visualstudio/msbuild/project-element-msbuild)   
 [Additional Resources](/visualstudio/msbuild/additional-msbuild-resources)