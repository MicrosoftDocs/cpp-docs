---
description: "Learn more about: Tree Control Styles"
title: "Tree Control Styles"
ms.date: "11/04/2016"
f1_keywords: ["TVS_SINGLEEXPAND", "TVS_LINESATROOT", "TVS_HASBUTTONS", "TVS_NOTOOLTIPS", "TVS_HASLINES"]
helpviewer_keywords: ["TVS_LINESATROOT [MFC]", "styles [MFC], CTreeCtrl", "styles [MFC], tree control", "TVS_HASLINES", "TVS_SINGLEEXPAND", "CTreeCtrl class [MFC], styles", "TVS_EDITLABELS [MFC]", "TVS_NOTOOLTIPS [MFC]", "TVS_HASBUTTONS [MFC]", "tree controls [MFC], styles"]
ms.assetid: f43faebd-a355-479e-888a-bf0673d5e1b4
---
# Tree Control Styles

Tree control ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) styles govern aspects of a tree control's appearance. You set the initial styles when you create the tree control. You can retrieve and change the styles after creating the tree control by using the [GetWindowLong](/windows/win32/api/winuser/nf-winuser-getwindowlongw) and [SetWindowLong](/windows/win32/api/winuser/nf-winuser-setwindowlongw) Windows functions, specifying **GWL_STYLE** for the *nIndex* parameter. For a complete list of styles, see [Tree View Control Window Styles](/windows/win32/Controls/tree-view-control-window-styles) in the Windows SDK.

The **TVS_HASLINES** style enhances the graphic representation of a tree control's hierarchy by drawing lines that link child items to their corresponding parent item. This style does not link items at the root of the hierarchy. To do so, you need to combine the **TVS_HASLINES** and **TVS_LINESATROOT** styles.

The user can expand or collapse a parent item's list of child items by double-clicking the parent item. A tree control that has the **TVS_SINGLEEXPAND** style causes the item being selected to expand and the item being unselected to collapse. If the mouse is used to single-click the selected item and that item is closed, it will be expanded. If the selected item is single-clicked when it is open, it will be collapsed.

A tree control that has the **TVS_HASBUTTONS** style adds a button to the left side of each parent item. The user can click the button to expand or collapse the child items as an alternative to double-clicking the parent item. **TVS_HASBUTTONS** does not add buttons to items at the root of the hierarchy. To do so, you must combine **TVS_HASLINES**, **TVS_LINESATROOT**, and **TVS_HASBUTTONS**.

The **TVS_EDITLABELS** style makes it possible for the user to edit the labels of tree control items. For more information about editing labels, see [Tree Control Label Editing](../mfc/tree-control-label-editing.md) later in this topic.

The **TVS_NOTOOLTIPS** style disables the automatic tool tip feature of tree view controls. This feature automatically displays a tool tip, containing the title of the item under the mouse cursor, if the entire title is not currently visible.

## See also

[Using CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controls](../mfc/controls-mfc.md)
