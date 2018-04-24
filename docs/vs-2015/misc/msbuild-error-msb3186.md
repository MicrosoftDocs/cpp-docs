---
title: "MSBuild Error MSB3186 | Microsoft Docs"
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
  - "MSBuild.GenerateManifest.NoIdentity"
helpviewer_keywords: 
  - "MSB3186"
ms.assetid: 1219fef4-9114-401c-875b-1dc69697fd9f
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3186
**MSB3186: Unable to infer an assembly identity for generated manifest from task input parameters.**  
  
 This error is generated when the build process cannot infer an assembly name for the application or deployment manifest. The assembly name is not given explicitly; there is no identity in the base manifest, and the entry point identity is not specified either.  
  
## See Also  
 [\<PackageFiles> Element](http://msdn.microsoft.com/library/3ea252d7-18a3-47d8-af83-47feebcfe82b)