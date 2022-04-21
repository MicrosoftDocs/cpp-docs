---
description: "Learn more about: General Property Page (Project)"
title: "General Property Page (Project)"
ms.date: 05/28/2021
f1_keywords: ["VC.Project.VCConfiguration.IntermediateDirectory", "VC.Project.VCConfiguration.ConfigurationType", "VC.Project.VCConfiguration.BuildBrowserInformation", "VC.Project.VCConfiguration.PlatformToolset", "VC.Project.VCConfiguration.TargetName", "VC.Project.VCConfiguration.", "VC.Project.VCConfiguration.ATLMinimizesCRunTimeLibraryUsage", "VC.Project.VCConfiguration.ReferencesPath", "VC.Project.VCGeneralMakefileSettings.ConfigurationType", "VC.Project.VCConfiguration.OutputDirectory", "VC.Project.VCConfiguration.AppSupport", "VC.Project.VCConfiguration.ToolFiles", "VC.Project.VCConfiguration.useOfATL", "VC.Project.VCConfiguration.DesktopCompatible"]
helpviewer_keywords: ["Clean Build option", "output files, setting directory", "Unicode, creating C++ build configuration"]
---
# General Property Page (Project)

This article applies to Visual Studio projects for Windows. For Linux projects, see [Linux C++ Property page reference](../../linux/prop-pages-linux.md). For CMake projects, see [CMake projects in Visual Studio](../cmake-projects-in-visual-studio.md). For Android projects, see [General project properties (Android C++)](../../cross-platform/general-android-prop-page.md). For Android Makefile projects, see [General project properties (Android C++ Makefile)](../../cross-platform/general-makefile-android-prop-page.md). In Visual Studio 2019, some properties for non-UWP (Windows Runtime or Universal Windows Platform) projects have moved to the [Advanced property page](./advanced-property-page.md).

To open the Property Pages dialog for a project, select the project (not the solution) in Solution Explorer. Next, select the **Project** > **Project-name Properties** menu from the menu bar. Or, right-click on the project node in Solution Explorer and select **Properties** from the shortcut menu.

In the Property Pages dialog, the **Configuration Properties** > **General** property page displays project properties based on project type. These properties are gathered under one or two headings, depending on project type:

- General

- Project Defaults

## General

The General property heading includes some combination of these properties:

### Target Platform

Specifies the platform that the project runs on. For example, Windows, Android, or iOS. The value **Windows 10** means the project targets the Universal Windows Platform. If you're targeting other versions of Windows, the version isn't listed and the value in this field appears as just **Windows**. This property is a read-only field that's set when you create a project.

### Target Platform Version

Specifies the version of the Windows SDK used to build the project. This property appears only if the project type supports it. You can select 10.0 to specify the latest version of the Windows SDK. If your app can take advantage of features in this Windows SDK version, but can still run on earlier versions without those features, perhaps with some loss of functionality, then the value of this property and the **Target Platform Min. Version** property might be different. If so, your code should check the version of the platform it's running against at runtime and disable features that aren't available in older platform versions.

### Target Platform Min. Version

Specifies the lowest version of the platform that the project can run on. This property appears only if the project type supports it. Set this value if your app can take advantage of features in a newer Windows SDK version, but still runs on earlier versions, perhaps with some loss of functionality. If set to a lower value, your code should check the version of the platform it's running against at runtime. Then, disable features that aren't available in older platform versions.

The C++ project system doesn't enforce this option. It's included for consistency with other languages, such as C# and JavaScript, and as a guide for anyone who uses your project. Microsoft C++ won't generate an error if you use a feature that's not available in the minimum version.

### Windows SDK Version

For the Windows target platform, this property specifies the version of the Windows SDK that your project requires. When the Visual Studio Installer installs a C++ Workload, it also installs the required parts of the Windows SDK. If you have other Windows SDK versions on your computer, each version installed appears in the dropdown.

