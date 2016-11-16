---
title: "MSBuild Error MSB3164 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.GenerateBootstrapper.PackageHomeSiteMissing"
helpviewer_keywords: 
  - "MSB3164"
ms.assetid: 5a1e31fc-0322-4d4e-8c26-013b1efb82c9
caps.latest.revision: 5
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
# MSBuild Error MSB3164
**MSB3164: No 'HomeSite' attribute has been provided for '\<package>', so the package will be published to the same location as the bootstrapper.**  
  
 This warning is generated when the user wants to use HomeSite, but the appropriate HomeSite info for the specified package is not available.  
  
### To correct this error  
  
-   Update the manifest files to include HomeSite info.  
  
-   Alternatively, do not use HomeSite.  
  
## See Also  
 [\<PackageFiles> Element](http://msdn.microsoft.com/Library/3ea252d7-18a3-47d8-af83-47feebcfe82b)