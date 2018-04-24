---
title: "Redistributing Components By Using Merge Modules | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "merge modules, using"
  - "redistributing applications, using merge modules"
ms.assetid: 93b84211-bf9b-4a78-9f22-474ac2ef7840
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Redistributing Components By Using Merge Modules
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Redistributing Components By Using Merge Modules](https://docs.microsoft.com/cpp/ide/redistributing-components-by-using-merge-modules).  
  
  
INCLUDE[vsprvs](../includes/vsprvs-md.md)] includes [merge modules](http://msdn.microsoft.com/library/aa367434) for each [!INCLUDE[vcprvc](../includes/vcprvc-md.md)] component that's licensed to be redistributed with an application. When a merge module is compiled in a Windows Installer setup file, it enables the deployment of specific DLLs to computers that have a specific platform. In your setup file, specify that the merge modules are prerequisites for your application. When [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] is installed, the merge modules are installed in \Program Files\Common Files\Merge Modules\\. (Only non-debug versions of [!INCLUDE[vcprvc](../includes/vcprvc-md.md)] DLLs may be redistributed.) For more information and a link to a list of merge modules that are licensed for redistribution, see [Redistributing Visual C++ Files](../ide/redistributing-visual-cpp-files.md).  
  
 You can use merge modules to enable the installation of redistributable [!INCLUDE[vcprvc](../includes/vcprvc-md.md)] DLLs into the %SYSTEMROOT%\system32\ folder. ([!INCLUDE[vsprvs](../includes/vsprvs-md.md)] itself uses this technique.) However, installation to this folder will fail unless the installing user has administrator rights.  
  
 We recommend that you not use merge modules except when you don't have to service your application and you don't have dependencies on more than one version of the DLLs. Merge modules for different versions of the same DLL cannot be included in one installer, and merge modules make it difficult to service DLLs independently of your application. Instead, we recommend that you install a [!INCLUDE[vcprvc](../includes/vcprvc-md.md)] Redistributable Package.  
  
## See Also  
 [Redistributing Visual C++ Files](../ide/redistributing-visual-cpp-files.md)

