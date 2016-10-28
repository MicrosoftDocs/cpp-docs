---
title: "MSBuild Error MSB1020"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "MSBuild.LoggerNotFoundError"
helpviewer_keywords: 
  - "MSB1020"
ms.assetid: 75fcb139-0c45-4bf1-a176-60bfb9d1baa4
caps.latest.revision: 11
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
# MSBuild Error MSB1020
**The logger was not found. Check the following: 1.) The logger name specified is the same as the name of the logger class. 2.) The logger class is "public" and implements the Microsoft.Build.Framework.ILogger interface. 3.) The path to the logger assembly is correct, or the logger can be loaded using only the assembly name provided.**  
  
 The specified logger was not found.  
  
### To correct this error  
  
-   Check that the logger name specified is the same as the name of the logger class.  
  
-   Check that the logger class is public and implements the \<xref:Microsoft.Build.Framework.ILogger> interface.  
  
-   Check that the path to the logger assembly is correct, or the logger can be loaded using only the assembly name provided.  
  
## See Also  
 [Command-Line Reference](../Topic/MSBuild%20Command-Line%20Reference.md)   
 [Build Loggers](../Topic/Build%20Loggers.md)