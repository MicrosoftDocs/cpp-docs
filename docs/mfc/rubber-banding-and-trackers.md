---
description: "Learn more about: Rubber-Banding and Trackers"
title: "Rubber-Banding and Trackers"
ms.date: "11/04/2016"
helpviewer_keywords: ["trackers [MFC]", "CRectTracker class [MFC], implementing trackers", "OLE objects [MFC], selecting", "rubber banding [MFC]", "WM_LBUTTONDOWN [MFC]"]
ms.assetid: 0d0fa64c-6418-4baf-ab7f-2d16ca039230
---
# Rubber-Banding and Trackers

Another feature supplied with trackers is the "rubber-band" selection, which allows a user to select multiple OLE items by dragging a sizing rectangle around the items to be selected. When the user releases the left mouse button, items within the region selected by the user are selected and can be manipulated by the user. For instance, the user might drag the selection into another container application.

Implementing this feature requires some additional code in your application's WM_LBUTTONDOWN handler function.

The following code sample implements rubber-band selection and additional features.

[!code-cpp[NVC_MFCOClient#6](../mfc/codesnippet/cpp/rubber-banding-and-trackers_1.cpp)]

If you want to allow reversible orientation of the tracker during rubber-banding, you should call [CRectTracker::TrackRubberBand](../mfc/reference/crecttracker-class.md#trackrubberband) with the third parameter set to **TRUE**. Remember that allowing reversible orientation will sometimes cause [CRectTracker::m_rect](../mfc/reference/crecttracker-class.md#m_rect) to become inverted. This can be corrected by a call to [CRect::NormalizeRect](../atl-mfc-shared/reference/crect-class.md#normalizerect).

For more information, see [Container Client Items](../mfc/containers-client-items.md) and [OLE drag and drop: Customize drag and drop](../mfc/drag-and-drop-ole.md#customize-drag-and-drop).

## See also

[Trackers: Implementing Trackers in Your OLE Application](../mfc/trackers-implementing-trackers-in-your-ole-application.md)<br/>
[CRectTracker Class](../mfc/reference/crecttracker-class.md)
