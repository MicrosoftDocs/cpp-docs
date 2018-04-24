---
title: "The CCmdUI Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CCmdUI"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "updating user interface objects"
  - "user interface objects, updating"
  - "CCmdUI class, menu updating"
  - "update handlers"
  - "toolbars [C++], updating"
ms.assetid: 2f2bae62-8c29-45a4-bbce-490eb01907d5
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# The CCmdUI Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [The CCmdUI Class](https://docs.microsoft.com/cpp/mfc/the-ccmdui-class).  
  
  
When it routes an update command to its handler, the framework passes the handler a pointer to a `CCmdUI` object (or to an object of a `CCmdUI`-derived class). This object represents the menu item or toolbar button or other user-interface object that generated the command. The update handler calls member functions of the `CCmdUI` structure through the pointer to update the user-interface object. For example, here is an update handler for the Clear All menu item:  
  
 [!code-cpp[NVC_MFCDocView#3](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCDocView/Cpp/NVC_MFCDocView.cpp#3)]  
  
 This handler calls the **Enable** member function of an object with access to the menu item. **Enable** makes the item available for use.  
  
## See Also  
 [How to: Update User-Interface Objects](../mfc/how-to-update-user-interface-objects.md)





