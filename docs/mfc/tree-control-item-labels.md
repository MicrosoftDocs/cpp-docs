---
description: "Learn more about: Tree Control Item Labels"
title: "Tree Control Item Labels"
ms.date: "11/04/2016"
helpviewer_keywords: ["tree controls [MFC], item labels", "labels, CTreeCtrl items", "CTreeCtrl class [MFC], item labels", "item labels, tree controls", "item labels"]
ms.assetid: fe834107-1a25-4280-aced-774c11565805
---
# Tree Control Item Labels

You typically specify the text of an item's label when adding the item to the tree control ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)). The `InsertItem` member function can pass a [TVITEM](/windows/win32/api/commctrl/ns-commctrl-tvitemw) structure that defines the item's properties, including a string containing the text of the label. `InsertItem` has several overloads that can be called with various combinations of parameters.

A tree control allocates memory for storing each item; the text of the item labels takes up a significant portion of this memory. If your application maintains a copy of the strings in the tree control, you can decrease the memory requirements of the control by specifying the **LPSTR_TEXTCALLBACK** value in the *pszText* member of `TV_ITEM` or the *lpszItem* parameter instead of passing actual strings to the tree control. Using **LPSTR_TEXTCALLBACK** causes the tree control to retrieve the text of an item's label from the application whenever the item needs to be redrawn. To retrieve the text, the tree control sends a [TVN_GETDISPINFO](/windows/win32/Controls/tvn-getdispinfo) notification message, which includes the address of a [NMTVDISPINFO](/windows/win32/api/commctrl/ns-commctrl-nmtvdispinfow) structure. You must respond by setting the appropriate members of the included structure.

A tree control uses memory allocated from the heap of the process that creates the tree control. The maximum number of items in a tree control is based on the amount of memory available in the heap. Each item takes 64 bytes.

## See also

[Using CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controls](../mfc/controls-mfc.md)
