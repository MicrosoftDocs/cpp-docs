---
title: "MSBuild Error MSB3177 | Microsoft Docs"
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
  - "MSBuild.GenerateManifest.AllowPartiallyTrustedCallers"
helpviewer_keywords: 
  - "MSB3177"
ms.assetid: 0b2417d5-3bc3-4169-b69c-a4a3cbf47882
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3177
**MSB3177: Reference '\<reference>' does not allow partially trusted callers.**  
  
 This warning is generated during application manifest generation when the application is a partially trusted application and if *reference* was added as a project reference, has a strong name, and does not have the APTCA attribute.  
  
### To correct this error  
  
-   Add the APTCA attribute to the referenced assembly, or stop using it, if the former is not possible.  
  
## See Also  
 [\<PackageFiles> Element](http://msdn.microsoft.com/library/3ea252d7-18a3-47d8-af83-47feebcfe82b)