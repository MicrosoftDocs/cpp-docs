---
title: "Latest Supported Visual C++ Redistributable Downloads"
description: "This article lists the download links for the latest versions of Visual C++ Redistributable packages."
ms.date: 09/09/2021
helpviewer_keywords:
  [
    "redist",
    "vcredist",
    "Visual [C++] redistributable",
    "Visual [C++] downloads",
    "MSVC downloads",
    "[C++] downloads",
  ]
ms.assetid: 3017a6b3-67d8-465f-9b23-ed0d54559478
---

# Microsoft Visual C++ Redistributable Latest Supported Downloads

> [!NOTE]
> Some of the downloads that are mentioned in this article are currently available on [My.VisualStudio.com](https://my.visualstudio.com/). Make sure to log in by using a Visual Studio Subscription account so that you can access the download links.
> If you are asked for credentials, use your existing Visual Studio subscription account or create a free account by selecting ["Create a new Microsoft account."](https://login.microsoftonline.com/common/oauth2/authorize?client_id=499b84ac-1321-427f-aa17-267ca6975798&site_id=501454&response_mode=form_post&response_type=code+id_token&redirect_uri=https%3A%2F%2Fapp.vssps.visualstudio.com%2F_signedin&nonce=95942429-1297-4a7b-ab5c-0d6fcce90df4&state=realm%3Dmy.visualstudio.com%26reply_to%3Dhttps%253A%252F%252Fmy.visualstudio.com%252FDownloads%253Fpid%253D2082%26ht%3D3%26nonce%3D95942429-1297-4a7b-ab5c-0d6fcce90df4&resource=https%3A%2F%2Fmanagement.core.windows.net%2F&cid=95942429-1297-4a7b-ab5c-0d6fcce90df4&wsucxt=1)

The Microsoft Visual C++ Redistributable installs the Microsoft C++ libraries. If your application uses those libraries, a Microsoft Visual C++ Redistributable package matching your application's architecture and version (or higher) must be installed on the target system before you install your application.

For details on how to install and redistribute Visual Studio components, please see [Redistributing Visual C++ Files](redistributing-visual-cpp-files.md)

## Visual Studio 2015, 2017, and 2019

Below are the latest supported English (en-US) Microsoft Visual C++ Redistributable packages for Visual Studio 2015-2022. The latest supported version has the most recent implemented C++ features, security, reliability and performance improvements. It also includes the latest C++ standard language and library standards conformance updates. We recommend installing this version for all applications created using Visual Studio 2015, 2017, 2019 or 2022

Download additional languages and versions, including for long term servicing release channels (LTSC), from [My.VisualStudio.com](https://my.visualstudio.com/)

| Architecture |                                                 Link                                                 |                                                                                                                                                                                                                                      Notes |
| ------------ | :--------------------------------------------------------------------------------------------------: | -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------: |
| ARM64        | [https://aka.ms/vs/16/release/vc_redist.arm64.exe](https://aka.ms/vs/16/release/vc_redist.arm64.exe) |                                                                                                                                                                                               Permalink for latest supported ARM64 version |
| X86          |   [https://aka.ms/vs/16/release/vc_redist.x86.exe](https://aka.ms/vs/16/release/vc_redist.x86.exe)   |                                                                                                                                                                                                 Permalink for latest supported x86 version |
| X64          |   [https://aka.ms/vs/16/release/vc_redist.x64.exe](https://aka.ms/vs/16/release/vc_redist.x64.exe)   | Permalink for latest supported x64 version. To facilitate installing required Visual C++ ARM64 binaries when the X64 redistributable is installed on an ARM64 device, the X64 redistributable package contains both ARM64 and X64 binaries |

### Notes

- Visual Studio 2015, 2017 and 2019 share the same redistributable files. For example, the Microsoft Visual C++ 2019 redistributable is used by C++ programs built with the Visual Studio 2015, 2017, or 2019 toolsets. However, the version of the Microsoft Visual C++ redistributable installed on the machine must be the same or higher than the version of the Visual C++ toolset used to create your application. Please see [Determining Which DLLs to Redistribute](determining-which-dlls-to-redistribute.md) for more information about which version you need.
- **Windows XP Support**: Microsoft ended support for Windows XP on April 8, 2014. While the current version of the C++ Redistributable for Visual Studio 2015-2019 only supports Windows Vista, 7, 8.1, 10, and 11, older versions of the C++ Redistributable 2015-2019 can be installed on Windows XP. The last version of the C++ Redistributable for Visual Studio 2015-2019 that works on Windows XP is v14.24.28127.4. Download from [My.VisualStudio.com](https://my.visualstudio.com/) or directly using the following link corresponding to your architecture: [vc_redist.86.exe](https://download.visualstudio.microsoft.com/download/pr/bc2490f7-3f8e-4a5d-a61e-12b6d331713e/E59AE3E886BD4571A811FE31A47959AE5C40D87C583F786816C60440252CD7EC/VC_redist.x86.exe) or [vc_redist.x64.exe](https://download.visualstudio.microsoft.com/download/pr/3b070396-b7fb-4eee-aa8b-102a23c3e4f4/40EA2955391C9EAE3E35619C4C24B5AAF3D17AEAA6D09424EE9672AA9372AEED/VC_redist.x64.exe)

## Visual Studio 2013 (VC++ 12.0)

Below are the latest supported en-US Microsoft Visual C++ Redistributable packages for Visual Studio 2013.
Downloaded additional versions and languages from [Update for Visual C++ 2013 Redistributable Package](https://support.microsoft.com/en-us/topic/update-for-visual-c-2013-redistributable-package-d8ccd6a5-4e26-c290-517b-8da6cfdf4f10) or from [My.VisualStudio.com](https://my.visualstudio.com/).

| Architecture |   Version    |                                                    Link |
| ------------ | :----------: | ------------------------------------------------------: |
| X86          | 12.0.40664.0 | [vcredist_x86.exe](https://aka.ms/highdpimfc2013x86enu) |
| X64          | 12.0.40664.0 | [vcredist_x64.exe](https://aka.ms/highdpimfc2013x64enu) |

### Other versions

- [Multibyte MFC Library for Visual Studio 2013](https://my.visualstudio.com/Downloads?pid=1430). This add-on for Visual Studio 2013 contains the multibyte character set (MBCS) version of the Microsoft Foundation Class (MFC) Library.
- [Visual C++ 2013 Runtime for Sideloaded Windows 8.1 apps](https://download.microsoft.com/download/5/f/0/5f0f8404-9329-44a9-8176-ed6f7f746f25/vclibs_redist_packages.zip). For more information, see [C++ Runtime for Sideloaded Windows 8.1 apps] on the [VC++ Team Blog](https://devblogs.microsoft.com/cppblog/c-runtime-for-sideloaded-windows-8-1-apps/).

## Visual Studio 2012 (VC++ 11.0) Update 4

Below are the latest supported en-US Microsoft Visual C++ Redistributable packages for Visual Studio 2012 Update 4.
Download additional versions and languages from [Microsoft Visual C++ Redistributable Packages for Visual Studio 2012 Update 4](https://www.microsoft.com/en-us/download/details.aspx?id=30679) or from [My.VisualStudio.com](https://my.visualstudio.com/Downloads?pid=1452).

| Architecture |   Version    |                                                                                                                                                                                       Link |
| ------------ | :----------: | -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------: |
| X86          | 11.0.61030.0 | [en_visual_cpp_redistributable_for_visual_studio_2012_update_4_x86_3161523.exe](https://download.microsoft.com/download/1/6/B/16B06F60-3B20-4FF2-B699-5E9B7962F9AE/VSU_4/vcredist_x86.exe) |
| X64          | 11.0.61030.0 | [en_visual_cpp_redistributable_for_visual_studio_2012_update_4_x64_3161523.exe](https://download.microsoft.com/download/1/6/B/16B06F60-3B20-4FF2-B699-5E9B7962F9AE/VSU_4/vcredist_x64.exe) |

## Visual Studio 2010 (VC++ 10.0) SP1 (no longer supported)

> [!NOTE] 
> Visual Studio 2010 Service Pack 1 [reached end of extended support on July 14, 2020](/lifecycle/products/visual-studio-2010)

| Architecture |   Version    |                                                                                                                    Link |
| ------------ | :----------: | ----------------------------------------------------------------------------------------------------------------------: |
| X86          | 10.0.40219.1 | [vcredist_x86.exe](https://download.microsoft.com/download/C/6/D/C6D0FD4E-9E53-4897-9B91-836EBA2AACD3/vcredist_x86.exe) |
| X64          | 10.0.40219.1 | [vcredist_x64.exe](https://download.microsoft.com/download/A/8/0/A80747C3-41BD-45DF-B505-E9710D2744E0/vcredist_x64.exe) |

Download additional languages from:

- [Microsoft Visual C++ 2010 SP1 Redistributable Package (x86)](https://www.microsoft.com/en-us/download/details.aspx?id=8328)
- [Microsoft Visual C++ 2010 SP1 Redistributable Package (x64)](https://www.microsoft.com/en-us/download/details.aspx?id=13523)

## Visual Studio 2008 (VC++ 9.0) SP1 (no longer supported)

> [!NOTE]
> Visual Studio 2008 Service Pack 1 [reached end of extended support on April 10, 2018](/lifecycle/products/visual-studio-2008)

| Architecture |    Version     |                                                                                                                    Link |
| ------------ | :------------: | ----------------------------------------------------------------------------------------------------------------------: |
| X86          | 9.0.30729.5677 | [vcredist_x86.exe](https://download.microsoft.com/download/5/D/8/5D8C65CB-C849-4025-8E95-C3966CAFD8AE/vcredist_x86.exe) |
| X64          | 9.0.30729.5677 | [vcredist_x64.exe](https://download.microsoft.com/download/5/D/8/5D8C65CB-C849-4025-8E95-C3966CAFD8AE/vcredist_x64.exe) |

Download additional languages and architectures from:

- [Microsoft Visual C++ 2008 Service Pack 1 Redistributable Package MFC Security Update](https://www.microsoft.com/en-us/download/details.aspx?id=26368)
