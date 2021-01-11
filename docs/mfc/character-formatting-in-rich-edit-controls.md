---
description: "Learn more about: Character Formatting in Rich Edit Controls"
title: "Character Formatting in Rich Edit Controls"
ms.date: "11/04/2016"
helpviewer_keywords: ["formatting [MFC], characters", "rich edit controls [MFC], character formatting in", "CRichEditCtrl class [MFC], character formatting in"]
ms.assetid: c80f4305-75ad-45f9-8d17-d83d0fe79be5
---
# Character Formatting in Rich Edit Controls

You can use member functions of the rich edit control ([CRichEditCtrl](reference/cricheditctrl-class.md)) to format characters and to retrieve formatting information. For characters, you can specify typeface, size, color, and effects such as bold, italic, and protected.

You can apply character formatting by using the [SetSelectionCharFormat](reference/cricheditctrl-class.md#setselectioncharformat) and [SetWordCharFormat](reference/cricheditctrl-class.md#setwordcharformat) member functions. To determine the current character formatting for the selected text, use the [GetSelectionCharFormat](reference/cricheditctrl-class.md#getselectioncharformat) member function. The [CHARFORMAT](/windows/win32/api/richedit/ns-richedit-charformata) structure is used with these member functions to specify character attributes. One of the important members of **CHARFORMAT** is **dwMask**. In `SetSelectionCharFormat` and `SetWordCharFormat`, **dwMask** specifies which character attributes will be set by this function call. `GetSelectionCharFormat` reports the attributes of the first character in the selection; **dwMask** specifies the attributes that are consistent throughout the selection.

You can also get and set the "default character formatting," which is the formatting applied to any subsequently inserted characters. For example, if an application sets the default character formatting to bold and the user then types a character, that character is bold. To get and set default character formatting, use the [GetDefaultCharFormat](reference/cricheditctrl-class.md#getdefaultcharformat) and [SetDefaultCharFormat](reference/cricheditctrl-class.md#setdefaultcharformat) member functions.

The "protected" character attribute does not change the appearance of text. If the user attempts to modify protected text, a rich edit control sends its parent window an **EN_PROTECTED** notification message, allowing the parent window to allow or prevent the change. To receive this notification message, you must enable it by using the [SetEventMask](reference/cricheditctrl-class.md#seteventmask) member function. For more information about the event mask, see [Notifications from a Rich Edit Control](notifications-from-a-rich-edit-control.md), later in this topic.

Foreground color is a character attribute, but background color is a property of the rich edit control. To set the background color, use the [SetBackgroundColor](reference/cricheditctrl-class.md#setbackgroundcolor) member function.

## See also

[Using CRichEditCtrl](using-cricheditctrl.md)<br/>
[Controls](controls-mfc.md)
