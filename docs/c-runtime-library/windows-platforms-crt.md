---
description: "Learn more about: Windows Platforms (CRT)"
title: "Windows Platforms (CRT)"
ms.date: "02/02/2018"
helpviewer_keywords: ["CRT, compatibility", "backward compatibility [C++], C run-time libraries", "compatibility [C++], C run-time libraries", "MBCS [C++], Win32 platforms", "operating systems [C++]", "Unicode [C++], Win32 platforms"]
ms.assetid: 0aacaf45-6dc4-4908-bd52-57abac7b39f6
---
# Windows platforms (CRT)

:::moniker range="msvc-140"

The C run-time libraries for Visual Studio support all versions of Windows and Windows Server that are still in extended support. Visual Studio 2015 supports Windows 8 and 8.1, Windows Server 2012, Windows 7, Windows Server 2008, and Windows Vista. It optionally supports Windows XP Service Pack 3 (SP3) for x86, Windows XP Service Pack 2 (SP2) for x64, and Windows Server 2003 Service Pack 2 (SP2) for both x86 and x64. All of these operating systems support the Windows desktop API (Win32) and provide Unicode support. In addition, any Win32 application can use a multibyte character set (MBCS).

:::moniker-end

:::moniker range=">=msvc-150"

The C run-time libraries for Visual Studio support all versions of Windows and Windows Server that are still in extended support. Libraries are available for x86, x64, and ARM64. All of these operating systems support the Windows desktop API (Win32) and provide Unicode support. In addition, any Win32 application can use a multibyte character set (MBCS).

:::moniker-end

:::moniker range="msvc-150"

> [!NOTE]
> The default installation of the **Desktop development with C++** workload in Visual Studio 2017 does not include support for Windows XP and Windows Server 2003 development. You must install the optional component **Windows XP support for C++** to enable a Windows XP platform toolset.

:::moniker-end

## See also

[Compatibility](./compatibility.md)
