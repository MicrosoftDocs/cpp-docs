---
title: "Managing the State Data of MFC Modules | Microsoft Docs"
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
  - "global state [C++]"
  - "data management [C++], MFC modules"
  - "window procedure entry points [C++]"
  - "exported interfaces and global state [C++]"
  - "module states, saving and restoring"
  - "data management [C++]"
  - "MFC [C++], managing state data"
  - "multiple modules"
  - "module state restored"
ms.assetid: 81889c11-0101-4a66-ab3c-f81cf199e1bb
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
# Managing the State Data of MFC Modules
This article discusses the state data of MFC modules and how this state is updated when the flow of execution (the path code takes through an application when executing) enters and leaves a module. Switching module states with the `AFX_MANAGE_STATE` and `METHOD_PROLOGUE` macros is also discussed.  
  
> [!NOTE]
>  The term "module" here refers to an executable program, or to a DLL (or set of DLLs) that operate independently of the rest of the application, but uses a shared copy of the MFC DLL. An ActiveX control is a typical example of a module.  
  
 As shown in the following figure, MFC has state data for each module used in an application. Examples of this data include Windows instance handles (used for loading resources), pointers to the current `CWinApp` and `CWinThread` objects of an application, OLE module reference counts, and a variety of maps that maintain the connections between Windows object handles and corresponding instances of MFC objects. However, when an application uses multiple modules, the state data of each module is not application wide. Rather, each module has its own private copy of the MFC's state data.  
  
 ![State data of a single module &#40;application&#41;](../mfc/media/vc387n1.gif "vc387n1")  
State Data of a Single Module (Application)  
  
 A module's state data is contained in a structure and is always available via a pointer to that structure. When the flow of execution enters a particular module, as shown in the following figure, that module's state must be the "current" or "effective" state. Therefore, each thread object has a pointer to the effective state structure of that application. Keeping this pointer updated at all times is vital to managing the application's global state and maintaining the integrity of each module's state. Incorrect management of the global state can lead to unpredictable application behavior.  
  
 ![State data of multiple modules](../mfc/media/vc387n2.gif "vc387n2")  
State Data of Multiple Modules  
  
 In other words, each module is responsible for correctly switching between module states at all of its entry points. An "entry point" is any place where the flow of execution can enter the module's code. Entry points include:  
  
-   [Exported functions in a DLL](../mfc/exported-dll-function-entry-points.md)  
  
-   [Member functions of COM interfaces](../mfc/com-interface-entry-points.md)  
  
-   [Window procedures](../mfc/window-procedure-entry-points.md)  
  
## See Also  
 [General MFC Topics](../mfc/general-mfc-topics.md)

