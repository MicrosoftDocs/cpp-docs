---
title: "User-Interface Updating for Record Views  (MFC Data Access) | Microsoft Docs"
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
  - "user interfaces, updating"
  - "menus, updating as context changes"
  - "record views, user interface"
ms.assetid: 2c7914b6-2dc3-40c3-b2f2-8371da2a4063
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# User-Interface Updating for Record Views  (MFC Data Access)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [User-Interface Updating for Record Views  (MFC Data Access)](https://docs.microsoft.com/cpp/data/user-interface-updating-for-record-views-mfc-data-access).  
  
  
CRecordView` and `CDaoRecordView` also provide default user-interface update handlers for the navigation commands. These handlers automate enabling and disabling the user-interface objects — menu items and toolbar buttons. The application wizard supplies standard menus and, if you choose the **Dockable Toolbar** option, a set of toolbar buttons for the commands. If you create a record view class using `CRecordView`, you might want to add similar user-interface objects to your application.  
  
### To create menu resources with the menu editor  
  
1.  Referring to the information about using the [menu editor](../mfc/menu-editor.md), create your own menu with the same four commands.  
  
#### To create toolbar buttons with the graphics editor  
  
1.  Referring to the information about using the [toolbar editor](../mfc/toolbar-editor.md), edit the toolbar resource to add toolbar buttons for your record navigation commands.  
  
## See Also  
 [Supporting Navigation in a Record View](../data/supporting-navigation-in-a-record-view-mfc-data-access.md)   
 [Using a Record View](../data/using-a-record-view-mfc-data-access.md)

