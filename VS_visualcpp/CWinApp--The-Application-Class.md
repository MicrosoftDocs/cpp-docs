---
title: "CWinApp: The Application Class"
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
ms.assetid: 935822bb-d463-481b-a5f6-9719d68ed1d5
caps.latest.revision: 11
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
# CWinApp: The Application Class
The main application class in MFC encapsulates the initialization, running, and termination of an application for the Windows operating system. An application built on the framework must have one and only one object of a class derived from [CWinApp](../VS_visualcpp/CWinApp-Class.md). This object is constructed before windows are created.  
  
 `CWinApp` is derived from `CWinThread`, which represents the main thread of execution for your application, which might have one or more threads. In recent versions of MFC, the `InitInstance`, **Run**, `ExitInstance`, and `OnIdle` member functions are actually in class `CWinThread`. These functions are discussed here as if they were `CWinApp` members instead, because the discussion concerns the object's role as application object rather than as primary thread.  
  
> [!NOTE]
>  Your application class constitutes your application's primary thread of execution. Using Win32 API functions, you can also create secondary threads of execution. These threads can use the MFC Library. For more information, see [Multithreading](../VS_visualcpp/Multithreading-Support-for-Older-Code--Visual-C---.md).  
  
 Like any program for the Windows operating system, your framework application has a `WinMain` function. In a framework application, however, you do not write `WinMain`. It is supplied by the class library and is called when the application starts up. `WinMain` performs standard services such as registering window classes. It then calls member functions of the application object to initialize and run the application. (You can customize `WinMain` by overriding the `CWinApp` member functions that `WinMain` calls.)  
  
 To initialize the application, `WinMain` calls your application object's `InitApplication` and `InitInstance` member functions. To run the application's message loop, `WinMain` calls the **Run** member function. On termination, `WinMain` calls the application object's `ExitInstance` member function.  
  
> [!NOTE]
>  Names shown in **bold** in this documentation indicate elements supplied by the Microsoft Foundation Class Library and Visual C++. Names shown in `monospaced` type indicate elements that you create or override.  
  
## See Also  
 [General MFC Topics](../VS_visualcpp/General-MFC-Topics.md)   
 [CWinApp and the MFC Application Wizard](../VS_visualcpp/CWinApp-and-the-MFC-Application-Wizard.md)   
 [Overridable CWinApp Member Functions](../VS_visualcpp/Overridable-CWinApp-Member-Functions.md)   
 [Special CWinApp Services](../VS_visualcpp/Special-CWinApp-Services.md)