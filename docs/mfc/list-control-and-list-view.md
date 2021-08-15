---
description: "Learn more about: List Control and List View"
title: "List Control and List View"
ms.date: "11/04/2016"
helpviewer_keywords: ["CListView class [MFC], and CListCtrl", "views [MFC], list and list control", "CListCtrl class [MFC], and CListView", "list views [MFC]", "list controls [MFC], List view"]
ms.assetid: 7aee1c48-b158-4399-be0b-be366993665e
---
# List Control and List View

For convenience, MFC encapsulates the list control in two ways. You can use list controls:

- Directly, by embedding a [CListCtrl](reference/clistctrl-class.md) object in a dialog class.

- Indirectly, by using class [CListView](reference/clistview-class.md).

`CListView` makes it easy to integrate a list control with the MFC document/view architecture, encapsulating the control much as [CEditView](reference/ceditview-class.md) encapsulates an edit control: the control fills the entire surface area of an MFC view. (The view *is* the control, cast to `CListView`.)

A `CListView` object inherits from [CCtrlView](reference/cctrlview-class.md) and its base classes and adds a member function to retrieve the underlying list control. Use view members to work with the view as a view. Use the [GetListCtrl](reference/clistview-class.md#getlistctrl) member function to gain access to the list control's member functions. Use these members to:

- Add, delete, or manipulate "items" in the list.

- Set or get list control attributes.

To obtain a reference to the `CListCtrl` underlying a `CListView`, call `GetListCtrl` from your list view class:

[!code-cpp[NVC_MFCListView#4](../atl/reference/codesnippet/cpp/list-control-and-list-view_1.cpp)]

This topic describes both ways to use the list control.

## See also

[Using CListCtrl](using-clistctrl.md)<br/>
[Controls](controls-mfc.md)
