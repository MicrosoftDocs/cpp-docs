---
description: "Use the Advanced property page in Visual Studio 2019 to set various properties for C++ projects."
title: "Advanced Property Page (Project)"
ms.date: 08/31/2022
f1_keywords: ["VC.Project.VCConfiguration.TargetExt", "VC.Project.VCConfiguration.DeleteExtensionsOnClean", "VC.Project.VCConfiguration.BuildLogFile", "VC.Project.VCConfiguration.PreferredToolArchitecture", "VC.Project.VCConfiguration.UseDebugLibraries", "VC.Project.VCConfiguration.EnableUnitySupport", "VC.Project.VCConfiguration.CopyLocalDeploymentContent", "VC.Project.VCConfiguration.CopyLocalProjectReference", "VC.Project.VCConfiguration.CopyLocalDebugSymbols", "VC.Project.VCConfiguration.CopyCppRuntimeToOutputDir", "VC.Project.VCConfiguration.useOfMfc", "VC.Project.VCConfiguration.CharacterSet", "VC.Project.VCConfiguration.WholeProgramOptimization", "VC.Project.VCConfiguration.VCToolsVersion", "VC.Project.VCConfiguration.LLVMToolsVersion", "VC.Project.VCConfiguration.ManagedExtensions", "VC.Project.TargetFrameworkVersion", "VC.Project.VCConfiguration.EnableManagedIncrementalBuild", "VC.Project.VCConfiguration.ManagedAssembly"]
---

# Advanced Property Page

::: moniker range="<=msvc-150"

The Advanced property page is available in Visual Studio 2019 and later. To see the documentation for that version, set the Visual Studio **Version** selector control for this article to Visual Studio 2019 or later. It's found at the top of the table of contents on this page. In earlier versions of Visual Studio, these properties appear on the [General property page](./general-property-page-project.md):

