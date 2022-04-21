---
title: "MSBuild internals for C++ projects in Visual Studio"
description: "The support files, properties, and targets used by MSBuild for Visual Studio C++ projects."
ms.date: 02/10/2022
helpviewer_keywords: ["MSBuild overview"]
---
# MSBuild internals for C++ projects

When you set project properties in the IDE and then save the project, Visual Studio writes the project settings to your project file. The project file contains settings that are unique to your project. However, it doesn't contain all the settings required to build your project. The project file contains `Import` elements that include a network of additional *support files.* The support files contain the remaining properties, targets, and settings required to build the project.

Most targets and properties in the support files exist solely to implement the build system. This article discusses useful targets and properties you can specify on the MSBuild command line. To discover more targets and properties, explore the files in the support file directories.

## Support File Directories

By default, the primary Visual Studio support files are located in the following directories. This information is version-specific.

::: moniker range=">=msvc-160"

### Visual Studio 2022 and 2019

- *`%VSINSTALLDIR%MSBuild\Microsoft\VC\<version>\`*

  Contains the primary target files (*`.targets`*) and property files (*`.props`*) that are used by the targets. By default, the `$(VCTargetsPath)` macro references this directory. The *`<version>`* placeholder refers to the Visual Studio version: v170 for Visual Studio 2022, v160 for Visual Studio 2019, or v150 for Visual Studio 2017.

- *`%VSINSTALLDIR%MSBuild\Microsoft\VC\<version>\Platforms\<platform>\`*

  Contains platform-specific target and property files that override targets and properties in its parent directory. This directory also contains a DLL that defines the tasks that are used by the targets in this directory. The *`<platform>`* placeholder represents the ARM, ARM64, Win32, or x64 subdirectory.

- *`%VSINSTALLDIR%MSBuild\Microsoft\VC\<version>\Platforms\<platform>\PlatformToolsets\<toolset>\`*

  Contains the directories that enable the build to generate C++ applications by using the specified *`<toolset>`*. The *`<platform>`* placeholder represents the ARM, ARM64, Win32, or x64 subdirectory. The *`<toolset>`* placeholder represents the toolset subdirectory.

::: moniker-end

::: moniker range=">=msvc-150"

### Visual Studio 2017

- *`%VSINSTALLDIR%Common7\IDE\VC\VCTargets\`*

  Contains the primary target files (*`.targets`*) and property files (*`.props`*) that are used by the targets. By default, the `$(VCTargetsPath)` macro references this directory.

- *`%VSINSTALLDIR%Common7\IDE\VC\VCTargets\Platforms\<platform>\`*

  Contains platform-specific target and property files that override targets and properties in its parent directory. This directory also contains a DLL that defines the tasks that are used by the targets in this directory. The *`<platform>`* placeholder represents the ARM, ARM64, Win32, or x64 subdirectory.

- *`%VSINSTALLDIR%Common7\IDE\VC\VCTargets\Platforms\<platform>\PlatformToolsets\<toolset>\`*

  Contains the directories that enable the build to generate C++ applications by using the specified *`<toolset>`*. The *`<platform>`* placeholder represents the ARM, Win32, or x64 subdirectory. The *`<toolset>`* placeholder represents the toolset subdirectory.

::: moniker-end

### Visual Studio 2015 and earlier

- *`<drive>:\Program Files[ (x86)]\MSBuild\Microsoft.Cpp\v4.0\<version>\`*

  Contains the primary target files (*`.targets`*) and property files (*`.props`*) that are used by the targets. By default, the $(VCTargetsPath) macro references this directory.

- *`<drive>:\Program Files[ (x86)]\MSBuild\Microsoft.Cpp\v4.0\<version>\Platforms\<platform>\`*

  Contains platform-specific target and property files that override targets and properties in its parent directory. This directory also contains a DLL that defines the tasks that are used by the targets in this directory. The *`<platform>`* placeholder represents the ARM, Win32, or x64 subdirectory.

- *`<drive>:\Program Files[ (x86)]\MSBuild\Microsoft.Cpp\v4.0\<version>\Platforms\<platform>\PlatformToolsets\<toolset>\`*

  Contains the directories that enable the build to generate C++ applications by using the specified *`<toolset>`*. The *`<version>`* placeholder is V110 for Visual Studio 2012, V120 for Visual Studio 2013, and V140 for Visual Studio 2015. The *`<platform>`* placeholder represents the ARM, Win32, or x64 subdirectory. The *`<toolset>`* placeholder represents the toolset subdirectory. For example, it's v140 for building Windows apps by using the Visual Studio 2015 toolset. Or, v120_xp to build for Windows XP using the Visual Studio 2013 toolset.

- *`<drive>:\Program Files[ (x86)]\MSBuild\Microsoft.Cpp\v4.0\Platforms\<platform>\PlatformToolsets\<toolset>\`*

  The paths that enable the build to generate either Visual Studio 2008 or Visual Studio 2010 applications don't include the *`<version>`*. In those versions, the *`<platform>`* placeholder represents the Itanium, Win32, or x64 subdirectory. The *`<toolset>`* placeholder represents the v90 or v100 toolset subdirectory.

## Support Files

The support file directories contain files with these extensions:

| Extension | Description |
| --------- | ----------- |
| *`.targets`* | Contains `Target` XML elements that specify the tasks that are executed by the target. May also contain `PropertyGroup`, `ItemGroup`, `ItemDefinitionGroup`, and user-defined `Item` elements that are used to assign files and command-line options to task parameters.<br /><br /> For more information, see [`Target` Element (MSBuild)](/visualstudio/msbuild/target-element-msbuild). |
| *`.props`* | Contains `Property Group` and user-defined `Property` XML elements that specify file and parameter settings that are used during a build.<br /><br /> May also contain `ItemDefinitionGroup` and user-defined `Item` XML elements that specify additional settings. Items defined in an item definition group resemble properties, but can't be accessed from the command line. Visual Studio project files frequently use items instead of properties to represent settings.<br /><br /> For more information, see [`ItemGroup` Element (MSBuild)](/visualstudio/msbuild/itemgroup-element-msbuild), [`ItemDefinitionGroup` Element (MSBuild)](/visualstudio/msbuild/itemdefinitiongroup-element-msbuild), and [`Item` Element (MSBuild)](/visualstudio/msbuild/item-element-msbuild). |
| *`.xml`* | Contains XML elements that declare and initialize IDE user interface elements. For example, property sheets, property pages, textbox controls, and listbox controls.<br /><br /> The *`.xml`* files directly support the IDE, not MSBuild. However, the values of IDE properties are assigned to build properties and items.<br /><br /> Most *`.xml`* files are in a locale-specific subdirectory. For example, files for the English-US region are in `$(VCTargetsPath)\1033\`. |

## User targets and properties

To use MSBuild effectively, it helps to know which properties and targets are useful and relevant. Most properties and targets help implement the Visual Studio build system, and aren't relevant to the user. This section describes user-oriented properties and targets worth knowing about.

### `PlatformToolset` property

The `PlatformToolset` property determines which MSVC toolset is used in the build. By default, the current toolset is used. When this property is set, its value gets concatenated with literal strings to form the path. It's the directory that contains the property and target files required to build a project for a particular platform. The platform toolset must be installed to build by using that platform toolset version.

For example, set the `PlatformToolset` property to `v140` to use Visual Studio 2015 tools and libraries to build your application:

`msbuild myProject.vcxproj /p:PlatformToolset=v140`

### `PreferredToolArchitecture` property

The `PreferredToolArchitecture` property determines whether the 32-bit or 64-bit compiler and tools are used in the build. This property doesn't affect the output platform architecture or configuration. By default, MSBuild uses the x86 version of the compiler and tools if this property isn't set.

For example, set the `PreferredToolArchitecture` property to `x64` to use the 64-bit compiler and tools to build your application:

`msbuild myProject.vcxproj /p:PreferredToolArchitecture=x64`

### `UseEnv` property

By default, the platform-specific settings for the current project override the `PATH`, `INCLUDE`, `LIB`, `LIBPATH`, `CONFIGURATION`, and `PLATFORM` environment variables. Set the `UseEnv` property to **`true`** to guarantee that the environment variables don't get overridden.

> `msbuild myProject.vcxproj /p:UseEnv=true`

### Targets

There are hundreds of targets in the Visual Studio support files. However, most are system-oriented targets that the user can ignore. Most system targets are prefixed by an underscore (`_`), or have a name that starts with `PrepareFor`, `Compute`, `Before`, `After`, `Pre`, or `Post`.

The following table lists several useful user-oriented targets.

| Target | Description |
| ------ | ----------- |
| `BscMake` | Executes the Microsoft Browse Information Maintenance Utility tool, *`bscmake.exe`*. |
| `Build` | Builds the project.<br /><br /> This target is the default for a project. |
| `ClCompile` | Executes the MSVC compiler tool, *`cl.exe`*. |
| `Clean` | Deletes temporary and intermediate build files. |
| `Lib` | Executes the Microsoft 32-Bit Library Manager tool, *`lib.exe`*. |
| `Link` | Executes the MSVC linker tool, *`link.exe`*. |
| `ManifestResourceCompile` | Extracts a list of resources from a manifest and then executes the Microsoft Windows Resource Compiler tool, *`rc.exe`*. |
| `Midl` | Executes the Microsoft Interface Definition Language (MIDL) compiler tool, *`midl.exe`*. |
| `Rebuild` | Cleans and then builds your project. |
| `ResourceCompile` | Executes the Microsoft Windows Resource Compiler tool, *`rc.exe`*. |
| `XdcMake` | Executes the XML Documentation tool, *`xdcmake.exe`*. |
| `Xsd` | Executes the XML Schema Definition tool, *`xsd.exe`*. *See note.* |

> [!NOTE]
> In Visual Studio 2017 and later, C++ project support for *`.xsd`* files is deprecated. You can still use `Microsoft.VisualC.CppCodeProvider` by adding *`CppCodeProvider.dll`* manually to the GAC.

## See also

[MSBuild task reference](/visualstudio/msbuild/msbuild-task-reference)\
[`BscMake` task](/visualstudio/msbuild/bscmake-task)\
[`CL` task](/visualstudio/msbuild/cl-task)\
[`CPPClean` task](/visualstudio/msbuild/cppclean-task)\
[`LIB` task](/visualstudio/msbuild/lib-task)\
[`Link` task](/visualstudio/msbuild/link-task)\
[`MIDL` task](/visualstudio/msbuild/midl-task)\
[`MT` task](/visualstudio/msbuild/mt-task)\
[`RC` task](/visualstudio/msbuild/rc-task)\
[`SetEnv` task](/visualstudio/msbuild/setenv-task)\
[`VCMessage` task](/visualstudio/msbuild/vcmessage-task)\
[`XDCMake` task](/visualstudio/msbuild/xdcmake-task)
