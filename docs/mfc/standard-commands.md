---
description: "Learn more about: Standard Commands"
title: "Standard Commands"
ms.date: "11/04/2016"
helpviewer_keywords: ["File menu", "identifiers [MFC], command IDs", "command IDs, standard commands", "OLE commands", "commands [MFC], standard", "standard command IDs", "Window menu commands", "standard commands", "View menu commands", "Edit menu standard commands", "Help [MFC], menus", "programmer-defined IDs [MFC]"]
ms.assetid: 88cf3ab4-79b3-4ac6-9365-8ac561036fbf
---
# Standard Commands

The framework defines many standard command messages. The IDs for these commands typically take the form:

**ID_** *Source*_*Item*

where *Source* is usually a menu name and *Item* is a menu item. For example, the command ID for the New command on the File menu is ID_FILE_NEW. Standard command IDs are shown in bold type in the documentation. Programmer-defined IDs are shown in a font that is different from the surrounding text.

The following is a list of some of the most important commands supported:

*File Menu Commands*<br/>
New, Open, Close, Save, Save As, Page Setup, Print Setup, Print, Print Preview, Exit, and most-recently-used files.

*Edit Menu Commands*<br/>
Clear, Clear All, Copy, Cut, Find, Paste, Repeat, Replace, Select All, Undo, and Redo.

*View Menu Commands*<br/>
Toolbar and Status Bar.

*Window Menu Commands*<br/>
New, Arrange, Cascade, Tile Horizontal, Tile Vertical, and Split.

*Help Menu Commands*<br/>
Index, Using Help, and About.

*OLE Commands (Edit Menu)*<br/>
Insert New Object, Edit Links, Paste Link, Paste Special, and *typename* Object (verb commands).

The framework provides varying levels of support for these commands. Some commands are supported only as defined command IDs, while others are supported with thorough implementations. For example, the framework implements the Open command on the File menu by creating a new document object, displaying an Open dialog box, and opening and reading the file. In contrast, you must implement commands on the Edit menu yourself, since commands like ID_EDIT_COPY depend on the nature of the data you are copying.

For more information about the commands supported and the level of implementation provided, see [Technical Note 22](../mfc/tn022-standard-commands-implementation.md). The standard commands are defined in the file AFXRES.H.

## See also

[User-Interface Objects and Command IDs](../mfc/user-interface-objects-and-command-ids.md)
