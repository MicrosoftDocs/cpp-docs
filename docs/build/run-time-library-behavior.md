---
title: "DLLs and Visual C++ run-time library behavior | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology:  
  - "cpp-tools"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_DllMainCRTStartup"
  - "CRT_INIT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DLLs [C++], entry point function"
  - "process detach [C++]"
  - "process attach [C++]"
  - "DLLs [C++], run-time library behavior"
  - "DllMain function"
  - "_CRT_INIT macro"
  - "_DllMainCRTStartup method"
  - "run-time [C++], DLL startup sequence"
  - "DLLs [C++], startup sequence"
ms.assetid: e06f24ab-6ca5-44ef-9857-aed0c6f049f2
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# DLLs and Visual C++ run-time library behavior  
  
When you build a Dynamic-link Library (DLL) by using Visual C++, by default, the linker includes the Visual C++ run-time library (VCRuntime). When linked into a DLL, the VCRuntime code handles the DLL entry point and startup sequence. The VCRuntime code provides an internal DLL entry-point function called `_DllMainCRTStartup`. The `_DllMainCRTStartup` function does several things: it calls internal functions to initialize stack checking, initializes the C run-time library (CRT), and it invokes C++ constructors on static, non-local variables. Without this function, the CRT and your static variables would be left in an uninitialized state. This VCRuntime internal initialization routine is called whether your DLL uses a statically linked CRT or a dynamically linked CRT DLL.  
  
## Default DLL entry point _DllMainCRTStartup and DllMain  
  
When building DLLs in Visual C++, `_DllMainCRTStartup` is linked in automatically and you do not need to specify an entry-point function using the /ENTRY: linker option. While it is possible to specify another entry-point function using the /ENTRY: linker option, it is not recommended because your entry-point function would have to duplicate everything that `_DllMainCRTStartup` does. You can use the `_CRT_INIT` function to perform the CRT initialization alone, but this is not sufficient to support the [/GS (Buffer security check)](../build/reference/gs-buffer-security-check.md) stack checking option, static initializers, or the use of MFC or ATL libraries.   
  
