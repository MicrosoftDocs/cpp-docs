---
title: "How to: Update User-Interface Objects | Microsoft Docs"
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
  - "menus, updating as context changes"
  - "user interface objects, updating"
  - "user interface objects"
  - "update handlers"
  - "enabling UI elements"
  - "disabling menus"
  - "updating user-interface objects"
  - "disabling UI elements"
  - "commands, updating UI"
  - "enabling menus"
ms.assetid: 82f09773-c978-427b-b321-05a6143b7369
caps.latest.revision: 9
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
# How to: Update User-Interface Objects
Typically, menu items and toolbar buttons have more than one state. For example, a menu item is grayed (dimmed) if it is unavailable in the present context. Menu items can also be checked or unchecked. A toolbar button can also be disabled if unavailable, or it can be checked.  
  
 Who updates the state of these items as program conditions change Logically, if a menu item generates a command that is handled by, say, a document, it makes sense to have the document update the menu item. The document probably contains the information on which the update is based.  
  
 If a command has multiple user-interface objects (perhaps a menu item and a toolbar button), both are routed to the same handler function. This encapsulates your user-interface update code for all of the equivalent user-interface objects in a single place.  
  
 The framework provides a convenient interface for automatically updating user-interface objects. You can choose to do the updating in some other way, but the interface provided is efficient and easy to use.  
  
 The following topics explain the use of update handlers:  
  
-   [When update handlers are called](../mfc/when-update-handlers-are-called.md)  
  
-   [The ON_UPDATE_COMMAND_UI macro](../mfc/on-update-command-ui-macro.md)  
  
-   [The CCmdUI class](../mfc/the-ccmdui-class.md)  
  
## See Also  
 [Menus](../mfc/menus-mfc.md)

