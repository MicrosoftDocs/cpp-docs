---
title: "Window Objects"
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
ms.assetid: 28b33ce2-af05-4617-9d03-1cb9a02be687
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
# Window Objects
MFC supplies class [CWnd](../VS_visualcpp/CWnd-Class.md) to encapsulate the `HWND` handle of a window. The `CWnd` object is a C++ window object, distinct from the `HWND` that represents a Windows window but containing it. Use `CWnd` to derive your own child window classes, or use one of the many MFC classes derived from `CWnd`. Class `CWnd` is the base class for all windows, including frame windows, dialog boxes, child windows, controls, and control bars such as toolbars. A good understanding of [the relationship between a C++ window object and an HWND](../VS_visualcpp/Relationship-Between-a-C---Window-Object-and-an-HWND.md) is crucial for effective programming with MFC.  
  
 MFC provides some default functionality and management of windows, but you can derive your own class from `CWnd` and use its member functions to customize the provided functionality. You can create child windows by constructing a `CWnd` object and calling its [Create](../Topic/CWnd::Create.md) member function, then customize the child windows using `CWnd` member functions. You can embed objects derived from [CView](../VS_visualcpp/CView-Class.md), such as form views or tree views, in a frame window. And you can support multiple views of your documents via splitter panes, supplied by class [CSplitterWnd](../VS_visualcpp/CSplitterWnd-Class.md).  
  
 Each object derived from class `CWnd` contains a message map, through which you can map Windows messages or command IDs to your own handlers.  
  
 The general literature on programming for Windows is a good resource for learning how to use the `CWnd` member functions, which encapsulate the `HWND` APIs.  
  
## Functions for Operating On a CWnd  
 `CWnd` and its [derived window classes](../VS_visualcpp/Derived-Window-Classes.md) provide constructors, destructors, and member functions to initialize the object, create the underlying Windows structures, and access the encapsulated `HWND`. `CWnd` also provides member functions that encapsulate Windows APIs for sending messages, accessing the window's state, converting coordinates, updating, scrolling, accessing the Clipboard, and many other tasks. Most Windows window-management APIs that take an `HWND` argument are encapsulated as member functions of `CWnd`. The names of the functions and their parameters are preserved in the `CWnd` member function. For details about the Windows APIs encapsulated by `CWnd`, see class [CWnd](../VS_visualcpp/CWnd-Class.md).  
  
## CWnd and Windows Messages  
 One of the primary purposes of `CWnd` is to provide an interface for handling Windows messages, such as `WM_PAINT` or `WM_MOUSEMOVE`. Many of the member functions of `CWnd` are handlers for standard messages — those beginning with the identifier **afx_msg** and the prefix "On," such as `OnPaint` and **OnMouseMove**. [Message Handling and Mapping](../VS_visualcpp/Message-Handling-and-Mapping.md) covers messages and message handling in detail. The information there applies equally to the framework's windows and those that you create yourself for special purposes.  
  
### What do you want to know more about?  
  
-   [The relationship between a C++ window object and an HWND](../VS_visualcpp/Relationship-Between-a-C---Window-Object-and-an-HWND.md)  
  
-   [Derived window classes](../VS_visualcpp/Derived-Window-Classes.md)  
  
-   [Creating windows](../VS_visualcpp/Creating-Windows.md)  
  
-   [Destroying window objects](../VS_visualcpp/Destroying-Window-Objects.md)  
  
-   [Detaching a CWnd from Its HWND](../VS_visualcpp/Detaching-a-CWnd-from-Its-HWND.md)  
  
-   [Working with window objects](../VS_visualcpp/Working-with-Window-Objects.md)  
  
-   [Device contexts](../VS_visualcpp/Device-Contexts.md): objects that make Windows drawing device independent  
  
-   [Graphic objects](../VS_visualcpp/Graphic-Objects.md): pens, brushes, fonts, bitmaps, palettes, regions  
  
## See Also  
 [Windows](../VS_visualcpp/Windows.md)