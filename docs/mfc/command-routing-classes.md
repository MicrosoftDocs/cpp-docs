---
description: "Learn more about: Command Routing Classes"
title: "Command Routing Classes"
ms.date: "11/04/2016"
f1_keywords: ["vc.classes.command"]
helpviewer_keywords: ["MFC, command routing", "command routing [MFC], classes"]
ms.assetid: 4b50e689-2c54-4e6c-90f0-37333e22b2a1
---
# Command Routing Classes

As the user interacts with the application by choosing menus or control-bar buttons with the mouse, the application sends messages from the affected user-interface object to an appropriate command-target object. Command-target classes derived from `CCmdTarget` include [CWinApp](reference/cwinapp-class.md), [CWnd](reference/cwnd-class.md), [CDocTemplate](reference/cdoctemplate-class.md), [CDocument](reference/cdocument-class.md), [CView](reference/cview-class.md), and the classes derived from them. The framework supports automatic command routing so that commands can be handled by the most appropriate object currently active in the application.

An object of class `CCmdUI` is passed to your command targets' update command UI ([ON_UPDATE_COMMAND_UI](reference/message-map-macros-mfc.md#on_update_command_ui)) handlers to allow you to update the state of the user interface for a particular command (for instance, to check or remove the check from menu items). You call member functions of the `CCmdUI` object to update the state of the UI object. This process is the same whether the UI object associated with a particular command is a menu item or a button or both.

[CCmdTarget](reference/ccmdtarget-class.md)<br/>
Serves as the base class for all classes of objects that can receive and respond to messages.

[CCmdUI](reference/ccmdui-class.md)<br/>
Provides a programmatic interface for updating user-interface objects such as menu items or control-bar buttons. The command target object enables, disables, checks, and/or clears the user-interface object with this object.

## See also

[Class Overview](class-library-overview.md)
