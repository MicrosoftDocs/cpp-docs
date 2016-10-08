---
title: "LoadLibrary and AfxLoadLibrary"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: b4535d19-6243-4146-a31a-a5cca4c7c9e3
caps.latest.revision: 16
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# LoadLibrary and AfxLoadLibrary
Processes call [LoadLibrary](http://go.microsoft.com/fwlink/p/?LinkID=259187) (or [AfxLoadLibrary](../Topic/AfxLoadLibrary.md)) to explicitly link to a DLL. If the function succeeds, it maps the specified DLL into the address space of the calling process and returns a handle to the DLL that can be used with other functions in explicit linking—for example, `GetProcAddress` and `FreeLibrary`.  
  
 `LoadLibrary` attempts to locate the DLL by using the same search sequence that is used for implicit linking. If the system cannot find the DLL or if the entry-point function returns FALSE, `LoadLibrary` returns NULL. If the call to `LoadLibrary` specifies a DLL module that is already mapped into the address space of the calling process, the function returns a handle of the DLL and increments the reference count of the module.  
  
 If the DLL has an entry-point function, the operating system calls the function in the context of the thread that called `LoadLibrary`. The entry-point function is not called if the DLL is already attached to the process because of a previous call to `LoadLibrary` that has no corresponding call to the `FreeLibrary` function.  
  
 For MFC applications that load extension DLLs, we recommend that you use `AfxLoadLibrary` instead of `LoadLibrary`. `AfxLoadLibrary` handles thread synchronization before you call `LoadLibrary`. The interface (function prototype) to `AfxLoadLibrary` is the same as `LoadLibrary`.  
  
 If Windows cannot load the DLL, the process can attempt to recover from the error. For example, the process could notify the user of the error and ask the user to specify another path to the DLL.  
  
> [!IMPORTANT]
>  If the code is to run under Windows NT 4, Windows 2000, or Windows XP (prior to SP1), make sure to specify the full path of any DLLs. On these operating systems, the current directory is searched first when files are loaded. If you do not qualify the path of the file, a file that is not the intended one might be loaded.  
  
## What do you want to do?  
  
-   [Link implicitly](../VS_visualcpp/Linking-Implicitly.md)  
  
-   [Determine which linking method to use](../VS_visualcpp/Determining-Which-Linking-Method-to-Use.md)  
  
## What do you want to know more about?  
  
-   [The search path that is used by Windows to locate a DLL](../VS_visualcpp/Search-Path-Used-by-Windows-to-Locate-a-DLL.md)  
  
-   [FreeLibrary and AfxFreeLibrary](../VS_visualcpp/FreeLibrary-and-AfxFreeLibrary.md)  
  
-   [GetProcAddress](../VS_visualcpp/GetProcAddress.md)  
  
## See Also  
 [DLLs in Visual C++](../VS_visualcpp/DLLs-in-Visual-C--.md)   
 [LoadLibrary](http://go.microsoft.com/fwlink/p/?LinkID=259187)   
 [AfxLoadLibrary](../Topic/AfxLoadLibrary.md)