---
title: "ON_UPDATE_COMMAND_UI Macro | Microsoft Docs"
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
  - "ON_UPDATE_COMMAND_UI"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ON_UPDATE_COMMAND_UI macro"
  - "update handlers"
  - "command-handler macros"
  - "updating user-interface objects"
ms.assetid: 3e72b50f-4119-4c82-81cf-6e09b132de05
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ON_UPDATE_COMMAND_UI Macro
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [ON_UPDATE_COMMAND_UI Macro](https://docs.microsoft.com/cpp/mfc/on-update-command-ui-macro).  
  
  
Use the **Properties** window to connect a user-interface object to a command-update handler in a command-target object. It will automatically connect the user-interface object's ID to the `ON_UPDATE_COMMAND_UI` macro and create a handler in the object that will handle the update. See [Mapping Messages to Functions](../mfc/reference/mapping-messages-to-functions.md) for more information.  
  
 For example, to update a Clear All command in your program's Edit menu, use the **Properties** window to add a message-map entry in the chosen class, a function declaration for a command-update handler called `OnUpdateEditClearAll` in the class declaration, and an empty function template in the class's implementation file. The function prototype looks like this:  
  
 [!code-cpp[NVC_MFCDocView#2](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCDocView/Cpp/NVC_MFCDocView.h#2)]  
  
 Like all handlers, the function shows the **afx_msg** keyword. Like all update handlers, it takes one argument, a pointer to a `CCmdUI` object.  
  
## See Also  
 [How to: Update User-Interface Objects](../mfc/how-to-update-user-interface-objects.md)





