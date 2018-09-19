---
title: "Handling Reflected Messages | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["message handling [MFC], reflected messages", "reflected messages, handling"]
ms.assetid: 147a4e0c-51cc-4447-a8e1-c28b4cece578
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Handling Reflected Messages

Message reflection lets you handle messages for a control, such as **WM_CTLCOLOR**, **WM_COMMAND**, and **WM_NOTIFY**, within the control itself. This makes the control more self-contained and portable. The mechanism works with Windows common controls as well as with ActiveX controls (formerly called OLE controls).

Message reflection lets you reuse your `CWnd`-derived classes more readily. Message reflection works via [CWnd::OnChildNotify](../mfc/reference/cwnd-class.md#onchildnotify), using special **ON_XXX_REFLECT** message map entries: for example, **ON_CTLCOLOR_REFLECT** and **ON_CONTROL_REFLECT**. [Technical Note 62](../mfc/tn062-message-reflection-for-windows-controls.md) explains message reflection in more detail.

## What do you want to do

- [Learn more about message reflection](../mfc/tn062-message-reflection-for-windows-controls.md)

- [Implement message reflection for a common control](../mfc/tn062-message-reflection-for-windows-controls.md)

- [Implement message reflection for an ActiveX control](../mfc/mfc-activex-controls-subclassing-a-windows-control.md)

## See Also

[Declaring Message Handler Functions](../mfc/declaring-message-handler-functions.md)
