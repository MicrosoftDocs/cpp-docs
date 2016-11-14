---
title: "General Property Page (Project) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCConfiguration.IntermediateDirectory"
  - "VC.Project.VCConfiguration.ConfigurationType"
  - "VC.Project.VCConfiguration.ManagedExtensions"
  - "VC.Project.VCConfiguration.BuildBrowserInformation"
  - "VC.Project.VCConfiguration.BuildLogFile"
  - "VC.Project.VCConfiguration.PlatformToolset"
  - "VC.Project.VCConfiguration.TargetName"
  - "VC.Project.VCConfiguration."
  - "VC.Project.VCConfiguration.TargetExt"
  - "VC.Project.VCConfiguration.ATLMinimizesCRunTimeLibraryUsage"
  - "VC.Project.VCConfiguration.ReferencesPath"
  - "VC.Project.VCConfiguration.DeleteExtensionsOnClean"
  - "VC.Project.VCConfiguration.useOfMfc"
  - "VC.Project.VCConfiguration.CharacterSet"
  - "VC.Project.VCGeneralMakefileSettings.ConfigurationType"
  - "VC.Project.VCConfiguration.OutputDirectory"
  - "VC.Project.VCConfiguration.AppSupport"
  - "VC.Project.VCConfiguration.ToolFiles"
  - "VC.Project.VCConfiguration.useOfATL"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Clean Build option"
  - "output files, setting directory"
  - "Unicode, creating C++ build configuration"
ms.assetid: 593b383c-cd0f-4dcd-ad65-9ec9b4b19c45
caps.latest.revision: 30
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
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
# General Property Page (Project)
When you right-click on a project node in in Solution Explorer, and select **Properties**, the **General** property page under the **Configuration Properties** node in the left pane displays two sections of properties:  
  
-   General  
  
-   Project Defaults  
  
## General  
 The properties in the General section affect the location of files that are created in the build process and which files to delete when the **Clean** option (**Build** menu) is selected.  
  
 **Target Platform**  
 Specifies the platform that the project will run on. For example, Windows, Android, or iOS. The value **Windows 10** means the project targets the Universal Windows Platform. If you are targeting earlier versions of Windows, the version is not listed and the value in this field appears as just **Windows**. This is a read-only field that is set when you create a project.  
  
 **Target Platform Version**  
 For the Windows platform, specifies the version of the Windows SDK that your project builds with. For Windows, this is the Windows SDK version. [!INCLUDE[vs_dev14](../ide/includes/vs_dev14_md.md)] ships with Windows SDK 8.1. If you installed the [Tools for Windows 10](http://go.microsoft.com/fwlink/p/?LinkId=617631), each version of those tools that you have installed appears in the dropdown.  
  
 To target Windows 7 or Windows Vista, use the value **8.1**, since Windows SDK 8.1 is backward compatible to those platforms. In addition, you should define the appropriate value for _WIN32_WINNT in targetver.h. For Windows 7, that's 0x0601. See [Modifying WINVER and _WIN32_WINNT](../porting/modifying-winver-and-win32-winnt.md).  
  
 You can install the v110_xp platform toolset included in [!INCLUDE[vs_dev11_long](../build/includes/vs_dev11_long_md.md)] to use the current version of [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] to build Windows XP and [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)] projects. For information on how to obtain and use this platform toolset, see [Configuring Programs for Windows XP](../build/configuring-programs-for-windows-xp.md). For additional information on changing the platform toolset, see [How to: Modify the Target Framework and Platform Toolset](../build/how-to-modify-the-target-framework-and-platform-toolset.md).  
  
 **Target Platform Min. Version**  
 Specifies the lowest version of the platform that the project can run on. This property appears only if the project type supports it, such as in Windows Universal projects. If your app can take advantage of features in a newer Windows SDK version, but can still run on earlier versions without those features, perhaps with some loss of functionality, then the value of these two properties might be different. If so, your code should check the version of the platform it is running against at runtime and not try to use features that aren't available in older platform version.  
  
 Note that Visual C++ does not enforce this option. It is included for consistency with other languages, such as C# and JavaScript, and as a guide for anyone who uses your project. Visual C++ won't generate an error if you use a feature that is not available in the minimum version.  
  
 **Output Directory**  
 Specifies the directory where tools such as the linker will place all final output files that are created during the build process. Typically, this includes the output of tools such as the linker, librarian, or BSCMake.  
  
 To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.OutputDirectory%2A>.  
  
 **Intermediate Directory**  
 Specifies the directory where tools such as the compiler will place all intermediate files created during the build process. Typically, this includes the output of tools such as the C/C++ compiler, MIDL, and the resource compiler.  
  
 To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.IntermediateDirectory%2A>.  
  
 **Target Name**  
 Specifies the file name this project generates.  
  
 **Target Extension**  
 Specifies the file name extension this project generates; for example, .exe or .dll.  
  
 **Extensions to Delete on Clean**  
 The **Clean** option (**Build** menu) deletes files from the intermediate directory where a project's configuration is built. Files with extensions specified with this property will be deleted when **Clean** is run or when you perform a rebuild. In addition to files of these extensions in the intermediate directory, the build system will also delete any known output of the build regardless of where it is located (including intermediate outputs such as .obj files). Note that you can specify wildcard characters.  
  
 To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.DeleteExtensionsOnClean%2A>.  
  
 **Build Log File**  
 Allows you to specify a non-default location for the log file that is created whenever you build a project.  
  
 You can use project macros to change the directory location. See [Common Macros for Build Commands and Properties](../ide/common-macros-for-build-commands-and-properties.md).  
  
 **Platform Toolset**  
 Allows the project to target a different version of the Visual C++ libraries and compiler. [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] projects can target either the default toolset in [!INCLUDE[vs_dev11_long](../build/includes/vs_dev11_long_md.md)] (**v100**) or the toolset that creates executables that can run on Windowx XP.  
  
