---
title: "Managing the Current View | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["views [MFC], and OnActivateView method [MFC]", "views [MFC], deactivating", "views [MFC], activating", "frame windows [MFC], current view", "OnActivateView method [MFC]", "views [MFC], current", "deactivating views [MFC]", "current view in frame window [MFC]"]
ms.assetid: 0a1cc22d-d646-4536-9ad2-3cb6d7092e4a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Managing the Current View
As part of the default implementation of frame windows, a frame window keeps track of a currently active view. If the frame window contains more than one view, as for example in a splitter window, the current view is the most recent view in use. The active view is independent of the active window in Windows or the current input focus.  
  
 When the active view changes, the framework notifies the current view by calling its [OnActivateView](../mfc/reference/cview-class.md#onactivateview) member function. You can tell whether the view is being activated or deactivated by examining `OnActivateView`'s *bActivate* parameter. By default, `OnActivateView` sets the focus to the current view on activation. You can override `OnActivateView` to perform any special processing when the view is deactivated or reactivated. For example, you might want to provide special visual cues to distinguish the active view from other, inactive views.  
  
 A frame window forwards commands to its current (active) view, as described in [Command Routing](../mfc/command-routing.md), as part of the standard command routing.  
  
## See Also  
 [Using Frame Windows](../mfc/using-frame-windows.md)

