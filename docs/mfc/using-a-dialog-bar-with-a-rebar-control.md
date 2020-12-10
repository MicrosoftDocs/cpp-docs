---
description: "Learn more about: Using a Dialog Bar with a Rebar Control"
title: "Using a Dialog Bar with a Rebar Control"
ms.date: "11/04/2016"
helpviewer_keywords: ["WS_EX_TRANSPARENT style", "rebar controls [MFC], dialog bars", "dialog bars [MFC], using with rebar bands"]
ms.assetid: e528cea0-6b81-4bdf-9643-7c03b6176590
---
# Using a Dialog Bar with a Rebar Control

As mentioned in [Rebar Controls and Bands](../mfc/rebar-controls-and-bands.md), each band can contain only one child window (or control). This might be a limitation if you want to have more than one child window per band. A convenient workaround is to create a dialog bar resource with multiple controls and then add a rebar band (containing the dialog bar) to the rebar control.

Normally, if you wanted the dialog bar band to appear transparent, you would set the WS_EX_TRANSPARENT extended style for the dialog bar object. However, because WS_EX_TRANSPARENT has some issues with properly painting the background of a dialog bar, you will need to do a little extra work to achieve the desired effect.

The following procedure details the steps necessary to achieve transparency without using the WS_EX_TRANSPARENT extended style.

### To implement a transparent dialog bar in a rebar band

1. Using the [Add Class dialog box](../mfc/reference/adding-an-mfc-class.md), add a new class (for example, `CMyDlgBar`) that implements your dialog bar object.

1. Add a handler for the WM_ERASEBKGND message.

1. In the new handler, modify the existing code to match the following example:

   [!code-cpp[NVC_MFCControlLadenDialog#29](../mfc/codesnippet/cpp/using-a-dialog-bar-with-a-rebar-control_1.cpp)]

1. Add a handler for the WM_MOVE message.

1. In the new handler, modify the existing code to match the following example:

   [!code-cpp[NVC_MFCControlLadenDialog#30](../mfc/codesnippet/cpp/using-a-dialog-bar-with-a-rebar-control_2.cpp)]

The new handlers simulate the transparency of the dialog bar by forwarding the WM_ERASEBKGND message to the parent window and forcing a repaint every time the dialog bar object is moved.

## See also

[Using CReBarCtrl](../mfc/using-crebarctrl.md)<br/>
[Controls](../mfc/controls-mfc.md)
