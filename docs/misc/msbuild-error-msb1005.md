---
title: "MSBuild Error MSB1005 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.MissingPropertyError"
helpviewer_keywords: 
  - "MSB1005"
ms.assetid: cf4e8503-46fb-4c1e-a1ca-aa344276ebb0
caps.latest.revision: 14
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
# MSBuild Error MSB1005
**Specify a property and its value.**  
  
 A property name and value must be specified for the **/property** switch.  
  
### To correct this error  
  
1.  Specify a property name and value using the format `/property:<name>=<value>`. You can use either a comma or a semicolon to separate a list of properties, for example, `/property:WarningLevel=2;OutputDir=bin\Debug` or `/property:WarningLevel=2,OutputDir=bin\Debug`. Alternatively, you can repeat the switch, for example, `/p:WarningLevel=2 /p:OutputDir=bin\Debug`  
  
## See Also  
 [Command-Line Reference](/visualstudio/msbuild/msbuild-command-line-reference)  
 [MSBuild Properties](/visualstudio/msbuild/msbuild-properties)