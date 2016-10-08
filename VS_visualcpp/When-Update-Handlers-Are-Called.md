---
title: "When Update Handlers Are Called"
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
ms.assetid: 7359f6b1-4669-477d-bd99-690affed08d9
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
# When Update Handlers Are Called
Suppose the user clicks the mouse in the File menu, which generates a `WM_INITMENUPOPUP` message. The framework's update mechanism collectively updates all items on the File menu before the menu drops down so the user can see it.  
  
 To do this, the framework routes update commands for all menu items in the pop-up menu along the standard command routing. Command targets on the routing have an opportunity to update any menu items by matching the update command with an appropriate message-map entry (of the form `ON_UPDATE_COMMAND_UI`) and calling an "update handler" function. Thus, for a menu with six menu items, six update commands are sent out. If an update handler exists for the command ID of the menu item, it is called to do the updating. If not, the framework checks for the existence of a handler for that command ID and enables or disables the menu item as appropriate.  
  
 If the framework does not find an `ON_UPDATE_COMMAND_UI` entry during command routing, it automatically enables the user-interface object if there is an `ON_COMMAND` entry somewhere with the same command ID. Otherwise, it disables the user-interface object. Therefore, to ensure that a user-interface object is enabled, supply a handler for the command the object generates or supply an update handler for it. See the figure in the topic [User-Interface Objects and Command IDs](../VS_visualcpp/User-Interface-Objects-and-Command-IDs.md).  
  
 It is possible to disable the default disabling of user-interface objects. For more information, see the [m_bAutoMenuEnable](../Topic/CFrameWnd::m_bAutoMenuEnable.md) member of class `CFrameWnd` in the *MFC Reference*.  
  
 Menu initialization is automatic in the framework, occurring when the application receives a `WM_INITMENUPOPUP` message. During the idle loop, the framework searches the command routing for button update handlers in much the same way as it does for menus.  
  
## See Also  
 [How to: Update User-Interface Objects](../VS_visualcpp/How-to--Update-User-Interface-Objects.md)