---
title: "MSBuild Error MSB3152 | Microsoft Docs"
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
  - "MSBuild.GenerateBootstrapper.PackageFileNotFound"
helpviewer_keywords: 
  - "MSB3152"
ms.assetid: 5a3859d4-4107-4e46-bb42-04de92b551de
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3152
**MSB3152: The install location for prerequisites has not been set to 'component vendor's web site' and the file '\<file>' in item '\<package>' can not be located on disk. See Help for more information.**  
  
 This error occurs when a file that is required for the prerequisite installer is missing. The installer files go into a special folder that Visual Studio has reserved for redistributable packages. The folder varies by the version of Visual Studio that you are developing with. For more about the specific folder location, see [Creating Bootstrapper Packages](../Topic/Creating%20Bootstrapper%20Packages.md).  
  
### To correct this error  
  
-   Determine whether the file exists on disk.  
  
-   Use HomeSite to try to resolve the package issue.  
  
-   Set `CopyComponents` to `false` in the project file.  
  
-   Do not use the broken bootstrapper package.  
  
## See Also  
 [Creating Bootstrapper Packages](../Topic/Creating%20Bootstrapper%20Packages.md)