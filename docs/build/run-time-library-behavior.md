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
  
When linked into a DLL, the Visual C++ run-time library (VCRuntime) code performs the DLL startup sequence. The VCRuntime code uses an internal DLL entry-point function called `_DllMainCRTStartup`. The `_DllMainCRTStartup` function does several things; it calls internal functions to initialize stack checking, initializes the C run-time library (CRT), and it invokes C++ constructors on static, non-local variables. Without this function, the CRT would be left in an uninitialized state. This VCRuntime internal initialization routine is called whether your DLL uses a statically linked CRT or a dynamically linked CRT DLL. When building DLLs in Visual C++, `_DllMainCRTStartup` is linked in automatically and you do not need to specify an entry-point function using the /ENTRY: linker option.  
  
While it is possible to specify another entry-point function using the /ENTRY: linker option, it is not recommended because your entry-point function would have to duplicate everything that `_DllMainCRTStartup` does. You can use the `_CRT_INIT` function to perform the CRT initialization alone, but this is not sufficient to support the /GS stack checking option, static initializers, or the use of MFC or ATL libraries.   
  
In addition to initializing the CRT, `_DllMainCRTStartup` calls a function called `DllMain`. Depending on the kind of DLL you are building, Visual C++ provides `DllMain` for you and it gets linked in so that `_DllMainCRTStartup` always has something to call. In this way, if you do not need to initialize your DLL, there is nothing special you have to do when building your DLL. If you need to initialize your DLL, where you add your code depends on the kind of DLL you are writing. For more information, see [Initializing a DLL](../build/initializing-a-dll.md).  
  
The VCRuntime startup code calls constructors and destructors on static, non-local variables. For example, in the following DLL source code, `Equus` and `Sugar` are two static, non-local objects of class `CHorse`, defined in Horses.h. There is no function in source code that contains calls to a constructor function for `CHorse` or to the destructor function because these objects are defined outside of any function. Therefore, calls to these constructors and destructors must be performed by the VCRuntime startup code. The VCRuntime startup code for applications also performs this function.  
  
```C  
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
  
## What do you want to do?  
  
-   [Initialize a DLL](../build/initializing-a-dll.md)  
  
## See Also  
 [DLLs in Visual C++](../build/dlls-in-visual-cpp.md)