---
description: "Learn more about: Message Handlers"
title: "Message Handlers"
ms.date: "11/04/2016"
helpviewer_keywords: ["message handlers [MFC]", "command handling [MFC], message handlers", "handlers [MFC]", "message handling [MFC], message handler functions", "handlers [MFC], command", "handlers [MFC], message"]
ms.assetid: 51bc4e76-dbe3-4cc2-b026-3199d56b2fa9
---
# Message Handlers

In MFC, a dedicated *handler* function processes each separate message. Message-handler functions are member functions of a class. This documentation uses the terms *message-handler member function*, *message-handler function*, *message handler*, and *handler* interchangeably. Some kinds of message handlers are also called "command handlers."

Writing message handlers accounts for a large proportion of your work in writing a framework application. This article family describes how the message-processing mechanism works.

What does the handler for a message do It does whatever you want done in response to that message. You can create the handlers by using the [Class Wizard](reference/mfc-class-wizard.md) of the class, and then fill in the handler's code using the source code editor.

You can use all of the facilities of Microsoft Visual C++ and MFC to write your handlers. For a list of all classes, see [Class Library Overview](class-library-overview.md) in the *MFC Reference*.

## See also

[Messages and Commands in the Framework](messages-and-commands-in-the-framework.md)
