---
description: "Learn more about: When Update Handlers Are Called"
title: "When Update Handlers Are Called"
ms.date: "11/04/2016"
helpviewer_keywords: ["updating user interface objects [MFC]", "command routing [MFC], update commands", "toolbar buttons [MFC], enabling", "disabling toolbar buttons", "menus [MFC], initializing", "update handlers [MFC]", "disabling menu items", "toolbars [MFC], updating", "menus [MFC], updating as context changes", "toolbar controls [MFC], updated during OnIdle method [MFC]", "menu items, enabling", "command routing [MFC], update handlers", "update handlers, calling"]
ms.assetid: 7359f6b1-4669-477d-bd99-690affed08d9
---
# When Update Handlers Are Called

Suppose the user clicks the mouse in the File menu, which generates a WM_INITMENUPOPUP message. The framework's update mechanism collectively updates all items on the File menu before the menu drops down so the user can see it.

To do this, the framework routes update commands for all menu items in the pop-up menu along the standard command routing. Command targets on the routing have an opportunity to update any menu items by matching the update command with an appropriate message-map entry (of the form `ON_UPDATE_COMMAND_UI`) and calling an "update handler" function. Thus, for a menu with six menu items, six update commands are sent out. If an update handler exists for the command ID of the menu item, it is called to do the updating. If not, the framework checks for the existence of a handler for that command ID and enables or disables the menu item as appropriate.

If the framework does not find an `ON_UPDATE_COMMAND_UI` entry during command routing, it automatically enables the user-interface object if there is an `ON_COMMAND` entry somewhere with the same command ID. Otherwise, it disables the user-interface object. Therefore, to ensure that a user-interface object is enabled, supply a handler for the command the object generates or supply an update handler for it. See the figure in the topic [User-Interface Objects and Command IDs](../mfc/user-interface-objects-and-command-ids.md).

It is possible to disable the default disabling of user-interface objects. For more information, see the [m_bAutoMenuEnable](../mfc/reference/cframewnd-class.md#m_bautomenuenable) member of class `CFrameWnd` in the *MFC Reference*.

Menu initialization is automatic in the framework, occurring when the application receives a WM_INITMENUPOPUP message. During the idle loop, the framework searches the command routing for button update handlers in much the same way as it does for menus.

## See also

[How to: Update User-Interface Objects](../mfc/how-to-update-user-interface-objects.md)
