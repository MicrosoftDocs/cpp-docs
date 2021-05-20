---
description: "Learn more about: General Property Page (Project)"
title: "General Property Page (Project)"
ms.date: "07/17/2019"
f1_keywords: ["VC.Project.VCConfiguration.IntermediateDirectory", "VC.Project.VCConfiguration.ConfigurationType", "VC.Project.VCConfiguration.ManagedExtensions", "VC.Project.VCConfiguration.BuildBrowserInformation", "VC.Project.VCConfiguration.BuildLogFile", "VC.Project.VCConfiguration.PlatformToolset", "VC.Project.VCConfiguration.TargetName", "VC.Project.VCConfiguration.", "VC.Project.VCConfiguration.TargetExt", "VC.Project.VCConfiguration.ATLMinimizesCRunTimeLibraryUsage", "VC.Project.VCConfiguration.ReferencesPath", "VC.Project.VCConfiguration.DeleteExtensionsOnClean", "VC.Project.VCConfiguration.useOfMfc", "VC.Project.VCConfiguration.CharacterSet", "VC.Project.VCGeneralMakefileSettings.ConfigurationType", "VC.Project.VCConfiguration.OutputDirectory", "VC.Project.VCConfiguration.AppSupport", "VC.Project.VCConfiguration.ToolFiles", "VC.Project.VCConfiguration.useOfATL", "VC.Project.VCConfiguration.DesktopCompatible"]
helpviewer_keywords: ["Clean Build option", "output files, setting directory", "Unicode, creating C++ build configuration"]
---
# General Property Page (Project)

::: moniker range=">=msvc-160"

This topic applies to Visual Studio projects for Windows. For Linux projects, see [Linux C++ Property page reference](../../linux/prop-pages-linux.md). For CMake projects, see [CMake projects in Visual Studio](../cmake-projects-in-visual-studio.md). For Android projects, see [General project properties (Android C++)](../../cross-platform/general-android-prop-page.md). For Android Makefile projects, see [General project properties (Android C++ Makefile)](../../cross-platform/general-makefile-android-prop-page.md)

To open the Property Pages dialog for a project, select the project (not the solution) in Solution Explorer. Next, select the **Project** > **Project-name Properties** menu from the menu bar. Or, right-click on the project node in Solution Explorer and select **Properties** from the shortcut menu.

In the Property Pages dialog for your project, the **Configuration Properties** > **General** property page displays some combination of these properties:

- **Windows SDK Version**

   For the Windows target platform, this specifies the version of the Windows SDK that your project requires. When you install a C++ Workload by using the Visual Studio installer, the required parts of the Windows SDK are also installed. If you have other Windows SDK versions on your computer, each version of the SDK tools that you have installed appears in the dropdown.

   To target Windows 7 or Windows Vista, use the value **8.1**, since Windows SDK 8.1 is backward compatible to those platforms. In addition, you should define the appropriate value for `_WIN32_WINNT` in *`targetver.h`*. For Windows 7, that's 0x0601. See [Modifying `WINVER` and `_WIN32_WINNT`](../../porting/modifying-winver-and-win32-winnt.md).

   You can install the Windows XP platform toolset included as a component in Visual Studio Installer to build Windows XP and Windows 2003 Server projects. For information on how to obtain and use this platform toolset, see [Configuring programs for Windows XP](../configuring-programs-for-windows-xp.md). For additional information on changing the platform toolset, see [How to: Modify the target framework and platform toolset](../how-to-modify-the-target-framework-and-platform-toolset.md).

- **Platform Toolset**

   Allows the project to target a different version of the Visual C++ libraries and compiler. Visual Studio C++ projects can target either the default toolset installed by Visual Studio, or one of the toolsets installed by several previous versions of Visual Studio, including toolsets that create executables that can run on Windows XP. For information on changing the platform toolset, see [How to: Modify the Target Framework and Platform Toolset](../how-to-modify-the-target-framework-and-platform-toolset.md).

- **C++ Language Standard**

   Specifies which language standard to use. The default is **`/std:c++14`**. Specify **`/std:c++17`** to use C++17 features, and **`/std:c++20`** or **`/std:c+++latest`** to use C++20 or other experimental features. For more information, see [`/std` (Specify language standard version)](std-specify-language-standard-version.md)

