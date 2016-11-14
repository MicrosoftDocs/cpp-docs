---
title: "Search Path Used by Windows to Locate a DLL | Microsoft Docs"
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
  - "searching [C++], DLLs"
  - "DLLs [C++], Windows search path"
  - "Windows [C++], DLL search path"
  - "known DLL searches [C++]"
  - "locating DLLs"
  - "finding DLLs"
  - "search paths [C++]"
ms.assetid: 84bfb380-ad7b-4962-b2d0-51b19a45f1bb
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
  
-   [Link implicitly](../build/linking-implicitly.md)  
  
-   [Link explicitly](../build/linking-explicitly.md)  
  
-   [Determine which linking method to use](../build/determining-which-linking-method-to-use.md)  
  
## See Also  
 [DLLs in Visual C++](../build/dlls-in-visual-cpp.md)