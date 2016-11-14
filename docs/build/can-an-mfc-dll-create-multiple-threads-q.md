---
title: "Can an MFC DLL create multiple threads? | Microsoft Docs"
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
  - "DLLs [C++], multithreading"
  - "MFC DLLs [C++], multithreading"
  - "threading [MFC], DLLs"
  - "multithreading [C++], DLLs"
ms.assetid: 41d5b5e6-a7d3-42bf-b641-f1245abd1c59
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
# Can an MFC DLL create multiple threads?
Except during initialization, an MFC DLL can safely create multiple threads as long as it uses the Win32 thread local storage (TLS) functions such as **TlsAlloc** to allocate thread local storage. However, if an MFC DLL uses **__declspec(thread)** to allocate thread local storage, the client application must be implicitly linked to the DLL. If the client application explicitly links to the DLL, the call to **LoadLibrary** will not successfully load the DLL. For more information about creating multiple threads inside MFC DLLs, see the Knowledge Base article, "PRB: Calling LoadLibrary() to Load a DLL That Has Static TLS" (Q118816).  
  
 An MFC DLL that creates a new MFC thread during startup will stop responding when it is loaded by an application. This includes whenever a thread is created by calling `AfxBeginThread` or `CWinThread::CreateThread` inside:  
  
-   The `InitInstance` of a `CWinApp`-derived object in a regular DLL.  
  
-   A supplied `DllMain` or **RawDllMain** function in a regular DLL.  
  
-   A supplied `DllMain` or **RawDllMain** function in an Extension DLL.  
  
 For more information about creating threads during initialization, see the Knowledge Base article, "PRB: Cannot Create an MFC Thread During DLL Startup" (Q142243).  
  
## See Also  
 [DLL Frequently Asked Questions](../build/dll-frequently-asked-questions.md)