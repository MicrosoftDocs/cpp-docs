---
title: "MSBuild Error MSB4135 | Microsoft Docs"
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
  - "MSB4135"
ms.assetid: 9192f772-ad13-42f7-b53f-c5e31846fa5f
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB4135
**MSB4135: Error reading the toolset information from the registry key "'\<key>'" or a subkey. '\<key>'**  
  
 The custom Toolset information defined in the registry could not be read.  
  
### To correct this error  
  
-   If you have defined a custom Toolset in the registry, make sure that it is in valid registry format, that is has the correct `ToolsVersion` name and that the correct `MSBuildBinPath` or `MSBuildToolsPath` value.  
  
## See Also  
 [Standard and Custom Toolset Configurations](../Topic/Standard%20and%20Custom%20Toolset%20Configurations.md)   
 [Project Element (MSBuild)](../Topic/Project%20Element%20\(MSBuild\).md)   
 [Additional Resources](../Topic/Additional%20MSBuild%20Resources.md)