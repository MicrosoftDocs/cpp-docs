---
title: "Bottomless Rich Edit Controls"
ms.date: "11/04/2016"
helpviewer_keywords: ["bottomless rich edit controls", "rich edit controls [MFC], bottomless", "CRichEditCtrl class [MFC], bottomless"]
ms.assetid: 2877dd32-1e9a-4fd1-98c0-66dcbbeef1de
---
# Bottomless Rich Edit Controls

Your application can resize a rich edit control ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) as needed so that it is always the same size as its contents. A rich edit control supports this so-called "bottomless" functionality by sending its parent window an [EN_REQUESTRESIZE](/windows/desktop/Controls/en-requestresize) notification message whenever the size of its contents changes.

When processing the **EN_REQUESTRESIZE** notification message, an application should resize the control to the dimensions in the specified [REQRESIZE](/windows/desktop/api/richedit/ns-richedit-_reqresize) structure. An application might also move any information near the control to accommodate the control's change in height. To resize the control, you can use the `CWnd` function [SetWindowPos](../mfc/reference/cwnd-class.md#setwindowpos).

You can force a bottomless rich edit control to send an **EN_REQUESTRESIZE** notification message by using the [RequestResize](../mfc/reference/cricheditctrl-class.md#requestresize) member function. This message can be useful in the [OnSize](../mfc/reference/cwnd-class.md#onsize) handler.

To receive **EN_REQUESTRESIZE** notification messages, you must enable the notification by using the `SetEventMask` member function.

## See Also

[Using CRichEditCtrl](../mfc/using-cricheditctrl.md)<br/>
[Controls](../mfc/controls-mfc.md)

