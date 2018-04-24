---
title: "MSBuild Error MSB3166 | Microsoft Docs"
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
  - "MSBuild.GenerateBootstrapper.PackageResourceFileNotFound"
  - "vsdeploy.chm:13166"
helpviewer_keywords: 
  - "MSB3166"
ms.assetid: f5dff83a-1e41-4c92-a137-89b7e9f3cd93
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3166
**MSB3166: Could not find required file '\<file>' for item '\<package>'.**  
  
 This error is generated when an end-user license agreement (EULA) or external check file is missing. Make sure the file exists on disk.  
  
### To correct this error  
  
-   Reinstall the Visual Studio SDK  
  
     \- or -  
  
-   Copy the required files to the appropriate location.  
  
## See Also  
 [\<PackageFiles> Element](../Topic/%3CPackageFiles%3E%20Element%20\(Bootstrapper\).md)