---
title: "Derived View Classes Available in MFC"
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
ms.assetid: dba42178-7459-4ccc-b025-f3d9b8a4b737
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
# Derived View Classes Available in MFC
The following table shows MFC's view classes and their relationships to one another. The capabilities of your view class depend on the MFC view class from which it derives.  
  
### View Classes  
  
|Class|Description|  
|-----------|-----------------|  
|[CView](../VS_visualcpp/CView-Class.md)|Base class of all views.|  
|[CCtrlView](../VS_visualcpp/CCtrlView-Class.md)|Base class of `CTreeView`, `CListView`, `CEditView`, and `CRichEditView`. These classes let you use document/view architecture with the indicated Windows common controls.|  
|[CEditView](../VS_visualcpp/CEditView-Class.md)|A simple view based on the Windows edit box control. Allows entering and editing text and can be used as the basis for a simple text editor application. See also `CRichEditView`.|  
|[CRichEditView](../VS_visualcpp/CRichEditView-Class.md)|A view containing a [CRichEditCtrl](../VS_visualcpp/CRichEditCtrl-Class.md) object. This class is analogous to `CEditView`, but unlike `CEditView`, `CRichEditView` handles formatted text.|  
|[CListView](../VS_visualcpp/CListView-Class.md)|A view containing a [CListCtrl](../VS_visualcpp/CListCtrl-Class.md) object.|  
|[CTreeView](../VS_visualcpp/CTreeView-Class.md)|A view containing a [CTreeCtrl](../VS_visualcpp/CTreeCtrl-Class.md) object, for views that resemble the Solution Explorer window in Visual C++.|  
|[CScrollView](../VS_visualcpp/CScrollView-Class.md)|Base class of `CFormView`, `CRecordView`, and `CDaoRecordView`. Implements scrolling the view's contents.|  
|[CFormView](../VS_visualcpp/CFormView-Class.md)|A form view, a view that contains controls. A forms-based application provides one or more such form interfaces.|  
|[CHtmlView](../VS_visualcpp/CHtmlView-Class.md)|A Web browser view with which the application's user can browse sites on the World Wide Web, as well as folders in the local file system and on a network. The Web browser view can also work as an Active document container.|  
|[CRecordView](../VS_visualcpp/CRecordView-Class.md)|A form view that displays ODBC database records in controls. If you select ODBC support in your project, the view's base class is `CRecordView`. The view is connected to a `CRowset` object.|  
|[CDaoRecordView](../VS_visualcpp/CDaoRecordView-Class.md)|A form view that displays DAO database records in controls. If you select DAO support in your project, the view's base class is `CDaoRecordView`. The view is connected to a `CDaoRecordset` object.|  
|[COleDBRecordView](../VS_visualcpp/COleDBRecordView-Class.md)|A form view that displays OLE DB records in controls. If you select OLE DB support in your project, the view's base class is `COleDBRecordView`. The view is connected to a `CRowset` object.|  
  
> [!NOTE]
>  As of MFC version 4.0, `CEditView` is derived from `CCtrlView`.  
  
 To use these classes in your application, derive the application's view classes from them. For related information, see [Scrolling and Scaling Views](../VS_visualcpp/Scrolling-and-Scaling-Views.md). For more information on the database classes, see [Overview: Database Programming](../VS_visualcpp/Data-Access-Programming--MFC-ATL-.md).  
  
## See Also  
 [Using Views](../VS_visualcpp/Using-Views.md)