To target Windows 7 or Windows Vista, use the value **8.1**, since Windows SDK 8.1 is backward compatible to those platforms. When you target an earlier version, define the appropriate value for `_WIN32_WINNT` in *`targetver.h`*. For Windows 7, that's 0x0601. For more information, see [Modifying `WINVER` and `_WIN32_WINNT`](../../porting/modifying-winver-and-win32-winnt.md).

You can install the Windows XP platform toolset included as an optional component in Visual Studio Installer to build Windows XP and Windows 2003 Server projects. For information on how to obtain and use this platform toolset, see [Configuring programs for Windows XP](../configuring-programs-for-windows-xp.md). For more information on changing the platform toolset, see [How to: Modify the target framework and platform toolset](../how-to-modify-the-target-framework-and-platform-toolset.md).

### Output Directory

Specifies the directory where build tools such as the linker place all final output files created during the build process. Typically, this directory holds the output of tools such as the linker, librarian, or BSCMake. By default, this property is the directory specified by the macro combination `$(SolutionDir)$(Configuration)\`.

To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.OutputDirectory%2A>.

### Intermediate Directory

Specifies the directory where tools such as the compiler place all intermediate files created during the build process. Typically, this directory holds the output of tools such as the C/C++ compiler, MIDL, and the resource compiler. By default, this property is the directory specified by the macro `$(Configuration)\`.

To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.IntermediateDirectory%2A>.

### Target Name

Specifies the file name this project generates. By default, this property is the filename specified by the macro `$(ProjectName)`.

### Target Extension

Specifies the file extension this project generates, such as *`.exe`* or *`.dll`*. For some Visual Studio 2019 project types, this property has moved to the [Advanced property page](./advanced-property-page.md).

### Extensions to Delete on Clean

The **Build** > **Clean** menu command deletes files from the intermediate directory where a project's configuration is built. The build system deletes files that have the specified extensions when you run the **Clean** command or when you rebuild. The build system also deletes any known output of the build no matter where it's located. Deleted files include any intermediate outputs such as *`.obj`* files. Use semicolons (**`;`**) to separate extensions. You can specify wildcard characters (**`*`**, **`?`**) in the extensions.

To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.DeleteExtensionsOnClean%2A>. For some Visual Studio 2019 project types, this property has moved to the [Advanced property page](./advanced-property-page.md).

### Build Log File

Allows you to specify a non-default location for the log file that's created whenever you build a project. The default location is specified by the macro combination `$(IntDir)$(MSBuildProjectName).log`. For some Visual Studio 2019 project types, this property has moved to the [Advanced property page](./advanced-property-page.md).

You can use project macros to change the directory location. For more information, see [Common macros for build commands and properties](common-macros-for-build-commands-and-properties.md).

### Platform Toolset

Specifies the toolset used for building the current configuration. This property allows the project to target a different version of the Visual C++ libraries and compiler. By default, Visual Studio C++ projects target the latest toolset installed by Visual Studio. You can choose one of the toolsets installed by several previous versions of Visual Studio instead. Some older toolsets can create executables that run on Windows XP or Vista. For more information on how to change the platform toolset, see [How to: Modify the target framework and platform toolset](../how-to-modify-the-target-framework-and-platform-toolset.md).

### Enable Managed Incremental Build

For managed projects, this property enables detection of external visibility when you generate assemblies. If a change to a managed project isn't visible to other projects, then dependent projects don't get rebuilt. This option can dramatically improve build times in solutions that include managed projects. In Visual Studio 2019 projects, this property has moved to the [Advanced property page](./advanced-property-page.md).

::: moniker range=">=msvc-160"

### Configuration Type

Specifies the project output and its required tools. In UWP projects, this property appears under the **Project Defaults** heading. There are several configuration types from which to choose, depending on your project type:

#### Application (.exe)

Displays the linker toolset: The C/C++ Compiler, MIDL, Resource Compiler, Linker, BSCMake, XML Web Service Proxy Generator, custom build, prebuild, prelink, and postbuild events.

#### Dynamic Library (.dll)

Displays the linker toolset, specifies the **`/DLL`** linker option, and adds the `_WINDLL` preprocessor definition to the CL command line.

#### Makefile

Displays the makefile toolset (NMake).

#### Static Library (.lib)

Displays the librarian toolset. It's the same as the linker toolset, except it replaces the linker with the librarian and omits XML Web Service Proxy Generator.

#### Utility

Displays the utility toolset (MIDL, custom build, prebuild, and postbuild events).

To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.ConfigurationType%2A>.

### C++ Language Standard

Specifies which C++ language standard to use. The default is **`/std:c++14`**. Specify **`/std:c++17`** to use C++17 features, **`/std:c++20`** to use C++20 features, and **`/std:c++latest`** to use proposed C++23 features or other experimental features. For more information, see [`/std` (Specify language standard version)](std-specify-language-standard-version.md).

### C Language Standard

Specifies which C language standard to use. The default is Legacy MSVC, which implements C89, some of C99, and Microsoft-specific extensions. Specify **`/std:c11`** to use C11 features, and **`/std:c17`** to use C17 features. For more information, see [`/std` (Specify language standard version)](std-specify-language-standard-version.md)

::: moniker-end

## Project Defaults

::: moniker range="<=msvc-150"

### Configuration Type

Specifies the project output and its required tools. In UWP projects, this property appears under the **Project Defaults** heading. There are several configuration types from which to choose, depending on your project type:

#### Application (.exe)

Displays the linker toolset: The C/C++ Compiler, MIDL, Resource Compiler, Linker, BSCMake, XML Web Service Proxy Generator, custom build, prebuild, prelink, and postbuild events.

#### Dynamic Library (.dll)

Displays the linker toolset, specifies the **`/DLL`** linker option, and adds the `_WINDLL` preprocessor definition to the CL command line.

#### Makefile

Displays the makefile toolset (NMake).

#### Static Library (.lib)

Displays the librarian toolset. It's the same as the linker toolset, except it replaces the linker with the librarian and omits XML Web Service Proxy Generator.

#### Utility

Displays the utility toolset (MIDL, custom build, prebuild, and postbuild events).

To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.ConfigurationType%2A>.

::: moniker-end

### Use of MFC

Specifies whether the MFC project statically or dynamically links to the MFC DLL. Non-MFC projects select **Use Standard Windows Libraries**. In Visual Studio 2019 projects, this property has moved to the [Advanced property page](./advanced-property-page.md).

To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.useOfMfc%2A>.

### Character Set

Specifies whether the `_UNICODE` or `_MBCS` preprocessor macro should be set. Also affects the linker entry point, where appropriate. In Visual Studio 2019 projects, this property has moved to the [Advanced property page](./advanced-property-page.md).

To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.CharacterSet%2A>.

### Common Language Runtime support

Causes the [`/clr`](clr-common-language-runtime-compilation.md) compiler option to be used. In Visual Studio 2019 projects, this property has moved to the [Advanced property page](./advanced-property-page.md).

To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.ManagedExtensions%2A>.

### .NET Target Framework Version

In managed projects, specifies the .NET framework version to target. In Visual Studio 2019 projects, this property has moved to the [Advanced property page](./advanced-property-page.md).

### Whole Program Optimization

Specifies the [`/GL`](gl-whole-program-optimization.md) compiler option and [`/LTCG`](ltcg-link-time-code-generation.md) linker option. By default, this property is disabled for Debug configurations, and enabled for Release configurations. In Visual Studio 2019 projects, this property has moved to the [Advanced property page](./advanced-property-page.md).

### Windows Store App Support

Specifies whether this project supports Windows Runtime (Universal Windows Platform or UWP) apps. For more information, see [`/ZW` (Windows Runtime Compilation)](zw-windows-runtime-compilation.md), and the Windows Developer [UWP documentation](/windows/uwp/).

::: moniker range=">=msvc-160"

### Windows Desktop Compatible

Enables the output of this Windows Runtime project to also support desktop apps. This property sets the `<DesktopCompatible>` value in the project file. The **Windows Desktop Compatible** property is available starting in Visual Studio 2019 version 16.9.

::: moniker-end

## See also

[C++ project property page reference](property-pages-visual-cpp.md)