In addition to initializing the CRT, `_DllMainCRTStartup` calls a function called `DllMain`. Depending on the kind of DLL you are building, Visual C++ provides `DllMain` for you and it gets linked in so that `_DllMainCRTStartup` always has something to call. In this way, if you do not need to initialize your DLL, there is nothing special you have to do when building your DLL. If you need to initialize your DLL, where you add your code depends on the kind of DLL you are writing. For more information, see [Initialize a DLL](../build/run-time-library-behavior.md#initializing-a-dll).  
  
The VCRuntime startup code calls constructors and destructors on static, non-local variables. For example, in the following DLL source code, `Equus` and `Sugar` are two static, non-local objects of class `CHorse`, defined in Horses.h. There is no function in source code that contains calls to a constructor function for `CHorse` or to the destructor function because these objects are defined outside of any function. Therefore, calls to these constructors and destructors must be performed by the VCRuntime startup code. The VCRuntime startup code for applications also performs this function.  
  
```cpp  
#include "horses.h"  
  
CHorse  Equus( ARABIAN, MALE );  
CHorse  Sugar( THOROUGHBRED, FEMALE );  
  
BOOL WINAPI DllMain (
    HINSTANCE hInstance,   
    DWORD reason,  
    LPVOID reserved)
{  
    // ...  
}
```  
  
Each time a new process attempts to use the DLL, the operating system creates a separate copy of the DLL's data: this is called *process attach*. The VCRuntime startup code for the DLL calls the constructors for all of the global objects, if any, and then calls the `DllMain` function. It passes `DllMain` the arguments that the operating system passed to the entry point. `DLL_PROCESS_ATTACH` is passed as the *reason* argument to indicate that process attach was selected. The opposite situation is *process detach*: `DllMain` is passed `DLL_PROCESS_DETACH` as the *reason* argument to indicate that process detach was selected. After `DllMain` returns, the VCRuntime code then calls a list of termination functions, including `atexit` functions, destructors for the global objects, and destructors for the static objects. Note that the order of events in process detach is the reverse of that in process attach.  
  
If `DllMain` returns `FALSE` from process attach, the VCRuntime startup code calls `DllMain` again and passes `DLL_PROCESS_DETACH` as the *reason* argument, then goes through the rest of the termination process.  
  
The VCRuntime startup code is also called during thread attach and thread detach, but in these cases, the VCRuntime startup code does no initialization or termination on its own.  
  
<a name="initializing-a-dll"></a>  
  
## Initialize a DLL  
  
Typically, your DLL has initialization code (such as allocating memory) that must execute when your DLL loads. When using Visual C++, where you add code to initialize your DLL depends on the type of DLL you are building. If you do not need to add initialization or termination code, there is nothing special you have to do when building your DLL. If you need to initialize your DLL, the following table describes where to add your code.  
  
|DLL type|Where to add initialization and termination code|  
|--------------|------------------------------------------------------|  
|Ordinary (Non-MFC) DLL|In a function called `DllMain` that you provide.|  
|Regular MFC DLL|In the DLL's `CWinApp` object's `InitInstance` and `ExitInstance`.|  
|MFC Extension DLL|In the `DllMain` function generated by the MFC DLL Wizard.|  
  
In Win32, all DLLs might contain an optional entry-point function (usually called `DllMain`) that is called for both initialization and termination. This gives you an opportunity to allocate or release additional resources as needed. Windows calls the entry-point function in four situations: process attach, process detach, thread attach, and thread detach.  
  
The VCRuntime library provides an entry-point function called `_DllMainCRTStartup`, which calls `DllMain`. Depending on the type of DLL, you should have a function called `DllMain` in your source code, or you should use the `DllMain` provided by the library.  
  
<a name="initializing-non-mfc-dlls"></a>  
  
### Initialize ordinary (non-MFC) DLLs  
  
To initialize ordinary non-MFC DLLs that use the VCRuntime startup code, your DLL source code must contain a function called `DllMain`. The following code presents a basic skeleton showing what the definition of `DllMain` might look like:  
  
```cpp  
BOOL WINAPI DllMain (
    HINSTANCE hInstance,  // handle to DLL module 
    DWORD reason,         // reason for calling function
    LPVOID reserved)      // reserved
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
> Older Windows SDK documentation says that the actual name of the entry-point function must be specified on the linker command-line with the /ENTRY option. With Visual C++, you do not need to use the /ENTRY option if the name of your entry-point function is `DllMain`. In fact, if you use the /ENTRY option and name your entry-point function something other than `DllMain`, the C run-time library does not get initialized properly unless you make all the same initialization calls the entry point supplied by the VCRuntime library, `_DllMainCRTStartup`, makes.  
  
<a name="initializing-regular-dlls"></a>  
  
### Initialize regular MFC DLLs  
  
Because regular MFC DLLs have a `CWinApp` object, they should perform their initialization and termination tasks in the same location as an MFC application: in the `InitInstance` and **ExitInstance** member functions of the DLL's `CWinApp`-derived class. Because MFC provides a `DllMain` function that is called by **_DllMainCRTStartup** for **PROCESS_ATTACH** and **PROCESS_DETACH**, you should not write your own `DllMain` function. The MFC-provided `DllMain` function calls `InitInstance` when your DLL is loaded and it calls `ExitInstance` before the DLL is unloaded.  
  
A regular MFC DLL can keep track of multiple threads by calling [TlsAlloc](http://msdn.microsoft.com/library/windows/desktop/ms686801) and [TlsGetValue](http://msdn.microsoft.com/library/windows/desktop/ms686812) in its `InitInstance` function. These functions allow the DLL to track thread-specific data.  
  
In your regular MFC DLL that dynamically links to MFC, if you are using any MFC OLE, MFC Database (or DAO), or MFC Sockets support, respectively, the debug MFC extension DLLs MFCOxxD.dll, MFCDxxD.dll, and MFCNxxD.dll (where xx is the version number) are linked in automatically. You must call one of the following predefined initialization functions for each of these DLLs that you are using in your regular MFC DLL's `CWinApp::InitInstance`.  
  
|Type of MFC support|Initialization function to call|  
|-------------------------|-------------------------------------|  
|MFC OLE (MFCOxxD.dll)|`AfxOleInitModule`|  
|MFC Database (MFCDxxD.dll)|`AfxDbInitModule`|  
|MFC Sockets (MFCNxxD.dll)|`AfxNetInitModule`|  
  
<a name="initializing-extension-dlls"></a>  
  
### Initialize MFC extension DLLs  
  
Because MFC extension DLLs do not have a `CWinApp`-derived object (as do regular MFC DLLs), you should add your initialization and termination code to the `DllMain` function that the MFC DLL Wizard generates.  
  
 The wizard provides the following code for MFC extension DLLs. In the code, `PROJNAME` is a placeholder for the name of your project.  
  
```cpp  
#include "stdafx.h"  
#include <afxdllx.h>  
  
#ifdef _DEBUG  
#define new DEBUG_NEW  
#undef THIS_FILE  
static char THIS_FILE[] = __FILE__;  
#endif  
static AFX_EXTENSION_MODULE PROJNAMEDLL = { NULL, NULL };  
  
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
  
Creating a new **CDynLinkLibrary** object during initialization allows the MFC extension DLL to export `CRuntimeClass` objects or resources to the client application.  
  
If you are going to use your MFC extension DLL from one or more regular MFC DLLs, you must export an initialization function that creates a **CDynLinkLibrary** object. That function must be called from each of the regular MFC DLLs that use the MFC extension DLL. An appropriate place to call this initialization function is in the `InitInstance` member function of the regular MFC DLL's `CWinApp`-derived object before using any of the MFC extension DLL's exported classes or functions.  
  
In the `DllMain` that the MFC DLL Wizard generates, the call to `AfxInitExtensionModule` captures the module's run-time classes (`CRuntimeClass` structures) as well as its object factories (`COleObjectFactory` objects) for use when the **CDynLinkLibrary** object is created. You should check the return value of `AfxInitExtensionModule`; if a zero value is returned from `AfxInitExtensionModule`, return zero from your `DllMain` function.  
  
If your MFC extension DLL will be explicitly linked to an executable (meaning the executable calls `AfxLoadLibrary` to link to the DLL), you should add a call to `AfxTermExtensionModule` on **DLL_PROCESS_DETACH**. This function allows MFC to clean up the MFC extension DLL when each process detaches from the MFC extension DLL (which happens when the process exits or when the DLL is unloaded as a result of a `AfxFreeLibrary` call). If your MFC extension DLL will be linked implicitly to the application, the call to `AfxTermExtensionModule` is not necessary.  
  
Applications that explicitly link to MFC extension DLLs must call **AfxTermExtensionModule** when freeing the DLL. They should also use `AfxLoadLibrary` and `AfxFreeLibrary` (instead of the Win32 functions **LoadLibrary** and **FreeLibrary**) if the application uses multiple threads. Using `AfxLoadLibrary` and `AfxFreeLibrary` ensures that the startup and shutdown code that executes when the MFC extension DLL is loaded and unloaded does not corrupt the global MFC state.  
  
Because the MFCx0.dll is fully initialized by the time `DllMain` is called, you can allocate memory and call MFC functions within `DllMain` (unlike the 16-bit version of MFC).  
  
Extension DLLs can take care of multithreading by handling the **DLL_THREAD_ATTACH** and **DLL_THREAD_DETACH** cases in the `DllMain` function. These cases are passed to `DllMain` when threads attach and detach from the DLL. Calling [TlsAlloc](http://msdn.microsoft.com/library/windows/desktop/ms686801) when a DLL is attaching allows the DLL to maintain thread local storage (TLS) indexes for every thread attached to the DLL.  
  
Note that the header file Afxdllx.h contains special definitions for structures used in MFC extension DLLs, such as the definition for `AFX_EXTENSION_MODULE` and **CDynLinkLibrary**. You should include this header file in your MFC extension DLL.  
  
> [!NOTE]
>  It is important that you neither define nor undefine any of the `_AFX_NO_XXX` macros in Stdafx.h. These macros exist only for the purpose of checking whether a particular target platform supports that feature or not. You can write your program to check these macros (for example, `#ifndef _AFX_NO_OLE_SUPPORT`), but your program should never define or undefine these macros.  
  
 A sample initialization function that handles multithreading is included in [Using Thread Local Storage in a Dynamic-Link Library](http://msdn.microsoft.com/library/windows/desktop/ms686997) in the [!INCLUDE[winsdkshort](../atl-mfc-shared/reference/includes/winsdkshort_md.md)]. Note that the sample contains an entry-point function called `LibMain`, but you should name this function `DllMain` so that it works with the MFC and C run-time libraries.  
  
## See Also  
  
[DLLs in Visual C++](../build/dlls-in-visual-cpp.md)  
[DllMain entry point](https://msdn.microsoft.com/library/windows/desktop/ms682583.aspx)  
[Dynamic-link Library Best Practices](https://msdn.microsoft.com/library/windows/desktop/dn633971.aspx)  