---
title: "Search Path Used by Windows to Locate a DLL"
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
ms.assetid: 84bfb380-ad7b-4962-b2d0-51b19a45f1bb
caps.latest.revision: 8
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
# Search Path Used by Windows to Locate a DLL
With both implicit and explicit linking, Windows first searches for "known DLLs", such as Kernel32.dll and User32.dll. Windows then searches for the DLLs in the following sequence:  
  
1.  The directory where the executable module for the current process is located.  
  
2.  The current directory.  
  
3.  The Windows system directory. The **GetSystemDirectory** function retrieves the path of this directory.  
  
4.  The Windows directory. The **GetWindowsDirectory** function retrieves the path of this directory.  
  
5.  The directories listed in the PATH environment variable.  
  
    > [!NOTE]
    >  The LIBPATH environment variable is not used.  
  
## What do you want to do?  
  
-   [Link implicitly](../VS_visualcpp/Linking-Implicitly.md)  
  
-   [Link explicitly](../VS_visualcpp/Linking-Explicitly.md)  
  
-   [Determine which linking method to use](../VS_visualcpp/Determining-Which-Linking-Method-to-Use.md)  
  
## See Also  
 [DLLs in Visual C++](../VS_visualcpp/DLLs-in-Visual-C--.md)