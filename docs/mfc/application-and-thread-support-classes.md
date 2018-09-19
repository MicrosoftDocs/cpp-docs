---
title: "Application and Thread Support Classes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
f1_keywords: ["vc.classes.support"]
dev_langs: ["C++"]
helpviewer_keywords: ["application objects [MFC], thread support classes", "lock classes [MFC]", "thread support classes [MFC]", "threading [MFC]", "synchronization classes [MFC], multithreading", "application support classes [MFC]"]
ms.assetid: 3c1d14fd-c35c-48f1-86ce-1e0f9a32c36d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Application and Thread Support Classes

Each application has one and only one application object; this object coordinates other objects in the running program and is derived from `CWinApp`.

The Microsoft Foundation Class (MFC) Library supports multiple threads of execution within an application. All applications must have at least one thread; the thread used by your `CWinApp` object is this primary thread.

`CWinThread` encapsulates a portion of the operating system's threading capabilities. To make using multiple threads easier, MFC also provides synchronization object classes to provide a C++ interface to Win32 synchronization objects.

## Application and Thread Classes

[CWinApp](../mfc/reference/cwinapp-class.md)<br/>
Encapsulates the code to initialize, run, and terminate the application. You will derive your application object from this class.

[CWinThread](../mfc/reference/cwinthread-class.md)<br/>
The base class for all threads. Use directly, or derive a class from `CWinThread` if your thread performs user-interface functions. `CWinApp` is derived from `CWinThread`.

## Synchronization Object Classes

[CSyncObject](../mfc/reference/csyncobject-class.md)<br/>
Base class of the synchronization object classes.

[CCriticalSection](../mfc/reference/ccriticalsection-class.md)<br/>
A synchronization class that allows only one thread within a single process to access an object.

[CSemaphore](../mfc/reference/csemaphore-class.md)<br/>
A synchronization class that allows between one and a specified maximum number of simultaneous accesses to an object.

[CMutex](../mfc/reference/cmutex-class.md)<br/>
A synchronization class that allows only one thread within any number of processes to access an object.

[CEvent](../mfc/reference/cevent-class.md)<br/>
A synchronization class that notifies an application when an event has occurred.

[CSingleLock](../mfc/reference/csinglelock-class.md)<br/>
Used in member functions of thread-safe classes to lock on one synchronization object.

[CMultiLock](../mfc/reference/cmultilock-class.md)<br/>
Used in member functions of thread-safe classes to lock on one or more synchronization objects from an array of synchronization objects.

## Related Classes

[CCommandLineInfo](../mfc/reference/ccommandlineinfo-class.md)<br/>
Parses the command line with which your program was started.

[CWaitCursor](../mfc/reference/cwaitcursor-class.md)<br/>
Puts a wait cursor on the screen. Used during lengthy operations.

[CDockState](../mfc/reference/cdockstate-class.md)<br/>
Handles persistent storage of docking state data for control bars.

[CRecentFileList](../mfc/reference/crecentfilelist-class.md)<br/>
Maintains the most recently used (MRU) file list.

## See Also

[Class Overview](../mfc/class-library-overview.md)

