---
title: "Windows Platforms (CRT) | Microsoft Docs"
ms.custom: ""
ms.date: "02/02/2018"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "conceptual"
f1_keywords: ["c.programs"]
dev_langs: ["C++"]
helpviewer_keywords: ["CRT, compatibility", "backward compatibility [C++], C run-time libraries", "compatibility [C++], C run-time libraries", "MBCS [C++], Win32 platforms", "operating systems [C++]", "Unicode [C++], Win32 platforms"]
ms.assetid: 0aacaf45-6dc4-4908-bd52-57abac7b39f6
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Windows Platforms (CRT)

The C run-time libraries for Visual Studio support current versions of Windows and Windows Server, [!INCLUDE[win8](../build/reference/includes/win8_md.md)], [!INCLUDE[winserver8](../build/reference/includes/winserver8_md.md)], [!INCLUDE[win7](../build/includes/win7_md.md)], [!INCLUDE[winsvr08](../build/reference/includes/winsvr08_md.md)], and Windows Vista, and optionally support [!INCLUDE[winxp](../build/includes/winxp_md.md)] Service Pack 3 (SP3) for x86, [!INCLUDE[winxp](../build/includes/winxp_md.md)] Service Pack 2 (SP2) for x64, and [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)] Service Pack 2 (SP2) for both x86 and x64. All of these operating systems support the Windows desktop API (Win32) and provide Unicode support. In addition, any Win32 application can use a multibyte character set (MBCS).

> [!NOTE]
> The default installation of the **Desktop development with C++** workload in Visual Studio 2017 does not include support for [!INCLUDE[winxp](../build/includes/winxp_md.md)] and [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)] development. You must install the optional component **Windows XP support for C++** to enable a Windows XP platform toolset.

## See also

[Compatibility](../c-runtime-library/compatibility.md)  
