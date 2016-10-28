---
title: "MSBuild Error MSB1005"
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
  - "MSBuild.MissingPropertyError"
helpviewer_keywords: 
  - "MSB1005"
ms.assetid: cf4e8503-46fb-4c1e-a1ca-aa344276ebb0
caps.latest.revision: 12
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
 [Command-Line Reference](../Topic/MSBuild%20Command-Line%20Reference.md)