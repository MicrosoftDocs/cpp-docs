---
title: "Customizing the Appearance of a Toolbar Control | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "TBSTYLE_"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "flat toolbars"
  - "CToolBar class, styles"
  - "transparent toolbars"
  - "TBSTYLE_ styles"
  - "CToolBarCtrl class, object styles"
  - "toolbar controls [MFC], style"
ms.assetid: fd0a73db-7ad1-4fe4-889b-02c3980f49e8
caps.latest.revision: 11
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
# Customizing the Appearance of a Toolbar Control
Class `CToolBarCtrl` provides many styles that affect the appearance (and, occasionally, the behavior) of the toolbar object. Modify the toolbar object by setting the `dwCtrlStyle` parameter of the `CToolBarCtrl::Create` (or `CToolBar::CreateEx`) member function, when you first create the toolbar control.  
  
 The following styles affect the "3D" aspect of the toolbar buttons and the placement of the button text:  
  
-   **TBSTYLE_FLAT** Creates a flat toolbar where both the toolbar and the buttons are transparent. Button text appears under button bitmaps. When this style is used, the button underneath the cursor is automatically highlighted.  
  
-   **TBSTYLE_TRANSPARENT** Creates a transparent toolbar. In a transparent toolbar, the toolbar is transparent but the buttons are not. Button text appears under button bitmaps.  
  
-   **TBSTYLE_LIST** Places button text to the right of button bitmaps.  
  
> [!NOTE]
>  To prevent repaint problems, the **TBSTYLE_FLAT** and **TBSTYLE_TRANSPARENT** styles should be set before the toolbar object is visible.  
  
 The following styles determine if the toolbar allows a user to reposition individual buttons within a toolbar object using drag and drop:  
  
-   **TBSTYLE_ALTDRAG** Allows users to change a toolbar button's position by dragging it while holding down ALT. If this style is not specified, the user must hold down SHIFT while dragging a button.  
  
    > [!NOTE]
    >  The `CCS_ADJUSTABLE` style must be specified to enable toolbar buttons to be dragged.  
  
-   **TBSTYLE_REGISTERDROP** Generates **TBN_GETOBJECT** notification messages to request drop target objects when the mouse pointer passes over toolbar buttons.  
  
 The remaining styles affect visual and nonvisual aspects of the toolbar object:  
  
-   `TBSTYLE_WRAPABLE` Creates a toolbar that can have multiple lines of buttons. Toolbar buttons can "wrap" to the next line when the toolbar becomes too narrow to include all buttons on the same line. Wrapping occurs on separation and nongroup boundaries.  
  
-   **TBSTYLE_CUSTOMERASE** Generates **NM_CUSTOMDRAW** notification messages when it processes `WM_ERASEBKGND` messages.  
  
-   `TBSTYLE_TOOLTIPS` Creates a tool tip control that an application can use to display descriptive text for the buttons in the toolbar.  
  
 For a complete listing of toolbar styles and extended styles, see [Toolbar Control and Button Styles](http://msdn.microsoft.com/library/windows/desktop/bb760439) and [Toolbar Extended Styles](http://msdn.microsoft.com/library/windows/desktop/bb760430) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
## See Also  
 [Using CToolBarCtrl](../mfc/using-ctoolbarctrl.md)   
 [Controls](../mfc/controls-mfc.md)

