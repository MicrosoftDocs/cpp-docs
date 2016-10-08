---
title: "Dialog Box Classes"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: db75da23-4eff-4c6c-beae-79cf046fbce9
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Dialog Box Classes
Class `CDialog` and its derived classes encapsulate dialog-box functionality. Since a dialog box is a special kind of window, `CDialog` is derived from `CWnd`. Derive your dialog classes from `CDialog` or use one of the common dialog classes for standard dialog boxes, such as opening or saving a file, printing, selecting a font or color, initiating a search-and-replace operation, or performing various OLE-related operations.  
  
 [CDialog](../VS_visualcpp/CDialog-Class.md)  
 The base class for all dialog boxes, both modal and modeless.  
  
 [CDataExchange](../VS_visualcpp/CDataExchange-Class.md)  
 Supplies data exchange and validation information for dialog boxes.  
  
## Common Dialogs  
 These dialog box classes encapsulate the Windows common dialog boxes. They provide easy-to-use implementations of complicated dialog boxes.  
  
 [CCommonDialog](../VS_visualcpp/CCommonDialog-Class.md)  
 Base class for all common dialog boxes.  
  
 [CFileDialog](../VS_visualcpp/CFileDialog-Class.md)  
 Provides a standard dialog box for opening or saving a file.  
  
 [CColorDialog](../VS_visualcpp/CColorDialog-Class.md)  
 Provides a standard dialog box for selecting a color.  
  
 [CFontDialog](../VS_visualcpp/CFontDialog-Class.md)  
 Provides a standard dialog box for selecting a font.  
  
 [CFindReplaceDialog](../VS_visualcpp/CFindReplaceDialog-Class.md)  
 Provides a standard dialog box for a search-and-replace operation.  
  
 [CPrintDialog](../VS_visualcpp/CPrintDialog-Class.md)  
 Provides a standard dialog box for printing a file.  
  
 [CPrintDialogEx](../VS_visualcpp/CPrintDialogEx-Class.md)  
 Provides a Windows 2000 Print property sheet.  
  
 [CPageSetupDialog](../VS_visualcpp/CPageSetupDialog-Class.md)  
 Encapsulates the services provided by the Windows common Page Setup dialog box with additional support for setting and modifying print margins.  
  
## OLE Common Dialogs  
 OLE adds several common dialog boxes to Windows. These classes encapsulate the OLE common dialog boxes.  
  
 [COleDialog](../VS_visualcpp/COleDialog-Class.md)  
 Used by the framework to contain common implementations for all OLE dialog boxes. All dialog box classes in the user-interface category are derived from this base class. `COleDialog` cannot be used directly.  
  
 [COleInsertDialog](../VS_visualcpp/COleInsertDialog-Class.md)  
 Displays the Insert Object dialog box, the standard user interface for inserting new OLE linked or embedded items.  
  
 [COlePasteSpecialDialog](../VS_visualcpp/COlePasteSpecialDialog-Class.md)  
 Displays the Paste Special dialog box, the standard user interface for implementing the Edit Paste Special command.  
  
 [COleLinksDialog](../VS_visualcpp/COleLinksDialog-Class.md)  
 Displays the Edit Links dialog box, the standard user interface for modifying information about linked items.  
  
 [COleChangeIconDialog](../VS_visualcpp/COleChangeIconDialog-Class.md)  
 Displays the Change Icon dialog box, the standard user interface for changing the icon associated with an OLE embedded or linked item.  
  
 [COleConvertDialog](../VS_visualcpp/COleConvertDialog-Class.md)  
 Displays the Convert dialog box, the standard user interface for converting OLE items from one type to another.  
  
 [COlePropertiesDialog](../VS_visualcpp/COlePropertiesDialog-Class.md)  
 Encapsulates the Windows common OLE Properties dialog box. Common OLE Properties dialog boxes provide an easy way to display and modify the properties of an OLE document item in a manner consistent with Windows standards.  
  
 [COleUpdateDialog](../VS_visualcpp/COleUpdateDialog-Class.md)  
 Displays the Update dialog box, the standard user interface for updating all links in a document. The dialog box contains a progress indicator to indicate how close the update procedure is to completion.  
  
 [COleChangeSourceDialog](../VS_visualcpp/COleChangeSourceDialog-Class.md)  
 Displays the Change Source dialog box, the standard user interface for changing the destination or source of a link.  
  
 [COleBusyDialog](../VS_visualcpp/COleBusyDialog-Class.md)  
 Displays the Server Busy and Server Not Responding dialog boxes, the standard user interface for handling calls to busy applications. Usually displayed automatically by the [COleMessageFilter](../VS_visualcpp/COleMessageFilter-Class.md) implementation.  
  
## Property Sheet Classes  
 The property sheet classes allow your applications to use property sheets, also known as tabbed dialogs. Property sheets are an efficient way to organize a large number of controls in a single dialog box.  
  
 [CPropertyPage](../VS_visualcpp/CPropertyPage-Class.md)  
 Provides the individual pages within a property sheet. Derive a class from `CPropertyPage` for each page to be added to your property sheet.  
  
 [CPropertySheet](../VS_visualcpp/CPropertySheet-Class.md)  
 Provides the frame for multiple property pages. Derive your property sheet class from `CPropertySheet` to implement your property sheets quickly.  
  
 [COlePropertyPage](../VS_visualcpp/COlePropertyPage-Class.md)  
 Displays the properties of an OLE control in a graphical interface, similar to a dialog box.  
  
## HTML-based Dialog Classes  
 [CDHtmlDialog](../VS_visualcpp/CDHtmlDialog-Class.md)  
 Used to create dialog boxes that implement their user interface with HTML rather than dialog resources.  
  
 [CMultiPageDHtmlDialog](../VS_visualcpp/CMultiPageDHtmlDialog-Class.md)  
 Displays multiple HTML pages sequentially and handles the events from each page.  
  
## Related Classes  
 These classes are not dialog boxes per se, but they use dialog box templates and have much of the behavior of dialog boxes.  
  
 [CDialogBar](../VS_visualcpp/CDialogBar-Class.md)  
 A control bar that is based on a dialog box template.  
  
 [CFormView](../VS_visualcpp/CFormView-Class.md)  
 A scroll view whose layout is defined in a dialog box template. Derive a class from `CFormView` to implement a user interface based on a dialog box template.  
  
 [CDaoRecordView](../VS_visualcpp/CDaoRecordView-Class.md)  
 Provides a form view directly connected to a Data Access Object (DAO) recordset object. Like all form views, a `CDaoRecordView` is based on a dialog box template.  
  
 [CRecordView](../VS_visualcpp/CRecordView-Class.md)  
 Provides a form view directly connected to an Open Database Connectivity (ODBC) recordset object. Like all form views, a `CRecordView` is based on a dialog box template.  
  
 [CPrintInfo](../VS_visualcpp/CPrintInfo-Structure.md)  
 A structure containing information about a print or print preview job. Used by the printing architecture of [CView](../VS_visualcpp/CView-Class.md).  
  
## See Also  
 [Class Overview](../VS_visualcpp/Class-Library-Overview.md)