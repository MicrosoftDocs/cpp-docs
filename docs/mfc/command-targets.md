---
title: "Command Targets | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["command targets", "command mapping", "messages, command [MFC]", "command routing [MFC], command targets"]
ms.assetid: b0f784e5-c6dc-4391-9e71-aa7b7dcbe9f0
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Command Targets
The figure [Commands in the Framework](../mfc/user-interface-objects-and-command-ids.md) shows the connection between a user-interface object, such as a menu item, and the handler function that the framework calls to carry out the resulting command when the object is clicked.  
  
 Windows sends messages that are not command messages directly to a window whose handler for the message is then called. However, the framework routes commands to a number of candidate objects — called "command targets" — one of which normally invokes a handler for the command. The handler functions work the same way for both commands and standard Windows messages, but the mechanisms by which they are called are different, as explained in [How the Framework Calls a Handler](../mfc/how-the-framework-calls-a-handler.md).  
  
## See Also  
 [Messages and Commands in the Framework](../mfc/messages-and-commands-in-the-framework.md)

