---
title: "MSBuild Error MSB3182 | Microsoft Docs"
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
  - "MSBuild.GenerateManifest.TargetPathTooLong"
helpviewer_keywords: 
  - "MSB3182"
ms.assetid: b257a206-b12b-453b-97d8-2cb9a0d3dcc9
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
# MSBuild Error MSB3182
**MSB3182: File name '\<file>' exceeds '\<length>' characters.**  
  
 This warning is generated when the value of the `TargetPath` property is too long. It can apply both to the application and deployment manifest.  
  
### To correct this error  
  
-   Edit the value of the `TargetPath` property to make it shorter.  
  
## See Also  
 [\<PackageFiles> Element](../Topic/%3CPackageFiles%3E%20Element%20\(Bootstrapper\).md)