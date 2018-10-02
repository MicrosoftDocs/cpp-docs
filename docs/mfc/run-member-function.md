---
title: "Run Member Function | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["WinMain method [MFC]"]
ms.assetid: 24ab7597-2354-495b-9a20-2c8ccc7385b3
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Run Member Function

A framework application spends most of its time in the [Run](../mfc/reference/cwinapp-class.md#run) member function of class [CWinApp](../mfc/reference/cwinapp-class.md). After initialization, `WinMain` calls `Run` to process the message loop.

`Run` cycles through a message loop, checking the message queue for available messages. If a message is available, `Run` dispatches it for action. If no messages are available, which is often true, `Run` calls `OnIdle` to do any idle-time processing that you or the framework may need done. If there are no messages and no idle processing to do, the application waits until something happens. When the application terminates, `Run` calls `ExitInstance`. The figure in [OnIdle Member Function](../mfc/onidle-member-function.md) shows the sequence of actions in the message loop.

Message dispatching depends on the kind of message. For more information, see [Messages and Commands in the Framework](../mfc/messages-and-commands-in-the-framework.md).

## See Also

[CWinApp: The Application Class](../mfc/cwinapp-the-application-class.md)