::: moniker-end

::: moniker range="<=msvc-150"

In Visual Studio 2015 and Visual Studio 2017, when you right-click on a project node in **Solution Explorer**, and select **Properties**, the **General** property page under the **Configuration Properties** node in the left pane displays two sections of properties:

- General

- Project Defaults

## General

- **Target Platform**

   Specifies the platform that the project runs on. For example, Windows, Android, or iOS. The value **Windows 10** means the project targets the Universal Windows Platform. If you are targeting earlier versions of Windows, the version isn't listed and the value in this field appears as just **Windows**. This is a read-only field that's set when you create a project.

- **Target Platform Version**

   Specifies the version of the Windows SDK used to build the project. This property appears only if the project type supports it. If your app can take advantage of features in this Windows SDK version, but can still run on earlier versions without those features, perhaps with some loss of functionality, then the value of this property and the **Target Platform Min. Version** property might be different. If so, your code should check the version of the platform it's running against at runtime and disable features that aren't available in older platform versions.

- **Target Platform Min. Version**

   Specifies the lowest version of the platform that the project can run on. This property appears only if the project type supports it. If your app can take advantage of features in a newer Windows SDK version, but can still run on earlier versions without those features, perhaps with some loss of functionality, then the value of these two properties might be different. If so, your code should check the version of the platform it's running against at runtime and disable features that aren't available in older platform version.

   The C++ project system doesn't enforce this option. It's included for consistency with other languages, such as C# and JavaScript, and as a guide for anyone who uses your project. Visual C++ won't generate an error if you use a feature that's not available in the minimum version.

- **Windows SDK Version**

   For the Windows target platform, this property specifies the version of the Windows SDK that your project requires. When you install a C++ Workload by using the Visual Studio installer, the required parts of the Windows SDK are also installed. If you have other Windows SDK versions on your computer, each version of the SDK tools that you have installed appears in the dropdown.

   To target Windows 7 or Windows Vista, use the value **8.1**, since Windows SDK 8.1 is backward compatible to those platforms. In addition, you should define the appropriate value for `_WIN32_WINNT` in *`targetver.h`*. For Windows 7, that's 0x0601. See [Modifying `WINVER` and `_WIN32_WINNT`](../../porting/modifying-winver-and-win32-winnt.md).

   You can install the Windows XP platform toolset included as a component in Visual Studio Installer to build Windows XP and Windows 2003 Server projects. For information on how to obtain and use this platform toolset, see [Configuring programs for Windows XP](../configuring-programs-for-windows-xp.md). For additional information on changing the platform toolset, see [How to: Modify the target framework and platform toolset](../how-to-modify-the-target-framework-and-platform-toolset.md).

- **Windows SDK Version (Visual Studio 2017)**

   For the Windows target platform, this property specifies the version of the Windows SDK that your project requires. When you install a C++ Workload by using the Visual Studio installer, the required parts of the Windows SDK are also installed. If you have other Windows SDK versions on your computer, each version of the SDK tools that you have installed appears in the dropdown.

   To target Windows 7 or Windows Vista, use the value **8.1**, since Windows SDK 8.1 is backward compatible to those platforms. Also define the appropriate value for `_WIN32_WINNT` in *`targetver.h`*. For Windows 7, that's 0x0601. See [Modifying `WINVER` and `_WIN32_WINNT`](../../porting/modifying-winver-and-win32-winnt.md).

   You can install the Windows XP platform toolset included in Visual Studio to use the current version of the libraries to build Windows XP and Windows 2003 Server projects. For information on how to obtain and use this platform toolset, see [Configuring programs for Windows XP](../configuring-programs-for-windows-xp.md). For additional information on changing the platform toolset, see [How to: Modify the target framework and platform toolset](../how-to-modify-the-target-framework-and-platform-toolset.md).

