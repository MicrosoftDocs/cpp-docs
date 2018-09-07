---
title: "Mapping Windows Messages to Your Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["MFC dialog boxes [MFC], Windows messages", "message maps [MFC], in dialog class", "Windows messages [MFC], mapping in dialog classes", "messages to dialog class [MFC]", "mappings [MFC], messages to dialog class [MFC]", "message maps [MFC], mapping Windows messages to classes", "messages to dialog class [MFC], mapping"]
ms.assetid: a4c6fd1f-1d33-47c9-baa0-001755746d6d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Mapping Windows Messages to Your Class
If you need your dialog box to handle Windows messages, override the appropriate handler functions. To do so, use the Properties window to [map the messages](../mfc/reference/mapping-messages-to-functions.md) to the dialog class. This writes a message-map entry for each message and adds the message-handler member functions to the class. Use the Visual C++ source code editor to write code in the message handlers.  
  
 You can also override member functions of [CDialog](../mfc/reference/cdialog-class.md) and its base classes, especially [CWnd](../mfc/reference/cwnd-class.md).  
  
## What do you want to know more about  
  
-   [Message handling and mapping](../mfc/message-handling-and-mapping.md)  
  
-   [Commonly overridden member functions](../mfc/commonly-overridden-member-functions.md)  
  
-   [Commonly added member functions](../mfc/commonly-added-member-functions.md)  
  
## See Also  
 [Dialog Boxes](../mfc/dialog-boxes.md)   
 [Life Cycle of a Dialog Box](../mfc/life-cycle-of-a-dialog-box.md)