- [Target Extension](./general-property-page-project.md#target-extension)
- [Extensions to Delete on Clean](./general-property-page-project.md#extensions-to-delete-on-clean)
- [Build Log File](./general-property-page-project.md#build-log-file)
- [Enable Managed Incremental Build](./general-property-page-project.md#enable-managed-incremental-build)
- [Use of MFC](./general-property-page-project.md#use-of-mfc)
- [Character Set](./general-property-page-project.md#character-set)
- [Whole Program Optimization](./general-property-page-project.md#whole-program-optimization)
- [Common Language Runtime support](./general-property-page-project.md#common-language-runtime-support)
- [.NET Target Framework Version](./general-property-page-project.md#net-target-framework-version)

::: moniker-end

::: moniker range=">=msvc-160"

The Advanced property page is available in Visual Studio 2019 and later. The specific properties shown depend on the project type. Windows Runtime (Universal Windows Platform, or UWP) projects don't show this page.

## Advanced Properties

### Target File Extension

Specifies the file extension to use for the build output. Defaults to *`.exe`* for applications, *`.lib`* for static libraries and *`.dll`* for DLLs.

### Extensions to Delete on Clean

The **Build** > **Clean** menu command deletes files from the intermediate directory where a project's configuration is built. The build system deletes files that have the specified extensions when you run the **Clean** command or when you rebuild. The build system also deletes any known output of the build no matter where it's located. Deleted files include any intermediate outputs such as *`.obj`* files. Use semicolons (**`;`**) to separate extensions. You can specify wildcard characters (**`*`**, **`?`**) in the extensions.

To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.DeleteExtensionsOnClean%2A>.

### Build Log File

Allows you to specify a non-default location for the log file that's created whenever you build a project. The default location is specified by the macros `$(IntDir)$(MSBuildProjectName).log`.

You can use project macros to change the directory location. For more information, see [Common macros for build commands and properties](common-macros-for-build-commands-and-properties.md).

### Preferred Build Tool Architecture

Specifies whether to use the x86 or x64 build tools.

### Use Debug Libraries

Specifies whether to create a Debug or Release build. Despite the name, **Use Debug Libraries** is a build system-specific property that is effectively shorthand for "Make a Debug build" or "Make a Release build". It sets several compiler and linker properties for Debug or Release builds, including the library settings. You can use it to create Debug or Release configurations for a new platform or in a new template. We don't recommend you change this property in an existing configuration. Use the individual compiler and linker properties instead.

### Enable Unity (JUMBO) build

Enables a faster build process that combines many C++ source files into one or more files before compilation. These combined files are known as *unity* files. They're unrelated to the Unity game engine.

### Copy Content to OutDir

Copy the items marked as *content* in the project to the project's output directory (`$(OutDir)`). This setting can simplify deployment. This property is available starting in Visual Studio 2019 version 16.7.

### Copy Project References to OutDir

Copy the executable (DLL and EXE file) project reference items to the project's output directory (`$(OutDir)`). In C++/CLI ([`/clr`](clr-common-language-runtime-compilation.md)) projects, this property is ignored. Instead, the **Copy Local** property on each project reference controls whether it's copied to the output directory. This setting can simplify local deployment. It's available starting in Visual Studio 2019 version 16.7.

### Copy Project References' Symbols to OutDir

Copy the PDB files for project reference items along with the project reference executable items to the project's output directory (`$(OutDir)`). This property is always enabled for C++/CLI projects. This setting can simplify debug deployment. It's available starting in Visual Studio 2019 version 16.7.

### Copy C++ Runtime to OutDir

Copy the runtime DLLs to the project's output directory (`$(OutDir)`). This setting can simplify local deployment. It's available starting in Visual Studio 2019 version 16.7.

### Use of MFC

Specifies whether the MFC project statically or dynamically links to the MFC DLL. Non-MFC projects select **Use Standard Windows Libraries**.

To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.useOfMfc%2A>.

### Character Set

Specifies whether the `_UNICODE` or `_MBCS` preprocessor macro should be set. Also affects the linker entry point, where appropriate.

To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.CharacterSet%2A>.

### Whole Program Optimization

Specifies the [`/GL`](gl-whole-program-optimization.md) compiler option and [`/LTCG`](ltcg-link-time-code-generation.md) linker option. By default, this property is disabled for Debug configurations, and enabled for Release configurations.

### MSVC Toolset Version

Specifies the full version of the MSVC toolset that's used to build the project. You may have various update and preview versions of a toolset installed. You can specify which one to use here.

### LLVM Toolset Version

Specifies the full version of the LLVM toolset that's used to build the project. This property is available when **LLVM (clang-cl)** is selected as the platform toolset, starting in Visual Studio 2019 version 16.9. For more information, see [Set a custom LLVM toolset version](..\clang-support-msbuild.md#custom_llvm_toolset).

## C++/CLI Properties

### Common Language Runtime support

Causes the [`/clr`](clr-common-language-runtime-compilation.md) compiler option to be used.

To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.ManagedExtensions%2A>.

### .NET Target Framework Version

This property only applies when the **Common Language Runtime support** property is set to **.NET Framework Runtime Support**, that is the project targets [.NET Framework](/dotnet/standard/glossary#net-framework), and it specifies the version of the .NET Framework.

### .NET Target Framework

This property only applies when the **Common Language Runtime support** property is set to **.NET Runtime Support**, that is the project targets [.NET](/dotnet/standard/glossary#net).

This property specifies the .NET 5+ Target Framework Moniker this project targets, for example `net6.0-windows` or `net7.0-windows8.0`.

### Enable Managed Incremental Build

For managed projects, this option enables detection of external visibility when you generate assemblies. If a change to a managed project isn't visible to other projects, dependent projects aren't rebuilt. Managed incremental builds can dramatically improve build times in solutions that include managed projects.

### Enable CLR Support for Individual Files

This option sets a `ManagedAssembly` build property that enables building only some files in the project as managed code. You must set **Enable CLR Support for Individual Files** to **Yes** if some but not all of your project files are built as managed code. This property is only available in projects that use the v143 or later toolset in Visual Studio 2022 and later versions.

### .NET Target Windows Version

This property only applies when the **Common Language Runtime support** property is set to **.NET Runtime Support**, that is the project targets [.NET](/dotnet/standard/glossary#net).

This property specifies the minimum Windows version that the project supports. This value is used by NuGet to determine the compatibility of projects and NuGet package dependencies. If a project A depends on project B, project A's .NET target Windows version must be greater or equal to project B's.

::: moniker-end

