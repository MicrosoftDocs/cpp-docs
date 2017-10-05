---
title: "FreeLibrary and AfxFreeLibrary | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["FreeLibrary", "AfxFreeLibrary"]
dev_langs: ["C++"]
helpviewer_keywords: ["extension DLLs [C++], unloading", "AfxFreeLibrary method", "unloading DLLs", "FreeLibrary method", "DLLs [C++], linking", "explicit linking [C++]", "DLLs [C++], unloading"]
ms.assetid: 4a48d290-3971-43e9-8e97-ba656cd0c8f8
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: ["cs-cz", "pl-pl", "pt-br", "tr-tr"]
---
# FreeLibrary and AfxFreeLibrary
Processes that explicitly link to a DLL call the [FreeLibrary](http://go.microsoft.com/fwlink/p/?LinkID=259188) function when the DLL module is no longer needed. This function decrements the module's reference count and, if the reference count is zero, unmaps it from the address space of the process.  
  
 In an MFC application, use [AfxFreeLibrary](../mfc/reference/application-information-and-management.md#afxfreelibrary) instead of `FreeLibrary` to unload an MFC extension DLL. The interface (function prototype) for `AfxFreeLibrary` is the same as `FreeLibrary`.  
  
## What do you want to do?  
  
-   [How to link implicitly to a DLL](../build/linking-an-executable-to-a-dll.md#linking-implicitly)  
  
-   [Determine which linking method to use](../build/linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use)  
  
## What do you want to know more about?  
  
-   [LoadLibrary and AfxLoadLibrary](../build/loadlibrary-and-afxloadlibrary.md)  
  
-   [GetProcAddress](../build/getprocaddress.md)  
  
## See Also  
 [DLLs in Visual C++](../build/dlls-in-visual-cpp.md)   
 [FreeLibrary](http://go.microsoft.com/fwlink/p/?LinkID=259188)   
 [AfxFreeLibrary](../mfc/reference/application-information-and-management.md#afxfreelibrary)