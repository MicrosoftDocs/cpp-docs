---
title: "Derived View Classes Available in MFC"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CView class, classes derived from"
  - "classes [C++], derived"
  - "derived classes, view classes"
  - "view classes, derived"
ms.assetid: dba42178-7459-4ccc-b025-f3d9b8a4b737
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
# Derived View Classes Available in MFC
The following table shows MFC's view classes and their relationships to one another. The capabilities of your view class depend on the MFC view class from which it derives.  
  
### View Classes  
  
|Class|Description|  
|-----------|-----------------|  
|[CView](../mfcref/cview-class.md)|Base class of all views.|  
|[CCtrlView](../mfcref/cctrlview-class.md)|Base class of `CTreeView`, `CListView`, `CEditView`, and `CRichEditView`. These classes let you use document/view architecture with the indicated Windows common controls.|  
|[CEditView](../mfcref/ceditview-class.md)|A simple view based on the Windows edit box control. Allows entering and editing text and can be used as the basis for a simple text editor application. See also `CRichEditView`.|  
|[CRichEditView](../mfcref/cricheditview-class.md)|A view containing a [CRichEditCtrl](../mfcref/cricheditctrl-class.md) object. This class is analogous to `CEditView`, but unlike `CEditView`, `CRichEditView` handles formatted text.|  
|[CListView](../mfcref/clistview-class.md)|A view containing a [CListCtrl](../mfcref/clistctrl-class.md) object.|  
|[CTreeView](../mfcref/ctreeview-class.md)|A view containing a [CTreeCtrl](../mfcref/ctreectrl-class.md) object, for views that resemble the Solution Explorer window in Visual C++.|  
|[CScrollView](../mfcref/cscrollview-class.md)|Base class of `CFormView`, `CRecordView`, and `CDaoRecordView`. Implements scrolling the view's contents.|  
|[CFormView](../mfcref/cformview-class.md)|A form view, a view that contains controls. A forms-based application provides one or more such form interfaces.|  
|[CHtmlView](../mfcref/chtmlview-class.md)|A Web browser view with which the application's user can browse sites on the World Wide Web, as well as folders in the local file system and on a network. The Web browser view can also work as an Active document container.|  
|[CRecordView](../mfcref/crecordview-class.md)|A form view that displays ODBC database records in controls. If you select ODBC support in your project, the view's base class is `CRecordView`. The view is connected to a `CRowset` object.|  
|[CDaoRecordView](../mfcref/cdaorecordview-class.md)|A form view that displays DAO database records in controls. If you select DAO support in your project, the view's base class is `CDaoRecordView`. The view is connected to a `CDaoRecordset` object.|  
|[COleDBRecordView](../mfcref/coledbrecordview-class.md)|A form view that displays OLE DB records in controls. If you select OLE DB support in your project, the view's base class is `COleDBRecordView`. The view is connected to a `CRowset` object.|  
  
> [!NOTE]
>  As of MFC version 4.0, `CEditView` is derived from `CCtrlView`.  
  
 To use these classes in your application, derive the application's view classes from them. For related information, see [Scrolling and Scaling Views](../mfc/scrolling-and-scaling-views.md). For more information on the database classes, see [Overview: Database Programming](../data/data-access-programming--mfc-atl-.md).  
  
## See Also  
 [Using Views](../mfc/using-views.md)