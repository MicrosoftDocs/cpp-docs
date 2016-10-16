---
title: "Dialog Box Classes"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vc.classes.dialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "property sheet classes"
  - "dialog box classes"
  - "OLE common dialog classes"
  - "common dialog classes"
  - "tab dialog boxes"
ms.assetid: db75da23-4eff-4c6c-beae-79cf046fbce9
caps.latest.revision: 7
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Dialog Box Classes
Class `CDialog` and its derived classes encapsulate dialog-box functionality. Since a dialog box is a special kind of window, `CDialog` is derived from `CWnd`. Derive your dialog classes from `CDialog` or use one of the common dialog classes for standard dialog boxes, such as opening or saving a file, printing, selecting a font or color, initiating a search-and-replace operation, or performing various OLE-related operations.  
  
 [CDialog](../mfcref/cdialog-class.md)  
 The base class for all dialog boxes, both modal and modeless.  
  
 [CDataExchange](../mfcref/cdataexchange-class.md)  
 Supplies data exchange and validation information for dialog boxes.  
  
## Common Dialogs  
 These dialog box classes encapsulate the Windows common dialog boxes. They provide easy-to-use implementations of complicated dialog boxes.  
  
 [CCommonDialog](../mfcref/ccommondialog-class.md)  
 Base class for all common dialog boxes.  
  
 [CFileDialog](../mfcref/cfiledialog-class.md)  
 Provides a standard dialog box for opening or saving a file.  
  
 [CColorDialog](../mfcref/ccolordialog-class.md)  
 Provides a standard dialog box for selecting a color.  
  
 [CFontDialog](../mfcref/cfontdialog-class.md)  
 Provides a standard dialog box for selecting a font.  
  
 [CFindReplaceDialog](../mfcref/cfindreplacedialog-class.md)  
 Provides a standard dialog box for a search-and-replace operation.  
  
 [CPrintDialog](../mfcref/cprintdialog-class.md)  
 Provides a standard dialog box for printing a file.  
  
 [CPrintDialogEx](../mfcref/cprintdialogex-class.md)  
 Provides a Windows 2000 Print property sheet.  
  
 [CPageSetupDialog](../mfcref/cpagesetupdialog-class.md)  
 Encapsulates the services provided by the Windows common Page Setup dialog box with additional support for setting and modifying print margins.  
  
## OLE Common Dialogs  
 OLE adds several common dialog boxes to Windows. These classes encapsulate the OLE common dialog boxes.  
  
 [COleDialog](../mfcref/coledialog-class.md)  
 Used by the framework to contain common implementations for all OLE dialog boxes. All dialog box classes in the user-interface category are derived from this base class. `COleDialog` cannot be used directly.  
  
 [COleInsertDialog](../mfcref/coleinsertdialog-class.md)  
 Displays the Insert Object dialog box, the standard user interface for inserting new OLE linked or embedded items.  
  
 [COlePasteSpecialDialog](../mfcref/colepastespecialdialog-class.md)  
 Displays the Paste Special dialog box, the standard user interface for implementing the Edit Paste Special command.  
  
 [COleLinksDialog](../mfcref/colelinksdialog-class.md)  
 Displays the Edit Links dialog box, the standard user interface for modifying information about linked items.  
  
 [COleChangeIconDialog](../mfcref/colechangeicondialog-class.md)  
 Displays the Change Icon dialog box, the standard user interface for changing the icon associated with an OLE embedded or linked item.  
  
 [COleConvertDialog](../mfcref/coleconvertdialog-class.md)  
 Displays the Convert dialog box, the standard user interface for converting OLE items from one type to another.  
  
 [COlePropertiesDialog](../mfcref/colepropertiesdialog-class.md)  
 Encapsulates the Windows common OLE Properties dialog box. Common OLE Properties dialog boxes provide an easy way to display and modify the properties of an OLE document item in a manner consistent with Windows standards.  
  
 [COleUpdateDialog](../mfcref/coleupdatedialog-class.md)  
 Displays the Update dialog box, the standard user interface for updating all links in a document. The dialog box contains a progress indicator to indicate how close the update procedure is to completion.  
  
 [COleChangeSourceDialog](../mfcref/colechangesourcedialog-class.md)  
 Displays the Change Source dialog box, the standard user interface for changing the destination or source of a link.  
  
 [COleBusyDialog](../mfcref/colebusydialog-class.md)  
 Displays the Server Busy and Server Not Responding dialog boxes, the standard user interface for handling calls to busy applications. Usually displayed automatically by the [COleMessageFilter](../mfcref/colemessagefilter-class.md) implementation.  
  
## Property Sheet Classes  
 The property sheet classes allow your applications to use property sheets, also known as tabbed dialogs. Property sheets are an efficient way to organize a large number of controls in a single dialog box.  
  
 [CPropertyPage](../mfcref/cpropertypage-class.md)  
 Provides the individual pages within a property sheet. Derive a class from `CPropertyPage` for each page to be added to your property sheet.  
  
 [CPropertySheet](../mfcref/cpropertysheet-class.md)  
 Provides the frame for multiple property pages. Derive your property sheet class from `CPropertySheet` to implement your property sheets quickly.  
  
 [COlePropertyPage](../mfcref/colepropertypage-class.md)  
 Displays the properties of an OLE control in a graphical interface, similar to a dialog box.  
  
## HTML-based Dialog Classes  
 [CDHtmlDialog](../mfcref/cdhtmldialog-class.md)  
 Used to create dialog boxes that implement their user interface with HTML rather than dialog resources.  
  
 [CMultiPageDHtmlDialog](../mfcref/cmultipagedhtmldialog-class.md)  
 Displays multiple HTML pages sequentially and handles the events from each page.  
  
## Related Classes  
 These classes are not dialog boxes per se, but they use dialog box templates and have much of the behavior of dialog boxes.  
  
 [CDialogBar](../mfcref/cdialogbar-class.md)  
 A control bar that is based on a dialog box template.  
  
 [CFormView](../mfcref/cformview-class.md)  
 A scroll view whose layout is defined in a dialog box template. Derive a class from `CFormView` to implement a user interface based on a dialog box template.  
  
 [CDaoRecordView](../mfcref/cdaorecordview-class.md)  
 Provides a form view directly connected to a Data Access Object (DAO) recordset object. Like all form views, a `CDaoRecordView` is based on a dialog box template.  
  
 [CRecordView](../mfcref/crecordview-class.md)  
 Provides a form view directly connected to an Open Database Connectivity (ODBC) recordset object. Like all form views, a `CRecordView` is based on a dialog box template.  
  
 [CPrintInfo](../mfcref/cprintinfo-structure.md)  
 A structure containing information about a print or print preview job. Used by the printing architecture of [CView](../mfcref/cview-class.md).  
  
## See Also  
 [Class Overview](../mfc/class-library-overview.md)