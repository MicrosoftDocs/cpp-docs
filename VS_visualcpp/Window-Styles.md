---
title: "Window Styles"
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
ms.assetid: c85ffbe4-f4ff-4227-917a-48ec4a411842
caps.latest.revision: 9
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
# Window Styles
-   `WS_BORDER` Creates a window that has a border.  
  
-   **WS_CAPTION** Creates a window that has a title bar (implies the `WS_BORDER` style). Cannot be used with the **WS_DLGFRAME** style.  
  
-   **WS_CHILD** Creates a child window. Cannot be used with the `WS_POPUP` style.  
  
-   **WS_CHILDWINDOW** Same as the **WS_CHILD** style.  
  
-   **WS_CLIPCHILDREN** Excludes the area occupied by child windows when you draw within the parent window. Used when you create the parent window.  
  
-   **WS_CLIPSIBLINGS** Clips child windows relative to each other; that is, when a particular child window receives a paint message, the **WS_CLIPSIBLINGS** style clips all other overlapped child windows out of the region of the child window to be updated. (If **WS_CLIPSIBLINGS** is not given and child windows overlap, when you draw within the client area of a child window, it is possible to draw within the client area of a neighboring child window.) For use with the **WS_CHILD** style only.  
  
-   **WS_DISABLED** Creates a window that is initially disabled.  
  
-   **WS_DLGFRAME** Creates a window with a double border but no title.  
  
-   **WS_GROUP** Specifies the first control of a group of controls in which the user can move from one control to the next with the arrow keys. All controls defined with the **WS_GROUP** style **FALSE** after the first control belong to the same group. The next control with the **WS_GROUP** style starts the next group (that is, one group ends where the next begins).  
  
-   **WS_HSCROLL** Creates a window that has a horizontal scroll bar.  
  
-   **WS_ICONIC** Creates a window that is initially minimized. Same as the **WS_MINIMIZE** style.  
  
-   **WS_MAXIMIZE** Creates a window of maximum size.  
  
-   **WS_MAXIMIZEBOX** Creates a window that has a Maximize button.  
  
-   **WS_MINIMIZE** Creates a window that is initially minimized. For use with the **WS_OVERLAPPED** style only.  
  
-   **WS_MINIMIZEBOX** Creates a window that has a Minimize button.  
  
-   **WS_OVERLAPPED** Creates an overlapped window. An overlapped window usually has a caption and a border.  
  
-   **WS_OVERLAPPEDWINDOW** Creates an overlapped window with the **WS_OVERLAPPED**, **WS_CAPTION**, **WS_SYSMENU**, **WS_THICKFRAME**, **WS_MINIMIZEBOX**, and **WS_MAXIMIZEBOX** styles.  
  
-   `WS_POPUP` Creates a pop-up window. Cannot be used with the **WS_CHILD** style.  
  
-   **WS_POPUPWINDOW** Creates a pop-up window with the `WS_BORDER`, `WS_POPUP`, and **WS_SYSMENU** styles. The **WS_CAPTION** style must be combined with the **WS_POPUPWINDOW** style to make the Control menu visible.  
  
-   **WS_SIZEBOX** Creates a window that has a sizing border. Same as the **WS_THICKFRAME** style.  
  
-   **WS_SYSMENU** Creates a window that has a Control-menu box in its title bar. Used only for windows with title bars.  
  
-   **WS_TABSTOP** Specifies one of any number of controls through which the user can move by using the TAB key. The TAB key moves the user to the next control specified by the **WS_TABSTOP** style.  
  
-   **WS_THICKFRAME** Creates a window with a thick frame that can be used to size the window.  
  
-   **WS_TILED** Creates an overlapped window. An overlapped window has a title bar and a border. Same as the **WS_OVERLAPPED** style.  
  
-   **WS_TILEDWINDOW** Creates an overlapped window with the **WS_OVERLAPPED**, **WS_CAPTION**, **WS_SYSMENU**, **WS_THICKFRAME**, **WS_MINIMIZEBOX**, and **WS_MAXIMIZEBOX** styles. Same as the **WS_OVERLAPPEDWINDOW** style.  
  
-   **WS_VISIBLE** Creates a window that is initially visible.  
  
-   **WS_VSCROLL** Creates a window that has a vertical scroll bar.  
  
## See Also  
 [Styles Used by MFC](../VS_visualcpp/Styles-Used-by-MFC.md)   
 [CWnd::Create](../Topic/CWnd::Create.md)   
 [CWnd::CreateEx](../Topic/CWnd::CreateEx.md)   
 [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679)