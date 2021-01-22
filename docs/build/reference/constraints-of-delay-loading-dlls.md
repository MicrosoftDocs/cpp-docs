---
description: "Learn more about: Constraints of delay loading DLLs"
title: "Constraints of delay loading DLLs"
ms.date: "01/19/2021"
helpviewer_keywords: ["constraints [C++], delayed loading of DLLs", "delayed loading of DLLs, constraints", "DLLs [C++], constraints"]
---
# Constraints of delay loading DLLs

There are several constraints on the delay loading of DLL imports.

- Imports of data can't be supported. A workaround is to explicitly handle the data import yourself by using `LoadLibrary` (or by using `GetModuleHandle` after you know the delay-load helper has loaded the DLL) and `GetProcAddress`.

- Delay loading *`Kernel32.dll`* isn't supported. This DLL must be loaded for the delay-load helper routines to work.

- [Binding](binding-imports.md) of forwarded entry points isn't supported.

- A process may have different behavior if a DLL is delay-loaded, instead of loaded on start-up. It can be seen if there are per-process initializations that occur in the entry point of the delay-loaded DLL. Other cases include static TLS (thread local storage), declared using [`__declspec(thread)`](../../cpp/thread.md), which isn't handled when the DLL is loaded via `LoadLibrary`. Dynamic TLS, using `TlsAlloc`, `TlsFree`, `TlsGetValue`, and `TlsSetValue`, is still available for use in either static or delay-loaded DLLs.

- Reinitialize static global function pointers to imported functions after the first call of each function. That's required because the first use of a function pointer points to the thunk, not the loaded function.

- There's currently no way to delay the loading of only specific procedures from a DLL while using the normal import mechanism.

- Custom calling conventions (such as using condition codes on x86 architectures) aren't supported. Also, the floating-point registers aren't saved on any platform. If your custom helper routine or hook routines use floating-point types, they need to save and restore the complete floating-point state on machines that use register calling conventions with floating-point parameters. Be careful about delay-loading the CRT DLL, particularly if you call CRT functions that take floating-point parameters on a numeric data processor (NDP) stack in the help function.

## See also

[Linker support for delay-loaded DLLs](linker-support-for-delay-loaded-dlls.md)\
[`LoadLibrary` function](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryw)\
[`GetModuleHandle` function](/windows/win32/api/libloaderapi/nf-libloaderapi-getmodulehandlew)\
[`GetProcAddress` function](/windows/win32/api/libloaderapi/nf-libloaderapi-getprocaddress)\
[`TlsAlloc` function](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsalloc)\
[`TlsFree` function](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsfree)\
[`TlsGetValue` function](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsgetvalue)\
[`TlsSetValue` function](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlssetvalue)
