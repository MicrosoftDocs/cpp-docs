---
title: "Run-Time Library Behavior | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
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
# Run-Time Library Behavior
The C/C++ run-time library code performs the DLL startup sequence, eliminating the need to link with a separate module as was necessary in Windows 3.x. Included in the C/C++ run-time library code is the DLL entry-point function called **_DllMainCRTStartup**. The **_DllMainCRTStartup** function does several things, including calling **_CRT_INIT**, which initializes the C/C++ run-time library and invokes C++ constructors on static, non-local variables. Without this function, the run-time library would be left in an uninitialized state. **_CRT_INIT** is available for both a statically linked CRT or linking to the CRT DLL Msvcr90.dll, from a user DLL.  
  
 While it is possible to specify another entry-point function using the /ENTRY: linker option, it is not recommended because your entry-point function would have to duplicate everything that **_DllMainCRTStartup** does. When building DLLs in Visual C++, **_DllMainCRTStartup** is linked in automatically and you do not need to specify an entry-point function using the /ENTRY: linker option.  
  
 In addition to initializing the C run-time library, **_DllMainCRTStartup** calls a function called `DllMain`. Depending on the kind of DLL you are building, Visual C++ provides `DllMain` for you and it gets linked in so that **_DllMainCRTStartup** always has something to call. In this way, if you do not need to initialize your DLL, there is nothing special you have to do when building your DLL. If you need to initialize your DLL, where you add your code depends on the kind of DLL you are writing. For more information, see [Initializing a DLL](../build/initializing-a-dll.md).  
  
 The C/C++ run-time library code calls constructors and destructors on static, non-local variables. For example, in the following DLL source code, `Equus` and `Sugar` are two static, non-local objects of class `CHorse`, defined in Horses.h. There is no function in source code that contains calls to a constructor function for `CHorse` or to the destructor function because these objects are defined outside of any function. Therefore, calls to these constructors and destructors must be performed by the run-time code. The run-time library code for applications also performs this function.  
  
```  
#include "horses.h"  
  
CHorse  Equus( ARABIAN, MALE );  
CHorse  Sugar( THOROUGHBRED, FEMALE );  
  
BOOL    WINAPI   DllMain (HANDLE hInst,   
                            ULONG ul_reason_for_call,  
                            LPVOID lpReserved)  
...  
```  
  
 Each time a new process attempts to use the DLL, the operating system creates a separate copy of the DLL's data: this is called process attach. The run-time library code for the DLL calls the constructors for all of the global objects, if any, and then calls the `DllMain` function with process attach selected. The opposite situation is process detach: the run-time library code calls `DllMain` with process detach selected and then calls a list of termination functions, including `atexit` functions, destructors for the global objects, and destructors for the static objects. Note that the order of events in process attach is the reverse of that in process detach.  
  
 The run-time library code is also called during thread attach and thread detach, but the run-time code does no initialization or termination on its own.  
  
## What do you want to do?  
  
-   [Initialize a DLL](../build/initializing-a-dll.md)  
  
## See Also  
 [DLLs in Visual C++](../build/dlls-in-visual-cpp.md)