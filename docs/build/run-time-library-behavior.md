---
description: "Learn more about: DLLs and Microsoft C++ runtime library behavior"
title: "DLLs and Visual C++ runtime library behavior"
ms.date: 02/23/2026
f1_keywords: ["_DllMainCRTStartup", "CRT_INIT"]
helpviewer_keywords: ["DLLs [C++], entry point function", "process detach [C++]", "process attach [C++]", "DLLs [C++], run-time library behavior", "DllMain function", "_CRT_INIT macro", "_DllMainCRTStartup method", "run-time [C++], DLL startup sequence", "DLLs [C++], startup sequence"]
---
# DLLs and Visual C++ runtime library behavior

When you build a Dynamic-link Library (DLL) using Visual Studio, by default, the linker includes the Visual C++ runtime library (VCRuntime). The VCRuntime contains code required to initialize and terminate a C/C++ executable. When linked into a DLL, the VCRuntime code provides an internal DLL entry-point function called `_DllMainCRTStartup` that handles Windows OS messages to the DLL to attach to or detach from a process or thread. The `_DllMainCRTStartup` function performs essential tasks such as stack buffer security setup, C runtime library (CRT) initialization and termination, and calls to constructors and destructors for static and global objects. `_DllMainCRTStartup` also calls hook functions for other libraries such as WinRT, MFC, and ATL to perform their own initialization and termination. Without this initialization, the CRT and other libraries, and your static variables, would be left in an uninitialized state. The same VCRuntime internal initialization and termination routines are called whether your DLL uses a statically linked CRT or a dynamically linked CRT DLL.

## Default DLL entry point _DllMainCRTStartup

In Windows, all DLLs can contain an optional entry-point function, usually called `DllMain`, that is called for both initialization and termination. This gives you an opportunity to allocate or release other resources as needed. Windows calls the entry-point function in four situations: process attach, process detach, thread attach, and thread detach. When a DLL is loaded into a process address space, either when an application that uses it's loaded, or when the application requests the DLL at runtime, the operating system creates a separate copy of the DLL data. This is called *process attach*. *Thread attach* occurs when the process the DLL is loaded in creates a new thread. *Thread detach* occurs when the thread terminates, and *process detach* is when the DLL is no longer required and is released by an application. The operating system makes a separate call to the DLL entry point for each of these events, passing a *reason* argument for each event type. For example, the OS sends `DLL_PROCESS_ATTACH` as the *reason* argument to signal process attach.

The VCRuntime library provides an entry-point function called `_DllMainCRTStartup` to handle default initialization and termination operations. On process attach, the `_DllMainCRTStartup` function sets up buffer security checks, initializes the CRT and other libraries, initializes runtime type information, initializes and calls constructors for static and nonlocal data, initializes thread-local storage, increments an internal static counter for each attach, and then calls a user- or library-supplied `DllMain`. On process detach, the function goes through these steps in reverse. It calls `DllMain`, decrements the internal counter, calls destructors, calls CRT termination functions and registered `atexit` functions, and notifies any other libraries of termination. When the attachment counter goes to zero, the function returns `FALSE` to indicate to Windows that the DLL can be unloaded. The `_DllMainCRTStartup` function is also called during thread attach and thread detach. In these cases, the VCRuntime code does no other initialization or termination on its own, and just calls `DllMain` to pass the message along. If `DllMain` returns `FALSE` from process attach, signaling failure, `_DllMainCRTStartup` calls `DllMain` again and passes `DLL_PROCESS_DETACH` as the *reason* argument, then goes through the rest of the termination process.

When building DLLs in Visual Studio, the default entry point  `_DllMainCRTStartup` supplied by VCRuntime is linked in automatically. You don't need to specify an entry-point function for your DLL by using the [`/ENTRY` (Entry point symbol)](reference/entry-entry-point-symbol.md) linker option.

> [!NOTE]
> While it's possible to specify another entry-point function for a DLL by using the `/ENTRY`: linker option, we don't recommend it, because your entry-point function would have to duplicate everything that `_DllMainCRTStartup` does, in the same order. The VCRuntime provides functions that allow you to duplicate its behavior. For example, you can call [__security_init_cookie](../c-runtime-library/reference/security-init-cookie.md) immediately on process attach to support the [/GS (Buffer security check)](reference/gs-buffer-security-check.md) buffer checking option. You can call the `_CRT_INIT` function, passing the same parameters as the entry point function, to perform the rest of the DLL initialization or termination functions.

