---
description: "Learn more about: Tree Control Item Information"
title: "Tree Control Item Information"
ms.date: "11/04/2016"
helpviewer_keywords: ["tree controls [MFC], item information", "CTreeCtrl class [MFC], item information"]
ms.assetid: 8dcab855-27de-49e9-95d8-f78ba963ea71
---
# Tree Control Item Information

Tree controls ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) have a number of member functions that retrieve information about items in the control. The [GetItem](../mfc/reference/ctreectrl-class.md#getitem) member function retrieves some or all of the data associated with an item. This data could include the item's text, state, images, count of child items, and an application-defined 32-bit data value. There is also a [SetItem](../mfc/reference/ctreectrl-class.md#setitem) function that can set some or all of the data associated with an item.

The [GetItemState](../mfc/reference/ctreectrl-class.md#getitemstate), [GetItemText](../mfc/reference/ctreectrl-class.md#getitemtext), [GetItemData](../mfc/reference/ctreectrl-class.md#getitemdata), and [GetItemImage](../mfc/reference/ctreectrl-class.md#getitemimage) member functions retrieve individual attributes of an item. Each of these functions has a corresponding Set function for setting the attributes of an item.

The [GetNextItem](../mfc/reference/ctreectrl-class.md#getnextitem) member function retrieves the tree control item that bears the specified relationship to the current item. This function can retrieve an item's parent, the next or previous visible item, the first child item, and so on. There are also member functions to traverse the tree: [GetRootItem](../mfc/reference/ctreectrl-class.md#getrootitem), [GetFirstVisibleItem](../mfc/reference/ctreectrl-class.md#getfirstvisibleitem), [GetNextVisibleItem](../mfc/reference/ctreectrl-class.md#getnextvisibleitem), [GetPrevVisibleItem](../mfc/reference/ctreectrl-class.md#getprevvisibleitem), [GetChildItem](../mfc/reference/ctreectrl-class.md#getchilditem), [GetNextSiblingItem](../mfc/reference/ctreectrl-class.md#getnextsiblingitem), [GetPrevSiblingItem](../mfc/reference/ctreectrl-class.md#getprevsiblingitem), [GetParentItem](../mfc/reference/ctreectrl-class.md#getparentitem), [GetSelectedItem](../mfc/reference/ctreectrl-class.md#getselecteditem), and [GetDropHilightItem](../mfc/reference/ctreectrl-class.md#getdrophilightitem).

The [GetItemRect](../mfc/reference/ctreectrl-class.md#getitemrect) member function retrieves the bounding rectangle for a tree control item. The [GetCount](../mfc/reference/ctreectrl-class.md#getcount) and [GetVisibleCount](../mfc/reference/ctreectrl-class.md#getvisiblecount) member functions retrieve a count of the items in a tree control and a count of the items that are currently visible in the tree control's window, respectively. You can ensure that a particular item is visible by calling the [EnsureVisible](../mfc/reference/ctreectrl-class.md#ensurevisible) member function.

## See also

[Using CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controls](../mfc/controls-mfc.md)
