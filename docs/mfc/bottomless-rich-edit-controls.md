---
description: "Learn more about: Bottomless Rich Edit Controls"
title: "Bottomless Rich Edit Controls"
ms.date: "11/04/2016"
helpviewer_keywords: ["bottomless rich edit controls", "rich edit controls [MFC], bottomless", "CRichEditCtrl class [MFC], bottomless"]
ms.assetid: 2877dd32-1e9a-4fd1-98c0-66dcbbeef1de
---
# Bottomless Rich Edit Controls

Your application can resize a rich edit control ([CRichEditCtrl](reference/cricheditctrl-class.md)) as needed so that it is always the same size as its contents. A rich edit control supports this so-called "bottomless" functionality by sending its parent window an [EN_REQUESTRESIZE](/windows/win32/Controls/en-requestresize) notification message whenever the size of its contents changes.

When processing the **EN_REQUESTRESIZE** notification message, an application should resize the control to the dimensions in the specified [REQRESIZE](/windows/win32/api/richedit/ns-richedit-reqresize) structure. An application might also move any information near the control to accommodate the control's change in height. To resize the control, you can use the `CWnd` function [SetWindowPos](reference/cwnd-class.md#setwindowpos).

You can force a bottomless rich edit control to send an **EN_REQUESTRESIZE** notification message by using the [RequestResize](reference/cricheditctrl-class.md#requestresize) member function. This message can be useful in the [OnSize](reference/cwnd-class.md#onsize) handler.

To receive **EN_REQUESTRESIZE** notification messages, you must enable the notification by using the `SetEventMask` member function.

## See also

[Using CRichEditCtrl](using-cricheditctrl.md)<br/>
[Controls](controls-mfc.md)
