---
description: "Learn more about: Advanced Property Page"
title: "Advanced Property Page (Project)"
ms.date: 08/10/2020
f1_keywords: ["VC.Project.VCConfiguration.VCToolsVersion"]
ms.description: "Use the Advanced property page in Visual Studio 2019 to set various properties for C++ projects."
---
# Advanced Property Page

::: moniker range="<=msvc-150"

The Advanced property page is available in Visual Studio 2019 and later. To see the documentation for that version, set the Visual Studio **Version** selector control for this article to Visual Studio 2019. It's found at the top of the table of contents on this page.

::: moniker-end

::: moniker range="msvc-160"

The Advanced property page is available in Visual Studio 2019 and later.

## Advanced Properties

- **Target File Extension**

   Specifies the file extension to use for the build output. Defaults to *`.exe`* for applications, *`.lib`* for static libraries and *`.dll`* for DLLs.

- **Extensions to Delete on Clean**

   The **Clean** option (**Build** menu) deletes files from the intermediate directory where a project's configuration is built. Files with extensions specified in this property get deleted when **Clean** is run or when you rebuild. The build system deletes any files that have these extensions in the intermediate directory. It also deletes any known output of the build, no matter where it's located. (That includes the intermediate outputs such as *`.obj`* files.) You can specify wildcard characters in this property.

   To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.DeleteExtensionsOnClean%2A>.

- **Build Log File**

   Allows you to specify a non-default location for the log file that's created whenever you build a project. The default location is specified by the macros `$(IntDir)$(MSBuildProjectName).log`.

   You can use project macros to change the directory location. See [Common macros for build commands and properties](common-macros-for-build-commands-and-properties.md).

- **Preferred Build Tool Architecture**

   Specifies whether to use the x86 or x64 build tools.

- **Use Debug Libraries**

   Specifies whether to create a Debug or Release build.

- **Enable Unity (JUMBO) build**

   Enables a faster build process that combines many C++ source files into one or more files before compilation. These combined files are known as *unity* files. They're unrelated to the Unity game engine.

- **Copy Content to OutDir**

   Copy the items marked as *content* in the project to the project's output directory (`$(OutDir)`). This setting can simplify deployment. This property is available starting in Visual Studio 2019 version 16.7.

- **Copy Project References to OutDir**

   Copy the executable (DLL and EXE file) project reference items to the project's output directory (`$(OutDir)`). In C++/CLI ([`/clr`](clr-common-language-runtime-compilation.md)) projects, this property is ignored. Instead, the **Copy Local** property on each project reference controls whether it's copied to the output directory. This setting can simplify local deployment. It's available starting in Visual Studio 2019 version 16.7.

- **Copy Project References' Symbols to OutDir**

   Copy the PDB files for project reference items along with the project reference executable items to the project's output directory (`$(OutDir)`). This property is always enabled for C++/CLI projects. This setting can simplify debug deployment. It's available starting in Visual Studio 2019 version 16.7.

- **Copy C++ Runtime to OutDir**

   Copy the runtime DLLs to the project's output directory (`$(OutDir)`). This setting can simplify local deployment. It's available starting in Visual Studio 2019 version 16.7.

- **Use of MFC**

   Specifies whether the MFC project statically or dynamically links to the MFC DLL. In non-MFC projects, select **Use Standard Windows Libraries** to link the Win32 libraries included by MFC.

   To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.useOfMfc%2A>.

- **Character Set**

   Defines whether `_UNICODE` or `_MBCS` should be set. Also affects the linker entry point where appropriate.

   To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.CharacterSet%2A>.

- **Whole Program Optimization**

   Specifies the [`/GL`](gl-whole-program-optimization.md) compiler option and [`/LTCG`](ltcg-link-time-code-generation.md) linker option. By default, whole program optimization is disabled for Debug configurations, and enabled for Release configurations.

- **MSVC Toolset Version**

   Specifies the full version of the MSVC toolset that's used to build the project. You may have various update and preview versions of a toolset installed. You can specify which one to use here.

## C++/CLI Properties

- **Common Language Runtime support**

   Causes the [`/clr`](clr-common-language-runtime-compilation.md) compiler option to be used.

   To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.ManagedExtensions%2A>.

- **.NET Target Framework Version**

   In managed projects, specifies the .NET framework version to target.

- **Enable Managed Incremental Build**

   For managed projects, this option enables detection of external visibility when you generate assemblies. If a change to a managed project isn't visible to other projects, dependent projects aren't rebuilt. Managed incremental builds can dramatically improve build times in solutions that include managed projects.

::: moniker-end
