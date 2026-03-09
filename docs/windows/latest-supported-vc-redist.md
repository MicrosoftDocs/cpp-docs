---
title: Latest Supported Visual C++ Redistributable Downloads
description: This article provides download links for the latest Visual C++ Redistributable packages.
ms.date: 12/03/2025
helpviewer_keywords:
  [
    "redist",
    "vcredist",
    "Visual [C++] redistributable",
    "Visual [C++] downloads",
    "MSVC downloads",
    "[C++] downloads"
  ]
author: MahmoudGSaleh
ms.author: msaleh
---

# Microsoft Visual C++ Redistributable latest supported downloads

> [!NOTE]
> Are you here to download Visual Studio? Go to [Visual Studio downloads](https://visualstudio.microsoft.com/downloads/).

This article is for developers who need to install the Visual C++ Runtime libraries with their app. If you're trying to fix an app by updating the Visual C++ Runtime libraries, contact the app vendor for instructions.

To find the download you need, choose your version of Visual Studio from the following table. Each link takes you to the appropriate download section.

| Version | Section |
|--|--|
| Latest supported v14 (for Visual Studio 2017–2026) | [Latest supported Redistributable version](#latest-supported-redistributable-version) |
| Visual Studio 2015 | [Visual Studio 2015 (VC++ 14.0)](#visual-studio-2015-vc-140-no-longer-supported) |
| Visual Studio 2013 | [Visual Studio 2013 (VC++ 12.0)](#visual-studio-2013-vc-120-no-longer-supported) |
| Visual Studio 2012 | [Visual Studio 2012 (VC++ 11.0)](#visual-studio-2012-vc-110-update-4-no-longer-supported) |
| Visual Studio 2010 | [Visual Studio 2010 (VC++ 10.0)](#visual-studio-2010-vc-100-sp1-no-longer-supported) |
| Visual Studio 2008 | [Visual Studio 2008 (VC++ 9.0)](#visual-studio-2008-vc-90-sp1-no-longer-supported) |
| Visual Studio 2005 | [Visual Studio 2005 (VC++ 8.0)](#visual-studio-2005-vc-80-sp1-no-longer-supported) |

> [!TIP]
> Are you having issues installing the Visual C++ Redistributable? Refer to the [Troubleshooting Guide](troubleshoot-vc-redistributable-installation-issues.md).

Redistribution is permitted only for licensed Visual Studio users, as described in the [Visual Studio license terms](https://visualstudio.microsoft.com/license-terms/). For details on redistributing Visual C++ files, see [Redistribute Visual C++ files](redistributing-visual-cpp-files.md).

A Visual C++ Redistributable installs Microsoft C and C++ Runtime libraries. Many applications built by using Microsoft Visual C++ (MSVC) Build Tools require these libraries. If your app is built by using those libraries, a Microsoft Visual C++ Redistributable package at least as recent as the build tools used to build your app must be installed on the target system along with the app.

The redistributable package architecture must match your app's target architecture. (You can't install an ARM64 Redistributable on an x86 system or an x64 Redistributable on an x86 system, for example.) We recommend that you use the latest Redistributable available for your version of Visual Studio.

## Visual C++ v14 Redistributable

The following table lists the latest supported Microsoft Visual C++ v14 Redistributable packages. The latest supported version has the most recently implemented C++ features, security, reliability, and performance improvements. It also includes the latest C++ standard language and library standards conformance updates. We recommend that you install this version for all applications created by using MSVC Build Tools available in Visual Studio 2017, 2019, 2022, or 2026.

Unlike older versions of Visual Studio that have infrequent redistributable updates, the version number isn't listed in the following table for the Visual C++ v14 Redistributable because it's updated frequently. To find the version number of the latest redistributable, download the one you're interested in by using one of the following links. Then, look at its properties by using Windows File Explorer. On the **Details** pane, **File version** contains the version of the redistributable.

### Latest supported redistributable version

| Architecture | Link | Notes |
|--|--|--|
| ARM64 | [https://aka.ms/vc14/vc_redist.arm64.exe](https://aka.ms/vc14/vc_redist.arm64.exe) | Permalink for latest supported ARM64 version. |
| X86 | [https://aka.ms/vc14/vc_redist.x86.exe](https://aka.ms/vc14/vc_redist.x86.exe) | Permalink for latest supported x86 version. |
| X64 | [https://aka.ms/vc14/vc_redist.x64.exe](https://aka.ms/vc14/vc_redist.x64.exe) | Permalink for latest supported x64 version. The X64 Redistributable package contains both ARM64 and X64 binaries. This package makes it easy to install required Visual C++ ARM64 binaries when the X64 Redistributable is installed on an ARM64 device. |

Download other versions, including long-term servicing channel (LTSC) versions, from [Welcome to Dev Essentials](https://my.visualstudio.com/).

### Notes

- Some of the downloads that are mentioned in this article are currently available on [Welcome to Dev Essentials](https://my.visualstudio.com/). Sign in by using a Visual Studio subscription account so that you can access the download links. If you're asked for credentials, use your existing Visual Studio subscription account. Or to create a free account. select [No account? Create one!](https://my.visualstudio.com/).
- The Visual C++ v14 Redistributable doesn't have separate packages for different languages. License terms for different languages are available at [Microsoft Software License Terms](https://aka.ms/VCRedistLicense).
- Visual Studio 2017 and later share the same redistributable files. Any apps built by MSVC Build Tools v14.* available in Visual Studio 2017, 2019, 2022, or 2026 can use the latest Visual C++ v14 Redistributable.

   The version of the Redistributable installed on the machine must be the same or later than the version of the MSVC Build Tools used to create your application. For more information about which version of the redistributable to install, see [Determine which dynamic-link libraries (DLLs) to redistribute](determining-which-dlls-to-redistribute.md). For more information about binary compatibility, see [C++ binary compatibility between Visual Studio versions](../porting/binary-compat-2015-2017.md).
- The latest version of the Visual C++ v14 Redistributable included with Visual Studio 2026 supports only the following operating systems:
  * Windows 10 and 11
  * Windows Server 2016, 2019, 2022, and 2025
- Support for Visual Studio 2015 ended on October 15, 2025. Because support for the Visual C++ Redistributable is connected to the version of Visual Studio in which it first ships, support for Visual C++ 2015 Redistributable (version 14.0.24212) also ended October 15, 2025. For the latest available version, see the [Visual Studio 2015 (Visual C++ 14.0)](#visual-studio-2015-vc-140-no-longer-supported) section.<br/>

   When Visual Studio 2015 support ended, the v14 Runtime was binary compatible with applications built by using the Visual Studio 2015 MSVC Build Tools. Because Visual Studio 2015 is no longer supported, we recommend that you update your projects to use a supported MSVC Build Tools version and the latest v14 Runtime, the Visual C++ Redistributable for 2017, and later, and perform an in-place upgrade to the Visual C++ 2015 Redistributable (14.0.24212.0). Redistributables for 2013 and earlier remain installed side by side.

- The Visual C++ Redistributable supports several command-line options. For more information, see [Command-line options for the Redistributable packages](./redistributing-visual-cpp-files.md#command-line-options-for-the-redistributable-packages).

## Unsupported legacy versions

### Visual Studio 2015 (VC++ 14.0) (no longer supported)

To download the latest available version of Visual C++ Redistributable for Visual Studio 2015, see the [Welcome to Dev Essentials](https://my.visualstudio.com/) page. On the **Downloads** tab, search for **Visual C++ Redistributable for Visual Studio 2015**.

The latest version of Visual C++ Redistributable for Visual Studio 2015 is `14.0.24212.0` and is available for ARM64, X86, and X64 architectures.

### Visual Studio 2013 (VC++ 12.0) (no longer supported)

These links download the latest available en-US Microsoft Visual C++ Redistributable packages for Visual Studio 2013.
You can download other versions and languages from [Update for Visual C++ 2013 Redistributable package](https://support.microsoft.com/topic/update-for-visual-c-2013-redistributable-package-d8ccd6a5-4e26-c290-517b-8da6cfdf4f10) or from the [Welcome to Dev Essentials](https://my.visualstudio.com/) page.

| Architecture |   Version    | Link |
| ------------ | :----------: | ------------------------------------------------------: |
| X86          | 12.0.40664.0 | [vcredist_x86.exe](https://aka.ms/highdpimfc2013x86enu) |
| X64          | 12.0.40664.0 | [vcredist_x64.exe](https://aka.ms/highdpimfc2013x64enu) |

### Other 2013 versions

- [Multibyte Microsoft Foundation Class (MFC) Library for Visual Studio 2013](https://my.visualstudio.com/Downloads?pid=1430). This MFC add-on for Visual Studio 2013 contains the multibyte character set (MBCS) version of the MFC Library.
- [Visual C++ 2013 Runtime for sideloaded Windows 8.1 apps](https://download.microsoft.com/download/5/f/0/5f0f8404-9329-44a9-8176-ed6f7f746f25/vclibs_redist_packages.zip). For more information, see [C++ Runtime for sideloaded Windows 8.1 apps](https://devblogs.microsoft.com/cppblog/c-runtime-for-sideloaded-windows-8-1-apps/) on the C++ Team Blog.

### Visual Studio 2012 (VC++ 11.0) Update 4 (no longer supported)

> [!NOTE]
> Visual Studio 2012 [reached the end of extended support on January 10, 2023](/lifecycle/products/visual-studio-2012).

These links download the latest available en-US Microsoft Visual C++ Redistributable packages for Visual Studio 2012 Update 4. You can download other versions and languages from [Microsoft Visual C++ Redistributable packages for Visual Studio 2012 Update 4](https://www.microsoft.com/download/details.aspx?id=30679) or from the [Visual Studio Subscriptions](https://my.visualstudio.com/Downloads?pid=1452) website.

| Architecture | Version | Link |
|--|:-:|-:|
| X86 | 11.0.61030.0 | [en_visual_cpp_redistributable_for_visual_studio_2012_update_4_x86_3161523.exe](https://download.microsoft.com/download/1/6/B/16B06F60-3B20-4FF2-B699-5E9B7962F9AE/VSU_4/vcredist_x86.exe) |
| X64 | 11.0.61030.0 | [en_visual_cpp_redistributable_for_visual_studio_2012_update_4_x64_3161523.exe](https://download.microsoft.com/download/1/6/B/16B06F60-3B20-4FF2-B699-5E9B7962F9AE/VSU_4/vcredist_x64.exe) |

### Visual Studio 2010 (VC++ 10.0) SP1 (no longer supported)

> [!NOTE]
> Visual Studio 2010 Service Pack 1 [reached the end of extended support on July 14, 2020](/lifecycle/products/visual-studio-2010).

| Architecture | Version | Link |
|--|:-:|-:|
| X86 | 10.0.40219.325 | [vcredist_x86.exe](https://download.microsoft.com/download/1/6/5/165255E7-1014-4D0A-B094-B6A430A6BFFC/vcredist_x86.exe) |
| X64 | 10.0.40219.325 | [vcredist_x64.exe](https://download.microsoft.com/download/1/6/5/165255E7-1014-4D0A-B094-B6A430A6BFFC/vcredist_x64.exe) |

Download redistributable files for other languages and architectures from [Microsoft Visual C++ 2010 SP1 Redistributable package MFC Security Update](https://www.microsoft.com/download/details.aspx?id=26999).

### Visual Studio 2008 (VC++ 9.0) SP1 (no longer supported)

> [!NOTE]
> Visual Studio 2008 Service Pack 1 [reached the end of extended support on April 10, 2018](/lifecycle/products/visual-studio-2008).

| Architecture | Version | Link |
|--|:-:|-:|
| X86 | 9.0.30729.5677 | [vcredist_x86.exe](https://download.microsoft.com/download/5/D/8/5D8C65CB-C849-4025-8E95-C3966CAFD8AE/vcredist_x86.exe) |
| X64 | 9.0.30729.5677 | [vcredist_x64.exe](https://download.microsoft.com/download/5/D/8/5D8C65CB-C849-4025-8E95-C3966CAFD8AE/vcredist_x64.exe) |

Download redistributable files for other languages and architectures from [Microsoft Visual C++ 2008 Service Pack 1 Redistributable package MFC Security Update](https://www.microsoft.com/download/details.aspx?id=26368).

### Visual Studio 2005 (VC++ 8.0) SP1 (no longer supported)

> [!NOTE]
> Visual Studio 2005 [reached the end of extended support on April 12, 2016](/lifecycle/products/microsoft-visual-studio-2005).

Redistributable files for X86, X64, and IA64 architectures are available from [Microsoft Visual C++ 2005 Service Pack 1 Redistributable package MFC Security Update](https://www.microsoft.com/download/details.aspx?id=26347).

## Related content

- [C++ binary compatibility between Visual Studio versions](../porting/binary-compat-2015-2017.md)
- [Audit Visual C++ Runtime version usage](redist-version-auditing.md)
- [Lifecycle FAQ: Visual C++ Redistributable and Runtime libraries](/lifecycle/faq/visual-c-faq)
- [Troubleshoot Visual C++ Redistributable installation issues](troubleshoot-vc-redistributable-installation-issues.md)

### Release notes

- [What's new for C++ in Visual Studio](../overview/what-s-new-for-visual-cpp-in-visual-studio.md)
- [Visual Studio 2026 release notes](/visualstudio/releases/2026/release-notes)
- [Visual C++ What's New 2003 through 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md)
- [Standard Template Library (STL) changelog](https://github.com/microsoft/STL/wiki/Changelog)
- [A year of C++ improvements](https://devblogs.microsoft.com/cppblog/a-year-of-cpp-improvements-in-visual-studio-vs-code-and-vcpkg)
- [Microsoft Visual C++ compiler versioning](../overview/compiler-versions.md)

### C++ conformance notes

- [C++ conformance improvements in Visual Studio](../overview/cpp-conformance-improvements.md)
- [C++ conformance improvements in Visual Studio 2019](../overview/cpp-conformance-improvements-2019.md)
- [C++ conformance improvements in Visual Studio 2017](../overview/cpp-conformance-improvements-2017.md)
- [Microsoft C/C++ language conformance by Visual Studio version](../overview/visual-cpp-language-conformance.md)
