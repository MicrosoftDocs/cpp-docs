---
description: "Learn more about: OnIdle Member Function"
title: "OnIdle Member Function"
ms.date: "11/19/2018"
f1_keywords: ["OnIdle"]
helpviewer_keywords: ["processing messages [MFC]", "OnIdle method [MFC]", "idle loop processing [MFC]", "CWinApp class [MFC], OnIdle method [MFC]", "message handling [MFC], OnIdle method [MFC]"]
ms.assetid: 51adc874-0075-4f76-be1c-79283f46c10b
---
# OnIdle Member Function

When no Windows messages are being processed, the framework calls the [CWinApp](reference/cwinapp-class.md) member function [OnIdle](reference/cwinapp-class.md#onidle) (described in the MFC Library Reference).

Override `OnIdle` to perform background tasks. The default version updates the state of user-interface objects such as toolbar buttons and performs cleanup of temporary objects created by the framework in the course of its operations. The following figure illustrates how the message loop calls `OnIdle` when there are no messages in the queue.

![Message loop process](../mfc/media/vc387c1.gif "Message loop process") <br/>
The Message Loop

For more information about what you can do in the idle loop, see [Idle Loop Processing](idle-loop-processing.md).

## See also

[CWinApp: The Application Class](cwinapp-the-application-class.md)
