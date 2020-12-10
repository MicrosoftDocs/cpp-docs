---
description: "Learn more about: Tree Control Item Selection"
title: "Tree Control Item Selection"
ms.date: "11/04/2016"
helpviewer_keywords: ["tree controls [MFC], item selection", "controls [MFC], selecting items in", "CTreeCtrl class [MFC], item selection", "item selection in tree controls"]
ms.assetid: 7bcb3b16-b9c8-4c06-9350-7bc3c1c5009b
---
# Tree Control Item Selection

When the selection changes from one item to another, a tree control ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) sends [TVN_SELCHANGING](/windows/win32/Controls/tvn-selchanging) and [TVN_SELCHANGED](/windows/win32/Controls/tvn-selchanged) notification messages. Both notifications include a value that specifies whether the change is the result of a mouse click or a keystroke. The notifications also include information about the item that is gaining the selection and the item that is losing the selection. You can use this information to set item attributes that depend on the selection state of the item. Returning **TRUE** in response to `TVN_SELCHANGING` prevents the selection from changing; returning **FALSE** allows the change.

An application can change the selection by calling the [SelectItem](../mfc/reference/ctreectrl-class.md#selectitem) member function.

## See also

[Using CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controls](../mfc/controls-mfc.md)
