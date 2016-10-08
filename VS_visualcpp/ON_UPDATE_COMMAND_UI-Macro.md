---
title: "ON_UPDATE_COMMAND_UI Macro"
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
ms.assetid: 3e72b50f-4119-4c82-81cf-6e09b132de05
caps.latest.revision: 8
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
# ON_UPDATE_COMMAND_UI Macro
Use the **Properties** window to connect a user-interface object to a command-update handler in a command-target object. It will automatically connect the user-interface object's ID to the `ON_UPDATE_COMMAND_UI` macro and create a handler in the object that will handle the update. See [Mapping Messages to Functions](../VS_visualcpp/Mapping-Messages-to-Functions.md) for more information.  
  
 For example, to update a Clear All command in your program's Edit menu, use the **Properties** window to add a message-map entry in the chosen class, a function declaration for a command-update handler called `OnUpdateEditClearAll` in the class declaration, and an empty function template in the class's implementation file. The function prototype looks like this:  
  
 [!CODE [NVC_MFCDocView#2](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCDocView#2)]  
  
 Like all handlers, the function shows the **afx_msg** keyword. Like all update handlers, it takes one argument, a pointer to a `CCmdUI` object.  
  
## See Also  
 [How to: Update User-Interface Objects](../VS_visualcpp/How-to--Update-User-Interface-Objects.md)