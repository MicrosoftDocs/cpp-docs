---
title: "MSBuild Error MSB3022 | Microsoft Docs"
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
  - "MSBuild.Copy.ExactlyOneTypeOfDestination"
helpviewer_keywords: 
  - "MSB3022"
ms.assetid: 74ebcced-8a56-4502-8fef-43d36c79a640
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3022
**Both "'\<attribute>'" and "'\<attribute>'" were specified as input parameters in the project file. Please choose one or the other.**  
  
 For the `Copy` task, you must specify either `DestinationFiles` or `DestinationDirectory`,but not both task attributes.  
  
### To correct this error  
  
-   Specify either `DestinationFiles` or `DestinationDirectory` for the `Copy` task in the project file.  
  
## See Also  
 [Copy Task](http://msdn.microsoft.com/library/a46ba9da-3e4e-4890-b4ea-09a099b6bc40)   
 [Tasks](http://msdn.microsoft.com/library/5d3cc4a7-e5db-4f73-b707-8b6882fddcf8)