---
title: "Multithreading with C and Win32"
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
ms.assetid: 67cdc99e-1ad9-452b-a042-ed246b70040e
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
# Multithreading with C and Win32
Microsoft Visual C++ provides support for creating multithread applications with Microsoft Windows: Windows XP, Windows 2000, Windows NT, Windows Me, and Windows 98. You should consider using more than one thread if your application needs to manage multiple activities, such as simultaneous keyboard and mouse input. One thread can process keyboard input while a second thread filters mouse activities. A third thread can update the display screen based on data from the mouse and keyboard threads. At the same time, other threads can access disk files or get data from a communications port.  
  
 With Visual C++, there are two ways to program with multiple threads: use the Microsoft Foundation Class (MFC) library or the C run-time library and the Win32 API. For information about creating multithread applications with MFC, see [Multithreading with C++ and MFC](../VS_visualcpp/Multithreading-with-C---and-MFC.md) after reading the following topics about multithreading in C.  
  
 These topics explain the features in Visual C++ that support the creation of multithread programs.  
  
## What do you want to know more about?  
  
-   [What multithreading is about](../VS_visualcpp/Multithread-Programs.md)  
  
-   [Library support for multithreading](../VS_visualcpp/Library-Support-for-Multithreading.md)  
  
-   [Include files for multithreading](../VS_visualcpp/Include-Files-for-Multithreading.md)  
  
-   [C Run-Time library functions for thread control](../VS_visualcpp/C-Run-Time-Library-Functions-for-Thread-Control.md)  
  
-   [Sample multithread program in C](../VS_visualcpp/Sample-Multithread-C-Program.md)  
  
-   [Writing a Multithread Win32 Program](../VS_visualcpp/Writing-a-Multithreaded-Win32-Program.md)  
  
-   [Compiling and linking multithread programs](../VS_visualcpp/Compiling-and-Linking-Multithread-Programs.md)  
  
-   [Avoiding problem areas with multithread programs](../VS_visualcpp/Avoiding-Problem-Areas-with-Multithread-Programs.md)  
  
-   [Thread local storage (TLS)](../VS_visualcpp/Thread-Local-Storage--TLS-.md)  
  
## See Also  
 [Multithreading Support for Older Code (Visual C++)](../VS_visualcpp/Multithreading-Support-for-Older-Code--Visual-C---.md)