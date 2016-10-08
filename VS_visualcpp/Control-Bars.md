---
title: "Control Bars"
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
ms.assetid: 31831910-3d23-4d70-9e71-03cc02f01ec4
caps.latest.revision: 8
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
# Control Bars
"Control bar" is the general name for toolbars, status bars, and dialog bars. MFC classes `CToolBar`, `CStatusBar`, `CDialogBar`, `COleResizeBar`, and **CReBar** derive from class [CControlBar](../VS_visualcpp/CControlBar-Class.md), which implements their common functionality.  
  
 Control bars are windows that display rows of controls with which users can select options, execute commands, or obtain program information. Types of control bars include toolbars, dialog bars, and status bars.  
  
-   Toolbars, in class [CToolBar](../VS_visualcpp/CToolBar-Class.md)  
  
-   Status bars, in class [CStatusBar](../VS_visualcpp/CStatusBar-Class.md)  
  
-   Dialog bars, in class [CDialogBar](../VS_visualcpp/CDialogBar-Class.md)  
  
-   Rebars, in class [CReBar](../VS_visualcpp/CReBar-Class.md)  
  
> [!IMPORTANT]
>  As of MFC version 4.0, toolbars, status bars, and tool tips are implemented using system functionality implemented in the comctl32.dll instead of the previous implementation specific to MFC. In MFC version 6.0, **CReBar**, which also wraps comctl32.dll functionality, was added.  
  
 Brief introductions to the control-bar types follow. For further information, see the links below.  
  
## Control Bars  
 Control bars greatly enhance a program's usability by providing quick, one-step command actions. Class `CControlBar` provides the common functionality of all toolbars, status bars, and dialog bars. `CControlBar` provides the functionality for positioning the control bar in its parent frame window. Because a control bar is usually a child window of a parent frame window, it is a "sibling" to the client view or MDI client of the frame window. A control-bar object uses information about its parent window's client rectangle to position itself. Then it alters the parent's remaining client-window rectangle so that the client view or MDI client window fills the rest of the client window.  
  
> [!NOTE]
>  If a button on the control bar doesn't have a **COMMAND** or **UPDATE_COMMAND_UI** handler, the framework automatically disables the button.  
  
## Toolbars  
 A toolbar is a control bar that displays a row of bitmapped buttons that carry out commands. Pressing a toolbar button is equivalent to choosing a menu item; it calls the same handler mapped to a menu item if that menu item has the same ID as the toolbar button. The buttons can be configured to appear and behave as pushbuttons, radio buttons, or check boxes. A toolbar is usually aligned to the top of a frame window, but an MFC toolbar can "dock" to any side of its parent window or float in its own mini-frame window. A toolbar can also "float" and you can change its size and drag it with a mouse. A toolbar can also display tool tips as the user moves the mouse over the toolbar's buttons. A tool tip is a tiny popup window that briefly describes the button's purpose.  
  
> [!NOTE]
>  As of MFC version 4.0, class [CToolBar](../VS_visualcpp/CToolBar-Class.md) uses the Windows toolbar common control. A `CToolBar` contains a [CToolBarCtrl](../VS_visualcpp/CToolBarCtrl-Class.md). Older toolbars are still supported, however. See the article [ToolBars](../VS_visualcpp/MFC-Toolbar-Implementation.md).  
  
## Status Bars  
 A status bar is a control bar that contains text-output panes, or "indicators." The output panes are commonly used as message lines and as status indicators. Message line examples include the command help-message lines that briefly explain the selected menu or toolbar command in the leftmost pane of the default status bar created by the MFC Application Wizard. Status indicator examples include the SCROLL LOCK, NUM LOCK, and other keys. Status bars are usually aligned to the bottom of a frame window. See class [CStatusBar](../VS_visualcpp/CStatusBar-Class.md) and class [CStatusBarCtrl](../VS_visualcpp/CStatusBarCtrl-Class.md).  
  
## Dialog Bars  
 A dialog bar is a control bar, based on a dialog-template resource, with the functionality of a modeless dialog box. Dialog bars can contain Windows, custom, or ActiveX controls. As in a dialog box, the user can tab among the controls. Dialog bars can be aligned to the top, bottom, left, or right side of a frame window and they can also be floated in their own frame window. See class [CDialogBar](../VS_visualcpp/CDialogBar-Class.md).  
  
## Rebars  
 A [rebar](../VS_visualcpp/Using-CReBarCtrl.md) is a control bar that provides docking, layout, state, and persistence information for rebar controls. A rebar object can contain a variety of child windows, usually other controls, including edit boxes, toolbars, and list boxes. A rebar object can display its child windows over a specified bitmap. It can be automatically or manually resized by clicking or dragging its gripper bar. See class [CReBar](../VS_visualcpp/CReBar-Class.md).  
  
## See Also  
 [User Interface Elements](../VS_visualcpp/User-Interface-Elements--MFC-.md)