---
title: "FreeLibrary and AfxFreeLibrary"
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
ms.assetid: 4a48d290-3971-43e9-8e97-ba656cd0c8f8
caps.latest.revision: 11
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# FreeLibrary and AfxFreeLibrary
Processes that explicitly link to a DLL call the [FreeLibrary](http://go.microsoft.com/fwlink/p/?LinkID=259188) function when the DLL module is no longer needed. This function decrements the module's reference count and, if the reference count is zero, unmaps it from the address space of the process.  
  
 In an MFC application, use [AfxFreeLibrary](../Topic/AfxFreeLibrary.md) instead of `FreeLibrary` to unload an extension DLL. The interface (function prototype) for `AfxFreeLibrary` is the same as `FreeLibrary`.  
  
## What do you want to do?  
  
-   [Link implicitly](../VS_visualcpp/Linking-Implicitly.md)  
  
-   [Determine which linking method to use](../VS_visualcpp/Determining-Which-Linking-Method-to-Use.md)  
  
## What do you want to know more about?  
  
-   [LoadLibrary and AfxLoadLibrary](../VS_visualcpp/LoadLibrary-and-AfxLoadLibrary.md)  
  
-   [GetProcAddress](../VS_visualcpp/GetProcAddress.md)  
  
## See Also  
 [DLLs in Visual C++](../VS_visualcpp/DLLs-in-Visual-C--.md)   
 [FreeLibrary](http://go.microsoft.com/fwlink/p/?LinkID=259188)   
 [AfxFreeLibrary](../Topic/AfxFreeLibrary.md)