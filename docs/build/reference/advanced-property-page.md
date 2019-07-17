---
title: "Advanced Property Page (Project)"
ms.date: "07/19/2019"
f1_keywords: ["VC.Project.VCConfiguration.VCToolsVersion"]
ms.description: "Use the Advanced property page in Visual Studio 2019 to set various properties for C++ projects."
---

# Advanced Property Page

The Advanced property page is available in Visual Studio 2019 and later.

::: moniker range="vs-2019"

## Advanced Properties

- **Target File Extension**

   Specifies the file extension to use for the build output. Defaults to **.exe** for applications, **.lib** for static libraries and **.dll** for DLLs.

- **Extensions to Delete on Clean**

   The **Clean** option (**Build** menu) deletes files from the intermediate directory where a project's configuration is built. Files with extensions specified with this property will be deleted when **Clean** is run or when you perform a rebuild. In addition to files of these extensions in the intermediate directory, the build system will also delete any known output of the build regardless of where it is located (including intermediate outputs such as .obj files). Note that you can specify wildcard characters.

   To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.DeleteExtensionsOnClean%2A>.

- **Build Log File**

   Allows you to specify a non-default location for the log file that is created whenever you build a project. The default location is specified by the macros $(IntDir)$(MSBuildProjectName).log.

   You can use project macros to change the directory location. See [Common macros for build commands and properties](common-macros-for-build-commands-and-properties.md).

- **Preferred Build Tool Architecture**

   Specifies whether to use the x86 or x64 build tools.

- **Use Debug Libraries**

   Specifies whether to create a DEBUG or RELEASE build.

- **Enable Unity (JUMBO) build**

   Enables a build process where many C++ source files are combined into one or more "unity" files before compilation to improve build performance. Unrelated to the Unity game engine.

- **Use of MFC**

   Specifies whether the MFC project will statically or dynamically link to the MFC DLL. Non-MFC projects can select **Use Standard Windows Libraries** to link to various Win32 libraries that are included when you use MFC.

   To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.useOfMfc%2A>.

- **Character Set**

   Defines whether _UNICODE or _MBCS should be set. Also affects the linker entry point where appropriate.

   To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.CharacterSet%2A>.

- **Whole Program Optimization**

   Specifies the [/GL](gl-whole-program-optimization.md) compiler option and [/LTCG](ltcg-link-time-code-generation.md) linker option. By default, this is disabled for Debug configurations, and enabled for Retail configurations.

- **MSVC Toolset Version**

   Specifies the full version of the MSVC toolset that will be used to build the project. If you have various update and preview versions of a toolset installed, you can specify which one to use here.

## C++/CLI Properties

- **Common Language Runtime support**

   Causes the [/clr](clr-common-language-runtime-compilation.md) compiler option to be used.

   To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.ManagedExtensions%2A>.

- **.NET Target Framework Version**

   In managed projects, specifies the .NET framework version to target.

- **Enable Managed Incremental Build**

   For managed projects, this enables detection of external visibility when you generate assemblies. If a change to a managed project is not visible to other projects, then dependent projects are not rebuilt. This can dramatically improve build times in solutions that include managed projects.

::: moniker-end
