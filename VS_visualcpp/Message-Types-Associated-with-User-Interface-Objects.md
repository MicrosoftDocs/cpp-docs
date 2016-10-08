---
title: "Message Types Associated with User-Interface Objects"
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
ms.assetid: 681ee1a7-f6e6-4ea0-9fc6-1fb53a35516e
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
# Message Types Associated with User-Interface Objects
The following table shows the types of objects with which you work, and the types of messages associated with them.  
  
### User Interface Objects and Associated Messages  
  
|Object ID|Messages|  
|---------------|--------------|  
|Class name, representing the containing window|Windows messages appropriate to a [CWnd](../VS_visualcpp/CWnd-Class.md)-derived class: a dialog box, window, child window, MDI child window, or topmost frame window.|  
|Menu or accelerator identifier|-   **COMMAND** message (executes the program function).<br />-   **UPDATE_COMMAND_UI** message (dynamically updates the menu item).|  
|Control identifier|Control notification messages for the selected control type.|  
  
## See Also  
 [Mapping Messages to Functions](../VS_visualcpp/Mapping-Messages-to-Functions.md)   
 [Adding Functionality with Code Wizards](../VS_visualcpp/Adding-Functionality-with-Code-Wizards--C---.md)   
 [Adding a Class](../VS_visualcpp/Adding-a-Class--Visual-C---.md)   
 [Adding a Member Function](../VS_visualcpp/Adding-a-Member-Function--Visual-C---.md)   
 [Adding a Member Variable](../VS_visualcpp/Adding-a-Member-Variable---Visual-C---.md)   
 [Overriding a Virtual Function](../VS_visualcpp/Overriding-a-Virtual-Function--Visual-C---.md)   
 [MFC Message Handler](../VS_visualcpp/Adding-an-MFC-Message-Handler.md)   
 [Navigating the Class Structure](../VS_visualcpp/Navigating-the-Class-Structure--Visual-C---.md)