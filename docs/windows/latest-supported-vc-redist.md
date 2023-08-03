---
title: "Latest supported Visual C++ Redistributable downloads"
description: "This article lists the download links for the latest versions of Visual C++ Redistributable packages."
ms.date: 08/02/2023
helpviewer_keywords:
  [
    "redist",
    "vcredist",
    "Visual [C++] redistributable",
    "Visual [C++] downloads",
    "MSVC downloads",
    "[C++] downloads",
  ]
author: MahmoudGSaleh
ms.author: msaleh
---

# Microsoft Visual C++ Redistributable latest supported downloads

The Visual C++ Redistributable installs Microsoft C and C++ (MSVC) runtime libraries. These libraries are required by many applications built by using Microsoft C and C++ tools. If your app uses those libraries, a Microsoft Visual C++ Redistributable package must be installed on the target system before you install your app. The Redistributable package architecture must match your app's target architecture. The Redistributable version must be at least as recent as the MSVC build toolset used to build your app. We recommend you use the latest Redistributable available for your version of Visual Studio, with some exceptions noted later in this article.

For details on how to install and redistribute Visual Studio components, see [Redistributing Visual C++ Files](redistributing-visual-cpp-files.md).

## Visual Studio 2015, 2017, 2019, and 2022

This table lists the latest supported English (en-US) Microsoft Visual C++ Redistributable packages for Visual Studio 2015, 2017, 2019, and 2022. The latest supported version has the most recently implemented C++ features, security, reliability, and performance improvements. It also includes the latest C++ standard language and library standards conformance updates. We recommend that you install this version for all applications created using Visual Studio 2015, 2017, 2019, or 2022.

Unlike older versions of Visual Studio, which have infrequent redist updates, the version number isn't listed in the following table for Visual Studio 2015-2022 because the redist is updated frequently. To find the version number of the latest redist, download the redist you're interested in using one of the following links. Then, look at its properties using Windows File Explorer. In the **Details** pane, the **File version** contains the version of the redist.

