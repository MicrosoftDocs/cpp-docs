---
title: "CCtrlView Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: ff488596-1e71-451f-8fec-b0831a7b44e0
caps.latest.revision: 17
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
# CCtrlView Class
Adapts the document-view architecture to the common controls supported by Windows 98 and Windows NT versions 3.51 and later.  
  
## Syntax  
  
```  
class CCtrlView : public CView  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CCtrlView::CCtrlView](#cctrlview__cctrlview)|Constructs a `CCtrlView` object.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CCtrlView::OnDraw](#cctrlview__ondraw)|Called by the framework to draw using the specified device context.|  
|[CCtrlView::PreCreateWindow](#cctrlview__precreatewindow)|Called before the creation of the Windows window attached to this `CCtrlView` object.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CCtrlView::m_dwDefaultStyle](#cctrlview__m_dwdefaultstyle)|Contains the default style for the view class.|  
|[CCtrlView::m_strClass](#cctrlview__m_strclass)|Contains the Windows class name for the view class.|  
  
## Remarks  
 The class `CCtrlView` and its derivatives, [CEditView](../VS_visualcpp/CEditView-Class.md), [CListView](../VS_visualcpp/CListView-Class.md), [CTreeView](../VS_visualcpp/CTreeView-Class.md), and [CRichEditView](../VS_visualcpp/CRichEditView-Class.md), adapt the document-view architecture to the new common controls supported by Windows 95/98 and Windows NT versions 3.51 and later. For more information on the document-view architecture, see [Document/View Architecture](../VS_visualcpp/Document-View-Architecture.md).  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CCmdTarget](../VS_visualcpp/CCmdTarget-Class.md)  
  
 [CWnd](../VS_visualcpp/CWnd-Class.md)  
  
 [CView](../VS_visualcpp/CView-Class.md)  
  
 `CCtrlView`  
  
## Requirements  
 **Header:** afxwin.h  
  
##  <a name="cctrlview__cctrlview"></a>  CCtrlView::CCtrlView  
 Constructs a `CCtrlView` object.  
  
```  
CCtrlView(  
    LPCTSTR lpszClass,  
    DWORD dwStyle );  
```  
  
### Parameters  
 `lpszClass`  
 Windows class name of the view class.  
  
 `dwStyle`  
 Style of the view class.  
  
### Remarks  
 The framework calls the constructor when a new frame window is created or a window is split. Override [CView::OnInitialUpdate](../VS_visualcpp/CView-Class.md#cview__oninitialupdate) to initialize the view after the document is attached. Call [CWnd::Create](../VS_visualcpp/CWnd-Class.md#cwnd__create) or [CWnd::CreateEx](../VS_visualcpp/CWnd-Class.md#cwnd__createex) to create the Windows object.  
  
##  <a name="cctrlview__m_strclass"></a>  CCtrlView::m_strClass  
 Contains the Windows class name for the view class.  
  
```  
CString m_strClass;  
```  
  
##  <a name="cctrlview__m_dwdefaultstyle"></a>  CCtrlView::m_dwDefaultStyle  
 Contains the default style for the view class.  
  
```  
DWORD m_dwDefaultStyle;  
```  
  
### Remarks  
 This style is applied when a window is created.  
  
##  <a name="cctrlview__ondraw"></a>  CCtrlView::OnDraw  
 Called by the framework to draw the contents of the `CCtrlView` object using the specified device context.  
  
```  
virtual void OnDraw( CDC* pDC );  
```  
  
### Parameters  
 `pDC`  
 A pointer to the device context in which the drawing occurs.  
  
### Remarks  
 `OnDraw` is typically called for screen display, passing a screen device context specified by `pDC`.  
  
##  <a name="cctrlview__precreatewindow"></a>  CCtrlView::PreCreateWindow  
 Called before the creation of the Windows window attached to this `CWnd` object.  
  
```  
virtual BOOL PreCreateWindow( CREATESTRUCT& cs );  
```  
  
### Parameters  
 *cs*  
 A                                 [CREATESTRUCT](http://msdn.microsoft.com/library/windows/desktop/ms632603) structure.  
  
### Return Value  
 Nonzero if the window creation should continue; 0 to indicate creation failure.  
  
### Remarks  
 Never call this function directly.  
  
 The default implementation of this function checks for a **NULL** window class name and substitutes an appropriate default. Override this member function to modify the `CREATESTRUCT` structure before the window is created.  
  
 Each class derived from `CCtrlView` adds its own functionality to its override of `PreCreateWindow`. By design, these derivations of `PreCreateWindow` are not documented. To determine the styles appropriate to each class and the interdependencies between the styles, you can examine the MFC source code for your application's base class. If you choose to override `PreCreateWindow`, you can determine whether the styles used in your application's base class provide the functionality you need by using information gathered from the MFC source code.  
  
 For more information on changing window styles, see the [Changing the Styles of a Window Created by MFC](../VS_visualcpp/Changing-the-Styles-of-a-Window-Created-by-MFC.md).  
  
## See Also  
 [CView Class](../VS_visualcpp/CView-Class.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [CTreeView Class](../VS_visualcpp/CTreeView-Class.md)   
 [CListView Class](../VS_visualcpp/CListView-Class.md)   
 [CRichEditView Class](../VS_visualcpp/CRichEditView-Class.md)