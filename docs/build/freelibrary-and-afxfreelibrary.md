---
title: "FreeLibrary and AfxFreeLibrary"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
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
caps.latest.revision: 11
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# FreeLibrary and AfxFreeLibrary
Processes that explicitly link to a DLL call the [FreeLibrary](http://go.microsoft.com/fwlink/p/?LinkID=259188) function when the DLL module is no longer needed. This function decrements the module's reference count and, if the reference count is zero, unmaps it from the address space of the process.  
  
 In an MFC application, use [AfxFreeLibrary](../Topic/AfxFreeLibrary.md) instead of `FreeLibrary` to unload an extension DLL. The interface (function prototype) for `AfxFreeLibrary` is the same as `FreeLibrary`.  
  
## What do you want to do?  
  
-   [Link implicitly](../build/linking-implicitly.md)  
  
-   [Determine which linking method to use](../build/determining-which-linking-method-to-use.md)  
  
## What do you want to know more about?  
  
-   [LoadLibrary and AfxLoadLibrary](../build/loadlibrary-and-afxloadlibrary.md)  
  
-   [GetProcAddress](../build/getprocaddress.md)  
  
## See Also  
 [DLLs in Visual C++](../build/dlls-in-visual-c--.md)   
 [FreeLibrary](http://go.microsoft.com/fwlink/p/?LinkID=259188)   
 [AfxFreeLibrary](../Topic/AfxFreeLibrary.md)