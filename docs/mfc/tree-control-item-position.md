---
description: "Learn more about: Tree Control Item Position"
title: "Tree Control Item Position"
ms.date: "11/04/2016"
helpviewer_keywords: ["CTreeCtrl class [MFC], item position", "item position in tree controls", "tree controls [MFC], item position", "position, CTreeCtrl items"]
ms.assetid: cd264344-2cf9-4d90-9ea8-c6900b6f60e7
---
# Tree Control Item Position

An item's initial position is set when the item is added to the tree control ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) by using the `InsertItem` member function. The member function call specifies the handle of the parent item and the handle of the item after which the new item is to be inserted. The second handle must identify either a child item of the given parent or one of these values: `TVI_FIRST`, `TVI_LAST`, or `TVI_SORT`.

When `TVI_FIRST` or `TVI_LAST` is specified, the tree control places the new item at the beginning or end of the given parent item's list of child items. When `TVI_SORT` is specified, the tree control inserts the new item into the list of child items in alphabetical order based on the text of the item labels.

You can put a parent item's list of child items into alphabetical order by calling the [SortChildren](../mfc/reference/ctreectrl-class.md#sortchildren) member function. This function includes a parameter that specifies whether all levels of child items descending from the given parent item are also sorted in alphabetical order.

The [SortChildrenCB](../mfc/reference/ctreectrl-class.md#sortchildrencb) member function allows you to sort child items based on criteria that you define. When you call this function, you specify an application-defined callback function that the tree control can call whenever the relative order of two child items needs to be decided. The callback function receives two 32-bit application-defined values for the items being compared and a third 32-bit value that you specify when calling `SortChildrenCB`.

## See also

[Using CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controls](../mfc/controls-mfc.md)
