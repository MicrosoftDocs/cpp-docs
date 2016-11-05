---
title: "Extension Analyzer | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "VSPackages, load failure analyzer"
ms.assetid: 8d2bcc4e-9feb-45a5-8d8e-470346f0d39e
caps.latest.revision: 8
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
# Extension Analyzer
The **Extension Analyzer** captures and logs most common extension load failures. The **Extension Analyzer** runs in its own tool window. The analyzer reports the reason for a failure and suggestions about how to fix it.  
  
 The [Extension Analyzer](http://go.microsoft.com/fwlink/?LinkId=205840) can be downloaded from the Visual Studio Gallery. The **Extension Analyzer** assemblies are installed in \<*Visual Studio installation path*>\Common7\IDE\PrivateAssemblies\\.  
  
## Browser  
 After you have installed the **Extension Analyzer**, on the **Tools** menu click **Extension Analyzer**, then **Browser**. A window is displayed that lists all the extensions that are registered on the computer. There are different tabs for VSIX files, VSPackages, PkgDef files, and MEF components. You can sort the lists by any of the column names.  
  
1.  The VSIX tab displays information about installed VSIX extensions. You can include system components by selecting the **Show System Components** checkbox. On this tab, you can navigate to log entries for the VSIX, open the VSIX manifest in Visual Studio XML editor, and open the folder where the VSIX extension is installed.  
  
2.  The VS Packages tab displays information about VSPackages that are currently known to Visual Studio, whether or not they are loaded. This information includes the VSIX identifier, the .pkgdef file, and the GUID of the VSPackage. You can include system VSPackages by selecting the **Show System Packages** checkbox. On this tab, you can navigate to log entries, see the VSIX listed on the VSIX tab, see the .pkgdef file on the PkgDef Files tab, and analyze the VSPackage. The results of the analysis are shown in the **Output** pane.  
  
3.  The PkgDef Files tab displays information about the .pkgdef files for extensions known to Visual Studio. This information includes the VSIX identifier, and the path of the extension. You can navigate to the log or to the VSIX tab, and you can view the .pkgdef file in the editor.  
  
4.  The MEF Components tab displays information about MEF components that are known to Visual Studio. This information includes the VSIX identifier and the path where the extension is installed. You can include system components by selecting the **Show System Components** checkbox. You can also navigate to the corresponding VSIX entry, the .pkgdef file, and the location where the extension was installed.  
  
> [!WARNING]
>  You may receive a message asking you to turn on Fusion logging. To do so, select a location for the log files. You may be asked to restart all instances of Visual Studio before continuing.  
  
## Log Viewer  
 You can see logging messages with the **Extension Log Viewer** if you are running a project that has logging turned on (by adding /log to the command line arguments of your project). For more information, see [/Log (devenv.exe)](/visual-studio/ide/reference/log-devenv-exe). The **Extension Log Viewer** window displays the date, the listener, the entry type (type of message), the error type, class/interface information, and the log message. You can sort and filter the information.  
  
## Common Extension Loading Issues  
 Some of the typical reasons for an extension load failure in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] are:  
  
-   Dependency issues. An extension may have been deployed in such a way that dependent assemblies cannot be found.  
  
-   Exceptions. When a VSPackage is loaded, [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] calls its <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage.SetSite%2A> method. If this method throws an exception, then the VSPackage load fails. The best way to isolate this issue is to step through the SetSite code.  
  
-   Improper registration. Verify that the extension is signed appropriately and that the VSPackage is registered by using the correct public key.  
  
## See Also  
 [Managing VSPackages](/visual-studio/extensibility/managing-vspackages)