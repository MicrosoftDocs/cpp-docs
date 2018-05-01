---
title: "MSBuild Error MSB4133 | Microsoft Docs"
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
  - "MSB4133"
ms.assetid: 5f18937a-fda1-4315-81f9-7cee02802a6d
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB4133
**MSB4133: A default tools version "\<x.x.>" was specified, but its definition could not be found.**  
  
 [!INCLUDE[vstecmsbuild](../includes/vstecmsbuild-md.md)] cannot find the Toolset that is defined in the project file as the `DefaultToolsVersion`.  
  
### To correct this error  
  
-   Make sure that `DefaultToolsVersion` is specified correctly, and that this Toolset is defined either in the registry or in the [!INCLUDE[vstecmsbuild](../includes/vstecmsbuild-md.md)] configuration file.  
  
## See Also  
 <xref:Microsoft.Build.BuildEngine.Toolset>   
 [Project Element (MSBuild)](http://msdn.microsoft.com/library/d1cda56a-dbef-4109-9201-39e962e3f653)   
 [Additional Resources](http://msdn.microsoft.com/library/29dd85ee-1530-43c1-b085-bb2330ac5a48)