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
 [Standard and Custom Toolset Configurations](http://msdn.microsoft.com/library/15a048c8-5ad3-448e-b6e9-e3c5d7147ed2)   
 [Project Element (MSBuild)](http://msdn.microsoft.com/library/d1cda56a-dbef-4109-9201-39e962e3f653)   
 [Additional Resources](http://msdn.microsoft.com/library/29dd85ee-1530-43c1-b085-bb2330ac5a48)