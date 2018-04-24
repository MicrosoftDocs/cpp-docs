---
title: "MSBuild Error MSB3181 | Microsoft Docs"
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
  - "MSBuild.GenerateManifest.DuplicateTargetPath"
helpviewer_keywords: 
  - "MSB3181"
ms.assetid: 49349fc2-3fa1-470d-a5cb-6ad72b93f408
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3181
**MSB3181: Two or more files have the same target path '\<path>'.**  
  
 This warning is generated during application manifest generation when two or more of the referenced assemblies or files share the same target path. The path includes the file name and all these assemblies will overwrite each other at deployment time.  
  
## See Also  
 [\<PackageFiles> Element](http://msdn.microsoft.com/library/3ea252d7-18a3-47d8-af83-47feebcfe82b)