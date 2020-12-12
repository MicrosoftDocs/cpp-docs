---
description: "Learn more about: Tree Control Parent and Child Items"
title: "Tree Control Parent and Child Items"
ms.date: "11/04/2016"
helpviewer_keywords: ["parent items in CTreeCtrl [MFC]", "child items in tree control [MFC]", "CTreeCtrl class [MFC], parent and child items", "tree controls [MFC], parent and child items"]
ms.assetid: abcea1e4-fe9b-40d9-86dc-1db235f8f103
---
# Tree Control Parent and Child Items

Any item in a tree control ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) can have a list of subitems, which are called child items, associated with it. An item that has one or more child items is called a parent item. A child item is displayed below its parent item and is indented to indicate it is subordinate to the parent. An item that has no parent is at the top of the hierarchy and is called a root item.

At any given time, the state of a parent item's list of child items can be either expanded or collapsed. When the state is expanded, the child items are displayed below the parent item. When it is collapsed, the child items are not displayed. The list automatically toggles between the expanded and collapsed states when the user double-clicks the parent item or, if the parent has the **TVS_HASBUTTONS** style, when the user clicks the button associated with the parent item. An application can expand or collapse the child items by using the [Expand](../mfc/reference/ctreectrl-class.md#expand) member function.

You add an item to a tree control by calling the [InsertItem](../mfc/reference/ctreectrl-class.md#insertitem) member function. This function returns a handle of the **HTREEITEM** type, which uniquely identifies the item. When adding an item, you must specify the handle of the new item's parent item. If you specify **NULL** or the **TVI_ROOT** value instead of a parent item handle in the [TVINSERTSTRUCT](/windows/win32/api/commctrl/ns-commctrl-tvinsertstructw) structure or *hParent* parameter, the item is added as a root item.

A tree control sends a [TVN_ITEMEXPANDING](/windows/win32/Controls/tvn-itemexpanding) notification message when a parent item's list of child items is about to be expanded or collapsed. The notification gives you the opportunity to prevent the change or to set any attributes of the parent item that depend on the state of the list of child items. After changing the state of the list, the tree control sends a [TVN_ITEMEXPANDED](/windows/win32/Controls/tvn-itemexpanded) notification message.

When a list of child items is expanded, it is indented relative to the parent item. You can set the amount of indentation by using the [SetIndent](../mfc/reference/ctreectrl-class.md#setindent) member function or retrieve the current amount by using the [GetIndent](../mfc/reference/ctreectrl-class.md#getindent) member function.

## See also

[Using CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controls](../mfc/controls-mfc.md)
