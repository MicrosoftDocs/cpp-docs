---
description: "Learn more about: Implementing Working Areas in List Controls"
title: "Implementing Working Areas in List Controls"
ms.date: "11/04/2016"
helpviewer_keywords: ["list controls [MFC], working areas", "working areas in list control [MFC]"]
ms.assetid: fbbb356b-3359-4348-8603-f1cb114cadde
---
# Implementing Working Areas in List Controls

By default, a list control arranges all items in a standard grid fashion. However, another method is supported, working areas, that arranges the list items into rectangular groups. For an image of a list control that implements working areas, see Using List-View Controls in the Windows SDK.

> [!NOTE]
> Working areas are visible only when the list control is in icon or small icon mode. However, any current working areas are maintained if the view is switched to the report or list mode.

Working areas can be used to display an empty border (on the left, top and/or right of the items), or cause a horizontal scroll bar to be displayed when there normally wouldn't be one. Another common usage is to create multiple working areas to which items can be moved or dropped. With this method, you could create areas in a single view that have different meanings. The user could then categorize the items by placing them in a different area. An example of this would be a view of a file system that has an area for read/write files and another area for read-only files. If a file item were moved into the read-only area, it would automatically become read-only. Moving a file from the read-only area into the read/write area would make the file read/write.

`CListCtrl` provides several member functions for creating and managing working areas in your list control. [GetWorkAreas](reference/clistctrl-class.md#getworkareas) and [SetWorkAreas](reference/clistctrl-class.md#setworkareas) retrieve and set an array of `CRect` objects (or `RECT` structures), which store the currently implemented working areas for your list control. In addition, [GetNumberOfWorkAreas](reference/clistctrl-class.md#getnumberofworkareas) retrieves the current number of working areas for your list control (by default, zero).

## Items and Working Areas

When a working area is created, items that lie within the working area become members of it. Similarly, if an item is moved into a working area, it becomes a member of the working area to which it was moved. If an item does not lie within any working area, it automatically becomes a member of the first (index 0) working area. If you want to create an item and have it placed within a specific working area, you will need to create the item and then move it into the desired working area with a call to [SetItemPosition](reference/clistctrl-class.md#setitemposition). The second example below demonstrates this technique.

The following example implements four working areas (`rcWorkAreas`), of equal size with a 10-pixel-wide border around each working area, in a list control (`m_WorkAreaListCtrl`).

[!code-cpp[NVC_MFCControlLadenDialog#20](codesnippet/cpp/implementing-working-areas-in-list-controls_1.cpp)]

The call to [ApproximateViewRect](reference/clistctrl-class.md#approximateviewrect) was made to get an estimate of the total area required to display all items in one region. This estimate is then divided into four regions and padded with a 5-pixel-wide border.

The next example assigns the existing list items to each group (`rcWorkAreas`) and refreshes the control view (`m_WorkAreaListCtrl`) to complete the effect.

[!code-cpp[NVC_MFCControlLadenDialog#21](codesnippet/cpp/implementing-working-areas-in-list-controls_2.cpp)]

## See also

[Using CListCtrl](using-clistctrl.md)<br/>
[Controls](controls-mfc.md)
