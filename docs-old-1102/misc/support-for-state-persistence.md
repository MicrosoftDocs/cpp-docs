---
title: "Support for State Persistence"
ms.custom: ""
ms.date: "10/20/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "state persistence, managed package framework support"
  - "managed package framework, state persistence support"
  - "state, persistence"
ms.assetid: d25866f2-8d1f-477f-8aa5-3af3fbbf6e97
caps.latest.revision: 15
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
# Support for State Persistence
[!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] can maintain the state of common objects. For example, solution and project properties are saved to and restored from solution and project files. User settings can be exported to and imported from settings files.  
  
 VSPackages typically rely on local storage, either in the system registry or in the application data folder for the current user or computer. Values that require a small amount of space for storage, such as integers and strings, are typically stored in the system registry. Values that require lots of space for storage, such as bitmaps, are saved in a file. The path of the file can itself be saved in the system registry. The persistence mechanism must have permission to access the local storage.  
  
## Support for Locating Local Storage  
 The <xref:Microsoft.VisualStudio.Shell.Package> class provides support for locating state information in the system registry or application data folder for the current user or computer.  
  
 <xref:Microsoft.VisualStudio.Shell.Package.ApplicationRegistryRoot*>  
 Returns the path of the local computer's registry root for [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], for example, HKEY_LOCAL_MACHINE\Software\Microsoft\VisualStudio\8.0Exp.  
  
 The local registry root is obtained from the <xref:Microsoft.VisualStudio.Shell.Interop.SVsShell> service. If this is unavailable, it is obtained from the <xref:Microsoft.VisualStudio.Shell.DefaultRegistryRootAttribute> attribute of the VSPackage.  
  
 <xref:Microsoft.VisualStudio.Shell.Package.UserRegistryRoot*>  
 Returns the path of the current user's (per computer) registry root for [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], for example, HKEY_CURRENT_USER\Software\Microsoft\VisualStudio\8.0Exp.  
  
 The local registry root is obtained from the <xref:Microsoft.VisualStudio.Shell.Interop.SVsShell> service. If this is unavailable, it is obtained from the DefaultLocalRegistryRoot attribute of the VSPackage.  
  
 <xref:Microsoft.VisualStudio.Shell.Package.UserDataPath*>  
 Returns the path of the directory that serves as a common repository for [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] data for the current roaming user, for example, C:\Documents and Settings\\*YourAccountName*\Application Data\Microsoft\VisualStudio\8.0Exp.  
  
 <xref:Microsoft.VisualStudio.Shell.Package.UserLocalDataPath*>  
 Returns the path of the directory that serves as a common repository for [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] data for the current non-roaming user, for example, C:\Documents and Settings\\*YourAccountName*\Local Settings\Application Data\Microsoft\VisualStudio\8.0Exp.  
  
## See Also  
 [VSPackage State](../misc/vspackage-state.md)