---
description: "Learn more about: Tree Control Item States Overview"
title: "Tree Control Item States Overview"
ms.date: "11/04/2016"
helpviewer_keywords: ["states, CTreeCtrl items", "tree controls [MFC], item states overview", "CTreeCtrl class [MFC], item states"]
ms.assetid: 2db11ae0-0d87-499d-8c1f-5e0dbe9e94c8
---
# Tree Control Item States Overview

Each item in a tree control ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) has a current state. For example, an item can be selected, disabled, expanded, and so on. For the most part, the tree control automatically sets an item's state to reflect user actions, such as selection of an item. However, you can also set an item's state by using the [SetItemState](../mfc/reference/ctreectrl-class.md#setitemstate) member function and retrieve the current state of an item by using the [GetItemState](../mfc/reference/ctreectrl-class.md#getitemstate) member function. For a complete list of item states, see [Tree-View Control Constants](/windows/win32/Controls/tree-view-control-item-states) in the Windows SDK.

An item's current state is specified by the *nState* parameter. A tree control might change an item's state to reflect a user action, such as selecting the item or setting the focus to the item. In addition, an application might change an item's state to disable or hide the item or to specify an overlay image or state image.

When you specify or change an item's state, the *nStateMask* parameter specifies which state bits to set, and the *nState* parameter contains the new values for those bits. For example, the following example changes the current state of a parent item (specified by *hParentItem*) in a `CTreeCtrl` object (`m_treeCtrl`) to `TVIS_EXPANDPARTIAL`:

[!code-cpp[NVC_MFCControlLadenDialog#71](../mfc/codesnippet/cpp/tree-control-item-states-overview_1.cpp)]

Another example of changing the state would be to set an item's overlay image. To accomplish this, *nStateMask* must include the `TVIS_OVERLAYMASK` value, and *nState* must include the one-based index of the overlay image shifted left eight bits by using the [INDEXTOOVERLAYMASK](/windows/win32/api/commctrl/nf-commctrl-indextooverlaymask) macro. The index can be 0 to specify no overlay image. The overlay image must have been added to the tree control's list of overlay images by a previous call to the [CImageList::SetOverlayImage](../mfc/reference/cimagelist-class.md#setoverlayimage) function. The function specifies the one-based index of the image to add; this is the index used with the INDEXTOOVERLAYMASK macro. A tree control can have up to four overlay images.

To set an item's state image, *nStateMask* must include the `TVIS_STATEIMAGEMASK` value, and *nState* must include the one-based index of the state image shifted left 12 bits by using the [INDEXTOSTATEIMAGEMASK](/windows/win32/api/commctrl/nf-commctrl-indextostateimagemask) macro. The index can be 0 to specify no state image. For more information about overlay and state images, see [Tree Control Image Lists](../mfc/tree-control-image-lists.md).

## See also

[Using CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controls](../mfc/controls-mfc.md)
