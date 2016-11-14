---
title: "MSBuild Error MSB4132 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "MSB4132"
ms.assetid: 4ac265a7-0f8d-4fec-ba6e-cd70cbd5d89e
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
# MSBuild Error MSB4132
**MSB4132: The tools version "'\<version>'" is unrecognized.**  
  
 [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] could find a Toolset that corresponds to the specified value of `ToolsVersion`.  
  
### To correct this error  
  
-   Specify a valid value for `ToolsVersion` in the project tag, or on the command line when you use the MSBuild **/ToolsVersion** switch.  
  
## See Also  
 <xref:Microsoft.Build.Tasks.MSBuild.ToolsVersion%2A>   
 [Additional Resources](/visual-studio/msbuild/additional-msbuild-resources)