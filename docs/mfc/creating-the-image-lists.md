---
description: "Learn more about: Creating the Image Lists"
title: "Creating the Image Lists"
ms.date: "11/04/2016"
helpviewer_keywords: ["CListCtrl class [MFC], creating image lists for", "image lists [MFC], creating for CListCtrl", "lists [MFC], image"]
ms.assetid: c2768515-deba-49e8-a6f3-5be6482afb19
---
# Creating the Image Lists

Creating image lists is the same whether you use [CListView](reference/clistview-class.md) or [CListCtrl](reference/clistctrl-class.md).

> [!NOTE]
> You only need image lists if your list control includes the `LVS_ICON` style.

Use class `CImageList` to create one or more image lists (for full-size icons, small icons, and states). See [CImageList](reference/cimagelist-class.md), and see [List View Image Lists](/windows/win32/Controls/using-list-view-controls) in the Windows SDK.

Call [CListCtrl::SetImageList](reference/clistctrl-class.md#setimagelist) for each image list; pass a pointer to the appropriate `CImageList` object.

## See also

[Using CListCtrl](using-clistctrl.md)<br/>
[Controls](controls-mfc.md)
