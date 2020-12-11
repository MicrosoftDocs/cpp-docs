---
description: "Learn more about: Clipboard: Using the Windows Clipboard"
title: "Clipboard: Using the Windows Clipboard"
ms.date: "11/04/2016"
helpviewer_keywords: ["Clipboard commands", "Cut/Copy and Paste command handler functions [MFC]", "handler functions, Cut/Copy and Paste commands", "Clipboard [MFC], commands", "commands [MFC], implementing Edit", "Clipboard commands [MFC], implementing", "Windows Clipboard [MFC]", "Clipboard [MFC], Windows Clipboard API"]
ms.assetid: 24415b42-9301-4a70-b69a-44c97918319f
---
# Clipboard: Using the Windows Clipboard

This topic describes how to use the standard Windows Clipboard API within your MFC application.

Most applications for Windows support cutting or copying data to the Windows Clipboard and pasting data from the Clipboard. The Clipboard data formats vary among applications. The framework supports only a limited number of Clipboard formats for a limited number of classes. You will normally implement the Clipboard-related commands — Cut, Copy, and Paste — on the Edit menu for your view. The class library defines the command IDs for these commands: **ID_EDIT_CUT**, **ID_EDIT_COPY**, and **ID_EDIT_PASTE**. Their message-line prompts are also defined.

[Messages and Commands in the Framework](messages-and-commands-in-the-framework.md) explains how to handle menu commands in your application by mapping the menu command to a handler function. As long as your application does not define handler functions for the Clipboard commands on the Edit menu, they remain disabled. To write handler functions for the Cut and Copy commands, implement selection in your application. To write a handler function for the Paste command, query the Clipboard to see whether it contains data in a format your application can accept. For example, to enable the Copy command, you might write a handler something like the following:

[!code-cpp[NVC_MFCListView#2](../atl/reference/codesnippet/cpp/clipboard-using-the-windows-clipboard_1.cpp)]

The Cut, Copy, and Paste commands are only meaningful in certain contexts. The Cut and Copy commands should be enabled only when something is selected, and the Paste command only when something is in the Clipboard. You can provide this behavior by defining update handler functions that enable or disable these commands depending on the context. For more information, see [How to Update User-Interface Objects](how-to-update-user-interface-objects.md).

The Microsoft Foundation Class Library does provide Clipboard support for text editing with the `CEdit` and `CEditView` classes. The OLE classes also simplify implementing Clipboard operations that involve OLE items. For more information on the OLE classes, see [Clipboard: Using the OLE Clipboard Mechanism](clipboard-using-the-ole-clipboard-mechanism.md).

Implementing other Edit menu commands, such as Undo (**ID_EDIT_UNDO**) and Redo (**ID_EDIT_REDO**), is also left to you. If your application does not support these commands, you can easily delete them from your resource file using the Visual C++ resource editors.

## What do you want to know more about

- [Copying and pasting data](clipboard-copying-and-pasting-data.md)

- [Using the OLE Clipboard mechanism](clipboard-using-the-ole-clipboard-mechanism.md)

## See also

[Clipboard](clipboard.md)
