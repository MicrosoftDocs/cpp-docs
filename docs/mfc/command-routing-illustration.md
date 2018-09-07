---
title: "Command Routing Illustration | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["MFC, command routing", "command handling [MFC], routing commands", "command routing [MFC], OnCmdMsg handler"]
ms.assetid: 4b7b4741-565f-4878-b076-fd85c670f87f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Command Routing Illustration
To illustrate, consider a command message from a Clear All menu item in an MDI application's Edit menu. Suppose the handler function for this command happens to be a member function of the application's document class. Here's how that command reaches its handler after the user chooses the menu item:  
  
1.  The main frame window receives the command message first.  
  
2.  The main MDI frame window gives the currently active MDI child window a chance to handle the command.  
  
3.  The standard routing of an MDI child frame window gives its view a chance at the command before checking its own message map.  
  
4.  The view checks its own message map first and, finding no handler, next routes the command to its associated document.  
  
5.  The document checks its message map and finds a handler. This document member function is called and the routing stops.  
  
 If the document did not have a handler, it would next route the command to its document template. Then the command would return to the view and then the frame window. Finally, the frame window would check its message map. If that check failed as well, the command would be routed back to the main MDI frame window and then to the application object — the ultimate destination of unhandled commands.  
  
## See Also  
 [How the Framework Calls a Handler](../mfc/how-the-framework-calls-a-handler.md)

