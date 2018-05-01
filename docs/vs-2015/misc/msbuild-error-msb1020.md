---
title: "MSBuild Error MSB1020 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.LoggerNotFoundError"
helpviewer_keywords: 
  - "MSB1020"
ms.assetid: 75fcb139-0c45-4bf1-a176-60bfb9d1baa4
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB1020
**The logger was not found. Check the following: 1.) The logger name specified is the same as the name of the logger class. 2.) The logger class is "public" and implements the Microsoft.Build.Framework.ILogger interface. 3.) The path to the logger assembly is correct, or the logger can be loaded using only the assembly name provided.**  
  
 The specified logger was not found.  
  
### To correct this error  
  
-   Check that the logger name specified is the same as the name of the logger class.  
  
-   Check that the logger class is public and implements the <xref:Microsoft.Build.Framework.ILogger> interface.  
  
-   Check that the path to the logger assembly is correct, or the logger can be loaded using only the assembly name provided.  
  
## See Also  
 [Command-Line Reference](http://msdn.microsoft.com/library/edaa65ec-ab8a-42a1-84cb-d76d5b2f4584)   
 [Build Loggers](http://msdn.microsoft.com/library/fa34810d-185a-4d22-92bd-9852915e5f1d)  
 [MSBuild](MSBuild1.md)