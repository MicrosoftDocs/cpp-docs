---
description: "Learn more about: Processing Notification Messages in a Rebar Control"
title: "Processing Notification Messages in a Rebar Control"
ms.date: "11/04/2016"
helpviewer_keywords: ["RBN_ notification messages, description of", "CReBarCtrl class [MFC], notification messages sent by", "RBN_ notification messages [MFC]", "notifications [MFC], CReBarCtrl"]
ms.assetid: 40f43a60-0c18-4d8d-8fab-213a095624f9
---
# Processing Notification Messages in a Rebar Control

In the parent class of the rebar control, create an `OnChildNotify` handler function with a switch statement for any rebar-control (`CReBarCtrl`) notification messages you want to handle. Notifications are sent to the parent window when the user drags objects over the rebar control, changes the layout of the rebar bands, deletes bands from the rebar control, and so on.

The following notification messages can be sent by the rebar control object:

- RBN_AUTOSIZE Sent by a rebar control (created with the RBS_AUTOSIZE style) when the rebar automatically resizes itself.

- RBN_BEGINDRAG Sent by a rebar control when the user begins dragging a band.

- RBN_CHILDSIZE Sent by a rebar control when a band's child window is resized.

- RBN_DELETEDBAND Sent by a rebar control after a band has been deleted.

- RBN_DELETINGBAND Sent by a rebar control when a band is about to be deleted.

- RBN_ENDDRAG Sent by a rebar control when the user stops dragging a band.

- RBN_GETOBJECT Sent by a rebar control (created with the RBS_REGISTERDROP style) when an object is dragged over a band in the control.

- RBN_HEIGHTCHANGE Sent by a rebar control when its height has changed.

- RBN_LAYOUTCHANGED Sent by a rebar control when the user changes the layout of the control's bands.

For more information on these notifications, see [Rebar Control Reference](/windows/win32/controls/rebar-control-reference) in the Windows SDK.

## See also

[Using CReBarCtrl](using-crebarctrl.md)<br/>
[Controls](controls-mfc.md)
