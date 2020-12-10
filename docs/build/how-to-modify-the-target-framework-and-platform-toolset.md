---
description: "Learn more about: How to: Modify the Target Framework and Platform Toolset"
title: "How to: Modify the Target Framework and Platform Toolset"
ms.custom: "conceptual"
ms.date: "07/24/2019"
helpviewer_keywords: ["msbuild (c++), howto: modify target framework and platform toolset"]
ms.assetid: 031b1d54-e6e1-4da7-9868-3e75a87d9ffe
---
# How to: Modify the Target Framework and Platform Toolset

You can edit a Visual Studio C++ project file to target different versions of the C++ platform toolset, the Windows SDK and the .NET Framework (C++/CLI projects only). By default, the project system uses the .NET Framework version and the toolset version that correspond to the version of Visual Studio that you use to create the project. You can modify all these values in the .vcxproj file so that you can use the same code base for every compilation target.

## Platform toolset

The platform toolset consists of the C++ compiler (cl.exe) and linker (link.exe), along with the C/C++ standard libraries. Since Visual Studio 2015, the major version of the toolset has remained at 14, which means that projects compiled with Visual Studio 2019 or Visual Studio 2017 are ABI-backwards-compatible with projects compiled with Visual Studio 2015. The minor version has updated by 1 for each version since Visual Studio 2015:

- Visual Studio 2015: v140
- Visual Studio 2017: v141
- Visual Studio 2019: v142

These toolsets support .NET Framework 4.5 and later.

Visual Studio also supports multitargeting for C++ projects. You can use the Visual Studio IDE to edit and build projects that were created with older versions of Visual Studio, without upgrading them to use a new version of the toolset. You do need to have the older toolsets installed on your computer. For more information, see [How to use native multi-targeting in Visual Studio](../porting/use-native-multi-targeting.md). For example, in Visual Studio 2015, you can *target* .NET Framework 2.0 but you must use an earlier toolset that supports it.

## Target framework (C++/CLI project only)

When you change the target Framework, also change the platform toolset to a version that supports that Framework. For example, to target the .NET Framework 4.5, you must use a compatible platform toolset such as Visual Studio 2015 (v140), Visual Studio 2013 (v120) or Visual Studio 2012 (v110). You can use the [Windows 7.1 SDK](https://www.microsoft.com/download/details.aspx?id=8279) platform toolset to target the .NET Framework 2.0, 3.0, 3.5, and 4, and the x86/x64 platforms.

You can extend the target platform further by creating a custom platform toolset. For more information, see [C++ Native Multi-Targeting](https://devblogs.microsoft.com/cppblog/c-native-multi-targeting/) on the Visual C++ blog.

### To change the target Framework

1. In Visual Studio, in **Solution Explorer**, select your project. On the menu bar, open the **Project** menu and choose **Unload project**. This unloads the project (.vcxproj) file for your project.

   > [!NOTE]
   >  A C++ project cannot be loaded while the project file is being modified in Visual Studio. However, you can use another editor such as Notepad to modify the project file while the project is loaded in Visual Studio. Visual Studio will detect that the project file has changed and prompt you to reload the project.

1. On the menu bar, select **File**, **Open**, **File**. In the **Open File** dialog box, navigate to your project folder, and then open the project (.vcxproj) file.

1. In the project file, locate the entry for the target Framework version. For example, if your project is designed to use the .NET Framework 4.5, locate `<TargetFrameworkVersion>v4.5</TargetFrameworkVersion>` in the `<PropertyGroup Label="Globals">` element of the `<Project>` element. If the `<TargetFrameworkVersion>` element isn't present, your project doesn't use the .NET Framework and no change is required.

1. Change the value to the Framework version you want, such as v3.5 or v4.6.

1. Save the changes and close the editor.

1. In **Solution Explorer**, open the shortcut menu for your project and then choose **Reload Project**.

1. To verify the change, in **Solution Explorer**, right-click to open the shortcut menu for your project (not for your solution) and then choose **Properties** to open your project **Property Pages** dialog box. In the left pane of the dialog box, expand **Configuration Properties** and then select **General**. Verify that **.NET Target Framework Version** shows the new Framework version.

### To change the platform toolset

1. In Visual Studio, in **Solution Explorer**, open the shortcut menu for your project (not for your solution) and then choose **Properties** to open your project **Property Pages** dialog box.

1. In the **Property Pages** dialog box, open the **Configuration** drop-down list and then select **All Configurations**.

1. In the left pane of the dialog box, expand **Configuration Properties** and then select **General**.

1. In the right pane, select **Platform Toolset** and then select the toolset you want from the drop-down list. For example, if you have installed the Visual Studio 2010 toolset, select **Visual Studio 2010 (v100)** to use it for your project.

1. Choose the **OK** button.

## See also

[MSBuild on the command line - C++](msbuild-visual-cpp.md)
