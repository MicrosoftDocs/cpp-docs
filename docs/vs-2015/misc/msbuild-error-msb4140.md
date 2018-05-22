---
title: "MSBuild Error MSB4140 | Microsoft Docs"
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
  - "MSB4140"
ms.assetid: 13546558-4ed4-44c2-89a6-f69a2b43ed07
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB4140
**MSB4140: Default ToolsVersion is specified in neither the registry nor configuration file.**  
  
 The project does not specify a default `ToolsVersion` value. Therefore, [!INCLUDE[vstecmsbuild](../includes/vstecmsbuild-md.md)] does not know which value to use.  
  
### To correct this error  
  
-   Make sure that a `DefaultToolsVersion` value is specified either in the registry where Toolsets are defined, or in a configuration file (such as msbuild.exe.config).  
  
## See Also  
 [Standard and Custom Toolset Configurations](http://msdn.microsoft.com/library/15a048c8-5ad3-448e-b6e9-e3c5d7147ed2)   
 [Project Element (MSBuild)](http://msdn.microsoft.com/library/d1cda56a-dbef-4109-9201-39e962e3f653)   
 [Additional Resources](http://msdn.microsoft.com/library/29dd85ee-1530-43c1-b085-bb2330ac5a48)