---
title: "Extended Window Styles | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "WS_EX_TOOLWINDOW"
  - "WS_EX_LEFTSCROLLBAR"
  - "WS_EX_RTLREADING"
  - "WS_EX_WINDOWEDGE"
  - "WS_EX_CLIENTEDGE"
  - "WS_EX_STATICEDGE"
  - "WS_EX_LTRREADING"
  - "WS_EX_DLGMODALFRAME"
  - "WS_EX_RIGHTSCROLLBAR"
  - "WS_EX_CONTROLPARENT"
  - "WS_EX_ACCEPTFILES"
  - "WS_EX_TRANSPARENT"
  - "WS_EX_RIGHT"
  - "WS_EX_APPWINDOW"
  - "WS_EX_TOPMOST"
  - "WS_EX_CONTEXTHELP"
  - "WS_EX_MDICHILD"
  - "WS_EX_LEFT"
  - "WS_EX_OVERLAPPEDWINDOW"
  - "WS_EX_PALETTEWINDOW"
  - "WS_EX_NOPARENTNOTIFY"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "WS_EX_PALETTEWINDOW constant"
  - "WS_EX_NOPARENTNOTIFY constant"
  - "WS_EX_RIGHT constant"
  - "WS_EX_DLGMODALFRAME constant"
  - "WS_EX_APPWINDOW constant"
  - "WS_EX_STATICEDGE constant"
  - "WS_EX_LTRREADING constant"
  - "WS_EX_RIGHTSCROLLBAR constant"
  - "WS_EX_CONTROLPARENT constant"
  - "WS_EX_MDICHILD constant"
  - "WS_EX_TOPMOST constant"
  - "WS_EX_RTLREADING constant"
  - "WS_EX_LEFT constant"
  - "WS_EX_TOOLWINDOW constant"
  - "WS_EX_ACCEPTFILES constant"
  - "WS_EX_WINDOWEDGE constant"
  - "WS_EX_OVERLAPPEDWINDOW constant"
  - "extended window styles"
  - "WS_EX_LEFTSCROLLBAR constant"
  - "WS_EX_TRANSPARENT constant"
  - "WS_EX_CLIENTEDGE constant"
  - "WS_EX_CONTEXTHELP constant"
  - "styles, windows"
ms.assetid: d18e6c69-0a01-49ed-b58a-55b3802b47c1
caps.latest.revision: 14
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
# Extended Window Styles
-   **WS_EX_ACCEPTFILES** Specifies that a window created with this style accepts drag-and-drop files.  
  
-   **WS_EX_APPWINDOW** Forces a top-level window onto the taskbar when the window is visible.  
  
-   **WS_EX_CLIENTEDGE** Specifies that a window has a 3D look — that is, a border with a sunken edge.  
  
-   **WS_EX_CONTEXTHELP** Includes a question mark in the title bar of the window. When the user clicks the question mark, the cursor changes to a question mark with a pointer. If the user then clicks a child window, the child receives a **WM_HELP** message.  
  
-   **WS_EX_CONTROLPARENT** Allows the user to navigate among the child windows of the window by using the TAB key.  
  
-   **WS_EX_DLGMODALFRAME** Designates a window with a double border that may (optionally) be created with a title bar when you specify the **WS_CAPTION** style flag in the `dwStyle` parameter.  
  
-   **WS_EX_LAYERED** The window is a [layered window](http://msdn.microsoft.com/library/ms632599.aspx#layered). This style cannot be used if the window has a [class style](http://msdn.microsoft.com/library/ms633574.aspx#class_styles) of either **CS_OWNDC** or **CS_CLASSDC**. However, [!INCLUDE[win8_first](../../mfc/reference/includes/win8_first_md.md)] does support the **WS_EX_LAYERED** style for child windows, where previous Windows versions support it only for top-level windows.  
  
-   **WS_EX_LEFT** Gives window generic left-aligned properties. This is the default.  
  
-   **WS_EX_LEFTSCROLLBAR** Places a vertical scroll bar to the left of the client area.  
  
-   **WS_EX_LTRREADING** Displays the window text using left-to-right reading order properties. This is the default.  
  
-   **WS_EX_MDICHILD** Creates an MDI child window.  
  
-   **WS_EX_NOPARENTNOTIFY** Specifies that a child window created with this style will not send the `WM_PARENTNOTIFY` message to its parent window when the child window is created or destroyed.  
  
-   **WS_EX_OVERLAPPEDWINDOW** Combines the **WS_EX_CLIENTEDGE** and **WS_EX_WINDOWEDGE** styles  
  
-   **WS_EX_PALETTEWINDOW** Combines the **WS_EX_WINDOWEDGE** and **WS_EX_TOPMOST** styles.  
  
-   **WS_EX_RIGHT** Gives a window generic right-aligned properties. This depends on the window class.  
  
-   **WS_EX_RIGHTSCROLLBAR** Places a vertical scroll bar (if present) to the right of the client area. This is the default.  
  
-   **WS_EX_RTLREADING** Displays the window text using right-to-left reading order properties.  
  
-   **WS_EX_STATICEDGE** Creates a window with a three-dimensional border style intended to be used for items that do not accept user input.  
  
-   **WS_EX_TOOLWINDOW** Creates a tool window, which is a window intended to be used as a floating toolbar. A tool window has a title bar that is shorter than a normal title bar, and the window title is drawn using a smaller font. A tool window does not appear in the task bar or in the window that appears when the user presses ALT+TAB.  
  
-   **WS_EX_TOPMOST** Specifies that a window created with this style should be placed above all nontopmost windows and stay above them even when the window is deactivated. An application can use the `SetWindowPos` member function to add or remove this attribute.  
  
-   **WS_EX_TRANSPARENT** Specifies that a window created with this style is to be transparent. That is, any windows that are beneath the window are not obscured by the window. A window created with this style receives `WM_PAINT` messages only after all sibling windows beneath it have been updated.  
  
-   **WS_EX_WINDOWEDGE** Specifies that a window has a border with a raised edge.  
  
## See Also  
 [Styles Used by MFC](../../mfc/reference/styles-used-by-mfc.md)   
 [CWnd::CreateEx](../../mfc/reference/cwnd-class.md#cwnd__createex)   
 [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680)

