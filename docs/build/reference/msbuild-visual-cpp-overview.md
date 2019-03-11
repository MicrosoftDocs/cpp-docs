---
title: "MSBuild internals for C++ projects in Visual Studio"
ms.date: "12/08/2018"
helpviewer_keywords: ["MSBuild overview"]
ms.assetid: dd258f6f-ab51-48d9-b274-f7ba911d05ca
---

# MSBuild internals for C++ projects

When you set project properties in the IDE and then save the project, Visual Studio writes the project settings to your project file. The project file contains settings that are unique to your project, but it does not contain all the settings that are required to build your project. The project file contains `Import` elements that include a network of additional *support files.* The support files contain the remaining properties, targets, and settings that are required to build the project.

Most targets and properties in the support files exist solely to implement the build system. The following section discusses some useful targets and properties that you can specify on the MSBuild command line. To discover more targets and properties, explore the files in the support file directories.

## Support File Directories

By default, the primary Visual Studio support files are located in the following directories. The directories under Microsoft Visual Studio are used by Visual Studio 2017 and later versions, while the directories under MSBuild are used by Visual Studio 2015 and earlier versions.

|Directory|Description|
|---------------|-----------------|
|*drive*:\Program Files *(x86)*\Microsoft Visual Studio\\*year*\\*edition*\Common7\IDE\VC\VCTargets\ <br /><br />*drive*:\Program Files *(x86)*\MSBuild\Microsoft.Cpp (x86)\v4.0\\*version*\ |Contains the primary target files (.targets) and property files (.props) that are used by the targets. By default, the $(VCTargetsPath) macro references this directory.|
|*drive*:\Program Files *(x86)*\Microsoft Visual Studio\\*year*\\*edition*\Common7\IDE\VC\VCTargets\Platforms\\*platform*\ <br /><br />*drive*:\Program Files *(x86)*\MSBuild\Microsoft.Cpp\v4.0\\*version*\Platforms\\*platform*\ |Contains platform-specific target and property files that override targets and properties in its parent directory. This directory also contains a DLL that defines the tasks that are used by the targets in this directory.<br /><br /> The *platform* placeholder represents the ARM, Win32, or x64 subdirectory.|
|*drive*:\Program Files *(x86)*\Microsoft Visual Studio\\*year*\\*edition*\Common7\IDE\VC\VCTargets\Platforms\\*platform*\PlatformToolsets\\*toolset*\ <br /><br />*drive*:\Program Files *(x86)*\MSBuild\Microsoft.Cpp\v4.0\\*version*\Platforms\\*platform*\PlatformToolsets\\*toolset*\ <br /><br />*drive*:\Program Files *(x86)*\MSBuild\Microsoft.Cpp\v4.0\Platforms\\*platform*\PlatformToolsets\\*toolset*\ |Contains the directories that enable the build to generate C++ applications by using the specified *toolset*.<br /><br /> The *year* and *edition* placeholders are used by Visual Studio 2017 and later editions. The *version* placeholder is V110 for Visual Studio 2012, V120 for Visual Studio 2013, or V140 for Visual Studio 2015. The *platform* placeholder represents the ARM, Win32, or x64 subdirectory. The *toolset* placeholder represents the toolset subdirectory, for example, v140 for building Windows apps by using the Visual Studio 2015 toolset, v120_xp to build for Windows XP using the Visual Studio 2013 toolset, or v110_wp80 to build Windows Phone 8.0 apps by using the Visual Studio 2012 toolset.<br /><br />The path that contains the directories that enable the build to generate either Visual Studio 2008 or Visual Studio 2010 applications doesn't include the *version*, and the *platform* placeholder represents the Itanium, Win32, or x64 subdirectory. The *toolset* placeholder represents the v90 or v100 toolset subdirectory.|

## Support Files

The support file directories contain files with these extensions:

|Extension|Description|
|---------------|-----------------|
|.targets|Contains `Target` XML elements that specify the tasks that are executed by the target. May also contain `PropertyGroup`, `ItemGroup`, `ItemDefinitionGroup`, and user-defined `Item` elements that are used to assign files and command-line options to task parameters.<br /><br /> For more information, see [Target Element (MSBuild)](/visualstudio/msbuild/target-element-msbuild).|
|.props|Contains `Property Group` and user-defined `Property` XML elements that specify file and parameter settings that are used during a build.<br /><br /> May also contain `ItemDefinitionGroup` and user-defined `Item` XML elements that specify additional settings. Items defined in an item definition group resemble properties, but cannot be accessed from the command line. Visual Studio project files frequently use items instead of properties to represent settings.<br /><br /> For more information, see [ItemGroup Element (MSBuild)](/visualstudio/msbuild/itemgroup-element-msbuild), 
[ItemDefinitionGroup Element (MSBuild)](/visualstudio/msbuild/itemdefinitiongroup-element-msbuild), and [Item Element (MSBuild)](/visualstudio/msbuild/item-element-msbuild).|
|.xml|Contains XML elements that declare and initialize IDE user interface elements such as property sheets and property pages, and text box and list box controls.<br /><br /> The .xml files directly support the IDE, not MSBuild. However, the values of IDE properties are assigned to build properties and items.<br /><br /> Most .xml files are in a locale-specific subdirectory. For example, files for the English-US region are in $(VCTargetsPath)\1033\\.|

