---
description: "Learn more about: OLE Common Dialog Classes"
title: "OLE Common Dialog Classes"
ms.date: "11/04/2016"
helpviewer_keywords: ["ActiveX classes [MFC]", "dialog classes [MFC], OLE", "OLE common dialog classes [MFC]", "common dialog classes [MFC]"]
ms.assetid: 706526ae-f94f-4909-a0f8-6b5fe954fd97
---
# OLE Common Dialog Classes

These classes handle common OLE tasks by implementing a number of standard OLE dialog boxes. They also provide a consistent user interface for OLE functionality.

[COleDialog](reference/coledialog-class.md)<br/>
Used by the framework to contain common implementations for all OLE dialog boxes. All dialog box classes in the user-interface category are derived from this base class. `COleDialog` cannot be used directly.

[COleInsertDialog](reference/coleinsertdialog-class.md)<br/>
Displays the Insert Object dialog box, the standard user interface for inserting new OLE linked or embedded items.

[COlePasteSpecialDialog](reference/colepastespecialdialog-class.md)<br/>
Displays the Paste Special dialog box, the standard user interface for implementing the Edit Paste Special command.

[COleLinksDialog](reference/colelinksdialog-class.md)<br/>
Displays the Edit Links dialog box, the standard user interface for modifying information about linked items.

[COleChangeIconDialog](reference/colechangeicondialog-class.md)<br/>
Displays the Change Icon dialog box, the standard user interface for changing the icon associated with an OLE embedded or linked item.

[COleConvertDialog](reference/coleconvertdialog-class.md)<br/>
Displays the Convert dialog box, the standard user interface for converting OLE items from one type to another.

[COlePropertiesDialog](reference/colepropertiesdialog-class.md)<br/>
Encapsulates the Windows common OLE Properties dialog box. Common OLE Properties dialog boxes provide an easy way to display and modify the properties of an OLE document item in a manner consistent with Windows standards.

[COleUpdateDialog](reference/coleupdatedialog-class.md)<br/>
Displays the Update dialog box, the standard user interface for updating all links in a document. The dialog box contains a progress indicator to indicate how close the update procedure is to completion.

[COleChangeSourceDialog](reference/colechangesourcedialog-class.md)<br/>
Displays the Change Source dialog box, the standard user interface for changing the destination or source of a link.

[COleBusyDialog](reference/colebusydialog-class.md)<br/>
Displays the Server Busy and Server Not Responding dialog boxes, the standard user interface for handling calls to busy applications. Usually displayed automatically by the `COleMessageFilter` implementation.

## See also

[Class Overview](class-library-overview.md)
