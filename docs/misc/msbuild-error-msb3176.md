---
title: "MSBuild Error MSB3176 | Microsoft Docs"
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
  - "MSBuild.GenerateManifest.GreaterMinimumRequiredVersion"
helpviewer_keywords: 
  - "MSB3176"
ms.assetid: 9138f5ce-4af6-428e-8ac4-c4390a154daf
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
# MSBuild Error MSB3176
**MSB3176: Specified minimum required version is greater than the current publish version. Please specify a version less than or equal to the current publish version.**  
  
 This error is generated when the required minimum application version is greater than the current version of the deployment manifest.  
  
### To correct this error  
  
-   Specify a minimum required version less than or equal to the current publish version.  
  
## See Also  
 [\<PackageFiles> Element](../Topic/%3CPackageFiles%3E%20Element%20\(Bootstrapper\).md)