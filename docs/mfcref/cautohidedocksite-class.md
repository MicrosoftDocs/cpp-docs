---
title: "CAutoHideDockSite Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "CAutoHideDockSite"
  - "AllowShowOnPaneMenu"
  - "CAutoHideDockSite::AllowShowOnPaneMenu"
  - "CAutoHideDockSite.AllowShowOnPaneMenu"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AllowShowOnPaneMenu method"
  - "CAutoHideDockSite class"
ms.assetid: 2a0f6bec-c369-4ab7-977d-564e7946ebad
caps.latest.revision: 29
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
# CAutoHideDockSite Class
The `CAutoHideDockSite` extends the [CDockSite Class](../mfcref/cdocksite-class.md) to implement auto-hide dock panes.  
  
## Syntax  
  
```  
class CAutoHideDockSite : public CDockSite  
```  
  
## Members  
  
### Public Constructors  
  
|||  
|-|-|  
|Name|Description|  
|`CAutoHideDockSite::CAutoHideDockSite`|Constructs a `CAutoHideDockSite` object.|  
|`CAutoHideDockSite::~CAutoHideDockSite`|Destructor.|  
  
### Public Methods  
  
|||  
|-|-|  
|Name|Description|  
|`CAutoHideDockSite::AllowShowOnPaneMenu`|Indicates whether the `CAutoHideDockSite` is shown on the pane menu.|  
|[CAutoHideDockSite::CanAcceptPane](#cautohidedocksite__canacceptpane)|Determines whether a base pane object is derived from the [CMFCAutoHideBar Class](../mfcref/cmfcautohidebar-class.md).|  
|[CAutoHideDockSite::DockPane](#cautohidedocksite__dockpane)|Docks a pane to this `CAuotHideDockSite` object.|  
|[CAutoHideDockSite::GetAlignRect](#cautohidedocksite__getalignrect)|Retrieves the size of the dock site in screen coordinates.|  
|[CAutoHideDockSite::RepositionPanes](#cautohidedocksite__repositionpanes)|Redraws the pane on the `CAutoHideDockSite` with the global margins and button spacing.|  
|[CAutoHideDockSite::SetOffsetLeft](#cautohidedocksite__setoffsetleft)|Sets the margin on the left side of the docking bar.|  
|[CAutoHideDockSite::SetOffsetRight](#cautohidedocksite__setoffsetright)|Sets the margin on the right side of the docking bar.|  
|[CAutoHideDockSite::UnSetAutoHideMode](#cautohidedocksite__unsetautohidemode)|Calls [CMFCAutoHideBar::UnSetAutoHideMode](../mfcref/cmfcautohidebar-class.md#cmfcautohidebar__unsetautohidemode) for objects on the `CAutoHideDockSite`.|  
  
### Data Members  
  
|||  
|-|-|  
|Name|Description|  
|[CAutoHideDockSite::m_nExtraSpace](#cautohidedocksite__m_nextraspace)|Defines the size of the space between the toolbars and the edge of the docking bar. This space is measured from either the left edge or the top edge, depending on the alignment for the dock space.|  
  
## Remarks  
 When you call [CFrameWndEx::EnableAutoHidePanes](../mfcref/cframewndex-class.md#cframewndex__enableautohidepanes), the framework automatically creates a `CAutoHideDockSite` object. In most cases, you should not have to instantiate or use this class directly.  
  
 The docking bar is the gap between the left side of the dock pane and the left side of the [CMFCAutoHideButton Class](../mfcref/cmfcautohidebutton-class.md).  
  
## Inheritance Hierarchy  
 [CObject](../mfcref/cobject-class.md)  
  
 [CCmdTarget](../mfcref/ccmdtarget-class.md)  
  
 [CWnd](../mfcref/cwnd-class.md)  
  
 [CBasePane](../mfcref/cbasepane-class.md)  
  
 [CDockSite](../mfcref/cdocksite-class.md)  
  
## Example  
 The following example demonstrates how to retrieve a `CAutoHideDockSite` object from a `CMFCAutoHideBar` object, and how to set the left and right margins of the docking bar.  
  
 [!code[NVC_MFC_RibbonApp#29](../mfcref/codesnippet/CPP/cautohidedocksite-class_1.cpp)]  
  
## Requirements  
 **Header:** afxautohidedocksite.h  
  
##  <a name="cautohidedocksite__canacceptpane"></a>  CAutoHideDockSite::CanAcceptPane  
 Determines whether a base pane is a [CMFCAutoHideBar](../mfcref/cmfcautohidebar-class.md) object or derived from `CMFCAutoHideBar`.  
  
```  
virtual BOOL CanAcceptPane(  
    const CBasePane* pBar  
) const;  
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|[in] `pBar`|The base pane that the framework tests.|  
  
### Return Value  
 `TRUE` if `pBar` is derived from `CMFCAutoHideBar`; `FALSE` otherwise.  
  
### Remarks  
 If a base pane object is derived from `CMFCAutoHideBar`, it can contain a [CAutoHideDockSite](../mfcref/cautohidedocksite-class.md).  
  
##  <a name="cautohidedocksite__dockpane"></a>  CAutoHideDockSite::DockPane  
 Docks a pane to this [CAutoHideDockSite](../mfcref/cautohidedocksite-class.md) object.  
  
```  
virtual void DockPane(  
    CPane* pWnd,  
    AFX_DOCK_METHOD dockMethod,  
    LPRECT lpRect = NULL);  
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|[in] `pWnd`|The pane that the framework docks.|  
|[in] `dockMethod`|Docking options for the pane.|  
|[in] `lpRect`|A rectangle that specifies the boundaries for the docked pane.|  
  
### Remarks  
 The default implementation does not use the parameter `dockMethod`, which is provided for future use.  
  
 If `lpRect` is `NULL`, the framework puts the pane in the default location on the dock site. If the dock site is horizontal, the default location is at the far left of the dock site. Otherwise, the default location is at the top of the dock site.  
  
##  <a name="cautohidedocksite__getalignrect"></a>  CAutoHideDockSite::GetAlignRect  
 Retrieves the size of the dock site in screen coordinates.  
  
```  
void GetAlignRect( CRect& rect ) const;  
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|[in] `rect`|A reference to a rectangle. The method stores the size of the dock site in this rectangle.|  
  
### Remarks  
 The rectangle is adjusted for the offset margins so that they are not included.  
  
##  <a name="cautohidedocksite__m_nextraspace"></a>  CAutoHideDockSite::m_nExtraSpace  
 The size of the space between the edges of the [CAutoHideDockSite Class](../mfcref/cautohidedocksite-class.md) and the [CMFCAutoHideBar Class](../mfcref/cmfcautohidebar-class.md) objects.  
  
```  
static int m_nExtraSpace;  
```  
  
### Remarks  
 When a `CMFCAutoHideBar` is docked at a `CAutoHideDockSite`, it should not occupy the whole dock site. This global variable controls the extra space between the left or top border of the `CMFCAutoHideBar` and the corresponding `CAutoHideDockSite` edge. Whether the top or left edge is used depends on the current alignment.  
  
##  <a name="cautohidedocksite__setoffsetleft"></a>  CAutoHideDockSite::SetOffsetLeft  
 Sets the margin on the left side of the docking bar.  
  
```  
void SetOffsetLeft( int nOffset );  
```  
  
### Parameters  
 [in] `nOffset`  
 The new offset.  
  
### Remarks  
 [CMFCAutoHideBar](../mfcref/cmfcautohidebar-class.md) objects are positioned statically on the [CAutoHideDockSite](../mfcref/cautohidedocksite-class.md) object. This means that the user cannot manually change the location of `CMFCAutoHideBar` objects. The `SetOffsetLeft` method controls the spacing between the left side of the left-most `CMFCAutoHideBar` and the left side of the `CAutoHideDockSite`.  
  
##  <a name="cautohidedocksite__setoffsetright"></a>  CAutoHideDockSite::SetOffsetRight  
 Sets the margin on the right side of the docking bar.  
  
```  
void SetOffsetRight( int nOffset );  
```  
  
### Parameters  
 [in] `nOffset`  
 The new offset.  
  
### Remarks  
 [CMFCAutoHideBar](../mfcref/cmfcautohidebar-class.md) objects are positioned statically on the [CAutoHideDockSite](../mfcref/cautohidedocksite-class.md) object. This means that the user cannot manually change the location of the `CMFCAutoHideBar` objects. The `SetOffsetRight` method controls the spacing between the right side of the right-most `CMFCAutoHideBar` and the right side of the `CAutoHideDockSite`.  
  
##  <a name="cautohidedocksite__repositionpanes"></a>  CAutoHideDockSite::RepositionPanes  
 Redraws the panes on the [CAutoHideDockSite](../mfcref/cautohidedocksite-class.md).  
  
```  
virtual void RepositionPanes( CRect& rectNewClientArea );  
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|[in] `rectNewClientArea`|A reserved value.|  
  
### Remarks  
 The default implementation does not use `rectNewClientArea`. It redraws the panes with the global toolbar margins and button spacing.  
  
##  <a name="cautohidedocksite__unsetautohidemode"></a>  CAutoHideDockSite::UnSetAutoHideMode  
 Calls [CMFCAutoHideBar::UnSetAutoHideMode](../mfcref/cmfcautohidebar-class.md#cmfcautohidebar__unsetautohidemode) for objects on the dock site.  
  
```  
void UnSetAutoHideMode( CMFCAutoHideBar* pAutoHideToolbar );  
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|[in] `pAutoHideToolbar`|A pointer to a [CMFCAutoHideBar](../mfcref/cmfcautohidebar-class.md) object pane located on the [CAutoHideDockSite](../mfcref/cautohidedocksite-class.md).|  
  
### Remarks  
 This method searches for the row that contains `pAutoHideToolbar`. It calls `CMFCAutoHideBar.UnSetAutoHideMode` for all the `CMFCAutoHideBar` objects on that row. If `pAutoHideToolbar` is not found or it is `NULL`, this method calls `CMFCAutoHideBar.UnSetAutoHideMode` for all the `CMFCAutoHideBar` objects on the `CAutoHideDockSite`.  
  
## See Also  
 [Hierarchy Chart](../mfc/hierarchy-chart.md)   
 [Classes](../mfcref/mfc-classes.md)   
 [CDockSite Class](../mfcref/cdocksite-class.md)