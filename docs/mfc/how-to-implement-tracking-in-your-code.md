---
description: "Learn more about: How to: Implement Tracking in Your Code"
title: "How to: Implement Tracking in Your Code"
ms.date: "11/04/2016"
helpviewer_keywords: ["CRectTracker class [MFC], implementing trackers"]
ms.assetid: baaeca2c-5114-485f-bf58-8807db1bc973
---
# How to: Implement Tracking in Your Code

To track an OLE item, you must handle certain events related to the item, such as clicking the item or updating the view of the document. In all cases, it is sufficient to declare a temporary [CRectTracker](reference/crecttracker-class.md) object and manipulate the item by means of this object.

When a user selects an item or inserts an object with a menu command, you must initialize the tracker with the proper styles to represent the state of the OLE item. The following table outlines the conventions used by the OCLIENT sample. For more information on these styles, see `CRectTracker`.

### Container Styles and States of the OLE Item

|Style displayed|State of OLE item|
|---------------------|-----------------------|
|Dotted border|Item is linked|
|Solid border|Item is embedded in your document|
|Resize handles|Item is currently selected|
|Hatched border|Item is currently in-place active|
|Hatching pattern overlays item|Item's server is open|

You can handle this initialization easily using a procedure that checks the state of the OLE item and sets the appropriate styles. The `SetupTracker` function found in the OCLIENT sample demonstrates tracker initialization. The parameters for this function are the address of the tracker, *pTracker*; a pointer to the client item that is related to the tracker, *pItem*; and a pointer to a rectangle, *pTrueRect*. For a more complete example of this function, see the MFC OLE sample [OCLIENT](../overview/visual-cpp-samples.md).

The **SetupTracker** code example presents a single function; lines of the function are interspersed with discussion of the function's features:

[!code-cpp[NVC_MFCOClient#1](codesnippet/cpp/how-to-implement-tracking-in-your-code_1.cpp)]

The tracker is initialized by setting the minimum size and clearing the style of the tracker.

[!code-cpp[NVC_MFCOClient#2](codesnippet/cpp/how-to-implement-tracking-in-your-code_2.cpp)]

The following lines check to see whether the item is currently selected and whether the item is linked to the document or embedded in it. Resize handles located on the inside of the border are added to the style, indicating that the item is currently selected. If the item is linked to your document, the dotted border style is used. A solid border is used if the item is embedded.

[!code-cpp[NVC_MFCOClient#3](codesnippet/cpp/how-to-implement-tracking-in-your-code_3.cpp)]

The following code overlays the item with a hatched pattern if the item is currently open.

[!code-cpp[NVC_MFCOClient#4](codesnippet/cpp/how-to-implement-tracking-in-your-code_4.cpp)]

You can then call this function whenever the tracker has to be displayed. For example, call this function from the `OnDraw` function of your view class. This updates the tracker's appearance whenever the view is repainted. For a complete example, see the `CMainView::OnDraw` function of the MFC OLE sample [OCLIENT](../overview/visual-cpp-samples.md).

In your application, events that require tracker code, such as resizing, moving, or hit detecting, will occur. These actions usually indicate that an attempt is being made to grab or move the item. In these cases, you will need to decide what was grabbed: a resize handle or a portion of the border between resize handles. The `OnLButtonDown` message handler is a good place to test the position of the mouse in relation to the item. Make a call to `CRectTracker::HitTest`. If the test returns something besides `CRectTracker::hitOutside`, the item is being resized or moved. Therefore, you should make a call to the `Track` member function. See the `CMainView::OnLButtonDown` function located in the MFC OLE sample [OCLIENT](../overview/visual-cpp-samples.md) for a complete example.

The `CRectTracker` class provides several different cursor shapes used to indicate whether a move, resize, or drag operation is taking place. To handle this event, check to see whether the item currently under the mouse is selected. If it is, make a call to `CRectTracker::SetCursor`, or call the default handler. The following example is from the MFC OLE sample [OCLIENT](../overview/visual-cpp-samples.md):

[!code-cpp[NVC_MFCOClient#5](codesnippet/cpp/how-to-implement-tracking-in-your-code_5.cpp)]

## See also

[Trackers: Implementing Trackers in Your OLE Application](trackers-implementing-trackers-in-your-ole-application.md)
