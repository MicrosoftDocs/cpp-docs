---
description: "Learn more about: Clipboard Operations in Rich Edit Controls"
title: "Clipboard Operations in Rich Edit Controls"
ms.date: "11/04/2016"
helpviewer_keywords: ["pasting Clipboard data", "CRichEditCtrl class [MFC], paste operation", "cut operation in CRichEditCtrl class [MFC]", "CRichEditCtrl class [MFC], Clipboard operations", "copy operations in rich edit controls", "Clipboard, operations in CRichEditCtrl", "rich edit controls [MFC], Clipboard operations"]
ms.assetid: 15ce66bc-2636-4a35-a2ae-d52285dc1af6
---
# Clipboard Operations in Rich Edit Controls

Your application can paste the contents of the Clipboard into a rich edit control ([CRichEditCtrl](reference/cricheditctrl-class.md)) using either the best available Clipboard format or a specific Clipboard format. You can also determine whether a rich edit control is capable of pasting a Clipboard format.

You can copy or cut the contents of the current selection by using the [Copy](reference/cricheditctrl-class.md#copy) or [Cut](reference/cricheditctrl-class.md#cut) member function. Similarly, you can paste the contents of the Clipboard into a rich edit control by using the [Paste](reference/cricheditctrl-class.md#paste) member function. The control pastes the first available format that it recognizes, which presumably is the most descriptive format.

To paste a specific Clipboard format, you can use the [PasteSpecial](reference/cricheditctrl-class.md#pastespecial) member function. This function is useful for applications with a Paste Special command that enables the user to select the Clipboard format. You can use the [CanPaste](reference/cricheditctrl-class.md#canpaste) member function to determine whether a given format is recognized by the control.

You can also use `CanPaste` to determine whether any available Clipboard format is recognized by a rich edit control. This function is useful in the `OnInitMenuPopup` handler. An application might enable or gray its Paste command depending on whether the control can paste any available format.

Rich edit controls register two Clipboard formats: rich-text format and a format called RichEdit Text and Objects. An application can register these formats by using the [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) function, specifying the **CF_RTF** and **CF_RETEXTOBJ** values.

## See also

[Using CRichEditCtrl](using-cricheditctrl.md)<br/>
[Controls](controls-mfc.md)
