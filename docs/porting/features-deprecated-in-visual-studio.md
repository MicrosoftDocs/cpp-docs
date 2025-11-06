---
description: "Learn more about: C++ features deprecated or removed from Visual Studio"
title: "C++ features deprecated or removed from Visual Studio"
ms.date: 10/29/2025
helpviewer_keywords: ["Features deprecated or removed from Visual Studio"]
---
# C++ features deprecated or removed from Visual Studio

This article is a non-exhaustive list of C++ features deprecated or removed from Visual Studio 2019 and later. For information on breaking changes and conformance improvements for C++ in the latest version of Visual Studio, see [C++ conformance improvements in Visual Studio](../overview/cpp-conformance-improvements.md).

## Visual Studio 2019

### Support for Windows XP development

Visual Studio 2019 and later versions don't include current build tools support for creating code for Windows XP. Support for Windows XP development by using the v141_xp build tools that shipped in Visual Studio 2017 is still available as an optional component in the Visual Studio Installer. For information on how to install the v141_xp Windows XP platform toolset, see [Configuring programs for Windows XP](../build/configuring-programs-for-windows-xp.md).

## Visual Studio 2022

### Support for project upgrade from Visual C++ 6

Visual Studio 2022 and later versions don't support upgrades from Visual C++ 6 Workspace (*`.dsw`*) and Project (*`.dsp`*) files. Visual Studio no longer registers the *`.dsw`* and *`.dsp`* file extensions as Visual Studio file types. To upgrade a project with these extensions, first use Visual Studio 2019 to upgrade the project to modern Solution (*`.sln`*) and C++ Project (*`.vcxproj`*) files. Then use the current version of Visual Studio to upgrade the project again.

## Visual Studio 2026

### Support for C++AMP, ARM32 toolchain, and /DEBUG:FASTLINK

Visual Studio 2026 and later versions don't support C++AMP, the ARM32 toolchain, and /DEBUG:FASTLINK. If you're utilizing `/DEBUG:FASTLINK`, it's recommended to switch to [`/DEBUG:FULL`](https://learn.microsoft.com/cpp/build/reference/debug-generate-debug-info) for improved debugging support. Developers needing to target ARM32 can continue using the Visual Studio 2022 v143 build tools as detailed in this [Microsoft blog post](https://devblogs.microsoft.com/cppblog/side-by-side-minor-version-msvc-toolsets-in-visual-studio-2019/).

### Deprecation of `/await`

The MSVC compiler switch `/await` is being deprecated and will be removed in a future release. This switch enabled an early draft implementation of C++ coroutines using the `<experimental/coroutine>` header. Developers should transition to standard C++ coroutines by using the `<coroutine>` header available in C++20 and later. For C++14/17 projects, use `/await:strict` (which isn't being deprecated) to access the standard `<coroutine>` header without enabling other C++20 features.

### Support for Windows 7, 8, and 8.1 for Microsoft C++ Build Tools

In Visual Studio 2026, the Microsoft C++ (MSVC) Build Tools have updated their minimum supported operating systems. With this release, the Build Tools no longer support targeting:

- Windows 7 / Windows Server 2008 R2  
- Windows 8 / Windows Server 2012  
- Windows 8.1 / Windows Server 2012 R2  

To build applications using the latest C++ tools, your target platform must be **Windows 10** or **Windows Server 2016** (or later).

These changes allow for better performance, enhanced security, and alignment with the most recent Windows platform capabilities.

### Support for Mobile development with C++ workload

The Mobile development with C++ workload for iOS and Android targeting in the Visual Studio installer is no longer being supported and will be removed in a future Visual Studio update. This includes new projects, building, and debugging.

### Support for Embedded and IoT tools

The Embedded and IoT tools component in the Visual Studio installer is no longer being supported and will be removed in a future Visual Studio update. This includes the RTOS Viewer, Serial Monitor, Peripheral Viewer, and ST Project Import.
