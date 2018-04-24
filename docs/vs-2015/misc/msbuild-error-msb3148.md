---
title: "MSBuild Error MSB3148 | Microsoft Docs"
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
  - "MSBuild.GenerateBootstrapper.NoOutputPath"
helpviewer_keywords: 
  - "MSB3148"
ms.assetid: 389b335f-5760-4dcc-9146-c52d6d7ac81f
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3148
**MSB3148: No output path specified in build settings.**  
  
 This error occurs when a null or invalid output path is specified; for example, if `OutputPath=""` in the project file. The default value for the output path is `CurrentDirectory`.  
  
### To correct this error  
  
-   Make sure that `OutputPath` is not blank, or that it is not included in the project file.  
  
## See Also  
 [Product and Package Schema Reference](../Topic/Product%20and%20Package%20Schema%20Reference.md)