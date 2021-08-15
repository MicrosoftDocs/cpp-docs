---
description: "Learn more about: DLLs and Visual C++ run-time library behavior"
title: "DLLs and Visual C++ run-time library behavior"
ms.date: "08/19/2019"
f1_keywords: ["_DllMainCRTStartup", "CRT_INIT"]
helpviewer_keywords: ["DLLs [C++], entry point function", "process detach [C++]", "process attach [C++]", "DLLs [C++], run-time library behavior", "DllMain function", "_CRT_INIT macro", "_DllMainCRTStartup method", "run-time [C++], DLL startup sequence", "DLLs [C++], startup sequence"]
ms.assetid: e06f24ab-6ca5-44ef-9857-aed0c6f049f2
---
# DLLs and Visual C++ run-time library behavior

When you build a Dynamic-link Library (DLL) by using Visual Studio, by default, the linker includes the Visual C++ run-time library (VCRuntime). The VCRuntime contains code required to initialize and terminate a C/C++ executable. When linked into a DLL, the VCRuntime code provides an internal DLL entry-point function called `_DllMainCRTStartup` that handles Windows OS messages to the DLL to attach to or detach from a process or thread. The `_DllMainCRTStartup` function performs essential tasks such as stack buffer security set up, C run-time library (CRT) initialization and termination, and calls to constructors and destructors for static and global objects. `_DllMainCRTStartup` also calls hook functions for other libraries such as WinRT, MFC, and ATL to perform their own initialization and termination. Without this initialization, the CRT and other libraries, as well as your static variables, would be left in an uninitialized state. The same VCRuntime internal initialization and termination routines are called whether your DLL uses a statically linked CRT or a dynamically linked CRT DLL.

## Default DLL entry point _DllMainCRTStartup

In Windows, all DLLs can contain an optional entry-point function, usually called `DllMain`, that is called for both initialization and termination. This gives you an opportunity to allocate or release additional resources as needed. Windows calls the entry-point function in four situations: process attach, process detach, thread attach, and thread detach. When a DLL is loaded into a process address space, either when an application that uses it is loaded, or when the application requests the DLL at runtime, the operating system creates a separate copy of the DLL data. This is called *process attach*. *Thread attach* occurs when the process the DLL is loaded in creates a new thread. *Thread detach* occurs when the thread terminates, and *process detach* is when the DLL is no longer required and is released by an application. The operating system makes a separate call to the DLL entry point for each of these events, passing a *reason* argument for each event type. For example, the OS sends `DLL_PROCESS_ATTACH` as the *reason* argument to signal process attach.

The VCRuntime library provides an entry-point function called `_DllMainCRTStartup` to handle default initialization and termination operations. On process attach, the `_DllMainCRTStartup` function sets up buffer security checks, initializes the CRT and other libraries, initializes run-time type information, initializes and calls constructors for static and non-local data, initializes thread-local storage, increments an internal static counter for each attach, and then calls a user- or library-supplied `DllMain`. On process detach, the function goes through these steps in reverse. It calls `DllMain`, decrements the internal counter, calls destructors, calls CRT termination functions and registered `atexit` functions, and notifies any other libraries of termination. When the attachment counter goes to zero, the function returns `FALSE` to indicate to Windows that the DLL can be unloaded. The `_DllMainCRTStartup` function is also called during thread attach and thread detach. In these cases, the VCRuntime code does no additional initialization or termination on its own, and just calls `DllMain` to pass the message along. If `DllMain` returns `FALSE` from process attach, signaling failure, `_DllMainCRTStartup` calls `DllMain` again and passes `DLL_PROCESS_DETACH` as the *reason* argument, then goes through the rest of the termination process.

When building DLLs in Visual Studio, the default entry point  `_DllMainCRTStartup` supplied by VCRuntime is linked in automatically. You do not need to specify an entry-point function for your DLL by using the [/ENTRY (Entry point symbol)](reference/entry-entry-point-symbol.md) linker option.

