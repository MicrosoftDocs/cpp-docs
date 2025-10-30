---
description: "Learn more about: C++ features deprecated or removed in Visual Studio"
title: "C++ features deprecated or removed in Visual Studio"
ms.date: 10/29/2025
helpviewer_keywords: ["Features deprecated or removed in Visual Studio"]
---
# C++ features deprecated or removed in Visual Studio

This article is a non-exhaustive list of C++ features deprecated in Visual Studio 2019 and 2022. For information on breaking changes and conformance improvements for C++ in the latest version of Visual Studio, see [C++ conformance improvements in Visual Studio](../overview/cpp-conformance-improvements.md).

## Visual Studio 2019

### Support for Windows XP development

Visual Studio 2019 and later versions don't include current toolset support for creating code for Windows XP. Support for Windows XP development by using the v141_xp toolset that shipped in Visual Studio 2017 is still available as an optional component in the Visual Studio Installer. For information on how to install the v141_xp Windows XP platform toolset, see [Configuring programs for Windows XP](../build/configuring-programs-for-windows-xp.md).

## Visual Studio 2022

### Support for project upgrade from Visual C++ 6

Visual Studio 2022 and later versions don't support upgrades from Visual C++ 6 Workspace (*`.dsw`*) and Project (*`.dsp`*) files. Visual Studio no longer registers the *`.dsw`* and *`.dsp`* file extensions as Visual Studio file types. To upgrade a project with these extensions, first use Visual Studio 2019 to upgrade the project to modern Solution (*`.sln`*) and C++ Project (*`.vcxproj`*) files. Then use the current version of Visual Studio to upgrade the project again.

## Visual Studio 2026

### Support for C++AMP, ARM32 toolchain, and /DEBUG:FASTLINK

Visual Studio 2026 and later versions don't support C++AMP, the ARM32 toolchain, and /DEBUG:FASTLINK. If you're utilizing `/DEBUG:FASTLINK`, it's recommended to switch to [`/DEBUG:FULL`](https://learn.microsoft.com/cpp/build/reference/debug-generate-debug-info) for improved debugging support. Developers needing to target ARM32 can continue using the Visual Studio 2022 v143 build tools as detailed in this [Microsoft blog post](https://devblogs.microsoft.com/cppblog/side-by-side-minor-version-msvc-toolsets-in-visual-studio-2019/).

### Deprecation of /await

Visual Studio 2026 deprecated the `/await` switch, which will be removed in a future release. Developers are encouraged to use Standard C++ coroutines, available by default in C++20 or later. For projects in earlier language modes, consider using `/await:strict` to maintain compatibility until the switch is removed.

### Support for Windows 7, 8, and 8.1 for Microsoft C++ Build Tools

In Visual Studio 2026, the Microsoft C++ (MSVC) Build Tools have updated their minimum supported operating systems. With this release, the Build Tools no longer support targeting:

- Windows 7 / Windows Server 2008 R2  
- Windows 8 / Windows Server 2012  
- Windows 8.1 / Windows Server 2012 R2  

To build applications using the latest C++ tools, your target platform must be **Windows 10** or **Windows Server 2016** (or later).

These changes allow for better performance, enhanced security, and alignment with the most recent Windows platform capabilities.