---
description: "Learn more about: Adding Items to the Header Control"
title: "Adding Items to the Header Control"
ms.date: "11/04/2016"
helpviewer_keywords: ["controls [MFC], header", "CHeaderCtrl class [MFC], adding items", "header controls [MFC], adding items to"]
ms.assetid: 2e9a28b1-7302-4a93-8037-c5a4183e589a
---
# Adding Items to the Header Control

After creating your header control ([CHeaderCtrl](reference/cheaderctrl-class.md)) in its parent window, add as many "header items" as you need: usually one per column.

### To add a header item

1. Prepare an [HD_ITEM](/windows/win32/api/commctrl/ns-commctrl-hditemw) structure.

1. Call [CHeaderCtrl::InsertItem](reference/cheaderctrl-class.md#insertitem), passing the structure.

1. Repeat steps 1 and 2 for additional items.

For more information, see [Adding an Item to a Header Control](/windows/win32/Controls/header-controls) in the Windows SDK.

## See also

[Using CHeaderCtrl](using-cheaderctrl.md)<br/>
[Controls](controls-mfc.md)
