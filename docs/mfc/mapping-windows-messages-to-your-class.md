---
description: "Learn more about: Mapping Windows Messages to Your Class"
title: "Mapping Windows Messages to Your Class"
ms.date: "09/06/2019"
helpviewer_keywords: ["MFC dialog boxes [MFC], Windows messages", "message maps [MFC], in dialog class", "Windows messages [MFC], mapping in dialog classes", "messages to dialog class [MFC]", "mappings [MFC], messages to dialog class [MFC]", "message maps [MFC], mapping Windows messages to classes", "messages to dialog class [MFC], mapping", "Class Wizard [MFC]"]
ms.assetid: a4c6fd1f-1d33-47c9-baa0-001755746d6d
---
# Mapping Windows Messages to Your Class

If you need your dialog box to handle Windows messages, override the appropriate handler functions. To do so, choose the **Class View** tab in **Solution Explorer**, right click on the class that represents the dialog box, and choose [Class Wizard](reference/mfc-class-wizard.md). Use the wizard to [map the messages](reference/mapping-messages-to-functions.md) to the dialog class. This writes a message-map entry for each message and adds the message-handler member functions to the class. Use the code editor to write code in the message handlers.

You can also override member functions of [CDialog](reference/cdialog-class.md) and its base classes, especially [CWnd](reference/cwnd-class.md).

## What do you want to know more about

- [Message handling and mapping](message-handling-and-mapping.md)

- [Commonly overridden member functions](commonly-overridden-member-functions.md)

- [Commonly added member functions](commonly-added-member-functions.md)

## See also

[Dialog Boxes](dialog-boxes.md)<br/>
[Working with Dialog Boxes in MFC](life-cycle-of-a-dialog-box.md)
