---
description: "Learn more about: Status Bar Implementation in MFC"
title: "Status Bar Implementation in MFC"
ms.date: "11/19/2018"
f1_keywords: ["COldStatusBar"]
helpviewer_keywords: ["status bars [MFC], implementing in MFC", "CStatusBarCtrl class [MFC], and MFC status bars", "CStatusBar class [MFC], and CStatusBarCtrl class [MFC]", "CStatusBarCtrl class [MFC], and CStatusBar class [MFC]", "status bars [MFC], backward compatibility", "status bars [MFC], old with COldStatusBar class [MFC]", "COldStatusBar class [MFC]", "status bars [MFC], and CStatusBarCtrl class", "CStatusBar class [MFC], and MFC status bars", "status indicators", "status bars [MFC], Windows 95 implementation"]
ms.assetid: be5cd876-38e3-4d5c-b8cb-16d57a16a142
---
# Status Bar Implementation in MFC

A [CStatusBar](../mfc/reference/cstatusbar-class.md) object is a control bar with a row of text output panes. The output panes are commonly used as message lines and as status indicators. Examples include the menu help-message lines that briefly explain the selected menu command and the indicators that show the status of the SCROLL LOCK, NUM LOCK, and other keys.

As of MFC version 4.0, status bars are implemented using class [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md), which encapsulates a status bar common control. For backward compatibility, MFC retains the older status bar implementation in class `COldStatusBar`. The documentation for earlier versions of MFC describes `COldStatusBar` under `CStatusBar`.

[CStatusBar::GetStatusBarCtrl](../mfc/reference/cstatusbar-class.md#getstatusbarctrl), a member function new to MFC 4.0, allows you to take advantage of the Windows common control's support for status bar customization and additional functionality. `CStatusBar` member functions give you most of the functionality of the Windows common controls; however, when you call `GetStatusBarCtrl`, you can give your status bars even more of the characteristics of a status bar. When you call `GetStatusBarCtrl`, it will return a reference to a `CStatusBarCtrl` object. You can use that reference to manipulate the status bar control.

The following figure shows a status bar that displays several indicators.

![Status bar](../mfc/media/vc37dy1.gif "Status bar") <br/>
A Status Bar

Like the toolbar, the status-bar object is embedded in its parent frame window and is constructed automatically when the frame window is constructed. The status bar, like all control bars, is destroyed automatically as well when the parent frame is destroyed.

## What do you want to know more about

- [Updating the text of a status bar pane](../mfc/updating-the-text-of-a-status-bar-pane.md)

- MFC classes [CStatusBar](../mfc/reference/cstatusbar-class.md) and [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md)

- [Control bars](../mfc/control-bars.md)

- [Dialog bars](../mfc/dialog-bars.md)

- [Toolbars (MFC Toolbar Implementation)](../mfc/mfc-toolbar-implementation.md)

## See also

[Status Bars](../mfc/status-bars.md)
