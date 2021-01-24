---
description: "Learn more about: Use native multi-targeting in Visual Studio to build old projects"
title: "Use native multi-targeting in Visual Studio to build old projects"
ms.date: "10/25/2019"
helpviewer_keywords: ["C++ native multi-targeting", "upgrading Visual C++ applications, retargeting"]
ms.assetid: b115aabe-a9dc-4525-90d3-367d97ea20c9
---
# Use native multi-targeting in Visual Studio to build old projects

Normally, we recommend that you update your projects when you install the latest version of Visual Studio. The cost of updating your projects and code is usually more than offset by the benefits of the new IDE, compiler, libraries, and tools. However, we know that you may not be able to update some projects. You may have binaries that are tied to older libraries or platforms that for maintenance reasons you can't upgrade. Your code may use non-standard language constructs that would break if you moved to a more recent compiler. Your code might rely on 3rd party libraries compiled for a specific version of Visual C++. Or you may produce libraries for others that must target a specific older version of Visual C++.

Fortunately, you can use Visual Studio 2017 and Visual Studio 2015 to build projects that target older compiler toolsets and libraries. You don't have to upgrade a Visual Studio 2010, Visual Studio 2012, Visual Studio 2013, or Visual Studio 2015 project to take advantage of new features in the IDE:

- New C++ refactoring capabilities and editor experimental features
- New Diagnostics tools debugger window and Error List window
- Revamped breakpoints, exceptions window and new PerfTips
- New code navigation and search tools
- New C++ Quick fixes and the Productivity Power Tools extensions.

You can also target Visual Studio 2008 projects, but they can't be used unchanged. For details, see the **Instructions for Visual Studio 2008** section.

The latest versions of Visual Studio support native multi-targeting and round-tripping of projects. Native multi-targeting is the ability of the latest IDE to build using toolsets installed by previous versions of Visual Studio. Round-tripping is the ability of the latest IDE to load projects created by a previous IDE version without making any changes to the project. If you install the latest version of Visual Studio side-by-side with your existing version, you can use the new version of the IDE with the compiler and tools from the existing version to build your projects. Other members of your team can continue to use the projects in the older version of Visual Studio.

When you use an older toolset, you can take advantage of many of the latest IDE features, but not the latest advances in the C++ compiler, libraries and build tools. For example, you won't be able to use the new language conformance improvements, new debugging and code analysis features, or get the faster build throughput of the latest toolset. There are also some IDE features that are incompatible with older toolsets. For example, type information may be missing in the Memory Profiler, and the refactoring operation **Convert to Raw string literals** generates C++11-compliant code that won't compile when you use Visual Studio 2012 or older toolsets.

## How to use native multi-targeting in Visual Studio

Once you have installed Visual Studio side-by-side with your older version, open your existing project in the new version of Visual Studio. When the project is loaded, Visual Studio asks you whether you want to upgrade it to use the latest C++ compiler and libraries. Since you want the project to keep the older compiler and libraries, choose the **Cancel** button.

Visual Studio is persistent about upgrading your project. To avoid seeing the upgrade dialog every time you load the project, you can define the following property in your projects, or in the .props or .targets files they import:

`<VCProjectUpgraderObjectName>NoUpgrade</VCProjectUpgraderObjectName>`

You must remove this property when you want to upgrade your projects.

If you choose not to upgrade, Visual Studio makes no changes to your solution or project files. When you build the project, the generated binaries are fully compatible with the ones you built with the older version of Visual Studio. This is because Visual Studio uses the same C++ compiler and links the same libraries that your older IDE shipped with. That is also why the upgrade dialog warns you to keep the older Visual Studio version installed if you choose **Cancel**.

## Instructions for Visual Studio 2008

Visual Studio 2008 had its own dedicated build system for C++ called **VCBuild**. Starting in Visual Studio 2010, Visual Studio C++ projects were changed to use **MSBuild**. This means that whether upgrading permanently or multi-targeting you must go through an update step to build your Visual Studio 2008 projects in the latest version of Visual Studio. Your updated project still generates binaries that are fully compatible with binaries created using the Visual Studio 2008 IDE.

First, in addition to the current version of Visual Studio, you must install Visual Studio 2010 on the same computer as Visual Studio 2008. Only Visual Studio 2010 installs the **MSBuild** scripts that are required to target Visual Studio 2008 projects.

Next, you must update your Visual Studio 2008 solution and projects to the current version of Visual Studio. We recommend you create a backup of your projects and solution files before the upgrade. To start the upgrade process, open the solution in the current version of Visual Studio. When you get the upgrade prompt, review the information presented, and then choose **OK** to start the upgrade. If you have more than one project in the solution, you must update The wizard creates new .vcxproj project files side-by-side with the existing .vcproj files. As long as you also have a copy of the original .sln file, the upgrade has no other impact on your existing Visual Studio 2008 projects.

> [!NOTE]
> The following steps apply to multi-targeting scenarios only. If you intend to permanently upgrade the project to a later toolset, then your next step is to save the project, open it in Visual Studio 2019, and address the build issues that appear there.

When the upgrade completes, if the log report has errors or warnings for any of your projects, review them carefully. The conversion from **VCBuild** to **MSBuild** can cause issues. Make sure you understand and implement any action items listed in the report. For more information on the upgrade log report and issues that may occur when converting **VCBuild** to **MSBuild**, see this [C++ Native Multi-Targeting](https://devblogs.microsoft.com/cppblog/c-native-multi-targeting/) blog post.

When the project upgrade is completed, and you have corrected any issues in the log file, your solution actually targets the latest toolset. As the final step, change the properties for each project in the solution to use the Visual Studio 2008 toolset. With the solution loaded in the current version of Visual Studio, for each project in the solution, open the Project **Property Pages** dialog box: Right-click on the project in **Solution Explorer** and then select **Properties**. In the **Property Pages** dialog box, change the **Configuration** drop-down value to **All Configurations**. In **Configuration Properties**, select **General**, and then change **Platform Toolset** to **Visual Studio 2008 (v90)**.

After this change, the Visual Studio 2008 compiler and libraries are used to generate project binaries when you build the solution in the current version of Visual Studio.

## Install an older Visual Studio toolset

You may have an old Visual Studio C++ project that you can't or don't want to upgrade, but not the platform toolset version that matches your project. In this case, to get the toolset, you can install the free Visual Studio Community or Express edition of the version you need. Every version of Visual Studio from Visual Studio 2008 on can install the compiler, tools, and libraries you need to target that version from the current Visual Studio. Search the Microsoft Download Center to find and download a particular version of Visual Studio. Make sure you choose the C++ installation options during setup. After setup completes, run that version of Visual Studio to install any updates. Also check for any Windows Update changes that might be required. This update check process may need to be repeated more than once to get every update.

For the currently available downloads, see [Download older Visual Studio software](https://visualstudio.microsoft.com/vs/older-downloads/).

When these products are installed, the **Platform Toolset** property drop-down in the **Property Pages** dialog box is automatically updated to show the available toolsets. You can now use the latest version of Visual Studio to build projects for those older versions of the toolset without converting or upgrading them.

## See also

[Upgrading projects from earlier versions of Visual C++](upgrading-projects-from-earlier-versions-of-visual-cpp.md)<br/>
[C++ conformance improvements in Visual Studio](../overview/cpp-conformance-improvements.md)