| Architecture | Link | Notes |
|--|:-:|-:|
| ARM64 | [https://aka.ms/vs/17/release/vc_redist.arm64.exe](https://aka.ms/vs/17/release/vc_redist.arm64.exe) | Permalink for latest supported ARM64 version |
| X86 | [https://aka.ms/vs/17/release/vc_redist.x86.exe](https://aka.ms/vs/17/release/vc_redist.x86.exe) | Permalink for latest supported x86 version |
| X64 | [https://aka.ms/vs/17/release/vc_redist.x64.exe](https://aka.ms/vs/17/release/vc_redist.x64.exe) | Permalink for latest supported x64 version. The X64 Redistributable package contains both ARM64 and X64 binaries. This package makes it easy to install required Visual C++ ARM64 binaries when the X64 Redistributable is installed on an ARM64 device. |

Download other versions, including long term servicing release channel (LTSC) versions, from [my.visualstudio.com](https://my.visualstudio.com/).

### Notes

- The Visual C++ Redistributable for Visual Studio 2015-2022 doesn't have separate packages for different languages. It contains EULAs for all supported languages.

-  Some of the downloads that are mentioned in this article are currently available on [my.visualstudio.com](https://my.visualstudio.com/). Log in using a Visual Studio Subscription account so that you can access the download links. If you're asked for credentials, use your existing Visual Studio subscription account. Or, create a free account by choosing the **No account? Create one!** link.

- Visual Studio versions since Visual Studio 2015 share the same Redistributable files. For example, any apps built by the Visual Studio 2015, 2017, 2019, or 2022 toolsets can use the latest Microsoft Visual C++ Redistributable. However, the version of the Microsoft Visual C++ Redistributable installed on the machine must be the same or higher than the version of the Visual C++ toolset used to create your application. For more information about which version of the Redistributable to install, see [Determining which DLLs to redistribute](determining-which-dlls-to-redistribute.md). For more information about binary compatibility, see [C++ binary compatibility between Visual Studio versions](../porting/binary-compat-2015-2017.md).

- **Windows XP Support**: Microsoft ended support for Windows XP on April 8, 2014. Current versions of the Visual C++ Redistributable for Visual Studio 2015-2022 only support Windows Vista, 7, 8.1, 10, and 11. The last version of the Visual C++ Redistributable that works on Windows XP shipped in Visual Studio 2019 version 16.7 (file versions starting with **14.27**). The Redistributable is available in the [my.visualstudio.com Downloads](https://my.visualstudio.com/Downloads/) section as **Visual C++ Redistributable for Visual Studio 2019 (version 16.7)**. Use the Search box to find this version. To download the files, select the platform and language you need, and then choose the **Download** button.

- The Visual C++ Redistributable supports several command-line options. For more information, see [Command-line options for the Redistributable packages](./redistributing-visual-cpp-files.md#command-line-options-for-the-redistributable-packages).

## Visual Studio 2013 (VC++ 12.0)

These links download the latest supported en-US Microsoft Visual C++ Redistributable packages for Visual Studio 2013.
You can download other versions and languages from [Update for Visual C++ 2013 Redistributable Package](https://support.microsoft.com/topic/update-for-visual-c-2013-redistributable-package-d8ccd6a5-4e26-c290-517b-8da6cfdf4f10) or from [my.visualstudio.com](https://my.visualstudio.com/).

| Architecture |   Version    |                                                    Link |
| ------------ | :----------: | ------------------------------------------------------: |
| X86          | 12.0.40664.0 | [vcredist_x86.exe](https://aka.ms/highdpimfc2013x86enu) |
| X64          | 12.0.40664.0 | [vcredist_x64.exe](https://aka.ms/highdpimfc2013x64enu) |

### Other versions

- [Multibyte MFC Library for Visual Studio 2013](https://my.visualstudio.com/Downloads?pid=1430). This MFC add-on for Visual Studio 2013 contains the multibyte character set (MBCS) version of the Microsoft Foundation Class (MFC) Library.
- [Visual C++ 2013 Runtime for Sideloaded Windows 8.1 apps](https://download.microsoft.com/download/5/f/0/5f0f8404-9329-44a9-8176-ed6f7f746f25/vclibs_redist_packages.zip). For more information, see [C++ Runtime for Sideloaded Windows 8.1 apps](https://devblogs.microsoft.com/cppblog/c-runtime-for-sideloaded-windows-8-1-apps/) on the C++ Team Blog.

## Visual Studio 2012 (VC++ 11.0) Update 4  (no longer supported)

> [!NOTE]
> Visual Studio 2012 [reached end of extended support on Jan 10, 2023](/lifecycle/products/visual-studio-2012)

These links download the latest available en-US Microsoft Visual C++ Redistributable packages for Visual Studio 2012 Update 4. You can download other versions and languages from [Microsoft Visual C++ Redistributable Packages for Visual Studio 2012 Update 4](https://www.microsoft.com/download/details.aspx?id=30679) or from [my.visualstudio.com](https://my.visualstudio.com/Downloads?pid=1452).

| Architecture | Version | Link |
|--|:-:|-:|
| X86 | 11.0.61030.0 | [en_visual_cpp_redistributable_for_visual_studio_2012_update_4_x86_3161523.exe](https://download.microsoft.com/download/1/6/B/16B06F60-3B20-4FF2-B699-5E9B7962F9AE/VSU_4/vcredist_x86.exe) |
| X64 | 11.0.61030.0 | [en_visual_cpp_redistributable_for_visual_studio_2012_update_4_x64_3161523.exe](https://download.microsoft.com/download/1/6/B/16B06F60-3B20-4FF2-B699-5E9B7962F9AE/VSU_4/vcredist_x64.exe) |

## Visual Studio 2010 (VC++ 10.0) SP1 (no longer supported)

> [!NOTE]
> Visual Studio 2010 Service Pack 1 [reached end of extended support on July 14, 2020](/lifecycle/products/visual-studio-2010)

| Architecture | Version | Link |
|--|:-:|-:|
| X86 | 10.0.40219.325 | [vcredist_x86.exe](https://download.microsoft.com/download/1/6/5/165255E7-1014-4D0A-B094-B6A430A6BFFC/vcredist_x86.exe) |
| X64 | 10.0.40219.325 | [vcredist_x64.exe](https://download.microsoft.com/download/1/6/5/165255E7-1014-4D0A-B094-B6A430A6BFFC/vcredist_x64.exe) |

Download Redistributable files for other languages and architectures from:

- [Microsoft Visual C++ 2010 SP1 Redistributable Package MFC Security Update](https://www.microsoft.com/download/details.aspx?id=26999)

## Visual Studio 2008 (VC++ 9.0) SP1 (no longer supported)

> [!NOTE]
> Visual Studio 2008 Service Pack 1 [reached end of extended support on April 10, 2018](/lifecycle/products/visual-studio-2008)

| Architecture | Version | Link |
|--|:-:|-:|
| X86 | 9.0.30729.5677 | [vcredist_x86.exe](https://download.microsoft.com/download/5/D/8/5D8C65CB-C849-4025-8E95-C3966CAFD8AE/vcredist_x86.exe) |
| X64 | 9.0.30729.5677 | [vcredist_x64.exe](https://download.microsoft.com/download/5/D/8/5D8C65CB-C849-4025-8E95-C3966CAFD8AE/vcredist_x64.exe) |

Download Redistributable files for other languages and architectures from:

- [Microsoft Visual C++ 2008 Service Pack 1 Redistributable Package MFC Security Update](https://www.microsoft.com/download/details.aspx?id=26368)

## Visual Studio 2005 (VC++ 8.0) SP1 (no longer supported)

> [!NOTE]
> Visual Studio 2005 [reached end of extended support on April 12, 2016](/lifecycle/products/microsoft-visual-studio-2005)

- Redistributable files for X86, X64, and IA64 architectures are available from [Microsoft Visual C++ 2005 Service Pack 1 Redistributable Package MFC Security Update](https://www.microsoft.com/download/details.aspx?id=26347).
