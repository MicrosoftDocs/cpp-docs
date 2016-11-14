---
title: "Dialog Box Classes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
caps.latest.revision: 9
author: "mikeblome"
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
  
 [CDialog](../mfc/reference/cdialog-class.md)  
 The base class for all dialog boxes, both modal and modeless.  
  
 [CDataExchange](../mfc/reference/cdataexchange-class.md)  
 Supplies data exchange and validation information for dialog boxes.  
  
## Common Dialogs  
 These dialog box classes encapsulate the Windows common dialog boxes. They provide easy-to-use implementations of complicated dialog boxes.  
  
 [CCommonDialog](../mfc/reference/ccommondialog-class.md)  
 Base class for all common dialog boxes.  
  
 [CFileDialog](../mfc/reference/cfiledialog-class.md)  
 Provides a standard dialog box for opening or saving a file.  
  
 [CColorDialog](../mfc/reference/ccolordialog-class.md)  
 Provides a standard dialog box for selecting a color.  
  
 [CFontDialog](../mfc/reference/cfontdialog-class.md)  
 Provides a standard dialog box for selecting a font.  
  
 [CFindReplaceDialog](../mfc/reference/cfindreplacedialog-class.md)  
 Provides a standard dialog box for a search-and-replace operation.  
  
 [CPrintDialog](../mfc/reference/cprintdialog-class.md)  
 Provides a standard dialog box for printing a file.  
  
 [CPrintDialogEx](../mfc/reference/cprintdialogex-class.md)  
 Provides a Windows 2000 Print property sheet.  
  
 [CPageSetupDialog](../mfc/reference/cpagesetupdialog-class.md)  
 Encapsulates the services provided by the Windows common Page Setup dialog box with additional support for setting and modifying print margins.  
  
## OLE Common Dialogs  
 OLE adds several common dialog boxes to Windows. These classes encapsulate the OLE common dialog boxes.  
  
 [COleDialog](../mfc/reference/coledialog-class.md)  
 Used by the framework to contain common implementations for all OLE dialog boxes. All dialog box classes in the user-interface category are derived from this base class. `COleDialog` cannot be used directly.  
  
 [COleInsertDialog](../mfc/reference/coleinsertdialog-class.md)  
 Displays the Insert Object dialog box, the standard user interface for inserting new OLE linked or embedded items.  
  
 [COlePasteSpecialDialog](../mfc/reference/colepastespecialdialog-class.md)  
 Displays the Paste Special dialog box, the standard user interface for implementing the Edit Paste Special command.  
  
 [COleLinksDialog](../mfc/reference/colelinksdialog-class.md)  
 Displays the Edit Links dialog box, the standard user interface for modifying information about linked items.  
  
 [COleChangeIconDialog](../mfc/reference/colechangeicondialog-class.md)  
 Displays the Change Icon dialog box, the standard user interface for changing the icon associated with an OLE embedded or linked item.  
  
 [COleConvertDialog](../mfc/reference/coleconvertdialog-class.md)  
 Displays the Convert dialog box, the standard user interface for converting OLE items from one type to another.  
  
 [COlePropertiesDialog](../mfc/reference/colepropertiesdialog-class.md)  
 Encapsulates the Windows common OLE Properties dialog box. Common OLE Properties dialog boxes provide an easy way to display and modify the properties of an OLE document item in a manner consistent with Windows standards.  
  
 [COleUpdateDialog](../mfc/reference/coleupdatedialog-class.md)  
 Displays the Update dialog box, the standard user interface for updating all links in a document. The dialog box contains a progress indicator to indicate how close the update procedure is to completion.  
  
 [COleChangeSourceDialog](../mfc/reference/colechangesourcedialog-class.md)  
 Displays the Change Source dialog box, the standard user interface for changing the destination or source of a link.  
  
 [COleBusyDialog](../mfc/reference/colebusydialog-class.md)  
 Displays the Server Busy and Server Not Responding dialog boxes, the standard user interface for handling calls to busy applications. Usually displayed automatically by the [COleMessageFilter](../mfc/reference/colemessagefilter-class.md) implementation.  
  
## Property Sheet Classes  
 The property sheet classes allow your applications to use property sheets, also known as tabbed dialogs. Property sheets are an efficient way to organize a large number of controls in a single dialog box.  
  
 [CPropertyPage](../mfc/reference/cpropertypage-class.md)  
 Provides the individual pages within a property sheet. Derive a class from `CPropertyPage` for each page to be added to your property sheet.  
  
 [CPropertySheet](../mfc/reference/cpropertysheet-class.md)  
 Provides the frame for multiple property pages. Derive your property sheet class from `CPropertySheet` to implement your property sheets quickly.  
  
 [COlePropertyPage](../mfc/reference/colepropertypage-class.md)  
 Displays the properties of an OLE control in a graphical interface, similar to a dialog box.  
  
## HTML-based Dialog Classes  
 [CDHtmlDialog](../mfc/reference/cdhtmldialog-class.md)  
 Used to create dialog boxes that implement their user interface with HTML rather than dialog resources.  
  
 [CMultiPageDHtmlDialog](../mfc/reference/cmultipagedhtmldialog-class.md)  
 Displays multiple HTML pages sequentially and handles the events from each page.  
  
## Related Classes  
 These classes are not dialog boxes per se, but they use dialog box templates and have much of the behavior of dialog boxes.  
  
 [CDialogBar](../mfc/reference/cdialogbar-class.md)  
 A control bar that is based on a dialog box template.  
  
 [CFormView](../mfc/reference/cformview-class.md)  
 A scroll view whose layout is defined in a dialog box template. Derive a class from `CFormView` to implement a user interface based on a dialog box template.  
  
 [CDaoRecordView](../mfc/reference/cdaorecordview-class.md)  
 Provides a form view directly connected to a Data Access Object (DAO) recordset object. Like all form views, a `CDaoRecordView` is based on a dialog box template.  
  
 [CRecordView](../mfc/reference/crecordview-class.md)  
 Provides a form view directly connected to an Open Database Connectivity (ODBC) recordset object. Like all form views, a `CRecordView` is based on a dialog box template.  
  
 [CPrintInfo](../mfc/reference/cprintinfo-structure.md)  
 A structure containing information about a print or print preview job. Used by the printing architecture of [CView](../mfc/reference/cview-class.md).  
  
## See Also  
 [Class Overview](../mfc/class-library-overview.md)

