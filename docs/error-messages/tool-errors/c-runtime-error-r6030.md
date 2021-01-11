---
description: "Learn more about: C Runtime Error R6030"
title: "C Runtime Error R6030"
ms.date: "11/04/2016"
f1_keywords: ["R6030"]
helpviewer_keywords: ["R6030"]
ms.assetid: 0238a6c3-a033-4046-8adc-f8f99d961153
---
# C Runtime Error R6030

CRT not initialized

> [!NOTE]
> If you encounter this error message while running an app, the app was shut down because it has an internal problem. This problem is most often caused by certain security software programs, or rarely, by a bug in the program.
>
> You can try these steps to fix this error:
>
> - Your security software may have specific instructions for mitigating this issue. Check your security software vendor's website for details. Alternatively, check for updated versions of your security software, or try different security software.
> - Use the **Apps and Features** or **Programs and Features** page in the **Control Panel** to repair or reinstall the program.
> - Check **Windows Update** in the **Control Panel** for software updates.
> - Check for an updated version of the app. Contact the app vendor if the problem persists.

**Information for Programmers**

This error occurs if you are using the C Runtime (CRT), but the CRT startup code was not executed. It is possible to get this error if the linker switch [/ENTRY](../../build/reference/entry-entry-point-symbol.md) is used to override the default starting address, usually **mainCRTStartup**, **wmainCRTStartup** for a console EXE, **WinMainCRTStartup** or **wWinMainCRTStartup** for a Windows EXE, or **_DllMainCRTStartup** for a DLL. Unless one of the above functions is called on startup, the C Runtime will not be initialized. These startup functions are ordinarily called by default when you link to the C runtime library and use the normal **main**, **wmain**, **WinMain**, or **DllMain** entry points.

It's also possible to get this error when another program uses code injection techniques to trap certain DLL library calls. Some intrusive security programs use this technique. In versions of Visual C++ before Visual Studio 2015, it's possible to use a statically-linked CRT library to address the issue, but this is not recommended for reasons of security and application updates. Correcting this issue may require end-user action.
