---
title: "MSBuild Error MSB3182"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "MSBuild.GenerateManifest.TargetPathTooLong"
helpviewer_keywords: 
  - "MSB3182"
ms.assetid: b257a206-b12b-453b-97d8-2cb9a0d3dcc9
caps.latest.revision: 6
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