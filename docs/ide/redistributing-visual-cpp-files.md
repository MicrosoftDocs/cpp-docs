---
title: "Redistributing Visual C++ Files | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-ide"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["application deployment [C++], file redistributing", "redistributing applications [C++]", "deploying applications [C++], file redistributing", "file redistribution [C++]", "redistributing applications [C++], about redistributing applications"]
ms.assetid: d201b2ce-36f1-44e5-a96c-0db81a1ba652
caps.latest.revision: 50
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Redistributing Visual C++ Files
When you deploy an application, you must also deploy the files that are required to support it. If any of these files are provided by Microsoft, check whether you are permitted to redistribute them. To review the Visual Studio license terms, see the License terms link in the About Microsoft Visual Studio dialog box in the IDE, or download the [Microsoft Software License Terms](http://go.microsoft.com/fwlink/p/?LinkId=831114) file. To view the "REDIST list" that is referenced in the "Distributable Code" section of the Microsoft Software License Terms for certain editions of Visual Studio, see [Distributable Code for Microsoft Visual Studio 2017 and Microsoft Visual Studio 2017 SDK (Includes Utilities and BuildServer Files)](http://go.microsoft.com/fwlink/p/?LinkId=823098), or for Visual Studio 2015, see [Distributable Code for Microsoft Visual Studio 2015 and Microsoft Visual Studio 2015 SDK](http://go.microsoft.com/fwlink/p/?LinkId=523763). For more information about redistributable files, see [Determining Which DLLs to Redistribute](../ide/determining-which-dlls-to-redistribute.md) and [Deployment Examples](../ide/deployment-examples.md).  
  
 To deploy redistributable Visual C++ files, you can use the Visual C++ Redistributable Packages (VCRedist\_x86.exe, VCRedist\_x64.exe, or VCRedist\_arm.exe) that are included in Visual Studio. In Visual Studio 2017, these files can be found in the Program Files[ (x86)]\\Microsoft Visual Studio\\2017\\_edition_\\VC\\Redist\\MSVC\\_lib-version_ folder, where _edition_ is the Visual Studio edition installed, and _lib-version_ is the version of the libraries to redistribute. In Visual Studio 2015, these files can be found under your Visual Studio installation directory in Program Files [(x86)]\Microsoft Visual Studio *version*\VC\redist\\*locale*\\. Another option is to use redistributable merge modules (.msm files), which in Visual Studio 2017 can be found in the Program Files [(x86)]\\Microsoft Visual Studio\\2017\\_edition_\\VC\\Redist\\MSVC\\_lib-version_\\MergeModules\\ folder. In Visual Studio 2015 these can be found in Program Files [(x86)]\Common Files\Merge Modules\\. It's also possible to directly install redistributable Visual C++ DLLs in the *application local folder*, which is the folder that contains your executable application file. For servicing reasons, we do not recommend that you use this installation location.  
  
 The Visual C++ Redistributable Packages install and register all Visual C++ libraries. If you use one, you must set it to run on the target system as a prerequisite to the installation of your application. We recommend that you use these packages for your deployments because they enable automatic updating of the Visual C++ libraries. For an example about how to use these packages, see [Walkthrough: Deploying a Visual C++ Application By Using the Visual C++ Redistributable Package](../ide/deploying-visual-cpp-application-by-using-the-vcpp-redistributable-package.md).  
  
 Each Visual C++ Redistributable Package checks for the existence of a more recent version on the machine. If a more recent version is found, the package is not installed. Starting in Visual Studio 2015, redistributable packages display an error message stating that setup failed. If a package is run by using the **/quiet** flag, no error message is displayed. In either case, an error is logged by the Microsoft installer, and an error result is returned to the caller. Starting in Visual Studio 2015 packages, you can avoid this error by checking the registry to find out if a more recent version is installed. The currently installed version is stored in the HKEY_LOCAL_MACHINE\SOFTWARE[\Wow6432Node]\Microsoft\VisualStudio\\_vs-version_\VC\Runtimes\\{x86|x64|ARM} key, where _vs-version_ is the version number for Visual Studio (14.0 for both Visual Studio 2015 and Visual Studio 2017, because the updated 2017 redistributable is binary compatible with the 2015 version), and where the key is ARM, x86, or x64 depending on the installed vcredist versions for the platform. (You don't need to check under the Wow6432Node subkey unless you are using RegEdit to view the version of the installed x86 package on an x64 platform.) The version number is stored in the REG_SZ string value **Version** and also in the set of **Major**, **Minor**, **Bld**, and **Rbld** REG_DWORD values. To avoid an error at install time, you must skip installation of the redistributable package if the currently installed version is more recent.  
  
 If you use a merge module that contains a Visual C++ DLL, you must include it in the Windows Installer package (or similar installation package) that you are using to deploy the application. For more information, see [Redistributing By Using Merge Modules](../ide/redistributing-components-by-using-merge-modules.md). For an example, see [Walkthrough: Deploying a Visual C++ Application By Using a Setup Project](../ide/walkthrough-deploying-a-visual-cpp-application-by-using-a-setup-project.md), which also shows how to use InstallShield Limited Edition to create an installation package.  
  
## Potential Run-Time Errors  
 If a Visual C++ library DLL is not reachable and Windows cannot load it for your application, this message may be displayed: **This application has failed to start because MSVCR\<version number>.dll was not found. Re-installing the application may fix this problem.**  
  
 To resolve this kind of error, make sure that your application builds correctly and that Visual C++ libraries are correctly deployed on the target system. For more information, see [Understanding the Dependencies of a Visual C++ Application](../ide/understanding-the-dependencies-of-a-visual-cpp-application.md).  
  
## Related Topics  
  
|Title|Description|  
|-----------|-----------------|  
|[Redistributing By Using Merge Modules](../ide/redistributing-components-by-using-merge-modules.md)|Describes how to use Visual C++ redistributable merge modules to install the Visual C++ runtime libraries as shared DLLs in the %windir%\system32\ folder.|  
|[Redistributing Visual C++ ActiveX Controls](../ide/redistributing-visual-cpp-activex-controls.md)|Describes how to redistribute an application that uses ActiveX Controls.|  
|[Redistributing Database Support Files](../ide/redistributing-database-support-files.md)|Discusses how to redistribute support files for Data Access Objects (DAO) and the database technologies in the Microsoft Data Access SDK.|  
|[Redistributing the MFC Library](../ide/redistributing-the-mfc-library.md)|Describes how to redistribute an application that uses MFC.|  
|[Redistributing an ATL application](../ide/redistributing-an-atl-application.md)|Describes how to redistribute an application that uses ATL. Starting in Visual Studio 2012, no redistributable library for ATL is required.|  
|[Deployment Examples](../ide/deployment-examples.md)|Links to examples that demonstrate how to deploy Visual C++ applications.|  
|[Deploying Desktop Applications](../ide/deploying-native-desktop-applications-visual-cpp.md)|Introduces Visual C++ deployment concepts and technologies.|