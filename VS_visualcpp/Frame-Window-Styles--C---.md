---
title: "Frame-Window Styles (C++)"
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
ms.assetid: fc5058c1-eec8-48d8-9f76-3fc01cfa53f7
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
# Frame-Window Styles (C++)
The frame windows you get with the framework are suitable for most programs, but you can gain additional flexibility by using the advanced functions [PreCreateWindow](../Topic/CWnd::PreCreateWindow.md) and the MFC global function [AfxRegisterWndClass](../Topic/AfxRegisterWndClass.md). `PreCreateWindow` is a member function of `CWnd`.  
  
 If you apply the **WS_HSCROLL** and **WS_VSCROLL** styles to the main frame window, they are instead applied to the **MDICLIENT** window so users can scroll the **MDICLIENT** area.  
  
 If the window's **FWS_ADDTOTITLE** style bit is set (which it is by default), the view tells the frame window what title to display in the window's title bar based on the view's document name.  
  
## What do you want to know more about?  
  
-   [Managing MDI child windows (MDICLIENT)](../VS_visualcpp/Managing-MDI-Child-Windows.md), the window within an MDI frame that contains the MDI child windows  
  
-   [Changing the styles of a window created by MFC](../VS_visualcpp/Changing-the-Styles-of-a-Window-Created-by-MFC.md)  
  
-   [Window styles](../VS_visualcpp/Window-Styles.md)  
  
## See Also  
 [Frame Windows](../VS_visualcpp/Frame-Windows.md)