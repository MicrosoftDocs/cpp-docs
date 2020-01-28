---
title: "LoadLibrary and AfxLoadLibrary"
description: "Using LoadLibrary and AfxLoadLibrary for explicit loading of DLLs in MSVC."
ms.date: "01/28/2020"
f1_keywords: ["LoadLibrary"]
helpviewer_keywords: ["DLLs [C++], AfxLoadLibrary", "DLLs [C++], LoadLibrary", "AfxLoadLibrary method", "LoadLibrary method", "explicit linking [C++]"]
ms.assetid: b4535d19-6243-4146-a31a-a5cca4c7c9e3
---
# LoadLibrary and AfxLoadLibrary

Processes call [LoadLibrary](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryw) or [LoadLibraryEx](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryexw) to explicitly link to a DLL. (MFC apps use [AfxLoadLibrary](../mfc/reference/application-information-and-management.md#afxloadlibrary) or [AfxLoadLibraryEx](../mfc/reference/application-information-and-management.md#afxloadlibraryex).) If the function succeeds, it maps the specified DLL into the address space of the calling process, and returns a handle to the DLL. The handle is required in other functions used for explicit linking—for example, `GetProcAddress` and `FreeLibrary`. For more information, see [Explicit linking](linking-an-executable-to-a-dll.md#linking-explicitly).

`LoadLibrary` attempts to locate the DLL by using the same search sequence that is used for implicit linking. `LoadLibraryEx` gives you more control over the search path order. For more information, see [Dynamic Link Library Search Order](/windows/win32/dlls/dynamic-link-library-search-order). If the system can't find the DLL or if the entry-point function returns FALSE, `LoadLibrary` returns NULL. If the call to `LoadLibrary` specifies a DLL module that is already mapped into the address space of the calling process, the function returns a handle of the DLL and increments the reference count of the module.

If the DLL has an entry-point function, the operating system calls the function in the context of the thread that called `LoadLibrary` or `LoadLibraryEx`. The entry-point function isn't called if the DLL is already attached to the process. That happens when a previous call to `LoadLibrary` or `LoadLibraryEx` for the DLL hasn't had a corresponding call to the `FreeLibrary` function.

For MFC applications that load MFC extension DLLs, we recommend that you use `AfxLoadLibrary` or `AfxLoadLibraryEx` instead of `LoadLibrary` or `LoadLibraryEx`. The MFC functions handle thread synchronization before loading the DLL explicitly. The interfaces (function prototypes) to `AfxLoadLibrary` and `AfxLoadLibraryEx` are the same as `LoadLibrary` and `LoadLibraryEx`.

If Windows can't load the DLL, your process can attempt to recover from the error. For example, it could notify the user of the error, then ask for another path to the DLL.

> [!IMPORTANT]
> Make sure to specify the full path of any DLLs. The current directory may be searched first when files are loaded by `LoadLibrary`. If you don't fully qualify the path of the file, a file other than the intended one might be loaded. When you create a DLL, use the [/DEPENDENTLOADFLAG](reference/dependentloadflag.md) linker option to specify a search order for statically linked DLL dependencies. Within your DLLs, use both complete paths to explicitly loaded dependencies, and `LoadLibraryEx` or `AfxLoadLibraryEx` call parameters to specify module search order. For more information, see [Dynamic-Link Library Security](/windows/win32/dlls/dynamic-link-library-security) and [Dynamic Link Library Search Order](/windows/win32/dlls/dynamic-link-library-search-order).

## What do you want to do?

- [Link an executable to a DLL](linking-an-executable-to-a-dll.md#linking-implicitly)

- [Link an executable to a DLL](linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use)

## What do you want to know more about?

- [Dynamic-Link Library Search Order](/windows/win32/Dlls/dynamic-link-library-search-order)

- [FreeLibrary and AfxFreeLibrary](freelibrary-and-afxfreelibrary.md)

- [GetProcAddress](getprocaddress.md)

## See also

- [Create C/C++ DLLs in Visual Studio](dlls-in-visual-cpp.md)
