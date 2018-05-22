---
title: "MSBuild Error MSB3157 | Microsoft Docs"
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
  - "vsdeploy.chm:13157"
  - "MSBuild.GenerateBootstrapper.UsingProductCulture"
helpviewer_keywords: 
  - "MSB3157"
ms.assetid: ccfcbea4-eb9b-42ae-9908-47079ecc84a7
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3157
**MSB3157: Could not match culture '\<culture>' for item '\<package>'. Using culture '\<culture>' instead.**  
  
 This warning is generated when the specified product cannot find a package manifest file (package.xml) that uses the specified culture.  
  
### To correct this error  
  
-   Provide the appropriate package manifest file.  
  
## See Also  
 [\<PackageFiles> Element](http://msdn.microsoft.com/library/3ea252d7-18a3-47d8-af83-47feebcfe82b)