---
title: "How Noncommand Messages Reach Their Handlers | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["messages [MFC], routing", "noncommand messages", "Windows messages [MFC], routing", "message handling [MFC], noncommand messages"]
ms.assetid: e7df8aef-9fae-41f4-9c11-881d8465f602
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# How Noncommand Messages Reach Their Handlers
Unlike commands, standard Windows messages do not get routed through a chain of command targets but are usually handled by the window to which Windows sends the message. The window might be a main frame window, an MDI child window, a standard control, a dialog box, a view, or some other kind of child window.  
  
 At run time, each Windows window is attached to a window object (derived directly or indirectly from `CWnd`) that has its own associated message map and handler functions. The framework uses the message map — as for a command — to map incoming messages to handlers.  
  
## See Also  
 [How the Framework Calls a Handler](../mfc/how-the-framework-calls-a-handler.md)

