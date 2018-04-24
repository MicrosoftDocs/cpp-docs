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
 [Standard and Custom Toolset Configurations](http://msdn.microsoft.com/library/15a048c8-5ad3-448e-b6e9-e3c5d7147ed2)   
 [Project Element (MSBuild)](http://msdn.microsoft.com/library/d1cda56a-dbef-4109-9201-39e962e3f653)   
 [Additional Resources](http://msdn.microsoft.com/library/29dd85ee-1530-43c1-b085-bb2330ac5a48)