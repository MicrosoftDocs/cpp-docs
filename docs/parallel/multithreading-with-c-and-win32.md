---
title: "Multithreading with C and Win32 | Microsoft Docs"
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
  - "Windows API [C++], multithreading"
  - "multithreading [C++], C and Win32"
  - "Visual C, multithreading"
  - "Win32 applications [C++], multithreading"
  - "threading [C++], C and Win32"
  - "Win32 [C++], multithreading"
  - "threading [C]"
ms.assetid: 67cdc99e-1ad9-452b-a042-ed246b70040e
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
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
# Multithreading with C and Win32
Microsoft Visual C++ provides support for creating multithread applications with Microsoft Windows: Windows XP, Windows 2000, Windows NT, Windows Me, and Windows 98. You should consider using more than one thread if your application needs to manage multiple activities, such as simultaneous keyboard and mouse input. One thread can process keyboard input while a second thread filters mouse activities. A third thread can update the display screen based on data from the mouse and keyboard threads. At the same time, other threads can access disk files or get data from a communications port.  
  
 With Visual C++, there are two ways to program with multiple threads: use the Microsoft Foundation Class (MFC) library or the C run-time library and the Win32 API. For information about creating multithread applications with MFC, see [Multithreading with C++ and MFC](../parallel/multithreading-with-cpp-and-mfc.md) after reading the following topics about multithreading in C.  
  
 These topics explain the features in Visual C++ that support the creation of multithread programs.  
  
## What do you want to know more about?  
  
-   [What multithreading is about](../parallel/multithread-programs.md)  
  
-   [Library support for multithreading](../parallel/library-support-for-multithreading.md)  
  
-   [Include files for multithreading](../parallel/include-files-for-multithreading.md)  
  
-   [C Run-Time library functions for thread control](../parallel/c-run-time-library-functions-for-thread-control.md)  
  
-   [Sample multithread program in C](../parallel/sample-multithread-c-program.md)  
  
-   [Writing a Multithread Win32 Program](../parallel/writing-a-multithreaded-win32-program.md)  
  
-   [Compiling and linking multithread programs](../parallel/compiling-and-linking-multithread-programs.md)  
  
-   [Avoiding problem areas with multithread programs](../parallel/avoiding-problem-areas-with-multithread-programs.md)  
  
-   [Thread local storage (TLS)](../parallel/thread-local-storage-tls.md)  
  
## See Also  
 [Multithreading Support for Older Code (Visual C++)](../parallel/multithreading-support-for-older-code-visual-cpp.md)