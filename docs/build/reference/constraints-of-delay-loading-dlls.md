---
title: "Constraints of Delay Loading DLLs | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "constraints [C++], delayed loading of DLLs"
  - "delayed loading of DLLs, constraints"
  - "DLLs [C++], constraints"
ms.assetid: 0097ff65-550f-4a4e-8ac3-39bf6404f926
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
# Constraints of Delay Loading DLLs
There are constraints regarding the delay loading of imports.  
  
-   Imports of data cannot be supported. A workaround is to explicitly handle the data import yourself using `LoadLibrary` (or `GetModuleHandle` after you know the delay-load helper has loaded the DLL) and `GetProcAddress`.  
  
-   Delay loading Kernel32.dll is not supported. This DLL is necessary for the delay-load helper routines to perform the delay loading.  
  
-   [Binding](../../build/reference/binding-imports.md) of entry points that are forwarded is not supported.  
  
-   Delay loading of a DLL may not result in the same behavior of the process if there are per-process initializations that occur in the entry point of the delay-loaded DLL. Other cases include static TLS (thread local storage), declared using [__declspec(thread)](../../cpp/thread.md), which is not handled when the DLL is loaded via `LoadLibrary`. Dynamic TLS, using `TlsAlloc`, `TlsFree`, `TlsGetValue`, and `TlsSetValue`, is still available for use in either static or delay-loaded DLLs.  
  
-   Static (global) function pointers should be reinitialized to imported functions after the first call to the function. This is because the first use of the function pointer will point to the thunk.  
  
-   There is no way currently to delay the loading of only specific procedures from a DLL while using the normal import mechanism.  
  
-   Custom calling conventions (such as using condition codes on x86 architectures) are not supported. Also, the floating-point registers are not saved on any platform. If your custom helper routine or hook routines use floating-point types, they need to completely save and restore the floating-point state on machines with register calling conventions with floating-point parameters. Be careful about delay loading the CRT DLL if you call CRT functions that take floating-point parameters on a numeric data processor (NDP) stack in the help function.  
  
## See Also  
 [Linker Support for Delay-Loaded DLLs](../../build/reference/linker-support-for-delay-loaded-dlls.md)   
 [LoadLibrary function](http://msdn.microsoft.com/library/windows/desktop/ms684175.aspx)   
 [GetModuleHandle function](http://msdn.microsoft.com/library/windows/desktop/ms683199.aspx)   
 [GetProcAddress function](http://msdn.microsoft.com/library/windows/desktop/ms683212.aspx)   
 [TlsAlloc function](http://msdn.microsoft.com/library/windows/desktop/ms686801.aspx)   
 [TlsFree function](http://msdn.microsoft.com/library/windows/desktop/ms686804.aspx)   
 [TlsGetValue function](http://msdn.microsoft.com/library/windows/desktop/ms686812.aspx)   
 [TlsSetValue function](http://msdn.microsoft.com/library/windows/desktop/ms686818.aspx)