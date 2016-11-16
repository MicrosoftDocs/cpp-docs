---
title: "What Frame Windows Do | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "frame windows, about frame widows"
  - "frame windows, tasks"
  - "MFC, frame windows"
ms.assetid: 1148a952-6786-4622-b5a8-68a2d7eae584
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# What Frame Windows Do
Besides simply framing a view, frame windows are responsible for numerous tasks involved in coordinating the frame with its view and with the application. [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md) and [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md) inherit from [CFrameWnd](../mfc/reference/cframewnd-class.md), so they have `CFrameWnd` capabilities as well as new capabilities that they add. Examples of child windows include views, controls such as buttons and list boxes, and control bars, including toolbars, status bars, and dialog bars.  
  
 The frame window is responsible for managing the layout of its child windows. In the MFC framework, a frame window positions any control bars, views, and other child windows inside its client area.  
  
 The frame window also forwards commands to its views and can respond to notification messages from control windows.  
  
## What do you want to know more about  
  
-   [Control bars (how they fit into the frame window)](../mfc/control-bars.md)  
  
-   [Managing menus, control bars, and accelerators (how they fit into the frame window)](../mfc/managing-menus-control-bars-and-accelerators.md)  
  
-   [Command Routing (from the frame window to its view and other command targets)](../mfc/command-routing.md)  
  
-   [Document /View Architecture](../mfc/document-view-architecture.md)  
  
-   [Control bars](../mfc/control-bars.md)  
  
-   [Controls](../mfc/controls-mfc.md)  
  
## See Also  
 [Frame Windows](../mfc/frame-windows.md)