<a name="initializing-a-dll"></a>

## Initialize a DLL

Your DLL may have initialization code that must execute when your DLL loads. In order for you to perform your own DLL initialization and termination functions, `_DllMainCRTStartup` calls a function called `DllMain` that you can provide. Your `DllMain` must have the signature required for a DLL entry point. The default entry point function `_DllMainCRTStartup` calls `DllMain` using the same parameters passed by Windows. By default, if you don't provide a `DllMain` function, Visual Studio provides one for you and links it in so that `_DllMainCRTStartup` always has something to call. This means that if you don't need to initialize your DLL, there's nothing special you have to do when building your DLL.

This is the signature used for `DllMain`:

```cpp
#include <windows.h>

extern "C" BOOL WINAPI DllMain (
    HINSTANCE const instance,  // handle to DLL module
    DWORD     const reason,    // reason for calling function
    LPVOID    const reserved); // reserved
```

Some libraries wrap the `DllMain` function for you. For example, in a regular MFC DLL, implement the `CWinApp` object's `InitInstance` and `ExitInstance` member functions to perform initialization and termination required by your DLL. For more information, see the [Initialize regular MFC DLLs](#initializing-regular-dlls) section.

> [!WARNING]
> There are significant limits on what you can safely do in a DLL entry point. For more information about specific Windows APIs that are unsafe to call in `DllMain`, see [General Best Practices](/windows/win32/Dlls/dynamic-link-library-best-practices). If you need anything but the simplest initialization, then do that in an initialization function for the DLL. You can require applications to call the initialization function after `DllMain` has run and before they call any other functions in the DLL.

<a name="initializing-non-mfc-dlls"></a>

### Initialize ordinary (non-MFC) DLLs

To perform your own initialization in ordinary (non-MFC) DLLs that use the VCRuntime-supplied `_DllMainCRTStartup` entry point, your DLL source code must contain a function called `DllMain`. The following code presents a basic skeleton showing what the definition of `DllMain` might look like:

```cpp
#include <windows.h>

extern "C" BOOL WINAPI DllMain (
    HINSTANCE const instance,  // handle to DLL module
    DWORD     const reason,    // reason for calling function
    LPVOID    const reserved)  // reserved
{
    // Perform actions based on the reason for calling.
    switch (reason)
    {
    case DLL_PROCESS_ATTACH:
        // Initialize once for each new process.
        // Return FALSE to fail DLL load.
        break;

    case DLL_THREAD_ATTACH:
        // Do thread-specific initialization.
        break;

    case DLL_THREAD_DETACH:
        // Do thread-specific cleanup.
        break;

    case DLL_PROCESS_DETACH:
        // Perform any necessary cleanup.
        break;
    }
    return TRUE;  // Successful DLL_PROCESS_ATTACH.
}
```

> [!NOTE]
> Older Windows SDK documentation says that the actual name of the DLL entry-point function must be specified on the linker command-line with the `/ENTRY` option. With Visual Studio, you don't need to use the `/ENTRY` option if the name of your entry-point function is `DllMain`. In fact, if you use the `/ENTRY` option and name your entry-point function something other than `DllMain`, the CRT doesn't get initialized properly unless your entry-point function makes the same initialization calls that `_DllMainCRTStartup` makes.

### Manual CRT initialization with `_CRT_INIT`

When building a DLL that uses any of the C runtime libraries, in order to ensure that the CRT is properly initialized, either:

- The initialization function must be named `DllMain()` and the entry point must be specified with the linker option `-entry:_DllMainCRTStartup@12` This is the default behavior when building a DLL (the `@12` is x86-only because that platform uses `stdcall`), or
- The DLL's entry point must explicitly call `_CRT_INIT()` on process attach and process detach. This is only relevant if you are using `/NOENTRY` or have a custom entry point. We don't recommend using `/NOENTRY` or a custom entry point, if possible, because you would have to duplicate all of the initialization and termination code that `_DllMainCRTStartup` provides, in the same order.

This permits the C runtime libraries to properly allocate and initialize C runtime data when a process or thread is attaching to the DLL, to properly clean up C runtime data when a process is detaching from the DLL, and for global C++ objects in the DLL to be properly constructed and destructed.

