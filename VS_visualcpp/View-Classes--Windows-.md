---
title: "View Classes (Windows)"
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
ms.assetid: b11683fb-9f43-4de3-9499-2b55775f9870
caps.latest.revision: 8
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
# View Classes (Windows)
`CView` and its derived classes are child windows that represent the client area of a frame window. Views show data and accept input for a document.  
  
 A view class is associated with a document class and a frame window class using a document-template object.  
  
 [CView](../VS_visualcpp/CView-Class.md)  
 The base class for application-specific views of a document's data. Views display data and accept user input to edit or select the data. Derive your view class or classes from `CView`.  
  
 [CScrollView](../VS_visualcpp/CScrollView-Class.md)  
 The base class for views with scrolling capabilities. Derive your view class from `CScrollView` for automatic scrolling.  
  
## Form and Record Views  
 Form views are also scrolling views. They are based on a dialog box template.  
  
 Record views are derived from form views. In addition to the dialog box template, they also have a connection to a database.  
  
 [CFormView](../VS_visualcpp/CFormView-Class.md)  
 A scroll view whose layout is defined in a dialog box template. Derive a class from `CFormView` to implement a user interface based on a dialog box template.  
  
 [CDaoRecordView](../VS_visualcpp/CDaoRecordView-Class.md)  
 Provides a form view directly connected to a Data Access Object (DAO) recordset object. Like all form views, a `CDaoRecordView` is based on a dialog box template.  
  
 [CRecordView](../VS_visualcpp/CRecordView-Class.md)  
 Provides a form view directly connected to an Open Database Connectivity (ODBC) recordset object. Like all form views, a `CRecordView` is based on a dialog box template.  
  
 [CHtmlEditView](../VS_visualcpp/CHtmlEditView-Class.md)  
 A form view that provides the functionality of the WebBrowser HTML editing platform.  
  
## Control Views  
 Control views display a control as their view.  
  
 [CCtrlView](../VS_visualcpp/CCtrlView-Class.md)  
 The base class for all views associated with Windows controls. The views based on controls are described below.  
  
 [CEditView](../VS_visualcpp/CEditView-Class.md)  
 A view that contains a Windows standard edit control (see [CEdit](../VS_visualcpp/CEdit-Class.md)). Edit controls support text editing, searching, replacing, and scrolling capabilities.  
  
 [CRichEditView](../VS_visualcpp/CRichEditView-Class.md)  
 A view that contains a Windows rich edit control (see [CRichEditCtrl](../VS_visualcpp/CRichEditCtrl-Class.md)). In addition to the capabilities of an edit control, rich edit controls support fonts, colors, paragraph formatting, and embedded OLE objects.  
  
 [CListView](../VS_visualcpp/CListView-Class.md)  
 A view that contains a Windows list control (see [CListCtrl](../VS_visualcpp/CListCtrl-Class.md)). A list control displays a collection of items, each consisting of an icon and a label, in a manner similar to the right pane of File Explorer.  
  
 [CTreeView](../VS_visualcpp/CTreeView-Class.md)  
 A view that contains a Windows tree control (see [CTreeCtrl](../VS_visualcpp/CTreeCtrl-Class.md)). A tree control displays a hierarchical list of icons and labels arranged in a manner similar to the left pane of File Explorer.  
  
## Related Classes  
 `CSplitterWnd` allows you to have multiple views within a single frame window. `CPrintDialog` and `CPrintInfo` support the print and print preview ability of views. `CRichEditDoc` and `CRichEditCntrItem` are used with `CRichEditView` to implement OLE container capabilities.  
  
 [CSplitterWnd](../VS_visualcpp/CSplitterWnd-Class.md)  
 A window that the user can split into multiple panes. These panes can be resizable by the user or fixed size.  
  
 [CPrintDialog](../VS_visualcpp/CPrintDialog-Class.md)  
 Provides a standard dialog box for printing a file.  
  
 [CPrintInfo](../VS_visualcpp/CPrintInfo-Structure.md)  
 A structure containing information about a print or print preview job. Used by `CView`'s printing architecture.  
  
 [CRichEditDoc](../VS_visualcpp/CRichEditDoc-Class.md)  
 Maintains the list of OLE client items that are in a `CRichEditView`.  
  
 [CRichEditCntrItem](../VS_visualcpp/CRichEditCntrItem-Class.md)  
 Provides client-side access to an OLE item stored in a `CRichEditView`.  
  
## See Also  
 [Class Overview](../VS_visualcpp/Class-Library-Overview.md)