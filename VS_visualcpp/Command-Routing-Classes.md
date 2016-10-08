---
title: "Command Routing Classes"
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
ms.assetid: 4b50e689-2c54-4e6c-90f0-37333e22b2a1
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
# Command Routing Classes
As the user interacts with the application by choosing menus or control-bar buttons with the mouse, the application sends messages from the affected user-interface object to an appropriate command-target object. Command-target classes derived from `CCmdTarget` include [CWinApp](../VS_visualcpp/CWinApp-Class.md), [CWnd](../VS_visualcpp/CWnd-Class.md), [CDocTemplate](../VS_visualcpp/CDocTemplate-Class.md), [CDocument](../VS_visualcpp/CDocument-Class.md), [CView](../VS_visualcpp/CView-Class.md), and the classes derived from them. The framework supports automatic command routing so that commands can be handled by the most appropriate object currently active in the application.  
  
 An object of class `CCmdUI` is passed to your command targets' update command UI ([ON_UPDATE_COMMAND_UI](../Topic/ON_UPDATE_COMMAND_UI.md)) handlers to allow you to update the state of the user interface for a particular command (for instance, to check or remove the check from menu items). You call member functions of the `CCmdUI` object to update the state of the UI object. This process is the same whether the UI object associated with a particular command is a menu item or a button or both.  
  
 [CCmdTarget](../VS_visualcpp/CCmdTarget-Class.md)  
 Serves as the base class for all classes of objects that can receive and respond to messages.  
  
 [CCmdUI](../VS_visualcpp/CCmdUI-Class.md)  
 Provides a programmatic interface for updating user-interface objects such as menu items or control-bar buttons. The command target object enables, disables, checks, and/or clears the user-interface object with this object.  
  
## See Also  
 [Class Overview](../VS_visualcpp/Class-Library-Overview.md)