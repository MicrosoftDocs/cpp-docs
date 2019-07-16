---
title: "Advanced Property Page (Project)"
ms.date: "07/19/2019"
---

# Advanced Property Page

## Advanced Properties

Target File Extension

- **Extensions to Delete on Clean**

   The **Clean** option (**Build** menu) deletes files from the intermediate directory where a project's configuration is built. Files with extensions specified with this property will be deleted when **Clean** is run or when you perform a rebuild. In addition to files of these extensions in the intermediate directory, the build system will also delete any known output of the build regardless of where it is located (including intermediate outputs such as .obj files). Note that you can specify wildcard characters.

   To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.DeleteExtensionsOnClean%2A>.



- **Build Log File**

   Allows you to specify a non-default location for the log file that is created whenever you build a project. The default location is specified by the macros $(IntDir)$(MSBuildProjectName).log.

   You can use project macros to change the directory location. See [Common macros for build commands and properties](common-macros-for-build-commands-and-properties.md).

Preferred Build Tool Architecture
Use Debug Libraries
Enable Unity (JUMBO) build

- **Use of MFC**

   Specifies whether the MFC project will statically or dynamically link to the MFC DLL. Non-MFC projects can select **Use Standard Windows Libraries** to link to various Win32 libraries that are included when you use MFC.

   To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.useOfMfc%2A>.

- **Character Set**

   Defines whether _UNICODE or _MBCS should be set. Also affects the linker entry point where appropriate.

   To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.CharacterSet%2A>.

- **Whole Program Optimization**

   Specifies the [/GL](gl-whole-program-optimization.md) compiler option and [/LTCG](ltcg-link-time-code-generation.md) linker option. By default, this is disabled for Debug configurations, and enabled for Retail configurations.

MSVC Toolset Version

## C++/CLI Properties

- **Common Language Runtime support**

   Causes the [/clr](clr-common-language-runtime-compilation.md) compiler option to be used.

   To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.ManagedExtensions%2A>.

- **.NET Target Framework Version**

   In managed projects, specifies the .NET framework version to target.

- **Enable Managed Incremental Build**

   For managed projects, this enables detection of external visibility when you generate assemblies. If a change to a managed project is not visible to other projects, then dependent projects are not rebuilt. This can dramatically improve build times in solutions that include managed projects.



- **Use of ATL**

   Specifies whether the ATL project will statically or dynamically link to the ATL .DLL. If you specify anything other than **Not Using ATL**, a define will be added to the compiler's **Command Line** property page.

   To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.useOfATL%2A>.