The Win32 SDK samples all use the first method. Refer to the Win32 Programmer's Reference for `DllEntryPoint()` and the Visual C++ documentation for `DllMain()`. `DllMainCRTStartup()` calls `_CRT_INIT()` and `_CRT_INIT()` calls your application's `DllMain()`, if it exists.

If you wish to use the second method and call the CRT initialization code yourself, instead of using `DllMainCRTStartup()` and `DllMain()`, there are two techniques:

1. If you do have your own DLL entry point, do the following in the entry point:

   a. Use this prototype (defined in `process.h` when `_DECL_DLLMAIN` is defined) for `_CRT_INIT()`: `BOOL WINAPI _CRT_INIT(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved);`
   
   For information on `_CRT_INIT()` return values, see the documentation for `DllEntryPoint`; the same values are returned.
   
   b. On `DLL_PROCESS_ATTACH` and `DLL_THREAD_ATTACH`, call `_CRT_INIT()` first, before any C runtime functions are called or any floating-point operations are performed.
   
   c. Call your own process/thread initialization/termination code.
   
   d. On `DLL_PROCESS_DETACH` and `DLL_THREAD_DETACH`, call `_CRT_INIT()` last, after all C runtime functions have been called and all floating-point operations are completed.

Be sure to pass on to `_CRT_INIT()` all of the parameters of the entry point; `_CRT_INIT()` expects those parameters, so things may not work reliably if they're omitted (in particular, `fdwReason` is required to determine whether process initialization or termination is needed).

Below is a skeleton sample entry point function that shows when and how to make these calls to `_CRT_INIT()` in the DLL entry point:

```cpp
BOOL WINAPI DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
    if (fdwReason == DLL_PROCESS_ATTACH || fdwReason == DLL_THREAD_ATTACH)
        if (!_CRT_INIT(hinstDLL, fdwReason, lpReserved))
            return(FALSE);

    if (fdwReason == DLL_PROCESS_DETACH || fdwReason == DLL_THREAD_DETACH)
        if (!_CRT_INIT(hinstDLL, fdwReason, lpReserved))
            return(FALSE);

    return(TRUE);
}
```

> [!NOTE]
> This isn't necessary if you're using `DllMain()` and `-entry:_DllMainCRTStartup@12`.

<a name="initializing-regular-dlls"></a>

### Initialize regular MFC DLLs

Because regular MFC DLLs have a `CWinApp` object, they should perform their initialization and termination tasks in the same location as an MFC application: in the `InitInstance` and `ExitInstance` member functions of the DLL's `CWinApp`-derived class. Because MFC provides a `DllMain` function that is called by `_DllMainCRTStartup` for `DLL_PROCESS_ATTACH` and `DLL_PROCESS_DETACH`, you shouldn't write your own `DllMain` function. The MFC-provided `DllMain` function calls `InitInstance` when your DLL is loaded and it calls `ExitInstance` before the DLL is unloaded.

A regular MFC DLL can keep track of multiple threads by calling [TlsAlloc](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsalloc) and [TlsGetValue](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsgetvalue) in its `InitInstance` function. These functions allow the DLL to track thread-specific data.

In your regular MFC DLL that dynamically links to MFC, if you're using any MFC OLE, MFC Database (or DAO), or MFC Sockets support, respectively, the debug MFC extension DLLs MFCO*version*D.dll, MFCD*version*D.dll, and MFCN*version*D.dll (where *version* is the version number) are linked in automatically. You must call one of the following predefined initialization functions for each of these DLLs that you're using in your regular MFC DLL's `CWinApp::InitInstance`.

|Type of MFC support|Initialization function to call|
|-------------------------|-------------------------------------|
|MFC OLE (MFCO*version*D.dll)|`AfxOleInitModule`|
|MFC Database (MFCD*version*D.dll)|`AfxDbInitModule`|
|MFC Sockets (MFCN*version*D.dll)|`AfxNetInitModule`|

<a name="initializing-extension-dlls"></a>

### Initialize MFC extension DLLs

Because MFC extension DLLs don't have a `CWinApp`-derived object (as do regular MFC DLLs), you should add your initialization and termination code to the `DllMain` function that the MFC DLL Wizard generates.

The wizard provides the following code for MFC extension DLLs. In the code, `PROJNAME` is a placeholder for the name of your project.

