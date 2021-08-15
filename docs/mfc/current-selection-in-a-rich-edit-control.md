---
description: "Learn more about: Current Selection in a Rich Edit Control"
title: "Current Selection in a Rich Edit Control"
ms.date: "11/04/2016"
helpviewer_keywords: ["current selection in CRichEditCtrls", "CRichEditCtrl class [MFC], current selection in", "rich edit controls [MFC], current selection in", "selection, current in CRichEditCtrl"]
ms.assetid: f6b2a2b6-5481-4ad3-9720-6dd772ea6fc8
---
# Current Selection in a Rich Edit Control

The user can select text in a rich edit control ([CRichEditCtrl](reference/cricheditctrl-class.md)) by using the mouse or the keyboard. The current selection is the range of selected characters, or the position of the insertion point if no characters are selected. An application can get information about the current selection, set the current selection, determine when the current selection changes, and show or hide the selection highlight.

To determine the current selection in a rich edit control, use the [GetSel](reference/cricheditctrl-class.md#getsel) member function. To set the current selection, use the [SetSel](reference/cricheditctrl-class.md#setsel) member function. The [CHARRANGE](/windows/win32/api/richedit/ns-richedit-charrange) structure is used with these functions to specify a range of characters. To retrieve information about the contents of the current selection, you can use the [GetSelectionType](reference/cricheditctrl-class.md#getselectiontype) member function.

By default, a rich edit control shows and hides the selection highlight when it gains and loses the focus. You can show or hide the selection highlight at any time by using the [HideSelection](reference/cricheditctrl-class.md#hideselection) member function. For example, an application might provide a Search dialog box to find text in a rich edit control. The application might select matching text without closing the dialog box, in which case it must use `HideSelection` to highlight the selection.

To get the selected text in a rich edit control, use the [GetSelText](reference/cricheditctrl-class.md#getseltext) member function. The text is copied to the specified character array. You must ensure that the array is large enough to hold the selected text plus a terminating null character.

You can search for a string in a rich edit control by using the [FindText](reference/cricheditctrl-class.md#findtext) member function The [FINDTEXTEX](/windows/win32/api/richedit/ns-richedit-findtextexw) structure used with this function specifies the text range to search and the string to search for. You can also specify such options as whether the search is case-sensitive.

## See also

[Using CRichEditCtrl](using-cricheditctrl.md)<br/>
[Controls](controls-mfc.md)
