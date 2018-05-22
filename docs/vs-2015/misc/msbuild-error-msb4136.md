---
title: "MSBuild Error MSB4136 | Microsoft Docs"
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
  - "MSB4136"
ms.assetid: 6f0543d3-f8c0-44e1-8748-8a71be599bf4
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB4136
**MSB4136: Error reading the configuration information.**  
  
 [!INCLUDE[vstecmsbuild](../includes/vstecmsbuild-md.md)] received an error when it tried to read the Toolset information in the [!INCLUDE[vstecmsbuild](../includes/vstecmsbuild-md.md)] configuration file (msbuild.exe.config).  
  
### To correct this error  
  
-   Make sure that the configuration file is correct and well-formed. For example, if you have customized the .config file by adding a Toolset, check the Toolset definition.  
  
## See Also  
 [Overriding ToolsVersion Settings](http://msdn.microsoft.com/library/ccd42c07-0fb6-4e8b-9ebb-a6a6db18aa2e)   
 [Project Element (MSBuild)](http://msdn.microsoft.com/library/d1cda56a-dbef-4109-9201-39e962e3f653)   
 [Additional Resources](http://msdn.microsoft.com/library/29dd85ee-1530-43c1-b085-bb2330ac5a48)