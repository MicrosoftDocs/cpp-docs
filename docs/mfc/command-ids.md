---
description: "Learn more about: Command IDs"
title: "Command IDs"
ms.date: "11/04/2016"
helpviewer_keywords: ["command IDs, MFC", "command IDs"]
ms.assetid: e0171a2b-45b9-41fa-945d-ec2f7602ded0
---
# Command IDs

A command is fully described by its command ID alone (encoded in the **WM_COMMAND** message). This ID is assigned to the user-interface object that generates the command. Typically, IDs are named for the functionality of the user-interface object they are assigned to.

For example, a Clear All item in the Edit menu might be assigned an ID such as **ID_EDIT_CLEAR_ALL**. The class library predefines some IDs, particularly for commands that the framework handles itself, such as **ID_EDIT_CLEAR_ALL** or **ID_FILE_OPEN**. You will create other command IDs yourself.

When you create your own menus in the Visual C++ menu editor, it is a good idea to follow the class library's naming convention as illustrated by **ID_FILE_OPEN**. [Standard Commands](standard-commands.md) explains the standard commands defined by the class library.

## See also

[User-Interface Objects and Command IDs](user-interface-objects-and-command-ids.md)
