---
description: "Learn more about: List Items and Image Lists"
title: "List Items and Image Lists"
ms.date: "11/04/2016"
helpviewer_keywords: ["CImageList class [MFC], and list items", "image lists [MFC], list items", "CListCtrl class [MFC], image lists", "list items [MFC], image lists"]
ms.assetid: 317d095f-f978-47da-acb6-7bfe7dd3bc69
---
# List Items and Image Lists

An "item" in a list control ([CListCtrl](reference/clistctrl-class.md)) consists of an icon, a label, and possibly other information (in "subitems").

The icons for list control items are contained in image lists. One image list contains full-sized icons used in icon view. A second, optional, image list contains smaller versions of the same icons for use in other views of the control. A third optional list contains "state" images, such as check boxes, for display in front of the small icons in certain views. A fourth optional list contains images that are displayed in individual header items of the list control.

> [!NOTE]
> If a list view control is created with the LVS_SHAREIMAGELISTS style, you are responsible for destroying the image lists when they are no longer in use. Specify this style if you assign the same image lists to multiple list view controls; otherwise, more than one control might try to destroy the same image list.

For more information about list items, see [List View Image Lists](/windows/win32/Controls/using-list-view-controls) and [Items and Subitems](/windows/win32/Controls/using-list-view-controls) in the Windows SDK. Also see class [CImageList](reference/cimagelist-class.md) in the *MFC Reference* and [Using CImageList](using-cimagelist.md) in this family of articles.

To create a list control, you need to supply image lists to be used when you insert new items into the list. The following example demonstrates this procedure, where *m_pImagelist* is a pointer of type `CImageList` and *m_listctrl* is a `CListCtrl` data member.

[!code-cpp[NVC_MFCControlLadenDialog#19](codesnippet/cpp/list-items-and-image-lists_1.cpp)]

However, if you don't plan to display icons in your list view or list control, you don't need image lists.

## See also

[Using CListCtrl](using-clistctrl.md)<br/>
[Controls](controls-mfc.md)
