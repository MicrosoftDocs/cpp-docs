---
title: "Testing a Dialog Box"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 45034ee9-c554-4f4b-8c46-6ddefdee8951
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Testing a Dialog Box
When you're designing a dialog box, you can simulate and test its run-time behavior without compiling your program. In this mode, you can:  
  
-   Type text, select from combo-box lists, turn options on or off, and choose commands.  
  
-   Test the tab order.  
  
-   Test the grouping of controls such as radio buttons and check boxes.  
  
-   Test the keyboard shortcuts for controls in the dialog box.  
  
    > [!NOTE]
    >  Connections to dialog box code made by using wizards are not included in the simulation.  
  
 When you test a dialog box, it typically displays at a location that's relative to the main program window. If you've set the dialog box's Absolute Align property to True, the dialog box displays at a position that's relative to the upper-left corner of the screen.  
  
### To test a dialog box  
  
1.  When the Dialog editor is the active window, on the menu bar, choose **Format**, **Test Dialog**.  
  
2.  To end the simulation, press Esc, or just choose the **Close** button in the dialog box you are testing.  
  
 For information about how to add resources to managed projects, see [Resources in Desktop Apps](../Topic/Resources%20in%20Desktop%20Apps.md).  
  
 Requirements  
  
 Win32  
  
## See Also  
 [Controls in Dialog Boxes](../VS_visualcpp/Controls-in-Dialog-Boxes.md)   
 [Dialog Editor](../VS_visualcpp/Dialog-Editor.md)   
 [Showing or Hiding the Dialog Editor Toolbar](../VS_visualcpp/Showing-or-Hiding-the-Dialog-Editor-Toolbar.md)