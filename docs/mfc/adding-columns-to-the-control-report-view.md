---
description: "Learn more about: Adding Columns to the Control (Report View)"
title: "Adding Columns to the Control (Report View)"
ms.date: "11/04/2016"
helpviewer_keywords: ["CListCtrl class [MFC], adding columns", "report view in CListCtrl class [MFC]", "views [MFC], report", "columns [MFC], adding to CListCtrl", "CListCtrl class [MFC], report view"]
ms.assetid: 7392c0d7-f8a5-4e7b-9ae7-b53dc9dd80ae
---
# Adding Columns to the Control (Report View)

> [!NOTE]
> The following procedure applies to either a [CListView](reference/clistview-class.md) or [CListCtrl](reference/clistctrl-class.md) object.

When a list control is in report view, columns are displayed, providing a method of organizing the various subitems of each list control item. This organization is implemented with a one-to-one correspondence between a column in the list control and the associated subitem of the list control item. For more information on subitems, see [Adding Items to the Control](adding-items-to-the-control.md). An example of a list control in report view is provided by the Details view in Windows 95 and Windows 98 Explorer. The first column lists folder, file icons, and labels. Other columns list file size, file type, date last modified, and so on.

Even though columns can be added to a list control at any time, the columns are visible only when the control has the `LVS_REPORT` style bit turned on.

Each column has an associated header item (see [CHeaderCtrl](reference/cheaderctrl-class.md)) object that labels the column and allows users to resize the column.

If your list control supports a report view, you need to add a column for each possible subitem in a list control item. Add a column by preparing an [LVCOLUMN](/windows/win32/api/commctrl/ns-commctrl-lvcolumnw) structure and then making a call to [InsertColumn](reference/clistctrl-class.md#insertcolumn). After adding the necessary columns (sometimes referred to as header items), you can reorder them using member functions and styles belonging to the embedded header control. For more information, see [Ordering Items in the Header Control](ordering-items-in-the-header-control.md).

> [!NOTE]
> If the list control is created with the **LVS_NOCOLUMNHEADER** style, any attempt to insert columns will be ignored.

## See also

[Using CListCtrl](using-clistctrl.md)<br/>
[Controls](controls-mfc.md)
