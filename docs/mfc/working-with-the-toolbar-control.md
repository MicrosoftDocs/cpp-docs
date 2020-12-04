---
description: "Learn more about: Working with the Toolbar Control"
title: "Working with the Toolbar Control"
ms.date: "11/04/2016"
helpviewer_keywords: ["GetToolBarCtrl method [MFC]", "toolbars [MFC], accessing common control", "CToolBarCtrl class [MFC], accessing toolbar", "toolbar controls [MFC], accessing"]
ms.assetid: b19409d5-3831-42c7-80ae-195c49dc9085
---
# Working with the Toolbar Control

This article explains how you can access the [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) object underlying a [CToolBar](../mfc/reference/ctoolbar-class.md) for greater control over your toolbars. This is an advanced topic.

## Procedures

#### To access the toolbar common control underlying your CToolBar object

1. Call [CToolBar::GetToolBarCtrl](../mfc/reference/ctoolbar-class.md#gettoolbarctrl).

`GetToolBarCtrl` returns a reference to a [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) object. You can use the reference to call member functions of the toolbar control class.

> [!CAUTION]
> While calling `CToolBarCtrl` **Get** functions is safe, use caution if you call the **Set** functions. This is an advanced topic. Normally you shouldn't need to access the underlying toolbar control.

### What do you want to know more about

- [Controls (Windows common controls)](../mfc/controls-mfc.md)

- [Toolbar fundamentals](../mfc/toolbar-fundamentals.md)

- [Docking and floating toolbars](../mfc/docking-and-floating-toolbars.md)

- [Dynamically resizing the toolbar](../mfc/docking-and-floating-toolbars.md)

- [Toolbar tool tips](../mfc/toolbar-tool-tips.md)

- [Flyby status bar updates](../mfc/toolbar-tool-tips.md)

- [Handling tool tip notifications](../mfc/handling-tool-tip-notifications.md)

- The [CToolBar](../mfc/reference/ctoolbar-class.md) and [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) classes

- [Handling customization notifications](../mfc/handling-customization-notifications.md)

- [Multiple toolbars](../mfc/toolbar-fundamentals.md)

- [Using your old toolbars](../mfc/using-your-old-toolbars.md)

- [Control bars](../mfc/control-bars.md)

For general information about using Windows common controls, see [Common Controls](/windows/win32/Controls/common-controls-intro).

## See also

[MFC Toolbar Implementation](../mfc/mfc-toolbar-implementation.md)
