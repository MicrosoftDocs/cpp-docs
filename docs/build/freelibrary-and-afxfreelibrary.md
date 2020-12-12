---
description: "Learn more about: FreeLibrary and AfxFreeLibrary"
title: "FreeLibrary and AfxFreeLibrary"
ms.date: "11/04/2016"
f1_keywords: ["FreeLibrary", "AfxFreeLibrary"]
helpviewer_keywords: ["extension DLLs [C++], unloading", "AfxFreeLibrary method", "unloading DLLs", "FreeLibrary method", "DLLs [C++], linking", "explicit linking [C++]", "DLLs [C++], unloading"]
ms.assetid: 4a48d290-3971-43e9-8e97-ba656cd0c8f8
---
# FreeLibrary and AfxFreeLibrary

Processes that explicitly link to a DLL call the [FreeLibrary](/windows/win32/api/libloaderapi/nf-libloaderapi-freelibrary) function when the DLL module is no longer needed. This function decrements the module's reference count. And, if the reference count is zero, it's unmapped from the address space of the process.

In an MFC application, use [AfxFreeLibrary](../mfc/reference/application-information-and-management.md#afxfreelibrary) instead of `FreeLibrary` to unload an MFC extension DLL. The interface (function prototype) for `AfxFreeLibrary` is the same as `FreeLibrary`.

## What do you want to do?

- [Link an executable to a DLL](linking-an-executable-to-a-dll.md#linking-implicitly)

- [Link an executable to a DLL](linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use)

## What do you want to know more about?

- [LoadLibrary and AfxLoadLibrary](loadlibrary-and-afxloadlibrary.md)

- [GetProcAddress](getprocaddress.md)

## See also

[Create C/C++ DLLs in Visual Studio](dlls-in-visual-cpp.md)\
[FreeLibrary](/windows/win32/api/libloaderapi/nf-libloaderapi-freelibrary)\
[AfxFreeLibrary](../mfc/reference/application-information-and-management.md#afxfreelibrary)
