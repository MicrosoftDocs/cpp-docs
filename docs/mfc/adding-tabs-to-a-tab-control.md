---
description: "Learn more about: Adding Tabs to a Tab Control"
title: "Adding Tabs to a Tab Control"
ms.date: "11/04/2016"
helpviewer_keywords: ["tab controls [MFC], adding tabs", "putting tabs on CTabCtrls [MFC]", "CTabCtrl class [MFC], adding tabs", "tabs [MFC], adding to CTabCtrl class [MFC]"]
ms.topic: how-to
---
# Adding Tabs to a Tab Control

>[!NOTE]
> The Microsoft Foundation Classes (MFC) library continues to be supported. However, we're no longer adding features or updating the documentation.

After creating the tab control ([CTabCtrl](reference/ctabctrl-class.md)), add as many tabs as you need.

### To add a tab item

1. Prepare a [TCITEM](/windows/win32/api/commctrl/ns-commctrl-tcitemw) structure.

1. Call [CTabCtrl::InsertItem](reference/ctabctrl-class.md#insertitem), passing the structure.

1. Repeat steps 1 and 2 for additional tab items.

For more information, see [Creating a Tab Control](/windows/win32/Controls/tab-controls) in the Windows SDK.

## See also

[Using CTabCtrl](using-ctabctrl.md)<br/>
[Controls](controls-mfc.md)
