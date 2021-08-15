---
description: "Learn more about: Multithreading: Creating MFC User-Interface Threads"
title: "Multithreading: Creating MFC User-Interface Threads"
ms.date: "08/27/2018"
f1_keywords: ["CREATE_SUSPENDED", "SECURITY_ATTRIBUTES"]
helpviewer_keywords: ["multithreading [C++], user interface threads", "threading [C++], creating threads", "threading [C++], user interface threads", "user interface threads [C++]", "threading [MFC], user interface threads"]
ms.assetid: 446925c1-db59-46ea-ae5b-d5ae5d5b91d8
---
# Multithreading: Creating MFC User-Interface Threads

A user-interface thread is commonly used to handle user input and respond to user events independently of threads executing other portions of the application. The main application thread (provided in your `CWinApp`-derived class) is already created and started for you. This topic describes the steps necessary to create additional user-interface threads.

The first thing you must do when creating a user-interface thread is derive a class from [CWinThread](../mfc/reference/cwinthread-class.md). You must declare and implement this class, using the [DECLARE_DYNCREATE](../mfc/reference/run-time-object-model-services.md#declare_dyncreate) and [IMPLEMENT_DYNCREATE](../mfc/reference/run-time-object-model-services.md#implement_dyncreate) macros. This class must override some functions and can override others. These functions and what they should do are presented in the following table.

### Functions to Override When Creating a User-Interface Thread

|Function|Purpose|
|--------------|-------------|
|[ExitInstance](../mfc/reference/cwinthread-class.md#exitinstance)|Perform cleanup when thread terminates. Usually overridden.|
|[InitInstance](../mfc/reference/cwinthread-class.md#initinstance)|Perform thread instance initialization. Must be overridden.|
|[OnIdle](../mfc/reference/cwinthread-class.md#onidle)|Perform thread-specific idle-time processing. Not usually overridden.|
|[PreTranslateMessage](../mfc/reference/cwinthread-class.md#pretranslatemessage)|Filter messages before they are dispatched to `TranslateMessage` and `DispatchMessage`. Not usually overridden.|
|[ProcessWndProcException](../mfc/reference/cwinthread-class.md#processwndprocexception)|Intercept unhandled exceptions thrown by the thread's message and command handlers. Not usually overridden.|
|[Run](../mfc/reference/cwinthread-class.md#run)|Controlling function for the thread. Contains the message pump. Rarely overridden.|

MFC provides two versions of `AfxBeginThread` through parameter overloading: one that can only create worker threads and one that can create user-interface threads or worker threads. To start your user-interface thread, call the second overload of [AfxBeginThread](../mfc/reference/application-information-and-management.md#afxbeginthread), providing the following information:

- The [RUNTIME_CLASS](../mfc/reference/run-time-object-model-services.md#runtime_class) of the class you derived from `CWinThread`.

- (Optional) The desired priority level. The default is normal priority. For more information about the available priority levels, see [SetThreadPriority](/windows/win32/api/processthreadsapi/nf-processthreadsapi-setthreadpriority) in the Windows SDK.

- (Optional) The desired stack size for the thread. The default is the same size stack as the creating thread.

- (Optional) CREATE_SUSPENDED if you want the thread to be created in a suspended state. The default is 0, or start the thread normally.

- (Optional) The desired security attributes. The default is the same access as the parent thread. For more information about the format of this security information, see [SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\)) in the Windows SDK.

`AfxBeginThread` does most of the work for you. It creates a new object of your class, initializes it with the information you supply, and calls [CWinThread::CreateThread](../mfc/reference/cwinthread-class.md#createthread) to start executing the thread. Checks are made throughout the procedure to make sure all objects are deallocated properly should any part of the creation fail.

## What do you want to know more about?

- [Multithreading: Terminating Threads](multithreading-terminating-threads.md)

- [Multithreading: Creating Worker Threads](multithreading-creating-worker-threads.md)

- [Processes and Threads](/windows/win32/ProcThread/processes-and-threads)

## See also

[Multithreading with C++ and MFC](multithreading-with-cpp-and-mfc.md)
