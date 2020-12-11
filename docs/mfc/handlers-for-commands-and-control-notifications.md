---
description: "Learn more about: Handlers for Commands and Control Notifications"
title: "Handlers for Commands and Control Notifications"
ms.date: "11/04/2016"
helpviewer_keywords: ["commands [MFC], handlers for", "functions [MFC], handler", "handlers [MFC]", "controls [MFC], notifications", "handlers [MFC], control notification [MFC]", "notifications [MFC], handlers for control", "handlers [MFC], command"]
ms.assetid: 20f57f4a-f577-4c09-80a2-43faf32a1c2e
---
# Handlers for Commands and Control Notifications

There are no default handlers for commands or control-notification messages. Therefore, you are bound only by convention in naming your handlers for these categories of messages. When you map the command or control notification to a handler, the [Class Wizard](reference/mfc-class-wizard.md) proposes a name based on the command ID or control-notification code. You can accept the proposed name, change it, or replace it.

Convention suggests that you name handlers in both categories for the user-interface object they represent. Thus a handler for the Cut command on the Edit menu might be named

[!code-cpp[NVC_MFCMessageHandling#4](codesnippet/cpp/handlers-for-commands-and-control-notifications_1.h)]

Because the Cut command is so commonly implemented in applications, the framework predefines the command ID for the Cut command as **ID_EDIT_CUT**. For a list of all predefined command IDs, see the file AFXRES.H. For more information, see [Standard Commands](standard-commands.md).

In addition, convention suggests a handler for the **BN_CLICKED** notification message from a button labeled "My Button" might be named

[!code-cpp[NVC_MFCMessageHandling#5](codesnippet/cpp/handlers-for-commands-and-control-notifications_2.h)]

You might assign this command an ID of **IDC_MY_BUTTON** because it is equivalent to an application-specific user-interface object.

Both categories of messages take no arguments and return no value.

## See also

[Declaring Message Handler Functions](declaring-message-handler-functions.md)
