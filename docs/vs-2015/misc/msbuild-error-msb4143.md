---
title: "MSBuild Error MSB4143 | Microsoft Docs"
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
  - "MSB4143"
ms.assetid: 25019aa4-f0da-4bcd-862e-9b5a57913bb4
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB4143
**MSB4143: The expression "\<expression>" cannot be evaluated.**  
  
 A property expression that reads its value from the registry cannot be evaluated.  
  
### To correct this error  
  
-   Make sure that the property follows the correct syntax to read a value from the registry. For example: `$(Registry:HKEY_LOCAL_MACHINE\Software\Microsoft\VisualStudio\8.0\MSBuild@MSBuildBinPath)`.  
  
## See Also
 [MSBuild Properties](MSBuild%20Properties.md)  
 [Project Element (MSBuild)](../Topic/Project%20Element%20\(MSBuild\).md)   
 [Additional Resources](../Topic/Additional%20MSBuild%20Resources.md)