---
title: "View Classes (Architecture)"
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
ms.assetid: 8894579a-1436-441e-b985-83711061e495
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
# View Classes (Architecture)
`CView` and its derived classes are child windows that represent the client area of a frame window. Views show data and accept input for a document.  
  
 A view class is associated with a document class and a frame window class using a document-template object.  
  
 [CView](../VS_visualcpp/CView-Class.md)  
 The base class for application-specific views of a document's data. Views display data and accept user input to edit or select the data. Derive your view class(es) from `CView`.  
  
 [CScrollView](../VS_visualcpp/CScrollView-Class.md)  
 The base class for views with scrolling capabilities. Derive your view class from `CScrollView` for automatic scrolling.  
  
## Form and Record Views  
 Form views are also scrolling views. They are based on a dialog box template.  
  
 Record views are derived from form views. In addition to the dialog box template, they also have a connection to a database.  
  
 [CFormView](../VS_visualcpp/CFormView-Class.md)  
 A scroll view whose layout is defined in a dialog box template. Derive a class from `CFormView` to implement a user interface based on a dialog box template.  
  
 [CDaoRecordView](../VS_visualcpp/CDaoRecordView-Class.md)  
 Provides a form view directly connected to a Data Access Object (DAO) recordset object. Like all form views, a `CDaoRecordView` is based on a dialog box template.  
  
 [CHtmlView](../VS_visualcpp/CHtmlView-Class.md)  
 Supports a control for Web browsing within an application. The control supports dynamic HTML in MFC.  
  
 [COLEDBRecordView](../VS_visualcpp/COleDBRecordView-Class.md)  
 Provides MFC OLE DB support for form views.  
  
 [CRecordView](../VS_visualcpp/CRecordView-Class.md)  
 Provides a form view directly connected to an Open Database Connectivity (ODBC) recordset object. Like all form views, a `CRecordView` is based on a dialog box template.  
  
## Control Views  
 Control views display a control as their view.  
  
 [CCtrlView](../VS_visualcpp/CCtrlView-Class.md)  
 The base class for all views associated with Windows controls. The views based on controls are described below.  
  
 [CEditView](../VS_visualcpp/CEditView-Class.md)  
 A view that contains a Windows standard edit control (see [CEdit](../VS_visualcpp/CEdit-Class.md)). Edit controls support text editing, searching, replacing, and scrolling capabilities.  
  
 [CRichEditView](../VS_visualcpp/CRichEditView-Class.md)  
 A view that contains a Windows rich edit control (see [CRichEditCtrl](../VS_visualcpp/CRichEditCtrl-Class.md)). In addition to the capabilities of an edit control, rich edit controls support fonts, colors, paragraph formatting, and embedded OLE objects.  
  
 [CListView](../VS_visualcpp/CListView-Class.md)  
 A view that contains a Windows list control (see [CListCtrl](../VS_visualcpp/CListCtrl-Class.md)). A list control displays icons and strings in a manner similar to the right pane of File Explorer.  
  
 [CTreeView](../VS_visualcpp/CTreeView-Class.md)  
 A view that contains a Windows tree control (see [CTreeCtrl](../VS_visualcpp/CTreeCtrl-Class.md)). A tree control displays icons and strings arranged in a hierarchy in a manner similar to the left pane of File Explorer.  
  
## See Also  
 [Class Overview](../VS_visualcpp/Class-Library-Overview.md)