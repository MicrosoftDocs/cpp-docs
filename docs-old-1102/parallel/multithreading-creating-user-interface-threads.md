---
title: "Multithreading: Creating User-Interface Threads"
ms.custom: ""
ms.date: "10/28/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CREATE_SUSPENDED"
  - "SECURITY_ATTRIBUTES"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "multithreading [C++], user interface threads"
  - "threading [C++], creating threads"
  - "threading [C++], user interface threads"
  - "user interface threads [C++]"
  - "threading [MFC], user interface threads"
ms.assetid: 446925c1-db59-46ea-ae5b-d5ae5d5b91d8
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
# Multithreading: Creating User-Interface Threads
A user-interface thread is commonly used to handle user input and respond to user events independently of threads executing other portions of the application. The main application thread (provided in your `CWinApp`-derived class) is already created and started for you. This topic describes the steps necessary to create additional user-interface threads.  
  
 The first thing you must do when creating a user-interface thread is derive a class from [CWinThread](../mfc/reference/cwinthread-class.md). You must declare and implement this class, using the [DECLARE_DYNCREATE](../Topic/DECLARE_DYNCREATE.md) and [IMPLEMENT_DYNCREATE](../Topic/IMPLEMENT_DYNCREATE.md) macros. This class must override some functions and can override others. These functions and what they should do are presented in the following table.  
  
### Functions to Override When Creating a User-Interface Thread  
  
|Function|Purpose|  
|--------------|-------------|  
|[ExitInstance](../Topic/CWinThread::ExitInstance.md)|Perform cleanup when thread terminates. Usually overridden.|  
|[InitInstance](../Topic/CWinThread::InitInstance.md)|Perform thread instance initialization. Must be overridden.|  
|[OnIdle](../Topic/CWinThread::OnIdle.md)|Perform thread-specific idle-time processing. Not usually overridden.|  
|[PreTranslateMessage](../Topic/CWinThread::PreTranslateMessage.md)|Filter messages before they are dispatched to **TranslateMessage** and **DispatchMessage**. Not usually overridden.|  
|[ProcessWndProcException](../Topic/CWinThread::ProcessWndProcException.md)|Intercept unhandled exceptions thrown by the thread's message and command handlers. Not usually overridden.|  
|[Run](../Topic/CWinThread::Run.md)|Controlling function for the thread. Contains the message pump. Rarely overridden.|  
  
 MFC provides two versions of `AfxBeginThread` through parameter overloading: one that can only create worker threads and one that can create user-interface threads or worker threads. To start your user-interface thread, call the second overload of [AfxBeginThread](../Topic/AfxBeginThread.md), providing the following information:  
  
-   The [RUNTIME_CLASS](../Topic/RUNTIME_CLASS.md) of the class you derived from `CWinThread`.  
  
-   (Optional) The desired priority level. The default is normal priority. For more information about the available priority levels, see [SetThreadPriority](http://msdn.microsoft.com/library/windows/desktop/ms686277) in the [!INCLUDE[winsdkshort](../atl-mfc-shared/reference/includes/winsdkshort_md.md)].  
  
-   (Optional) The desired stack size for the thread. The default is the same size stack as the creating thread.  
  
-   (Optional) **CREATE_SUSPENDED** if you want the thread to be created in a suspended state. The default is 0, or start the thread normally.  
  
-   (Optional) The desired security attributes. The default is the same access as the parent thread. For more information about the format of this security information, see [SECURITY_ATTRIBUTES](http://msdn.microsoft.com/library/windows/desktop/aa379560) in the [!INCLUDE[winsdkshort](../atl-mfc-shared/reference/includes/winsdkshort_md.md)].  
  
 `AfxBeginThread` does most of the work for you. It creates a new object of your class, initializes it with the information you supply, and calls [CWinThread::CreateThread](../Topic/CWinThread::CreateThread.md) to start executing the thread. Checks are made throughout the procedure to make sure all objects are deallocated properly should any part of the creation fail.  
  
## What do you want to know more about?  
  
-   [Multithreading: Terminating Threads](../parallel/multithreading-terminating-threads.md)  
  
-   [Multithreading: Creating Worker Threads](../parallel/multithreading-creating-worker-threads.md)  
  
-   [Processes and Threads](http://msdn.microsoft.com/library/windows/desktop/ms684841)  
  
## See Also  
 [Multithreading with C++ and MFC](../parallel/multithreading-with-cpp-and-mfc.md)