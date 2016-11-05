---
title: "MSBuild Error MSB1019 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.InvalidLoggerError"
helpviewer_keywords: 
  - "MSB1019"
ms.assetid: 5d0169f7-f878-433a-ac30-d9d6010130af
caps.latest.revision: 7
author: "mikeblome"
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
# MSBuild Error MSB1019
**Logger switch was not correctly formed.**  
  
 The **/logger** switch is not correctly specified. To specify a logger, you must provide at least the logger assembly, or if you want to be explicitly specify which logger to load, provide both the logger class and the logger assembly. Logger parameters are optional.  
  
### To correct this error  
  
1.  Specify a logger using both the logger class and logger assembly. The `<logger>` syntax is:  
  
     `<logger class>,<logger assembly>[;<logger parameters>]`  
  
     The `<logger class>` syntax is:  
  
    ```  
    [<partial or full namespace>.]<logger class name>  
    ```  
  
     The `<logger assembly>`syntax is:  
  
    ```  
    {<assembly name>[,<strong name>] | <assembly file>}  
    ```  
  
     The `<logger parameters>` are optional and are passed to the logger exactly as you typed them.  
  
     Example: /`logger:XMLLogger,MyLogger,Version=1.0.2,Culture=neutral`  
  
## See Also  
 [Command-Line Reference](/visual-studio/msbuild/msbuild-command-line-reference)   
 [Build Loggers](/visual-studio/msbuild/build-loggers)