## Project Defaults  
 The properties in the Project Default section represent default properties that you can modify. The definition for these properties can be found in the .props files in *Installation Directory*\VC\VCProjectDefaults.  
  
 **Configuration Type**  
 There are several configuration types from which to choose:  
  
-   **Application (.exe)**, displays linker toolset (C/C++ Compiler, MIDL, Resource Compiler, Linker, BSCMake, XML Web Service Proxy Generator, custom build, prebuild, prelink, postbuild events).  
  
-   **Dynamic Library (.dll)**, displays linker toolset, specifies /DLL linker option, and adds the _WINDLL define to CL.  
  
-   **Makefile**, displays makefile toolset (NMake).  
  
-   **Static Library (.lib)**, displays librarian toolset (same as linker toolset except substitute librarian for linker and omit XML Web Service Proxy Generator).  
  
-   **Utility**, displays utility toolset (MIDL, custom build, prebuild, postbuild events).  
  
 To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.ConfigurationType%2A>.  
  
 **Use of MFC**  
 Specifies whether the MFC project will statically or dynamically link to the MFC DLL. Non-MFC projects can select **Use Standard Windows Libraries** to link to various Win32 libraries that are included when you use MFC.  
  
 To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.useOfMfc%2A>.  
  
 **Use of ATL**  
 Specifies whether the ATL project will statically or dynamically link to the ATL .DLL. If you specify anything other than **Not Using ATL**, a define will be added to the compiler's **Command Line** property page.  
  
 To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.useOfATL%2A>.  
  
 **Character Set**  
 Defines whether _UNICODE or _MBCS should be set. Also affects the linker entry point where appropriate.  
  
 To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.CharacterSet%2A>.  
  
 **Common Language Runtime support**  
 Causes the [/clr](../build/reference/clr-common-language-runtime-compilation.md) compiler option to be used.  
  
 To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.ManagedExtensions%2A>.  
  
 **Whole Program Optimization**  
 Specifies the [/GL](../build/reference/gl-whole-program-optimization.md) compiler option and [/LTCG](../build/reference/ltcg-link-time-code-generation.md) linker option.  
  
 **Windows Store App Support**  
 Specifies whether this project supports [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] apps. For more information, see [/ZW (Windows Runtime Compilation)](../build/reference/zw-windows-runtime-compilation.md), and the Windows Developer Center.  
  
## See Also  
 [Property Pages](../ide/property-pages-visual-cpp.md)