> [!NOTE]
> While it is possible to specify another entry-point function for a DLL by using the /ENTRY: linker option, we do not recommend it, because your entry-point function would have to duplicate everything that `_DllMainCRTStartup` does, in the same order. The VCRuntime provides functions that allow you to duplicate its behavior. For example, you can call [__security_init_cookie](../c-runtime-library/reference/security-init-cookie.md) immediately on process attach to support the [/GS (Buffer security check)](reference/gs-buffer-security-check.md) buffer checking option. You can call the `_CRT_INIT` function, passing the same parameters as the entry point function, to perform the rest of the DLL initialization or termination functions.

<a name="initializing-a-dll"></a>

## Initialize a DLL

Your DLL may have initialization code that must execute when your DLL loads. In order for you to perform your own DLL initialization and termination functions, `_DllMainCRTStartup` calls a function called `DllMain` that you can provide. Your `DllMain` must have the signature required for a DLL entry point. The default entry point function `_DllMainCRTStartup` calls `DllMain` using the same parameters passed by Windows. By default, if you do not provide a `DllMain` function, Visual Studio provides one for you and links it in so that `_DllMainCRTStartup` always has something to call. This means that if you do not need to initialize your DLL, there is nothing special you have to do when building your DLL.

This is the signature used for `DllMain`:

```cpp
#include <windows.h>

extern "C" BOOL WINAPI DllMain (
    HINSTANCE const instance,  // handle to DLL module
    DWORD     const reason,    // reason for calling function
    LPVOID    const reserved); // reserved
```

Some libraries wrap the `DllMain` function for you. For example, in a regular MFC DLL, implement the `CWinApp` object's `InitInstance` and `ExitInstance` member functions to perform initialization and termination required by your DLL. For more details, see the [Initialize regular MFC DLLs](#initializing-regular-dlls) section.

> [!WARNING]
> There are significant limits on what you can safely do in a DLL entry point. See [General Best Practices](/windows/win32/Dlls/dynamic-link-library-best-practices) for specific Windows APIs that are unsafe to call in `DllMain`. If you need anything but the simplest initialization then do that in an initialization function for the DLL. You can require applications to call the initialization function after `DllMain` has run and before they call any other functions in the DLL.

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
> Older Windows SDK documentation says that the actual name of the DLL entry-point function must be specified on the linker command-line with the /ENTRY option. With Visual Studio, you do not need to use the /ENTRY option if the name of your entry-point function is `DllMain`. In fact, if you use the /ENTRY option and name your entry-point function something other than `DllMain`, the CRT does not get initialized properly unless your entry-point function makes the same initialization calls that `_DllMainCRTStartup` makes.

<a name="initializing-regular-dlls"></a>

### Initialize regular MFC DLLs

Because regular MFC DLLs have a `CWinApp` object, they should perform their initialization and termination tasks in the same location as an MFC application: in the `InitInstance` and `ExitInstance` member functions of the DLL's `CWinApp`-derived class. Because MFC provides a `DllMain` function that is called by `_DllMainCRTStartup` for `DLL_PROCESS_ATTACH` and `DLL_PROCESS_DETACH`, you should not write your own `DllMain` function. The MFC-provided `DllMain` function calls `InitInstance` when your DLL is loaded and it calls `ExitInstance` before the DLL is unloaded.

A regular MFC DLL can keep track of multiple threads by calling [TlsAlloc](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsalloc) and [TlsGetValue](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsgetvalue) in its `InitInstance` function. These functions allow the DLL to track thread-specific data.

In your regular MFC DLL that dynamically links to MFC, if you are using any MFC OLE, MFC Database (or DAO), or MFC Sockets support, respectively, the debug MFC extension DLLs MFCO*version*D.dll, MFCD*version*D.dll, and MFCN*version*D.dll (where *version* is the version number) are linked in automatically. You must call one of the following predefined initialization functions for each of these DLLs that you are using in your regular MFC DLL's `CWinApp::InitInstance`.

|Type of MFC support|Initialization function to call|
|-------------------------|-------------------------------------|
|MFC OLE (MFCO*version*D.dll)|`AfxOleInitModule`|
|MFC Database (MFCD*version*D.dll)|`AfxDbInitModule`|
|MFC Sockets (MFCN*version*D.dll)|`AfxNetInitModule`|

