---
description: "Learn more about: Stream Operations in Rich Edit Controls"
title: "Stream Operations in Rich Edit Controls"
ms.date: "11/04/2016"
helpviewer_keywords: ["CRichEditCtrl class [MFC], stream operations", "CRichEditCtrl class [MFC], stream storage", "rich edit controls [MFC], stream operations", "storage, stream in CRichEditCtrl", "stream operations in CRichEditCtrl", "stream storage and CRichEditCtrl"]
ms.assetid: 110b4684-1e76-4ca6-9ef0-5bc8b2d93c78
---
# Stream Operations in Rich Edit Controls

You can use streams to transfer data into or out of a rich edit control ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)). A stream is defined by an [EDITSTREAM](/windows/win32/api/richedit/ns-richedit-editstream) structure, which specifies a buffer and an application-defined callback function.

To read data into a rich edit control (that is, stream the data in), use the [StreamIn](../mfc/reference/cricheditctrl-class.md#streamin) member function. The control repeatedly calls the application-defined callback function, which transfers a portion of the data into the buffer each time.

To save the contents of a rich edit control (that is, stream the data out), you can use the [StreamOut](../mfc/reference/cricheditctrl-class.md#streamout) member function. The control repeatedly writes to the buffer and then calls the application-defined callback function. For each call, the callback function saves the contents of the buffer.

## See also

[Using CRichEditCtrl](../mfc/using-cricheditctrl.md)<br/>
[Controls](../mfc/controls-mfc.md)
