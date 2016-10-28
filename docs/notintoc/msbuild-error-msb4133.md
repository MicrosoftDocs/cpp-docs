---
title: "MSBuild Error MSB4133"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
helpviewer_keywords: 
  - "MSB4133"
ms.assetid: 5f18937a-fda1-4315-81f9-7cee02802a6d
caps.latest.revision: 7
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
# MSBuild Error MSB4133
**MSB4133: A default tools version "\<x.x.>" was specified, but its definition could not be found.**  
  
 [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] cannot find the Toolset that is defined in the project file as the `DefaultToolsVersion`.  
  
### To correct this error  
  
-   Make sure that `DefaultToolsVersion` is specified correctly, and that this Toolset is defined either in the registry or in the [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] configuration file.  
  
## See Also  
 \<xref:Microsoft.Build.BuildEngine.Toolset>   
 [Project Element (MSBuild)](../Topic/Project%20Element%20\(MSBuild\).md)   
 [Additional Resources](../Topic/Additional%20MSBuild%20Resources.md)