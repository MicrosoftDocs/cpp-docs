---
title: "MSBuild Error MSB1007 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.MissingLoggerError"
helpviewer_keywords: 
  - "MSB1007"
ms.assetid: bf45dbc3-50cd-488a-87df-9e647cd71f10
caps.latest.revision: 11
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
# MSBuild Error MSB1007
**Specify a logger.**  
  
 A logger must be specified for the **/logger** switch.  
  
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
  
     Some examples of the **/logger** switch are:  
  
     `/logger:XMLLogger,MyLogger,Version=1.0.2,Culture=neutral`  
  
     `/logger:XMLLogger,C:LoggersMyLogger.dll`  
  
     `/logger:XMLLogger,..LoggersMyLogger.dll;OutputAsHTML`  
  
## See Also  
 [Command-Line Reference](/visualstudio/msbuild/msbuild-command-line-reference)