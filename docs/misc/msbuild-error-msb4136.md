---
title: "MSBuild Error MSB4136 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "MSB4136"
ms.assetid: 6f0543d3-f8c0-44e1-8748-8a71be599bf4
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
# MSBuild Error MSB4136
**MSB4136: Error reading the configuration information.**  
  
 [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] received an error when it tried to read the Toolset information in the [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] configuration file (msbuild.exe.config).  
  
### To correct this error  
  
-   Make sure that the configuration file is correct and well-formed. For example, if you have customized the .config file by adding a Toolset, check the Toolset definition.  
  
## See Also  
 [Overriding ToolsVersion Settings](/visual-studio/msbuild/overriding-toolsversion-settings)   
 [Project Element (MSBuild)](/visual-studio/msbuild/project-element-msbuild)   
 [Additional Resources](/visual-studio/msbuild/additional-msbuild-resources)