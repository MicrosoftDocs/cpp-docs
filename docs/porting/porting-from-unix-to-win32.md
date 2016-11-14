---
title: "Porting from UNIX to Win32 | Microsoft Docs"
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
  - "APIs [C++], porting to Win32"
  - "Windows API [C++], migrating from UNIX"
  - "migration [C++]"
  - "UNIX [C++], porting to Win32"
  - "porting to Win32 [C++], from UNIX"
  - "porting to Win32 [C++]"
  - "Win32 applications [C++], migrating from UNIX"
ms.assetid: 3837e4fe-3f96-4f24-b2a1-7be94718a881
caps.latest.revision: 15
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
# Porting from UNIX to Win32
When migrating applications from UNIX to Windows, you have several options:  
  
-   Using UNIX libraries to port applications from UNIX to Win32  
  
-   Porting applications from UNIX to Win32 natively  
  
-   Running UNIX applications on Windows using the POSIX subsystem  
  
## UNIX libraries  
 One option UNIX programmers normally consider is using third-party UNIX-like libraries to let their UNIX code compile as a Win32 executable. Several commercial (and at least one public domain) libraries do this. This is an option for some applications. The advantage of these porting libraries is that they minimize the initial porting effort. The main disadvantage, for a competitive software product, is that a native Win32 port of an application will generally be faster and will inevitably have more functionality. It can be awkward for the application to step outside of its UNIX shell if it needs to make Win32 calls to get more power from Windows.  
  
 The following list provides Microsoft and third-party resources for porting and supporting UNIX migration to Visual C++:  
  
### UNIX Migration Guides  
 The UNIX Custom Application Migration Guide provides technical help on code migration from UNIX to the Win32 environment.  
  
 [http://go.microsoft.com/fwlink/?LinkId=95428](http://go.microsoft.com/fwlink/?LinkId=95428)  
  
 The Unix Migration Project Guide supplements the UNIX Custom Application Migration Guide by providing high-level help on migrating substantial projects from UNIX to Win32. The Guide provides advice on issues to consider at each stage of project migration. The Guide may be downloaded from:  
  
 [http://go.microsoft.com/fwlink/?linkid=20012](http://go.microsoft.com/fwlink/?linkid=20012)  
  
### Microsoft Windows Services for UNIX (SFU)  
 Microsoft Windows Services for UNIX (SFU) provides a full range of cross-platform services for integrating Windows into existing UNIX-based environments. Services for UNIX provides file sharing, remote access and administration, password synchronization, common directory management, a common set of utilities, and a shell.  
  
 [Windows Services for UNIX](http://www.microsoft.com/downloads/details.aspx?FamilyID=896c9688-601b-44f1-81a4-02878ff11778&displaylang=en)  
  
### InteropSystems.com  
 [http://www.interopsystems.com/](http://www.interopsystems.com/)  
  
 A third party site for a company providing software supporting porting UNIX to Win32.  
  
### C++ Boost Web Site  
 [http://boost.sourceforge.net/regression-logs/](http://boost.sourceforge.net/regression-logs/)  
  
 [http://boost.sourceforge.net/boost-build2/](http://boost.sourceforge.net/boost-build2/)  
  
## Porting UNIX applications directly to Win32  
 Another option is porting UNIX applications directly to Win32. Using ANSI C/C++ libraries, and commercial C compiler libraries, many of the traditional system calls relied on by UNIX applications are available in Win32 applications.  
  
 The output model of **stdio**-based applications does not need to be changed, since the Win32 console APIs mimic the **stdio** model, and versions of *curses* exist that use the Win32 console APIs. For more information, see [SetConsoleCursorPosition](http://msdn.microsoft.com/library/windows/desktop/ms686025).  
  
 Berkeley socket-based applications need very few changes to work as Win32 applications. The Windows Sockets interface was designed for portability with BSD sockets, with minimal changes that are noted in the introductory sections of the WinSock specification.  
  
 Windows supports DCE-compliant RPC, so RPC-based applications are easily usable. See [RPC Functions](http://msdn.microsoft.com/library/windows/desktop/aa378623).  
  
 One of the largest areas of difference is in the process model. UNIX has **fork**; Win32 does not. Depending on the use of **fork** and the code base, Win32 has two APIs that can be used: **CreateProcess** and `CreateThread`. A UNIX application that forks multiple copies of itself can be reworked in Win32 to have either multiple processes or a single process with multiple threads. If multiple processes are used, there are multiple methods of IPC that can be used to communicate between the processes (and perhaps to update the code and data of the new process to be like the parent, if the functionality that **fork** provides is needed). For more on IPC, see [Interprocess Communications](http://msdn.microsoft.com/library/windows/desktop/aa365574).  
  
 Windows and UNIX graphical models are very different. UNIX uses the X Window System GUI, while Windows uses GDI. Though similar in concept, there is no simple mapping of the X API to the GDI API. However, OpenGL support is available for migrating UNIX OpenGL-based applications. And there are X clients and X servers for Windows. See [Device Contexts](http://msdn.microsoft.com/library/windows/desktop/dd183553) for information on GDI.  
  
 Basic UNIX applications, including many CGI applications, should port easily to Visual C++ running on Windows. Functions like **open**, `fopen`, **read**, **write** and others are available in the Visual C++ run-time library. Also, there is a one-to-one mapping between C UNIX APIs and Win32 APIs: **open** to **CreateFile**, **read** to **ReadFile**, **write** to **WriteFile**, `ioctl` to **DeviceIOControl**, **close** to **CloseFile**, and so on.  
  
## Windows POSIX subsystem  
 Another option UNIX programmers look at is the Windows POSIX subsystem. However, it only supports POSIX 1003.1, which was the only POSIX version standardized when Windows NT was created. Since then, there has been little demand for extending this subsystem, because most applications have been converted to Win32. The 1003.1 system is of limited interest for fully featured applications, because it does not include many capabilities (such as those in 1003.2, network support, and so on). Full featured applications run under the Windows POSIX subsystem do not have access to Windows features available to Win32 applications, such as memory-mapped files, networking, and graphics. Applications such as VI, LS, and GREP are the main targets for the Windows POSIX subsystem.  
  
## See Also  
 [Porting Programs](http://msdn.microsoft.com/en-us/c36c44b3-5a9b-4bb4-9b7a-469aa770ed00)   
 [UNIX](../c-runtime-library/unix.md)   
 [Inference Rules](../build/inference-rules.md)