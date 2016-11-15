---
title: "MSBuild Error MSB3148 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
# MSBuild Error MSB3148
**MSB3148: No output path specified in build settings.**  
  
 This error occurs when a null or invalid output path is specified; for example, if `OutputPath=""` in the project file. The default value for the output path is `CurrentDirectory`.  
  
### To correct this error  
  
-   Make sure that `OutputPath` is not blank, or that it is not included in the project file.  
  
## See Also  
 [Product and Package Schema Reference](/visualstudio/deployment/product-and-package-schema-reference)