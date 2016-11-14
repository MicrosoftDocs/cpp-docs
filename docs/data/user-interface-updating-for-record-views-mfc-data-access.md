---
title: "User-Interface Updating for Record Views  (MFC Data Access) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 7
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
# User-Interface Updating for Record Views  (MFC Data Access)
`CRecordView` and `CDaoRecordView` also provide default user-interface update handlers for the navigation commands. These handlers automate enabling and disabling the user-interface objects — menu items and toolbar buttons. The application wizard supplies standard menus and, if you choose the **Dockable Toolbar** option, a set of toolbar buttons for the commands. If you create a record view class using `CRecordView`, you might want to add similar user-interface objects to your application.  
  
### To create menu resources with the menu editor  
  
1.  Referring to the information about using the [menu editor](../mfc/menu-editor.md), create your own menu with the same four commands.  
  
#### To create toolbar buttons with the graphics editor  
  
1.  Referring to the information about using the [toolbar editor](../mfc/toolbar-editor.md), edit the toolbar resource to add toolbar buttons for your record navigation commands.  
  
## See Also  
 [Supporting Navigation in a Record View](../data/supporting-navigation-in-a-record-view-mfc-data-access.md)   
 [Using a Record View](../data/using-a-record-view-mfc-data-access.md)