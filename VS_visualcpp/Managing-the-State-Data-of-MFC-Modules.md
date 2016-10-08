---
title: "Managing the State Data of MFC Modules"
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
ms.assetid: 81889c11-0101-4a66-ab3c-f81cf199e1bb
caps.latest.revision: 7
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
# Managing the State Data of MFC Modules
This article discusses the state data of MFC modules and how this state is updated when the flow of execution (the path code takes through an application when executing) enters and leaves a module. Switching module states with the `AFX_MANAGE_STATE` and `METHOD_PROLOGUE` macros is also discussed.  
  
> [!NOTE]
>  The term "module" here refers to an executable program, or to a DLL (or set of DLLs) that operate independently of the rest of the application, but uses a shared copy of the MFC DLL. An ActiveX control is a typical example of a module.  
  
 As shown in the following figure, MFC has state data for each module used in an application. Examples of this data include Windows instance handles (used for loading resources), pointers to the current `CWinApp` and `CWinThread` objects of an application, OLE module reference counts, and a variety of maps that maintain the connections between Windows object handles and corresponding instances of MFC objects. However, when an application uses multiple modules, the state data of each module is not application wide. Rather, each module has its own private copy of the MFC's state data.  
  
 ![State data of a single module &#40;application&#41;](../VS_visualcpp/media/vc387N1.gif "vc387N1")  
State Data of a Single Module (Application)  
  
 A module's state data is contained in a structure and is always available via a pointer to that structure. When the flow of execution enters a particular module, as shown in the following figure, that module's state must be the "current" or "effective" state. Therefore, each thread object has a pointer to the effective state structure of that application. Keeping this pointer updated at all times is vital to managing the application's global state and maintaining the integrity of each module's state. Incorrect management of the global state can lead to unpredictable application behavior.  
  
 ![State data of multiple modules](../VS_visualcpp/media/vc387N2.gif "vc387N2")  
State Data of Multiple Modules  
  
 In other words, each module is responsible for correctly switching between module states at all of its entry points. An "entry point" is any place where the flow of execution can enter the module's code. Entry points include:  
  
-   [Exported functions in a DLL](../VS_visualcpp/Exported-DLL-Function-Entry-Points.md)  
  
-   [Member functions of COM interfaces](../VS_visualcpp/COM-Interface-Entry-Points.md)  
  
-   [Window procedures](../VS_visualcpp/Window-Procedure-Entry-Points.md)  
  
## See Also  
 [General MFC Topics](../VS_visualcpp/General-MFC-Topics.md)