- **Output Directory**

   Specifies the directory where build tools such as the linker place all final output files created during the build process. Typically, this includes the output of tools such as the linker, librarian, or BSCMake. By default, this property is the directory specified by the macros `$(SolutionDir)$(Configuration)\`.

   To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.OutputDirectory%2A>.

- **Intermediate Directory**

   Specifies the directory where tools such as the compiler place all intermediate files created during the build process. Typically, this includes the output of tools such as the C/C++ compiler, MIDL, and the resource compiler. By default, this property is the directory specified by the macro `$(Configuration)\`.

   To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.IntermediateDirectory%2A>.

- **Target Name**

   Specifies the file name this project generates. By default, this property is the filename specified by the macro `$(ProjectName)`.

- **Target Extension**

   Specifies the file extension this project generates, such as `.exe` or `.dll`.

- **Extensions to Delete on Clean**

   The **Clean** option (**Build** menu) deletes files from the intermediate directory where a project's configuration is built. Files with extensions specified with this property will be deleted when **Clean** is run or when you perform a rebuild. In addition to files of these extensions in the intermediate directory, the build system will also delete any known output of the build regardless of where it is located (including intermediate outputs such as .obj files). Note that you can specify wildcard characters.

   To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.DeleteExtensionsOnClean%2A>.

- **Build Log File**

   Allows you to specify a non-default location for the log file that is created whenever you build a project. The default location is specified by the macros $(IntDir)$(MSBuildProjectName).log.

   You can use project macros to change the directory location. See [Common macros for build commands and properties](common-macros-for-build-commands-and-properties.md).

- **Platform Toolset**

   Allows the project to target a different version of the Visual C++ libraries and compiler. Visual Studio C++ projects can target either the default toolset installed by Visual Studio, or one of the toolsets installed by several previous versions of Visual Studio, including toolsets that create executables that can run on Windows XP. For information on changing the platform toolset, see [How to: Modify the Target Framework and Platform Toolset](../how-to-modify-the-target-framework-and-platform-toolset.md).

- **Enable Managed Incremental Build**

   For managed projects, this enables detection of external visibility when you generate assemblies. If a change to a managed project is not visible to other projects, then dependent projects are not rebuilt. This can dramatically improve build times in solutions that include managed projects.

## Project Defaults

The properties in the Project Default section represent default properties that you can modify. The definition for these properties can be found in the `.props` files in *Installation Directory*\VC\VCProjectDefaults.

- **Configuration Type**

  There are several configuration types from which to choose:

  - **Application (.exe)**

     Displays the linker toolset (that is, the C/C++ Compiler, MIDL, Resource Compiler, Linker, BSCMake, XML Web Service Proxy Generator, custom build, prebuild, prelink, and postbuild events).

  - **Dynamic Library (.dll)**

     Displays the linker toolset, specifies the **`/DLL`** linker option, and adds the `_WINDLL` preprocessor definition to the CL command line.

  - **Makefile**

     Displays the makefile toolset (NMake).

  - **Static Library (.lib)**

     Displays the librarian toolset. It's the same as the linker toolset, except it replaces the linker with the librarian and omits XML Web Service Proxy Generator.

  - **Utility**

     Displays the utility toolset (MIDL, custom build, prebuild, and postbuild events).

  To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.ConfigurationType%2A>.

- **Use of MFC**

   Specifies whether the MFC project statically or dynamically links to the MFC DLL. Non-MFC projects can select **Use Standard Windows Libraries** to link to various Win32 libraries that are included when you use MFC.

   To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.useOfMfc%2A>.

- **Character Set**

   Defines whether _UNICODE or _MBCS should be set. Also affects the linker entry point where appropriate.

   To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.CharacterSet%2A>.

- **Common Language Runtime support**

   Causes the [`/clr`](clr-common-language-runtime-compilation.md) compiler option to be used.

   To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.ManagedExtensions%2A>.

- **.NET Target Framework Version**

   In managed projects, specifies the .NET framework version to target.

- **Whole Program Optimization**

   Specifies the [`/GL`](gl-whole-program-optimization.md) compiler option and `[/LTCG`](ltcg-link-time-code-generation.md) linker option. By default, this property is disabled for Debug configurations, and enabled for Release configurations.

- **Windows Store App Support**

   Specifies whether this project supports Windows Runtime (Universal Windows Platform) apps. For more information, see [`/ZW` (Windows Runtime Compilation)](zw-windows-runtime-compilation.md), and the Windows Developer Center.

- **Windows Desktop Compatible**

   Enables the output of this project to also support desktop apps.


## See also

[C++ project property page reference](property-pages-visual-cpp.md)
