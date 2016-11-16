---
title: "C Run-Time Library Functions for Thread Control | Microsoft Docs"
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
  - "_beginthread function"
  - "_endthread function"
  - "threading [C++], controlling threads"
  - "multithreading [C++], controlling threads"
  - "_beginthreadex function"
  - "_endthreadex function"
ms.assetid: 39d0529c-c392-4c6f-94f5-105d1e8054e4
caps.latest.revision: 9
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
# C Run-Time Library Functions for Thread Control
All Win32 programs have at least one thread. Any thread can create additional threads. A thread can complete its work quickly and then terminate, or it can stay active for the life of the program.  
  
 The LIBCMT and MSVCRT C run-time libraries provide the following functions for thread creation and termination: [_beginthread, _beginthreadex](../c-runtime-library/reference/beginthread-beginthreadex.md) and [_endthread, _endthreadex](../c-runtime-library/reference/endthread-endthreadex.md).  
  
 The `_beginthread` and `_beginthreadex` functions create a new thread and return a thread identifier if the operation is successful. The thread terminates automatically if it completes execution, or it can terminate itself with a call to `_endthread` or `_endthreadex`.  
  
> [!NOTE]
>  If you are going to call C run-time routines from a program built with Libcmt.lib, you must start your threads with the `_beginthread` or `_beginthreadex` function. Do not use the Win32 functions `ExitThread` and `CreateThread`. Using `SuspendThread` can lead to a deadlock when more than one thread is blocked waiting for the suspended thread to complete its access to a C run-time data structure.  
  
##  <a name="_core_the__beginthread_function"></a> The _beginthread and _beginthreadex Functions  
 The `_beginthread` and `_beginthreadex` functions create a new thread. A thread shares the code and data segments of a process with other threads in the process but has its own unique register values, stack space, and current instruction address. The system gives CPU time to each thread, so that all threads in a process can execute concurrently.  
  
 `_beginthread` and `_beginthreadex` are similar to the [CreateThread](http://msdn.microsoft.com/library/windows/desktop/ms682453) function in the Win32 API but has these differences:  
  
-   They initialize certain C run-time library variables. This is important only if you use the C run-time library in your threads.  
  
-   `CreateThread` helps provide control over security attributes. You can use this function to start a thread in a suspended state.  
  
 `_beginthread` and `_beginthreadex` return a handle to the new thread if successful or an error code if there was an error.  
  
##  <a name="_core_the__endthread_function"></a> The _endthread and _endthreadex Functions  
 The [_endthread](../c-runtime-library/reference/endthread-endthreadex.md) function terminates a thread created by `_beginthread` (and similarly, `_endthreadex` terminates a thread created by `_beginthreadex`). Threads terminate automatically when they finish. `_endthread` and `_endthreadex` are useful for conditional termination from within a thread. A thread dedicated to communications processing, for example, can quit if it is unable to get control of the communications port.  
  
## See Also  
 [Multithreading with C and Win32](../parallel/multithreading-with-c-and-win32.md)