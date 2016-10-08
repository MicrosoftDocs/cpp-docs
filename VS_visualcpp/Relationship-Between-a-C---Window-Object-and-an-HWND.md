---
title: "Relationship Between a C++ Window Object and an HWND"
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
ms.assetid: f2e76340-6691-4ee6-9424-0345634a9469
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
# Relationship Between a C++ Window Object and an HWND
The window *object* is an object of the C++ `CWnd` class (or a derived class) that your program creates directly. It comes and goes in response to your program's constructor and destructor calls. The Windows *window*, on the other hand, is an opaque handle to an internal Windows data structure that corresponds to a window and consumes system resources when present. A Windows window is identified by a "window handle" (`HWND`) and is created after the `CWnd` object is created by a call to the **Create** member function of class `CWnd`. The window may be destroyed either by a program call or by a user's action. The window handle is stored in the window object's `m_hWnd` member variable. The following figure shows the relationship between the C++ window object and the Windows window. Creating windows is discussed in [Creating Windows](../VS_visualcpp/Creating-Windows.md). Destroying windows is discussed in [Destroying Window Objects](../VS_visualcpp/Destroying-Window-Objects.md).  
  
 ![CWnd window object and resulting window](../VS_visualcpp/media/vc37FJ1.gif "vc37FJ1")  
Window Object and Windows Window  
  
## See Also  
 [Window Objects](../VS_visualcpp/Window-Objects.md)