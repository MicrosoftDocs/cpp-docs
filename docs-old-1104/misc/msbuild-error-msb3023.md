---
title: "MSBuild Error MSB3023 | Microsoft Docs"
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
  - "MSBuild.Copy.NeedsDestination"
helpviewer_keywords: 
  - "MSB3023"
ms.assetid: 3505ad1e-d54f-4cb4-a299-ac03684cb391
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
# MSBuild Error MSB3023
**No destination specified for Copy. Please supply either "'\<attribute>'" or "'\<attribute>'".**  
  
 A destination must be specified for the `Copy` task using one of the task attributes `DestinationFiles`and`DestinationDirectory`.  
  
### To correct this error  
  
-   Specify either `DestinationFiles`or`DestinationDirectory`for the `Copy` task.  
  
## See Also  
 [Copy Task](/visual-studio/msbuild/copy-task)   
 [Tasks](/visual-studio/msbuild/msbuild-tasks)