---
title: "MSBuild Error MSB3176 | Microsoft Docs"
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
  - "MSBuild.GenerateManifest.GreaterMinimumRequiredVersion"
helpviewer_keywords: 
  - "MSB3176"
ms.assetid: 9138f5ce-4af6-428e-8ac4-c4390a154daf
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3176
**MSB3176: Specified minimum required version is greater than the current publish version. Please specify a version less than or equal to the current publish version.**  
  
 This error is generated when the required minimum application version is greater than the current version of the deployment manifest.  
  
### To correct this error  
  
-   Specify a minimum required version less than or equal to the current publish version.  
  
## See Also  
 [\<PackageFiles> Element](http://msdn.microsoft.com/library/3ea252d7-18a3-47d8-af83-47feebcfe82b)