<a name="initializing-extension-dlls"></a>

### Initialize MFC extension DLLs

Because MFC extension DLLs do not have a `CWinApp`-derived object (as do regular MFC DLLs), you should add your initialization and termination code to the `DllMain` function that the MFC DLL Wizard generates.

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

If you are going to use your MFC extension DLL from one or more regular MFC DLLs, you must export an initialization function that creates a `CDynLinkLibrary` object. That function must be called from each of the regular MFC DLLs that use the MFC extension DLL. An appropriate place to call this initialization function is in the `InitInstance` member function of the regular MFC DLL's `CWinApp`-derived object before using any of the MFC extension DLL's exported classes or functions.

In the `DllMain` that the MFC DLL Wizard generates, the call to `AfxInitExtensionModule` captures the module's run-time classes (`CRuntimeClass` structures) as well as its object factories (`COleObjectFactory` objects) for use when the `CDynLinkLibrary` object is created. You should check the return value of `AfxInitExtensionModule`; if a zero value is returned from `AfxInitExtensionModule`, return zero from your `DllMain` function.

If your MFC extension DLL will be explicitly linked to an executable (meaning the executable calls `AfxLoadLibrary` to link to the DLL), you should add a call to `AfxTermExtensionModule` on `DLL_PROCESS_DETACH`. This function allows MFC to clean up the MFC extension DLL when each process detaches from the MFC extension DLL (which happens when the process exits or when the DLL is unloaded as a result of a `AfxFreeLibrary` call). If your MFC extension DLL will be linked implicitly to the application, the call to `AfxTermExtensionModule` is not necessary.

Applications that explicitly link to MFC extension DLLs must call `AfxTermExtensionModule` when freeing the DLL. They should also use `AfxLoadLibrary` and `AfxFreeLibrary` (instead of the Win32 functions `LoadLibrary` and `FreeLibrary`) if the application uses multiple threads. Using `AfxLoadLibrary` and `AfxFreeLibrary` ensures that the startup and shutdown code that executes when the MFC extension DLL is loaded and unloaded does not corrupt the global MFC state.

Because the MFCx0.dll is fully initialized by the time `DllMain` is called, you can allocate memory and call MFC functions within `DllMain` (unlike the 16-bit version of MFC).

Extension DLLs can take care of multithreading by handling the `DLL_THREAD_ATTACH` and `DLL_THREAD_DETACH` cases in the `DllMain` function. These cases are passed to `DllMain` when threads attach and detach from the DLL. Calling [TlsAlloc](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsalloc) when a DLL is attaching allows the DLL to maintain thread local storage (TLS) indexes for every thread attached to the DLL.

Note that the header file Afxdllx.h contains special definitions for structures used in MFC extension DLLs, such as the definition for `AFX_EXTENSION_MODULE` and `CDynLinkLibrary`. You should include this header file in your MFC extension DLL.

> [!NOTE]
> It is important that you neither define nor undefine any of the `_AFX_NO_XXX` macros in *pch.h* (*stdafx.h* in Visual Studio 2017 and earlier). These macros exist only for the purpose of checking whether a particular target platform supports that feature or not. You can write your program to check these macros (for example, `#ifndef _AFX_NO_OLE_SUPPORT`), but your program should never define or undefine these macros.

A sample initialization function that handles multithreading is included in [Using Thread Local Storage in a Dynamic-Link Library](/windows/win32/Dlls/using-thread-local-storage-in-a-dynamic-link-library) in the Windows SDK. Note that the sample contains an entry-point function called `LibMain`, but you should name this function `DllMain` so that it works with the MFC and C run-time libraries.

## See also

[Create C/C++ DLLs in Visual Studio](dlls-in-visual-cpp.md)<br/>
[DllMain entry point](/windows/win32/Dlls/dllmain)<br/>
[Dynamic-link Library Best Practices](/windows/win32/Dlls/dynamic-link-library-best-practices)
