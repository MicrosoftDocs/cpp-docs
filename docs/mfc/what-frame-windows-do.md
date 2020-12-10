---
description: "Learn more about: What Frame Windows Do"
title: "What Frame Windows Do"
ms.date: "11/04/2016"
helpviewer_keywords: ["frame windows [MFC], about frame windows", "frame windows [MFC], tasks", "MFC, frame windows"]
ms.assetid: 1148a952-6786-4622-b5a8-68a2d7eae584
---
# What Frame Windows Do

Besides simply framing a view, frame windows are responsible for numerous tasks involved in coordinating the frame with its view and with the application. [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md) and [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md) inherit from [CFrameWnd](../mfc/reference/cframewnd-class.md), so they have `CFrameWnd` capabilities as well as new capabilities that they add. Examples of child windows include views, controls such as buttons and list boxes, and control bars, including toolbars, status bars, and dialog bars.

The frame window is responsible for managing the layout of its child windows. In the MFC framework, a frame window positions any control bars, views, and other child windows inside its client area.

The frame window also forwards commands to its views and can respond to notification messages from control windows.

## What do you want to know more about

- [Control bars (how they fit into the frame window)](../mfc/control-bars.md)

- [Managing menus, control bars, and accelerators (how they fit into the frame window)](../mfc/managing-menus-control-bars-and-accelerators.md)

- [Command Routing (from the frame window to its view and other command targets)](../mfc/command-routing.md)

- [Document /View Architecture](../mfc/document-view-architecture.md)

- [Control bars](../mfc/control-bars.md)

- [Controls](../mfc/controls-mfc.md)

## See also

[Frame Windows](../mfc/frame-windows.md)
