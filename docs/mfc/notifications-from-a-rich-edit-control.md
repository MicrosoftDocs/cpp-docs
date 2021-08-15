---
description: "Learn more about: Notifications from a Rich Edit Control"
title: "Notifications from a Rich Edit Control"
ms.date: "11/04/2016"
helpviewer_keywords: ["messages [MFC], notification [MFC]", "CRichEditCtrl class [MFC], notifications", "rich edit controls [MFC], notifications", "notifications [MFC], from CRichEditCtrl"]
ms.assetid: eb5304fe-f4f3-4557-9ebf-3095dea383c4
---
# Notifications from a Rich Edit Control

Notification messages report events affecting a rich edit control ([CRichEditCtrl](reference/cricheditctrl-class.md)). They can be processed by the parent window or, using message reflection, by the rich edit control itself. Rich edit controls support all of the notification messages used with edit controls as well as several additional ones. You can determine which notification messages a rich edit control sends its parent window by setting its "event mask."

To set the event mask for a rich edit control, use the [SetEventMask](reference/cricheditctrl-class.md#seteventmask) member function. You can retrieve the current event mask for a rich edit control by using the [GetEventMask](reference/cricheditctrl-class.md#geteventmask) member function.

The following paragraphs list several specific notifications and their uses:

- EN_MSGFILTER Handling the EN_MSGFILTER notification lets a class, either the rich edit control or its parent window, filter all keyboard and mouse input to the control. The handler can prevent the keyboard or mouse message from being processed or can change the message by modifying the specified [MSGFILTER](/windows/win32/api/richedit/ns-richedit-msgfilter) structure.

- EN_PROTECTED Handle the EN_PROTECTED notification message to detect when the user attempts to modify protected text. To mark a range of text as protected, you can set the protected character effect. For more information, see [Character Formatting in Rich Edit Controls](character-formatting-in-rich-edit-controls.md).

- EN_DROPFILES You can enable the user to drop files in a rich edit control by processing the EN_DROPFILES notification message. The specified [ENDROPFILES](/windows/win32/api/richedit/ns-richedit-endropfiles) structure contains information about the files being dropped.

- EN_SELCHANGE An application can detect when the current selection changes by processing the EN_SELCHANGE notification message. The notification message specifies a [SELCHANGE](/windows/win32/api/richedit/ns-richedit-selchange) structure containing information about the new selection.

## See also

[Using CRichEditCtrl](using-cricheditctrl.md)<br/>
[Controls](controls-mfc.md)
