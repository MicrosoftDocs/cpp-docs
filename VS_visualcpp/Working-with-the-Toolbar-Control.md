---
title: "Working with the Toolbar Control"
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
ms.assetid: b19409d5-3831-42c7-80ae-195c49dc9085
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
# Working with the Toolbar Control
This article explains how you can access the [CToolBarCtrl](../VS_visualcpp/CToolBarCtrl-Class.md) object underlying a [CToolBar](../VS_visualcpp/CToolBar-Class.md) for greater control over your toolbars. This is an advanced topic.  
  
## Procedures  
  
#### To access the toolbar common control underlying your CToolBar object  
  
1.  Call [CToolBar::GetToolBarCtrl](../Topic/CToolBar::GetToolBarCtrl.md).  
  
 `GetToolBarCtrl` returns a reference to a [CToolBarCtrl](../VS_visualcpp/CToolBarCtrl-Class.md) object. You can use the reference to call member functions of the toolbar control class.  
  
> [!CAUTION]
>  While calling `CToolBarCtrl` **Get** functions is safe, use caution if you call the **Set** functions. This is an advanced topic. Normally you shouldn't need to access the underlying toolbar control.  
  
### What do you want to know more about?  
  
-   [Controls (Windows common controls)](../VS_visualcpp/Controls--MFC-.md)  
  
-   [Toolbar fundamentals](../VS_visualcpp/Toolbar-Fundamentals.md)  
  
-   [Docking and floating toolbars](../VS_visualcpp/Docking-and-Floating-Toolbars.md)  
  
-   [Dynamically resizing the toolbar](../VS_visualcpp/Docking-and-Floating-Toolbars.md)  
  
-   [Toolbar tool tips](../VS_visualcpp/Toolbar-Tool-Tips.md)  
  
-   [Flyby status bar updates](../VS_visualcpp/Toolbar-Tool-Tips.md)  
  
-   [Handling tool tip notifications](../VS_visualcpp/Handling-Tool-Tip-Notifications.md)  
  
-   The [CToolBar](../VS_visualcpp/CToolBar-Class.md) and [CToolBarCtrl](../VS_visualcpp/CToolBarCtrl-Class.md) classes  
  
-   [Handling customization notifications](../VS_visualcpp/Handling-Customization-Notifications.md)  
  
-   [Multiple toolbars](../VS_visualcpp/Toolbar-Fundamentals.md)  
  
-   [Using your old toolbars](../VS_visualcpp/Using-Your-Old-Toolbars.md)  
  
-   [Control bars](../VS_visualcpp/Control-Bars.md)  
  
 For general information about using Windows common controls, see [Common Controls](http://msdn.microsoft.com/library/windows/desktop/bb775493).  
  
## See Also  
 [MFC Toolbar Implementation](../VS_visualcpp/MFC-Toolbar-Implementation.md)