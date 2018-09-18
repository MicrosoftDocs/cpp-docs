---
title: "How to: Update User-Interface Objects | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["menus [MFC], updating as context changes", "user interface objects [MFC], updating", "user interface objects [MFC]", "update handlers [MFC]", "enabling UI elements [MFC]", "disabling menus [MFC]", "updating user-interface objects [MFC]", "disabling UI elements [MFC]", "commands [MFC], updating UI", "enabling menus [MFC]"]
ms.assetid: 82f09773-c978-427b-b321-05a6143b7369
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# How to: Update User-Interface Objects

Typically, menu items and toolbar buttons have more than one state. For example, a menu item is grayed (dimmed) if it is unavailable in the present context. Menu items can also be checked or unchecked. A toolbar button can also be disabled if unavailable, or it can be checked.

Who updates the state of these items as program conditions change Logically, if a menu item generates a command that is handled by, say, a document, it makes sense to have the document update the menu item. The document probably contains the information on which the update is based.

If a command has multiple user-interface objects (perhaps a menu item and a toolbar button), both are routed to the same handler function. This encapsulates your user-interface update code for all of the equivalent user-interface objects in a single place.

The framework provides a convenient interface for automatically updating user-interface objects. You can choose to do the updating in some other way, but the interface provided is efficient and easy to use.

The following topics explain the use of update handlers:

- [When update handlers are called](../mfc/when-update-handlers-are-called.md)

- [The ON_UPDATE_COMMAND_UI macro](../mfc/on-update-command-ui-macro.md)

- [The CCmdUI class](../mfc/the-ccmdui-class.md)

## See Also

[Menus](../mfc/menus-mfc.md)

