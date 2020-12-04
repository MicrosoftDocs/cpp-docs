---
description: "Learn more about: How to: Modify C++ project properties and targets without changing the project file"
title: "How to: Modify C++ project properties and targets without changing the project file"
ms.date: "11/28/2018"
helpviewer_keywords: ["project properties [C++], modifying outside project file"]
---
# How to: Modify C++ project properties and targets without changing the project file

You can override project properties and targets from the MSBuild command prompt without changing the project file. This is useful when you want to apply some properties temporarily or occasionally. It assumes some knowledge of MSBuild. For more information, see [MSBuild](/visualstudio/msbuild/msbuild).

> [!IMPORTANT]
> You can use the XML Editor in Visual Studio, or any text editor, to create the .props or .targets file. Don't use the **Property Manager** in this scenario because it adds the properties to the project file.

*To override project properties:*

1. Create a .props file that specifies the properties you want to override.

1. From the command prompt: set ForceImportBeforeCppTargets="C:\sources\my_props.props"

*To override project targets:*

1. Create a .targets file with their implementation or a particular target

2. From the command prompt: set ForceImportAfterCppTargets ="C:\sources\my_target.targets"

You can also set either option on the msbuild command line by using the /p: option:

```cmd
> msbuild myproject.sln /p:ForceImportBeforeCppTargets="C:\sources\my_props.props"
> msbuild myproject.sln /p:ForceImportAfterCppTargets="C:\sources\my_target.targets"
```

Overriding properties and targets in this way is equivalent to adding the following imports to all .vcxproj files in the solution:

```cmd
<Import Project=="C:\sources\my_props.props" />
<Import Project="$(VCTargetsPath)\Microsoft.Cpp.targets" />
<Import Project==" C:\sources\my_target.targets"" />
```
