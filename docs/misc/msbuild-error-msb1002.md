---
title: "MSBuild Error MSB1002 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.UnexpectedParametersError"
helpviewer_keywords: 
  - "MSB1002"
ms.assetid: 798c9690-6d99-4f21-a491-ab44d3f3c552
caps.latest.revision: 10
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
# MSBuild Error MSB1002
**This switch does not take any parameters.**  
  
 Parameters cannot be defined for this switch. Only the name of the switch is required and it must not be followed by a colon.  
  
### To correct this error  
  
-   Type the command without parameters for this switch, that is, instead of typing `msbuild /<switch>:<parameters>`, type `msbuild /<switch>`  
  
-   Remove the colon after the name of the switch, that is, instead of typing `msbuild /<switch>:`, type `msbuild /<switch>`  
  
## See Also  
 [Command-Line Reference](/visual-studio/msbuild/msbuild-command-line-reference)