---
description: "Learn more about: Supported Platforms (Visual C++)"
title: "Supported Platforms (Visual C++)"
ms.date: 10/22/2025
ms.service: "visual-cpp"
ms.subservice: "tools"
helpviewer_keywords: ["Visual C++, platforms supported", "platforms [C++]"]
---
# Supported platforms (Visual C++)

Apps built by using Visual Studio can be targeted to various platforms.

Support for targeting 32-bit ARM was permanently removed in VS 2026 18.0.

## Visual Studio target OS and architecture support

| Operating System | x86 | x64 | ARM64<sup>a</sup> |
|--|--|--|--|
| Windows XP <sup>b</sup> | X | X |  |
| Windows Vista<sup>c</sup> | X | X |  |
| Windows 7<sup>d</sup> | X | X |  |
| Windows 8<sup>d</sup> | X | X |  |
| Windows 8.1<sup>d</sup> | X | X |  |
| Windows 10 | X | X | X |
| Windows 11 | X | X | X |
| Windows Server 2003 <sup>b</sup> | X | X |  |
| Windows Server 2008<sup>d</sup> | X | X |  |
| Windows Server 2008 R2<sup>d</sup> | X | X |  |
| Windows Server 2012<sup>d</sup> | X | X |  |
| Windows Server 2012 R2<sup>d</sup> | X | X |  |
| Windows Server 2016 | X | X |  |
| Windows Server 2019 | X | X |  |
| Windows Server 2022 | X | X |  |
| Windows Server 2025 | X | X |  |
| Android <sup>e</sup> | X | X | X |
| iOS <sup>e</sup> |  |  | X |
| Linux <sup>f</sup> | X | X | X |

<sup>a</sup> ARM64 support is available in Visual Studio 2017 and later.

<sup>b</sup> Visual Studio no longer supports targeting Windows XP or Windows Server 2003. Use the Windows XP platform toolsets included in Visual Studio 2017, Visual Studio 2015, Visual Studio 2013, and Visual Studio 2012 Update 1 to build Windows XP and Windows Server 2003 projects.

<sup>c</sup> Visual Studio 2022 17.0 and later no longer support targeting Windows Vista or Windows Server 2008.

<sup>d</sup> Visual Studio 2026 18.0 and later no longer support targeting Windows 7/8/8.1 or Windows Server 2008 R2/2012/2012 R2. Visual Studio 2026 and later target Windows 10 or later and Windows Server 2016 or later.

<sup>e</sup> You can install the **Mobile development with C++** workload in the installer for Visual Studio 2017 and later. In Visual Studio 2015 setup, choose the optional **Visual C++ for Cross Platform Mobile Development** component to target iOS or Android platforms. For instructions, see [Install Visual C++ for Cross-Platform Mobile Development](/visualstudio/cross-platform/install-visual-cpp-for-cross-platform-mobile-development). To build iOS code, you must have a Mac computer and meet other requirements. For a list of prerequisites and installation instructions, see [Install And Configure Tools to Build using iOS](/visualstudio/cross-platform/install-and-configure-tools-to-build-using-ios). You can build x86 or ARM code to match the target hardware. Use x86 configurations to build for some Android devices. Use ARM configurations to build for iOS devices and most Android devices.

<sup>f</sup> You can install the **Linux development with C++** workload in the installer for Visual Studio 2017 and later to target Linux platforms. For instructions, see [Download, install, and setup the Linux Workload](../linux/download-install-and-setup-the-linux-development-workload.md). This toolset compiles your executable on the target machine, so you can build for any supported architecture.

For information about how to set the target platform configuration, see [How to: Configure Visual C++ projects to target 64-bit, x64 platforms](../build/how-to-configure-visual-cpp-projects-to-target-64-bit-platforms.md).

## See also

[Visual C++ tools and features in Visual Studio editions](visual-cpp-tools-and-features-in-visual-studio-editions.md)\
[Getting Started](/visualstudio/ide/getting-started-with-cpp-in-visual-studio)
