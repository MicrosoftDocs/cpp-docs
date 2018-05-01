---
title: "MSBuild Error MSB4142 | Microsoft Docs"
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
  - "MSB4142"
ms.assetid: 56121c76-f952-43d1-ba23-1d1792fef0bc
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB4142
**MSB4142: MSBuildToolsPath is not the same as MSBuildBinPath for the ToolsVersion "\<x.x>".**  
  
 The Toolset definition specifies different values for `MSBuildBinPath` and `MSBuildToolsPath`.  
  
### To correct this error  
  
-   Make sure that the values for `MSBuildBinPath` and `MSBuildToolsPath` are the same in your Toolset definition.  
  
## See Also  
 [Standard and Custom Toolset Configurations](http://msdn.microsoft.com/library/15a048c8-5ad3-448e-b6e9-e3c5d7147ed2)   
 [Project Element (MSBuild)](http://msdn.microsoft.com/library/d1cda56a-dbef-4109-9201-39e962e3f653)   
 [Additional Resources](http://msdn.microsoft.com/library/29dd85ee-1530-43c1-b085-bb2330ac5a48)