---
title: "MSBuild Error MSB4134 | Microsoft Docs"
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
  - "MSB4134"
ms.assetid: 2e4e6beb-c0c9-40ef-b75c-1c16244eba10
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB4134
**MSB4134: DefaultToolsVersion cannot be set after a project has been loaded into the Engine.**  
  
 This error occurs when an attempt to change the value of `DefaultToolsVersion` is made after [!INCLUDE[vstecmsbuild](../includes/vstecmsbuild-md.md)] already has built a project.  
  
### To correct this error  
  
-   Change the value of `DefaultToolsVersion` before you build a project.  
  
## See Also  
 <xref:Microsoft.Build.Utilities.Task.BuildEngine%2A>   
 <xref:Microsoft.Build.Utilities.Task.BuildEngine2%2A>   
 [Project Element (MSBuild)](http://msdn.microsoft.com/library/d1cda56a-dbef-4109-9201-39e962e3f653)   
 [Additional Resources](http://msdn.microsoft.com/library/29dd85ee-1530-43c1-b085-bb2330ac5a48)