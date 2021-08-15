---
description: "Learn more about: Processing Notification Messages in Extended Combo Box Controls"
title: "Processing Notification Messages in Extended Combo Box Controls"
ms.date: "11/04/2016"
helpviewer_keywords: ["extended combo boxes [MFC], notifications", "notifications [MFC], extended combo box controls"]
ms.assetid: 4e442758-d054-4746-bb1a-6ff84accb127
---
# Processing Notification Messages in Extended Combo Box Controls

As users interact with the extended combo box, the control (`CComboBoxEx`) sends notification messages to its parent window, usually a view or dialog object. Handle these messages if you want to do something in response. For example, when the user activates the drop-down list or clicks in the control's edit box, the CBEN_BEGINEDIT notification is sent.

Use the [Class Wizard](reference/mfc-class-wizard.md) to add notification handlers to the parent class for those messages you want to implement.

The following list describes the various notifications sent by the extended combo box control.

- CBEN_BEGINEDIT Sent when the user activates the drop-down list or clicks in the control's edit box.

- CBEN_DELETEITEM Sent when an item has been deleted.

- CBEN_DRAGBEGIN Sent when the user begins dragging the image of the item displayed in the edit portion of the control.

- CBEN_ENDEDIT Sent when the user has concluded an operation within the edit box or has selected an item from the control's drop-down list.

- CBEN_GETDISPINFO Sent to retrieve display information about a callback item.

- CBEN_INSERTITEM Sent when a new item has been inserted in the control.

## See also

[Using CComboBoxEx](using-ccomboboxex.md)<br/>
[Controls](controls-mfc.md)
