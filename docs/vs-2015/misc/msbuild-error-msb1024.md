---
title: "MSBuild Error MSB1024 | Microsoft Docs"
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
  - "MSBuild.MultipleSchemasError"
helpviewer_keywords: 
  - "MSB1024"
ms.assetid: dff30870-da1a-479f-998b-03d0f5e16088
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB1024
**Only one schema can be specified for validation of the project.**  
  
 Only one schema can be specified for the **/validate** switch.  
  
### To correct this error  
  
1.  Specify only one schema to validate the project against using the format `/validate:<schema>`, for example, `/validate:MyExtendedBuildSchema.xsd`  
  
## See Also  
 [Command-Line Reference](../Topic/MSBuild%20Command-Line%20Reference.md)