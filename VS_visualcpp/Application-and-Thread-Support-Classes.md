---
title: "Application and Thread Support Classes"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 3c1d14fd-c35c-48f1-86ce-1e0f9a32c36d
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
# Application and Thread Support Classes
Each application has one and only one application object; this object coordinates other objects in the running program and is derived from `CWinApp`.  
  
 The Microsoft Foundation Class (MFC) Library supports multiple threads of execution within an application. All applications must have at least one thread; the thread used by your `CWinApp` object is this primary thread.  
  
 `CWinThread` encapsulates a portion of the operating system's threading capabilities. To make using multiple threads easier, MFC also provides synchronization object classes to provide a C++ interface to Win32 synchronization objects.  
  
## Application and Thread Classes  
 [CWinApp](../VS_visualcpp/CWinApp-Class.md)  
 Encapsulates the code to initialize, run, and terminate the application. You will derive your application object from this class.  
  
 [CWinThread](../VS_visualcpp/CWinThread-Class.md)  
 The base class for all threads. Use directly, or derive a class from `CWinThread` if your thread performs user-interface functions. `CWinApp` is derived from `CWinThread`.  
  
## Synchronization Object Classes  
 [CSyncObject](../VS_visualcpp/CSyncObject-Class.md)  
 Base class of the synchronization object classes.  
  
 [CCriticalSection](../VS_visualcpp/CCriticalSection-Class.md)  
 A synchronization class that allows only one thread within a single process to access an object.  
  
 [CSemaphore](../VS_visualcpp/CSemaphore-Class.md)  
 A synchronization class that allows between one and a specified maximum number of simultaneous accesses to an object.  
  
 [CMutex](../VS_visualcpp/CMutex-Class.md)  
 A synchronization class that allows only one thread within any number of processes to access an object.  
  
 [CEvent](../VS_visualcpp/CEvent-Class.md)  
 A synchronization class that notifies an application when an event has occurred.  
  
 [CSingleLock](../VS_visualcpp/CSingleLock-Class.md)  
 Used in member functions of thread-safe classes to lock on one synchronization object.  
  
 [CMultiLock](../VS_visualcpp/CMultiLock-Class.md)  
 Used in member functions of thread-safe classes to lock on one or more synchronization objects from an array of synchronization objects.  
  
## Related Classes  
 [CCommandLineInfo](../VS_visualcpp/CCommandLineInfo-Class.md)  
 Parses the command line with which your program was started.  
  
 [CWaitCursor](../VS_visualcpp/CWaitCursor-Class.md)  
 Puts a wait cursor on the screen. Used during lengthy operations.  
  
 [CDockState](../VS_visualcpp/CDockState-Class.md)  
 Handles persistent storage of docking state data for control bars.  
  
 [CRecentFileList](../VS_visualcpp/CRecentFileList-Class.md)  
 Maintains the most recently used (MRU) file list.  
  
## See Also  
 [Class Overview](../VS_visualcpp/Class-Library-Overview.md)