---
description: "Learn more about: OnCmdMsg Handler"
title: "OnCmdMsg Handler"
ms.date: "11/04/2016"
f1_keywords: ["OnCmdMsg"]
helpviewer_keywords: ["messages, routing", "handlers [MFC]", "command routing [MFC], OnCmdMsg handler", "handlers, OnCmdMessage [MFC]", "OnCmdMessage method [MFC]"]
ms.assetid: 8df07024-506f-47e7-bba9-1c3bc5ad8ab6
---
# OnCmdMsg Handler

To accomplish the routing of commands, each command target calls the `OnCmdMsg` member function of the next command target in the sequence. Command targets use `OnCmdMsg` to determine whether they can handle a command and to route it to another command target if they cannot handle it.

Each command-target class may override the `OnCmdMsg` member function. The overrides let each class route commands to a particular next target. A frame window, for example, always routes commands to its current child window or view, as shown in the table [Standard Command Route](command-routing.md).

The default `CCmdTarget` implementation of `OnCmdMsg` uses the message map of the command-target class to search for a handler function for each command message it receives — in the same way that standard messages are searched. If it finds a match, it calls the handler. Message-map searching is explained in [How the Framework Searches Message Maps](how-the-framework-searches-message-maps.md).

## See also

[How the Framework Calls a Handler](how-the-framework-calls-a-handler.md)
