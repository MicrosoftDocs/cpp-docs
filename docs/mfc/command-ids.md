---
title: "Command IDs | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["command IDs, MFC", "command IDs"]
ms.assetid: e0171a2b-45b9-41fa-945d-ec2f7602ded0
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Command IDs
A command is fully described by its command ID alone (encoded in the **WM_COMMAND** message). This ID is assigned to the user-interface object that generates the command. Typically, IDs are named for the functionality of the user-interface object they are assigned to.  
  
 For example, a Clear All item in the Edit menu might be assigned an ID such as **ID_EDIT_CLEAR_ALL**. The class library predefines some IDs, particularly for commands that the framework handles itself, such as **ID_EDIT_CLEAR_ALL** or **ID_FILE_OPEN**. You will create other command IDs yourself.  
  
 When you create your own menus in the Visual C++ menu editor, it is a good idea to follow the class library's naming convention as illustrated by **ID_FILE_OPEN**. [Standard Commands](../mfc/standard-commands.md) explains the standard commands defined by the class library.  
  
## See Also  
 [User-Interface Objects and Command IDs](../mfc/user-interface-objects-and-command-ids.md)

