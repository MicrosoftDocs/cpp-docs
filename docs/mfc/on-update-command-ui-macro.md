---
title: "ON_UPDATE_COMMAND_UI Macro | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
f1_keywords: ["ON_UPDATE_COMMAND_UI"]
dev_langs: ["C++"]
helpviewer_keywords: ["ON_UPDATE_COMMAND_UI macro [MFC]", "update handlers [MFC]", "command-handler macros", "updating user-interface objects [MFC]"]
ms.assetid: 3e72b50f-4119-4c82-81cf-6e09b132de05
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# ON_UPDATE_COMMAND_UI Macro

Use the **Properties** window to connect a user-interface object to a command-update handler in a command-target object. It will automatically connect the user-interface object's ID to the ON_UPDATE_COMMAND_UI macro and create a handler in the object that will handle the update. See [Mapping Messages to Functions](../mfc/reference/mapping-messages-to-functions.md) for more information.

For example, to update a Clear All command in your program's Edit menu, use the **Properties** window to add a message-map entry in the chosen class, a function declaration for a command-update handler called `OnUpdateEditClearAll` in the class declaration, and an empty function template in the class's implementation file. The function prototype looks like this:

[!code-cpp[NVC_MFCDocView#2](../mfc/codesnippet/cpp/on-update-command-ui-macro_1.h)]

Like all handlers, the function shows the **afx_msg** keyword. Like all update handlers, it takes one argument, a pointer to a `CCmdUI` object.

## See Also

[How to: Update User-Interface Objects](../mfc/how-to-update-user-interface-objects.md)

