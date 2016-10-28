---
title: "MSBuild Error MSB4143"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
helpviewer_keywords: 
  - "MSB4143"
ms.assetid: 25019aa4-f0da-4bcd-862e-9b5a57913bb4
caps.latest.revision: 9
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
# MSBuild Error MSB4143
**MSB4143: The expression "\<expression>" cannot be evaluated.**  
  
 A property expression that reads its value from the registry cannot be evaluated.  
  
### To correct this error  
  
-   Make sure that the property follows the correct syntax to read a value from the registry. For example: `$(Registry:HKEY_LOCAL_MACHINE\Software\Microsoft\VisualStudio\8.0\MSBuild@MSBuildBinPath)`.  
  
## See Also  
 [Project Element (MSBuild)](../Topic/Project%20Element%20\(MSBuild\).md)   
 [Additional Resources](../Topic/Additional%20MSBuild%20Resources.md)