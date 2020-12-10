---
description: "Learn more about: Dialog Box Classes"
title: "Dialog Box Classes"
ms.date: "11/04/2016"
f1_keywords: ["vc.classes.dialog"]
helpviewer_keywords: ["property sheet classes", "dialog box classes", "OLE common dialog classes", "common dialog classes [MFC]", "tab dialog boxes"]
ms.assetid: db75da23-4eff-4c6c-beae-79cf046fbce9
---
# Dialog Box Classes

Class `CDialog` and its derived classes encapsulate dialog-box functionality. Since a dialog box is a special kind of window, `CDialog` is derived from `CWnd`. Derive your dialog classes from `CDialog` or use one of the common dialog classes for standard dialog boxes, such as opening or saving a file, printing, selecting a font or color, initiating a search-and-replace operation, or performing various OLE-related operations.

[CDialog](reference/cdialog-class.md)<br/>
The base class for all dialog boxes, both modal and modeless.

[CDataExchange](reference/cdataexchange-class.md)<br/>
Supplies data exchange and validation information for dialog boxes.

## Common Dialogs

These dialog box classes encapsulate the Windows common dialog boxes. They provide easy-to-use implementations of complicated dialog boxes.

[CCommonDialog](reference/ccommondialog-class.md)<br/>
Base class for all common dialog boxes.

[CFileDialog](reference/cfiledialog-class.md)<br/>
Provides a standard dialog box for opening or saving a file.

[CColorDialog](reference/ccolordialog-class.md)<br/>
Provides a standard dialog box for selecting a color.

[CFontDialog](reference/cfontdialog-class.md)<br/>
Provides a standard dialog box for selecting a font.

[CFindReplaceDialog](reference/cfindreplacedialog-class.md)<br/>
Provides a standard dialog box for a search-and-replace operation.

[CPrintDialog](reference/cprintdialog-class.md)<br/>
Provides a standard dialog box for printing a file.

[CPrintDialogEx](reference/cprintdialogex-class.md)<br/>
Provides a Windows Print property sheet.

[CPageSetupDialog](reference/cpagesetupdialog-class.md)<br/>
Encapsulates the services provided by the Windows common Page Setup dialog box with additional support for setting and modifying print margins.

## OLE Common Dialogs

OLE adds several common dialog boxes to Windows. These classes encapsulate the OLE common dialog boxes.

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
Displays the Server Busy and Server Not Responding dialog boxes, the standard user interface for handling calls to busy applications. Usually displayed automatically by the [COleMessageFilter](reference/colemessagefilter-class.md) implementation.

## Property Sheet Classes

The property sheet classes allow your applications to use property sheets, also known as tabbed dialogs. Property sheets are an efficient way to organize a large number of controls in a single dialog box.

[CPropertyPage](reference/cpropertypage-class.md)<br/>
Provides the individual pages within a property sheet. Derive a class from `CPropertyPage` for each page to be added to your property sheet.

[CPropertySheet](reference/cpropertysheet-class.md)<br/>
Provides the frame for multiple property pages. Derive your property sheet class from `CPropertySheet` to implement your property sheets quickly.

[COlePropertyPage](reference/colepropertypage-class.md)<br/>
Displays the properties of an OLE control in a graphical interface, similar to a dialog box.

## HTML-based Dialog Classes

[CDHtmlDialog](reference/cdhtmldialog-class.md)<br/>
Used to create dialog boxes that implement their user interface with HTML rather than dialog resources.

[CMultiPageDHtmlDialog](reference/cmultipagedhtmldialog-class.md)<br/>
Displays multiple HTML pages sequentially and handles the events from each page.

## Related Classes

These classes are not dialog boxes per se, but they use dialog box templates and have much of the behavior of dialog boxes.

[CDialogBar](reference/cdialogbar-class.md)<br/>
A control bar that is based on a dialog box template.

[CFormView](reference/cformview-class.md)<br/>
A scroll view whose layout is defined in a dialog box template. Derive a class from `CFormView` to implement a user interface based on a dialog box template.

[CDaoRecordView](reference/cdaorecordview-class.md)<br/>
Provides a form view directly connected to a Data Access Object (DAO) recordset object. Like all form views, a `CDaoRecordView` is based on a dialog box template.

[CRecordView](reference/crecordview-class.md)<br/>
Provides a form view directly connected to an Open Database Connectivity (ODBC) recordset object. Like all form views, a `CRecordView` is based on a dialog box template.

[CPrintInfo](reference/cprintinfo-structure.md)<br/>
A structure containing information about a print or print preview job. Used by the printing architecture of [CView](reference/cview-class.md).

## See also

[Class Overview](class-library-overview.md)
