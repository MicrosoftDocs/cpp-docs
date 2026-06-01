---
description: "Learn more about: Managing the Current View"
title: "Managing the Current View"
ms.date: "11/04/2016"
helpviewer_keywords: ["views [MFC], and OnActivateView method [MFC]", "views [MFC], deactivating", "views [MFC], activating", "frame windows [MFC], current view", "OnActivateView method [MFC]", "views [MFC], current", "deactivating views [MFC]", "current view in frame window [MFC]"]
ms.topic: concept-article
---
# Managing the Current View

>[!NOTE]
> The Microsoft Foundation Classes (MFC) library continues to be supported. However, we're no longer adding features or updating the documentation.

As part of the default implementation of frame windows, a frame window keeps track of a currently active view. If the frame window contains more than one view, as for example in a splitter window, the current view is the most recent view in use. The active view is independent of the active window in Windows or the current input focus.

When the active view changes, the framework notifies the current view by calling its [OnActivateView](reference/cview-class.md#onactivateview) member function. You can tell whether the view is being activated or deactivated by examining `OnActivateView`'s *bActivate* parameter. By default, `OnActivateView` sets the focus to the current view on activation. You can override `OnActivateView` to perform any special processing when the view is deactivated or reactivated. For example, you might want to provide special visual cues to distinguish the active view from other, inactive views.

A frame window forwards commands to its current (active) view, as described in [Command Routing](command-routing.md), as part of the standard command routing.

## See also

[Using Frame Windows](using-frame-windows.md)
