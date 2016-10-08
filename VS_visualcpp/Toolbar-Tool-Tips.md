---
title: "Toolbar Tool Tips"
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
ms.assetid: d1696305-b604-4fad-9f09-638878371412
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
# Toolbar Tool Tips
Tool tips are the tiny popup windows that present short descriptions of a toolbar button's purpose when you position the mouse over a button for a period of time. When you create an application with the Application Wizard that has a toolbar, tool tip support is provided for you. This article explains both the tool tip support created by the Application Wizard and how to add tool tip support to your application.  
  
 This article covers:  
  
-   [Activating tool tips](#_core_activating_tool_tips)  
  
-   [Flyby status bar updates](#_core_fly_by_status_bar_updates)  
  
##  <a name="_core_activating_tool_tips"></a> Activating Tool Tips  
 To activate tool tips in your application, you must do two things:  
  
-   Add the `CBRS_TOOLTIPS` style to the other styles (such as **WS_CHILD**, **WS_VISIBLE**, and other **CBRS_** styles) passed as the `dwStyle` parameter to the [CToolBar::Create](../Topic/CToolBar::Create.md) function or in [SetBarStyle](../Topic/CControlBar::SetBarStyle.md).  
  
-   As described in the procedure below, append the toolbar tip text, separated by a newline character ('\n'), to the string resource containing the command-line prompt for the toolbar command. The string resource shares the ID of the toolbar button.  
  
#### To add the tool tip text  
  
1.  While you are editing the toolbar in the toolbar editor, open the **Toolbar Button Properties** window for a given button.  
  
2.  In the **Prompt** box, specify the text you want to appear in the tool tip for that button.  
  
> [!NOTE]
>  Setting the text as a button property in the toolbar editor replaces the former procedure, in which you had to open and edit the string resource.  
  
 If a control bar with tool tips enabled has child controls placed on it, the control bar will display a tool tip for every child control on the control bar as long as it meets the following criteria:  
  
-   The ID of the control is not – 1.  
  
-   The string-table entry with the same ID as the child control in the resource file has a tool tip string.  
  
##  <a name="_core_fly_by_status_bar_updates"></a> Flyby Status Bar Updates  
 A feature related to tool tips is "flyby" status bar updating. By default, the message on the status bar describes only a particular toolbar button when the button is activated. By including `CBRS_FLYBY` in your list of styles passed to `CToolBar::Create`, you can have these messages updated when the mouse cursor passes over the toolbar without actually activating the button.  
  
### What do you want to know more about?  
  
-   [MFC Toolbar Implementation (overview information on toolbars)](../VS_visualcpp/MFC-Toolbar-Implementation.md)  
  
-   [Docking and floating toolbars](../VS_visualcpp/Docking-and-Floating-Toolbars.md)  
  
-   The [CToolBar](../VS_visualcpp/CToolBar-Class.md) and [CToolBarCtrl](../VS_visualcpp/CToolBarCtrl-Class.md) classes  
  
-   [Working with the toolbar control](../VS_visualcpp/Working-with-the-Toolbar-Control.md)  
  
-   [Using your old toolbars](../VS_visualcpp/Using-Your-Old-Toolbars.md)  
  
## See Also  
 [MFC Toolbar Implementation](../VS_visualcpp/MFC-Toolbar-Implementation.md)