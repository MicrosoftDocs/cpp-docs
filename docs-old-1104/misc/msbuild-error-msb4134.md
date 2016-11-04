---
title: "MSBuild Error MSB4134 | Microsoft Docs"
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
  - "MSB4134"
ms.assetid: 2e4e6beb-c0c9-40ef-b75c-1c16244eba10
caps.latest.revision: 8
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
# MSBuild Error MSB4134
**MSB4134: DefaultToolsVersion cannot be set after a project has been loaded into the Engine.**  
  
 This error occurs when an attempt to change the value of `DefaultToolsVersion` is made after [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] already has built a project.  
  
### To correct this error  
  
-   Change the value of `DefaultToolsVersion` before you build a project.  
  
## See Also  
 <xref:Microsoft.Build.Utilities.Task.BuildEngine*>   
 <xref:Microsoft.Build.Utilities.Task.BuildEngine2*>   
 [Project Element (MSBuild)](/visual-studio/msbuild/project-element-msbuild)   
 [Additional Resources](/visual-studio/msbuild/additional-msbuild-resources)