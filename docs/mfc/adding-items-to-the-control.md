---
description: "Learn more about: Adding Items to the Control"
title: "Adding Items to the Control"
ms.date: "11/04/2016"
helpviewer_keywords: ["CListCtrl class [MFC], adding items"]
ms.assetid: 715994bd-340d-4ad2-9882-411654137830
---
# Adding Items to the Control

To add items to the list control ([CListCtrl](reference/clistctrl-class.md)), call one of several versions of the [InsertItem](reference/clistctrl-class.md#insertitem) member function, depending on what information you have. One version takes a [LVITEM](/windows/win32/api/commctrl/ns-commctrl-lvitemw) structure that you prepare. Because the `LVITEM` structure contains numerous members, you have greater control over the attributes of the list control item.

Two important members (in regard to the report view) of the `LVITEM` structure are the `iItem` and `iSubItem` members. The `iItem` member is the zero-based index of the item the structure is referencing and the `iSubItem` member is the one-based index of a subitem, or zero if the structure contains information about an item. With these two members you determine, per item, the type and value of subitem information that is displayed when the list control is in report view. For more information, see [CListCtrl::SetItem](reference/clistctrl-class.md#setitem).

Additional members specify the item's text, icon, state, and item data. "Item data" is an application-defined value associated with a list view item. For more information about the `LVITEM` structure, see [CListCtrl::GetItem](reference/clistctrl-class.md#getitem).

Other versions of `InsertItem` take one or more separate values, corresponding to members in the `LVITEM` structure, allowing you to initialize only those members you want to support. Generally, the list control manages storage for list items, but you can store some of the information in your application instead, using "callback items." For more information, see [Callback Items and the Callback Mask](callback-items-and-the-callback-mask.md) in this topic and [Callback Items and the Callback Mask](/windows/win32/Controls/using-list-view-controls) in the Windows SDK.

For more information, see [Adding List-View Items and Subitems](/windows/win32/Controls/using-list-view-controls).

## See also

[Using CListCtrl](using-clistctrl.md)<br/>
[Controls](controls-mfc.md)
