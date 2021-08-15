---
description: "Learn more about: ON_UPDATE_COMMAND_UI Macro"
title: "ON_UPDATE_COMMAND_UI Macro"
ms.date: "09/06/2019"
f1_keywords: ["ON_UPDATE_COMMAND_UI"]
helpviewer_keywords: ["ON_UPDATE_COMMAND_UI macro [MFC]", "update handlers [MFC]", "command-handler macros", "updating user-interface objects [MFC]"]
ms.assetid: 3e72b50f-4119-4c82-81cf-6e09b132de05
---
# ON_UPDATE_COMMAND_UI Macro

To connect a user-interface object to a command-update handler in a command-target object, open **Class View**, then right-click on the class to which the handler will be added, and choose **Class Wizard**. Find the user-interface object's ID in the list on the left, then choose **UPDATE_COMMAND_UI** in the right pane and click **Add Handler**. This creates a handler function in the class and adds the appropriate entry in the message map. See [Mapping Messages to Functions](reference/mapping-messages-to-functions.md) for more information. You can specify additional messages to handle in the **Messages** pane.

For example, to update a Clear All command in your program's Edit menu, use the **Class Wizard** to add a message-map entry in the selected class, a function declaration for a command-update handler called `OnUpdateEditClearAll` in the class declaration, and an empty function template in the class's implementation file. The function prototype looks like this:

[!code-cpp[NVC_MFCDocView#2](codesnippet/cpp/on-update-command-ui-macro_1.h)]

Like all handlers, the function declaration shows the **afx_msg** keyword. Like all update handlers, it takes one argument, a pointer to a `CCmdUI` object.

## See also

[How to: Update User-Interface Objects](how-to-update-user-interface-objects.md)
