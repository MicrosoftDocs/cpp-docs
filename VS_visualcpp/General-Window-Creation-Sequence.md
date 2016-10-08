---
title: "General Window Creation Sequence"
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
ms.assetid: 9cd8c7ea-5e24-429e-b6d9-d7b6041d8ba6
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
# General Window Creation Sequence
When you create a window of your own, such as a child window, the framework uses much the same process as that described in [Document/View Creation](../VS_visualcpp/Document-View-Creation.md).  
  
 All the window classes provided by MFC employ [two-stage construction](../VS_visualcpp/One-Stage-and-Two-Stage-Construction-of-Objects.md). That is, during an invocation of the C++ **new** operator, the constructor allocates and initializes a C++ object but does not create a corresponding Windows window. That is done afterward by calling the [Create](../Topic/CWnd::Create.md) member function of the window object.  
  
 The **Create** member function makes the Windows window and stores its `HWND` in the C++ object's public data member [m_hWnd](../Topic/CWnd::m_hWnd.md). **Create** gives complete flexibility over the creation parameters. Before calling **Create**, you may want to register a window class with the global function [AfxRegisterWndClass](../Topic/AfxRegisterWndClass.md) in order to set the icon and class styles for the frame.  
  
 For frame windows, you can use the [LoadFrame](../Topic/CFrameWnd::LoadFrame.md) member function instead of **Create**. `LoadFrame` makes the Windows window using fewer parameters. It gets many default values from resources, including the frame's caption, icon, accelerator table, and menu.  
  
> [!NOTE]
>  Your icon, accelerator table, and menu resources must have a common resource ID, such as **IDR_MAINFRAME**, for them to be loaded by LoadFrame.  
  
## What do you want to know more about?  
  
-   [Window objects](../VS_visualcpp/Window-Objects.md)  
  
-   [Registering window "classes"](../VS_visualcpp/Registering-Window-Classes.md)  
  
-   [Destroying window objects](../VS_visualcpp/Destroying-Window-Objects.md)  
  
-   [Creating document frame windows](../VS_visualcpp/Creating-Document-Frame-Windows.md)  
  
## See Also  
 [Creating Windows](../VS_visualcpp/Creating-Windows.md)