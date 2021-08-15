---
description: "Learn more about: Settings for the CStatusBarCtrl"
title: "Settings for the CStatusBarCtrl"
ms.date: "11/04/2016"
helpviewer_keywords: ["status bar controls [MFC], settings", "CStatusBarCtrl class [MFC], settings"]
ms.assetid: adeba0c3-17f3-435c-b140-a57845e9ce49
---
# Settings for the CStatusBarCtrl

The default position of a [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md) status window is along the bottom of the parent window, but you can specify the CCS_TOP style to have it appear at the top of the parent window's client area.

You can specify the SBARS_SIZEGRIP style to include a sizing grip at the right end of the `CStatusBarCtrl` status window. A sizing grip is similar to a sizing border; it is a rectangular area that the user can click and drag to resize the parent window.

> [!NOTE]
> If you combine the CCS_TOP and SBARS_SIZEGRIP styles, the resulting sizing grip is not functional even though the system draws it in the status window.

The window procedure for the status window automatically sets the initial size and position of the control window. The width is the same as that of the parent window's client area. The height is based on the metrics of the font that is currently selected into the status window's device context and on the width of the window's borders.

The window procedure automatically adjusts the size of the status window whenever it receives a WM_SIZE message. Typically, when the size of the parent window changes, the parent sends a WM_SIZE message to the status window.

You can set the minimum height of a status window's drawing area by calling [SetMinHeight](../mfc/reference/cstatusbarctrl-class.md#setminheight), specifying the minimum height in pixels. The drawing area does not include the window's borders.

You retrieve the widths of the borders of a status window by calling [GetBorders](../mfc/reference/cstatusbarctrl-class.md#getborders). This member function includes the pointer to a three-element array that receives the width of the horizontal border, the vertical border, and the border between rectangles.

## See also

[Using CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)<br/>
[Controls](../mfc/controls-mfc.md)
