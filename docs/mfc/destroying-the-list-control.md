---
description: "Learn more about: Destroying the List Control"
title: "Destroying the List Control"
ms.date: "11/04/2016"
helpviewer_keywords: ["list controls [MFC], destroying", "CListCtrl class [MFC], destroying controls"]
ms.topic: concept-article
---
# Destroying the List Control

>[!NOTE]
> The Microsoft Foundation Classes (MFC) library continues to be supported. However, we're no longer adding features or updating the documentation.

If you embed your [CListCtrl](reference/clistctrl-class.md) object as a data member of a view or dialog class, it is destroyed when its owner is destroyed. If you use a [CListView](reference/clistview-class.md), the framework destroys the control when it destroys the view.

If you arrange for some of your list data to be stored in the application rather than the list control, you will need to arrange for its deallocation. For more information, see [Callback Items and the Callback Mask](/windows/win32/Controls/using-list-view-controls) in the Windows SDK.

In addition, you are responsible for deallocating any image lists you created and associated with the list control object.

## See also

[Using CListCtrl](using-clistctrl.md)<br/>
[Controls](controls-mfc.md)
