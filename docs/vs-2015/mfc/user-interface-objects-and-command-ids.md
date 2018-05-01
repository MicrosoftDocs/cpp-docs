---
title: "User-Interface Objects and Command IDs | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "keyboard shortcuts, associating with IDs"
  - "MFC, command routing"
  - "toolbar controls [MFC], command ID"
  - "menu items, associating with IDs"
  - "user interface objects, associating with IDs"
  - "command IDs, user interface objects"
  - "command routing, MFC"
  - "command handling, user-interface objects"
ms.assetid: 4ea19e9b-ed1e-452e-bd33-7f509107a45b
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# User-Interface Objects and Command IDs
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [User-Interface Objects and Command IDs](https://docs.microsoft.com/cpp/mfc/user-interface-objects-and-command-ids).  
  
  
Menu items, toolbar buttons, and accelerator keys are "user-interface objects" capable of generating commands. Each such user-interface object has an ID. You associate a user-interface object with a command by assigning the same ID to the object and the command. As explained in [Messages](../mfc/messages.md), commands are implemented as special messages. The figure "Commands in the Framework" below shows how the framework manages commands. When a user-interface object generates a command, such as `ID_EDIT_CLEAR_ALL`, one of the objects in your application handles the command — in the figure below, the document object's `OnEditClearAll` function is called via the document's message map.  
  
 ![Commands in the Framework](../mfc/media/vc385p1.gif "vc385P1")  
Commands in the Framework  
  
 The figure "Command Updating in the Framework" below shows how MFC updates user-interface objects such as menu items and toolbar buttons. Before a menu drops down, or during the idle loop in the case of toolbar buttons, MFC routes an update command. In the figure below, the document object calls its update command handler, `OnUpdateEditClearAll`, to enable or disable the user-interface object.  
  
 ![Command updating in the Framework](../mfc/media/vc385p2.png "vc385P2")  
Command Updating in the Framework  
  
## See Also  
 [Messages and Commands in the Framework](../mfc/messages-and-commands-in-the-framework.md)