```cpp
#include "pch.h" // For Visual Studio 2017 and earlier, use "stdafx.h"
#include <afxdllx.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
static AFX_EXTENSION_MODULE PROJNAMEDLL;

extern "C" int APIENTRY
DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
   if (dwReason == DLL_PROCESS_ATTACH)
   {
      TRACE0("PROJNAME.DLL Initializing!\n");

      // MFC extension DLL one-time initialization
      AfxInitExtensionModule(PROJNAMEDLL,
                                 hInstance);

      // Insert this DLL into the resource chain
      new CDynLinkLibrary(Dll3DLL);
   }
   else if (dwReason == DLL_PROCESS_DETACH)
   {
      TRACE0("PROJNAME.DLL Terminating!\n");
   }
   return 1;   // ok
}
```

Creating a new `CDynLinkLibrary` object during initialization allows the MFC extension DLL to export `CRuntimeClass` objects or resources to the client application.

If you're going to use your MFC extension DLL from one or more regular MFC DLLs, you must export an initialization function that creates a `CDynLinkLibrary` object. That function must be called from each of the regular MFC DLLs that use the MFC extension DLL. An appropriate place to call this initialization function is in the `InitInstance` member function of the regular MFC DLL's `CWinApp`-derived object before using any of the MFC extension DLL's exported classes or functions.

In the `DllMain` that the MFC DLL Wizard generates, the call to `AfxInitExtensionModule` captures the module's runtime classes (`CRuntimeClass` structures) and its object factories (`COleObjectFactory` objects) for use when the `CDynLinkLibrary` object is created. You should check the return value of `AfxInitExtensionModule`; if a zero value is returned from `AfxInitExtensionModule`, return zero from your `DllMain` function.

If your MFC extension DLL is explicitly linked to an executable (meaning the executable calls `AfxLoadLibrary` to link to the DLL), you should add a call to `AfxTermExtensionModule` on `DLL_PROCESS_DETACH`. This function allows MFC to clean up the MFC extension DLL when each process detaches from the MFC extension DLL (which happens when the process exits or when the DLL is unloaded as a result of a `AfxFreeLibrary` call). If your MFC extension DLL is linked implicitly to the application, the call to `AfxTermExtensionModule` isn't necessary.

Applications that explicitly link to MFC extension DLLs must call `AfxTermExtensionModule` when freeing the DLL. They should also use `AfxLoadLibrary` and `AfxFreeLibrary` (instead of the Win32 functions `LoadLibrary` and `FreeLibrary`) if the application uses multiple threads. Using `AfxLoadLibrary` and `AfxFreeLibrary` ensures that the startup and shutdown code that executes when the MFC extension DLL is loaded and unloaded doesn't corrupt the global MFC state.

Because the MFCx0.dll is fully initialized by the time `DllMain` is called, you can allocate memory and call MFC functions within `DllMain` (unlike the 16-bit version of MFC).

Extension DLLs can take care of multithreading by handling the `DLL_THREAD_ATTACH` and `DLL_THREAD_DETACH` cases in the `DllMain` function. These cases are passed to `DllMain` when threads attach and detach from the DLL. Calling [`TlsAlloc`](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsalloc) when a DLL is attaching allows the DLL to maintain thread local storage (TLS) indexes for every thread attached to the DLL.

The header file `Afxdllx.h` contains special definitions for structures used in MFC extension DLLs, such as the definition for `AFX_EXTENSION_MODULE` and `CDynLinkLibrary`. You should include this header file in your MFC extension DLL.

> [!NOTE]
> It's important that you don't define or undefine any of the `_AFX_NO_XXX` macros in `pch.h` (`stdafx.h` in Visual Studio 2017 and earlier). These macros exist only to check whether a particular target platform supports that feature or not. You can write your program to check these macros (for example, `#ifndef _AFX_NO_OLE_SUPPORT`), but your program should never define or undefine these macros.

A sample initialization function that handles multithreading is included in [Using Thread Local Storage in a Dynamic-Link Library](/windows/win32/Dlls/using-thread-local-storage-in-a-dynamic-link-library) in the Windows SDK. Note that the sample contains an entry-point function called `LibMain`, but you should name this function `DllMain` so that it works with the MFC and C runtime libraries.

## See also

[Create C/C++ DLLs in Visual Studio](dlls-in-visual-cpp.md)\
[DllMain entry point](/windows/win32/Dlls/dllmain)\
[Dynamic-link Library Best Practices](/windows/win32/Dlls/dynamic-link-library-best-practices)
