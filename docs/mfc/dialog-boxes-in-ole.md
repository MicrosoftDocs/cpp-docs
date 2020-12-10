---
description: "Learn more about: Dialog Boxes in OLE"
title: "Dialog Boxes in OLE"
ms.date: "11/04/2016"
helpviewer_keywords: ["MFC dialog boxes [MFC], OLE dialog boxes", "OLE dialog boxes", "dialog boxes", "OLE dialog boxes [MFC], about OLE dialog boxes", "dialog boxes [MFC], about dialog boxes", "dialog boxes [MFC], OLE", "Insert object"]
ms.assetid: 73c41eb8-738a-4d02-9212-d3395bb09a3a
---
# Dialog Boxes in OLE

While a user runs an OLE-enabled application, there are times when the application needs information from the user in order to carry out the operation. The MFC OLE classes provide a number of dialog boxes to gather the required information. This topic lists the tasks handled by the OLE dialog boxes and the classes needed to display those dialog boxes. For details on OLE dialog boxes and the structures used to customize their behavior, see [MFC Reference](mfc-desktop-applications.md).

*Insert Object*<br/>
This dialog box allows the user to insert newly created or existing objects into the compound document. It also allows the user to choose to display the item as an icon and enables the Change Icon command button. Display this dialog box when the user chooses Insert Object from the Edit menu. Use the [COleInsertDialog](reference/coleinsertdialog-class.md) class to display this dialog box. Note that you cannot insert an MDI application into itself. An application that is a container/server cannot be inserted into itself unless it is an SDI application.

*Paste Special*<br/>
This dialog box allows the user to control the format used when pasting data into a compound document. The user can choose the format of the data, whether to embed or link the data, and whether to display it as an icon. Display this dialog box when the user chooses Paste Special from the Edit menu. Use the [COlePasteSpecialDialog](reference/colepastespecialdialog-class.md) class to display this dialog box.

*Change Icon*<br/>
This dialog box allows the user to select which icon is displayed to represent the linked or embedded item. Display this dialog box when the user chooses Change Icon from the Edit menu or chooses the Change Icon button in either the Paste Special or Convert dialog boxes. Also display it when the user opens the Insert Object dialog box and chooses Display as Icon. Use the [COleChangeIconDialog](reference/colechangeicondialog-class.md) class to display this dialog box.

*Convert*<br/>
This dialog box allows the user to change the type of an embedded or linked item. For example, if you have embedded a metafile in a compound document and later want to use another application to modify the embedded metafile, you can use the Convert dialog box. This dialog box is usually displayed by clicking *item type* Object on the Edit menu and then, on the cascading menu, clicking Convert. Use the [COleConvertDialog](reference/coleconvertdialog-class.md) class to display this dialog box. For an example, run the MFC OLE sample [OCLIENT](../overview/visual-cpp-samples.md).

*Edit Links or Update Links*<br/>
The Edit Links dialog box allows the user to change information about the source of a linked object. The Update Links dialog box verifies the sources of all the linked items in the current dialog box and displays the Edit Links dialog box if necessary. Display the Edit Links dialog box when the user chooses Links from the Edit menu. The Update Links dialog box is usually displayed when a compound document is first opened. Use either the [COleLinksDialog](reference/colelinksdialog-class.md) or the [COleUpdateDialog](reference/coleupdatedialog-class.md) class, depending on which dialog box you want to display.

*Server Busy or Server Not Responding*<br/>
The Server Busy dialog box is displayed when the user attempts to activate an item and the server is currently unable to handle the request, usually because the server is in use by another user or task. The Server Not Responding dialog box is displayed if the server does not respond to the activation request at all. These dialog boxes are displayed via `COleMessageFilter`, based on an implementation of the OLE interface `IMessageFilter`, and the user can decide whether to attempt the activation request again. Use the [COleBusyDialog](reference/colebusydialog-class.md) class to display this dialog box.

## See also

[Dialog Boxes](dialog-boxes.md)<br/>
[Working with Dialog Boxes in MFC](life-cycle-of-a-dialog-box.md)<br/>
[OLE](ole-in-mfc.md)
