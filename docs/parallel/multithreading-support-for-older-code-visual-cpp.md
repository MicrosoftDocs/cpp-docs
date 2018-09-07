---
title: "Multithreading Support for Older Code (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "08/27/2018"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["threading [C++]", "multiple threads", "concurrent programming [C++]", "programming [C++], multithreaded", "multithreading [C++], about multithreading", "multiple concurrent threads", "multithreading [C++]"]
ms.assetid: 24425b1f-5031-4c6b-aac7-017115a40e7c
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Multithreading Support for Older Code (Visual C++)
Visual C++ allows you to have multiple concurrent threads of execution running simultaneously. With multithreading, you can spin off background tasks, manage simultaneous streams of input, manage a user interface, and much more.  
  
## In This Section  
 
[Multithreading with C and Win32](multithreading-with-c-and-win32.md)  
Provides support for creating multithread applications with Microsoft Windows  
  
[Multithreading with C++ and MFC](multithreading-with-cpp-and-mfc.md)  
Describes what processes and threads are and what the MFC approach to multithreading is.  
  
[Multithreading and Locales](multithreading-and-locales.md)  
Discusses issues that arise when using the locale functionality of both the C Runtime Library and the C++ Standard Library in a multithreaded application.  
  
## Related Sections  
 
[CWinThread](../mfc/reference/cwinthread-class.md)  
Represents a thread of execution within an application.  
  
[CSyncObject](../mfc/reference/csyncobject-class.md)  
Describes a pure virtual class that provides functionality common to the synchronization objects in Win32.  
  
[CSemaphore](../mfc/reference/csemaphore-class.md)  
Represents a semaphore, which is a synchronization object that allows a limited number of threads in one or more processes to access a resource.  
  
[CMutex](../mfc/reference/cmutex-class.md)  
Represents a mutex, which is a synchronization object that allows one thread mutually exclusive access to a resource.  
  
[CCriticalSection](../mfc/reference/ccriticalsection-class.md)  
Represents a critical section, which is a synchronization object that allows one thread at a time to access a resource or section of code.  
  
[CEvent](../mfc/reference/cevent-class.md)  
Represents an event, which is a synchronization object that allows one thread to notify another that an event has occurred.  
  
[CMultiLock](../mfc/reference/cmultilock-class.md)  
Represents the access-control mechanism used in controlling access to resources in a multithreaded program.  
  
[CSingleLock](../mfc/reference/csinglelock-class.md)  
Represents the access-control mechanism used in controlling access to a resource in a multithreaded program.  