## User targets and properties

To use MSBuild most effectively on the command line, it helps to know which properties and targets are useful and relevant. Most properties and targets help implement the Visual Studio build system, and consequently are not relevant to the user. This section describes some worthwhile user-oriented properties and targets.

### PlatformToolset property

The `PlatformToolset` property determines which MSVC toolset is used in the build. By default, the current toolset is used. When this property is set, the value of the property is concatenated with literal strings to form the path of a directory that contains the property and target files that are required to build a project for a particular platform. The platform toolset must be installed to build by using that platform toolset version.

For example, set the `PlatformToolset` property to `v140` to use Visual Studio 2015 tools and libraries to build your application:

`msbuild myProject.vcxproj /p:PlatformToolset=v140`

### PreferredToolArchitecture property

The `PreferredToolArchitecture` property determines whether the 32-bit or 64-bit compiler and tools are used in the build. This property does not affect the output platform architecture or configuration. By default, MSBuild uses the x86 version of the compiler and tools if this property is not set.

For example, set the `PreferredToolArchitecture` property to `x64` to use the 64-bit compiler and tools to build your application:

`msbuild myProject.vcxproj /p:PreferredToolArchitecture=x64`

### UseEnv property

By default, the platform-specific settings for the current project override the PATH, INCLUDE, LIB, LIBPATH, CONFIGURATION, and PLATFORM environment variables. Set the `UseEnv` property to **true** to guarantee that the environment variables are not overridden.

`msbuild myProject.vcxproj /p:UseEnv=true`

### Targets

There are hundreds of targets in the Visual Studio support files. However, most are system-oriented targets that the user can ignore. Most system targets are prefixed by an underscore (_), or have a name that starts with "PrepareFor", "Compute", "Before", "After", "Pre", or "Post".

The following table lists several useful user-oriented targets.

|Target|Description|
|------------|-----------------|
|BscMake|Executes the Microsoft Browse Information Maintenance Utility tool, bscmake.exe.|
|Build|Builds the project.<br /><br /> This is the default target for a project.|
|ClCompile|Executes the MSVC compiler tool, cl.exe.|
|Clean|Deletes temporary and intermediate build files.|
|Lib|Executes the Microsoft 32-Bit Library Manager tool, lib.exe.|
|Link|Executes the MSVC linker tool, link.exe.|
|ManifestResourceCompile|Extracts a list of resources from a manifest and then executes the Microsoft Windows Resource Compiler tool, rc.exe.|
|Midl|Executes the Microsoft Interface Definition Language (MIDL) compiler tool, midl.exe.|
|Rebuild|Cleans and then builds your project.|
|ResourceCompile|Executes the Microsoft Windows Resource Compiler tool, rc.exe.|
|XdcMake|Executes the XML Documentation tool, xdcmake.exe.|
|Xsd|Executes the XML Schema Definition tool, xsd.exe. *See note below.*|

> [!NOTE]
> In Visual Studio 2017, C++ project support for **xsd** files is deprecated. You can still use **Microsoft.VisualC.CppCodeProvider** by adding **CppCodeProvider.dll** manually to the GAC.

## See Also

[MSBuild Task Reference](/visualstudio/msbuild/msbuild-task-reference)<br/>
[BscMake Task](/visualstudio/msbuild/bscmake-task)<br/>
[CL Task](/visualstudio/msbuild/cl-task)<br/>
[CPPClean Task](/visualstudio/msbuild/cppclean-task)<br/>
[LIB Task](/visualstudio/msbuild/lib-task)<br/>
[Link Task](/visualstudio/msbuild/link-task)<br/>
[MIDL Task](/visualstudio/msbuild/midl-task)<br/>
[MT Task](/visualstudio/msbuild/mt-task)<br/>
[RC Task](/visualstudio/msbuild/rc-task)<br/>
[SetEnv Task](/visualstudio/msbuild/setenv-task)<br/>
[VCMessage Task](/visualstudio/msbuild/vcmessage-task)<br/>
[XDCMake Task](/visualstudio/msbuild/xdcmake-task)<br/>
