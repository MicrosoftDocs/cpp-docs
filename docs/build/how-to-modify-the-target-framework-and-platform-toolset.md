---
description: "Learn more about: How to: Modify the Target Framework and Platform Toolset"
title: "How to: Modify the Target Framework and Platform Toolset"
ms.custom: "contperf-fy21q3"
ms.date: 03/31/2021
helpviewer_keywords: ["msbuild (c++), howto: modify target framework and platform toolset"]
---
# How to: Modify the Target Framework and Platform Toolset

You can edit a Visual Studio C++ project file to target different versions of the C++ platform toolset. The Windows SDK and the .NET Framework used are also editable. (The .NET Framework applies to C++/CLI projects only). A new project uses the default .NET Framework and toolset of the Visual Studio version that you use to create the project. If you modify these values in the .vcxproj file, you can use the same code base for every compilation target.

## Platform toolset

The platform toolset consists of the C++ compiler (cl.exe) and linker (link.exe), along with the C/C++ standard libraries. Visual Studio 2015, Visual Studio 2017, and Visual Studio 2019 are binary-compatible. It's shown by the major version of the toolset, which has remained at 14. Projects compiled in Visual Studio 2019 or Visual Studio 2017 are ABI-backwards-compatible with 2017 and 2015 projects. The minor version has updated by 1 for each version since Visual Studio 2015:

- Visual Studio 2015: v140
- Visual Studio 2017: v141
- Visual Studio 2019: v142
- Visual Studio 2022: v143

These toolsets support the .NET Framework 4.5 and later.

Visual Studio also supports multitargeting for C++ projects. You can use the latest Visual Studio IDE to edit and build projects created by older versions of Visual Studio. It doesn't require a project upgrade the projects to use a new version of the toolset. It does require the older toolset is installed on your computer. For more information, see [How to use native multi-targeting in Visual Studio](../porting/use-native-multi-targeting.md). For example, in Visual Studio 2015, you can *target* .NET Framework 2.0, but you must use an earlier toolset that supports it.

## Target framework (C++/CLI project only)

When you change the target Framework, also change the platform toolset to a version that supports that Framework. For example, to target the .NET Framework 4.5, you must use a compatible platform toolset. These toolsets include Visual Studio 2015 (v140), Visual Studio 2013 (v120), or Visual Studio 2012 (v110). You can use the [Windows 7.1 SDK](https://www.microsoft.com/download/details.aspx?id=8279) to target .NET Framework 2.0, 3.0, 3.5, and 4.

You can extend the target platform further by creating a custom platform toolset. For more information, see [C++ Native Multi-Targeting](https://devblogs.microsoft.com/cppblog/c-native-multi-targeting/) on the Visual C++ blog.

### To change the target Framework

1. In Visual Studio, in **Solution Explorer**, select your project. On the menu bar, open the **Project** menu and choose **Unload project**. This command unloads the project (.vcxproj) file for your project.

   > [!NOTE]
   >  A C++ project can't be loaded while you edit the project file in Visual Studio. However, you can use another editor such as Notepad to modify the project file while the project is loaded in Visual Studio. Visual Studio will detect that the project file has changed and prompt you to reload the project.

1. On the menu bar, select **File**, **Open**, **File**. In the **Open File** dialog box, navigate to your project folder, and then open the project (.vcxproj) file.

1. In the project file, locate the entry for the target Framework version. For example, if your project is designed to use the .NET Framework 4.5, locate `<TargetFrameworkVersion>v4.5</TargetFrameworkVersion>` in the `<PropertyGroup Label="Globals">` element of the `<Project>` element. If the `<TargetFrameworkVersion>` element isn't present, your project doesn't use the .NET Framework and no change is required.

1. Change the value to the Framework version you want, such as v3.5 or v4.6.

1. Save the changes and close the editor.

1. In **Solution Explorer**, open the shortcut menu for your project and then choose **Reload Project**.

1. To verify the change, on the menu bar, select **Project** > **Properties** to open your project **Property Pages** dialog box. In the dialog box, select the **Configuration Properties** > **General** property page. Verify that **.NET Target Framework Version** shows the new Framework version.

### To change the platform toolset

1. In Visual Studio, on the menu bar, select **Project** > **Properties** to open your project **Property Pages** dialog box.

1. In the top of the **Property Pages** dialog box, open the **Configuration** drop-down list and then select **All Configurations**.

1. In the dialog box, select the **Configuration Properties** > **General** property page.

1. In the properties page, select **Platform Toolset** and then select the toolset you want from the drop-down list. For example, if you've installed the Visual Studio 2010 toolset, select **Visual Studio 2010 (v100)** to use it for your project.

1. Choose the **OK** button to save your changes.

## Next Steps

[Walkthrough: Working with Projects and Solutions (C++)](../ide/walkthrough-working-with-projects-and-solutions-cpp.md)

## See also

[MSBuild on the command line - C++](msbuild-visual-cpp.md)
