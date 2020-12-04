---
description: "Learn more about: Word Breaks in Rich Edit Controls"
title: "Word Breaks in Rich Edit Controls"
ms.date: "11/04/2016"
helpviewer_keywords: ["CRichEditCtrl class [MFC], word breaks in", "word breaks", "breaking words in CRichEditCtrl", "rich edit controls [MFC], word breaks in"]
ms.assetid: 641dcf9e-7b40-4dc0-85f7-575a8c142f73
---
# Word Breaks in Rich Edit Controls

A rich edit control ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) calls a function called a "word break procedure" to find breaks between words and to determine where it can break lines. The control uses this information when performing word-wrap operations and when processing the CTRL+LEFT and CTRL+RIGHT key combinations. An application can send messages to a rich edit control to replace the default word-break procedure, to retrieve word-break information, and to determine what line a given character falls on.

## See also

[Using CRichEditCtrl](../mfc/using-cricheditctrl.md)<br/>
[Controls](../mfc/controls-mfc.md)
