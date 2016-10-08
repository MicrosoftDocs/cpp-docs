---
title: "Tool Tips in Windows Not Derived from CFrameWnd"
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
ms.assetid: cad5ef0f-02e3-4151-ad0d-3d42e6932b0e
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
# Tool Tips in Windows Not Derived from CFrameWnd
This article family covers enabling tool tips for controls contained in a window that is not derived from [CFrameWnd](../VS_visualcpp/CFrameWnd-Class.md). The article [Toolbars Tool Tips](../VS_visualcpp/Toolbar-Tool-Tips.md) provides information about tool tips for controls in a `CFrameWnd`.  
  
 Topics covered in this article family include:  
  
-   [Enabling Tool Tips](../VS_visualcpp/Enabling-Tool-Tips.md)  
  
-   [Handling TTN_NEEDTEXT Notification for Tool Tips](../VS_visualcpp/Handling-TTN_NEEDTEXT-Notification-for-Tool-Tips.md)  
  
-   [The TOOLTIPTEXT Structure](../VS_visualcpp/TOOLTIPTEXT-Structure.md)  
  
 Tool tips are automatically displayed for buttons and other controls contained in a parent window derived from `CFrameWnd`. This is because `CFrameWnd` has a default handler for the [TTN_GETDISPINFO](http://msdn.microsoft.com/library/windows/desktop/bb760269) notification, which handles **TTN_NEEDTEXT** notifications from tool tip controls associated with controls.  
  
 However, this default handler is not called when the **TTN_NEEDTEXT** notification is sent from a tool tip control associated with a control in a window that is not a `CFrameWnd`, such as a control on a dialog box or a form view. Therefore, it is necessary for you to provide a handler function for the **TTN_NEEDTEXT** notification message in order to display tool tips for child controls.  
  
 The default tool tips provided for your windows by [CWnd::EnableToolTips](../Topic/CWnd::EnableToolTips.md) do not have text associated with them. To retrieve text for the tool tip to display, the **TTN_NEEDTEXT** notification is sent to the tool tip control's parent window just before the tool tip window is displayed. If there is no handler for this message to assign some value to the **pszText** member of the **TOOLTIPTEXT** structure, there will be no text displayed for the tool tip.  
  
## See Also  
 [Tool Tips](../VS_visualcpp/Tool-Tips.md)