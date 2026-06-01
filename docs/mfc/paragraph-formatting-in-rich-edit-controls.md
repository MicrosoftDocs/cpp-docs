---
description: "Learn more about: Paragraph Formatting in Rich Edit Controls"
title: "Paragraph Formatting in Rich Edit Controls"
ms.date: "11/04/2016"
helpviewer_keywords: ["rich edit controls [MFC], paragraph formatting in", "paragraph formatting in CRichEditCtrl [MFC]", "CRichEditCtrl class [MFC], paragraph formatting in", "formatting [MFC], paragraphs"]
---
# Paragraph Formatting in Rich Edit Controls

>[!NOTE]
> The Microsoft Foundation Classes (MFC) library continues to be supported. However, we're no longer adding features or updating the documentation.

You can use member functions of the rich edit control ([CRichEditCtrl](reference/cricheditctrl-class.md)) to format paragraphs and to retrieve formatting information. Paragraph formatting attributes include alignment, tabs, indents, and numbering.

You can apply paragraph formatting by using the [SetParaFormat](reference/cricheditctrl-class.md#setparaformat) member function. To determine the current paragraph formatting for the selected text, use the [GetParaFormat](reference/cricheditctrl-class.md#getparaformat) member function. The [PARAFORMAT](/windows/win32/api/richedit/ns-richedit-paraformat) structure is used with these member functions to specify paragraph attributes. One of the important members of **PARAFORMAT** is *dwMask*. In `SetParaFormat`, *dwMask* specifies which paragraph attributes will be set by this function call. `GetParaFormat` reports the attributes of the first paragraph in the selection; *dwMask* specifies the attributes that are consistent throughout the selection.

## See also

[Using CRichEditCtrl](using-cricheditctrl.md)<br/>
[Controls](controls-mfc.md)
