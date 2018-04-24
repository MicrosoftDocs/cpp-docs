---
title: "FreeLibrary and AfxFreeLibrary | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "FreeLibrary"
  - "AfxFreeLibrary"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "extension DLLs [C++], unloading"
  - "AfxFreeLibrary method"
  - "unloading DLLs"
  - "FreeLibrary method"
  - "DLLs [C++], linking"
  - "explicit linking [C++]"
  - "DLLs [C++], unloading"
ms.assetid: 4a48d290-3971-43e9-8e97-ba656cd0c8f8
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# FreeLibrary and AfxFreeLibrary
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [FreeLibrary and AfxFreeLibrary](https://docs.microsoft.com/cpp/build/freelibrary-and-afxfreelibrary).  
  
  
Processes that explicitly link to a DLL call the [FreeLibrary](http://go.microsoft.com/fwlink/p/?LinkID=259188) function when the DLL module is no longer needed. This function decrements the module's reference count and, if the reference count is zero, unmaps it from the address space of the process.  
  
 In an MFC application, use [AfxFreeLibrary](../Topic/AfxFreeLibrary.md) instead of `FreeLibrary` to unload an extension DLL. The interface (function prototype) for `AfxFreeLibrary` is the same as `FreeLibrary`.  
  
## What do you want to do?  
  
-   [Link implicitly](../build/linking-implicitly.md)  
  
-   [Determine which linking method to use](../build/determining-which-linking-method-to-use.md)  
  
## What do you want to know more about?  
  
-   [LoadLibrary and AfxLoadLibrary](../build/loadlibrary-and-afxloadlibrary.md)  
  
-   [GetProcAddress](../build/getprocaddress.md)  
  
## See Also  
 [DLLs in Visual C++](../build/dlls-in-visual-cpp.md)   
 [FreeLibrary](http://go.microsoft.com/fwlink/p/?LinkID=259188)   
 [AfxFreeLibrary](../Topic/AfxFreeLibrary.md)

