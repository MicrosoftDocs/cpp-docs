---
title: "CDockSite Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDockSite"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDockSite class"
ms.assetid: 0fcfff79-5f50-4281-b2de-a55653bbea40
caps.latest.revision: 28
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
# CDockSite Class
[!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
 Provides functionality for arranging panes that are derived from the [CPane Class](../../mfc/reference/cpane-class.md) into sets of rows.  
  
## Syntax  
  
```  
class CDockSite: public CBasePane  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CDockSite::AddRow](#cdocksite__addrow)||  
|[CDockSite::AdjustDockingLayout](#cdocksite__adjustdockinglayout)|(Overrides [CBasePane::AdjustDockingLayout](../../mfc/reference/cbasepane-class.md#cbasepane__adjustdockinglayout).)|  
|[CDockSite::AdjustLayout](#cdocksite__adjustlayout)|(Overrides [CBasePane::AdjustLayout](../../mfc/reference/cbasepane-class.md#cbasepane__adjustlayout).)|  
|[CDockSite::AlignDockSite](#cdocksite__aligndocksite)||  
|[CDockSite::CalcFixedLayout](#cdocksite__calcfixedlayout)|(Overrides [CBasePane::CalcFixedLayout](../../mfc/reference/cbasepane-class.md#cbasepane__calcfixedlayout).)|  
|[CDockSite::CanAcceptPane](#cdocksite__canacceptpane)|(Overrides [CBasePane::CanAcceptPane](../../mfc/reference/cbasepane-class.md#cbasepane__canacceptpane).)|  
|[CDockSite::CreateEx](#cdocksite__createex)|(Overrides [CBasePane::CreateEx](../../mfc/reference/cbasepane-class.md#cbasepane__createex).)|  
|[CDockSite::CreateRow](#cdocksite__createrow)||  
|[CDockSite::DockPane](#cdocksite__dockpane)|(Overrides [CBasePane::DockPane](../../mfc/reference/cbasepane-class.md#cbasepane__dockpane).)|  
|[CDockSite::DoesAllowDynInsertBefore](#cdocksite__doesallowdyninsertbefore)|(Overrides [CBasePane::DoesAllowDynInsertBefore](../../mfc/reference/cbasepane-class.md#cbasepane__doesallowdyninsertbefore).)|  
|[CDockSite::FindRowIndex](#cdocksite__findrowindex)||  
|[CDockSite::FixupVirtualRects](#cdocksite__fixupvirtualrects)||  
|[CDockSite::GetDockSiteID](#cdocksite__getdocksiteid)||  
|[CDockSite::GetDockSiteRowsList](#cdocksite__getdocksiterowslist)||  
|[CDockSite::IsAccessibilityCompatible](#cdocksite__isaccessibilitycompatible)|(Overrides `CBasePane::IsAccessibilityCompatible`.)|  
|[CDockSite::IsDragMode](#cdocksite__isdragmode)||  
|[CDockSite::IsLastRow](#cdocksite__islastrow)||  
|[CDockSite::IsRectWithinDockSite](#cdocksite__isrectwithindocksite)||  
|[CDockSite::IsResizable](#cdocksite__isresizable)|(Overrides [CBasePane::IsResizable](../../mfc/reference/cbasepane-class.md#cbasepane__isresizable).)|  
|[CDockSite::MovePane](#cdocksite__movepane)||  
|[CDockSite::OnInsertRow](#cdocksite__oninsertrow)||  
|[CDockSite::OnRemoveRow](#cdocksite__onremoverow)||  
|[CDockSite::OnResizeRow](#cdocksite__onresizerow)||  
|[CDockSite::OnSetWindowPos](#cdocksite__onsetwindowpos)||  
|[CDockSite::OnShowRow](#cdocksite__onshowrow)||  
|[CDockSite::OnSizeParent](#cdocksite__onsizeparent)||  
|[CDockSite::PaneFromPoint](#cdocksite__panefrompoint)|Returns a pane that is docked in the dock site at the point specified by the given parameter.|  
|[CDockSite::DockPaneLeftOf](#cdocksite__dockpaneleftof)|Docks a pane to the left of another pane.|  
|[CDockSite::FindPaneByID](#cdocksite__findpanebyid)|Returns the pane that is identified by the given ID.|  
|[CDockSite::GetPaneList](#cdocksite__getpanelist)|Returns a list of panes that are docked at the dock site.|  
|[CDockSite::RectSideFromPoint](#cdocksite__rectsidefrompoint)||  
|[CDockSite::RemovePane](#cdocksite__removepane)||  
|[CDockSite::RemoveRow](#cdocksite__removerow)||  
|[CDockSite::ReplacePane](#cdocksite__replacepane)||  
|[CDockSite::RepositionPanes](#cdocksite__repositionpanes)||  
|[CDockSite::ResizeDockSite](#cdocksite__resizedocksite)||  
|[CDockSite::ResizeRow](#cdocksite__resizerow)||  
|[CDockSite::ShowPane](#cdocksite__showpane)|Shows the pane.|  
|[CDockSite::ShowRow](#cdocksite__showrow)||  
|[CDockSite::SwapRows](#cdocksite__swaprows)||  
  
## Remarks  
 The framework creates `CDockSite` objects automatically when you call [CFrameWndEx::EnableDocking](../../mfc/reference/cframewndex-class.md#cframewndex__enabledocking). Dock site windows are positioned at the edge of the client area on the main frame window.  
  
 You usually do not have to call the services provided by the dock site because [CFrameWndEx Class](../../mfc/reference/cframewndex-class.md) handles these services.  
  
## Example  
 The following example demonstrates how to create an object of the `CDockSite` class.  
  
 [!code-cpp[NVC_MFC_RibbonApp#27](../../mfc/reference/codesnippet/cpp/cdocksite-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md) [CCmdTarget](../../mfc/reference/ccmdtarget-class.md) [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md) [CDockSite](../../mfc/reference/cdocksite-class.md)  
  
## Requirements  
 **Header:** afxDockSite.h  
  
##  <a name="cdocksite__addrow"></a>  CDockSite::AddRow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CDockingPanesRow* AddRow(
    POSITION pos,  
    int nHeight);
```  
  
### Parameters  
 [in] `pos`  
 [in] `nHeight`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__adjustdockinglayout"></a>  CDockSite::AdjustDockingLayout  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void AdjustDockingLayout();
```  
  
### Remarks  
  
##  <a name="cdocksite__adjustlayout"></a>  CDockSite::AdjustLayout  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void AdjustLayout();
```  
  
### Remarks  
  
##  <a name="cdocksite__aligndocksite"></a>  CDockSite::AlignDockSite  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void AlignDockSite(
    const CRect& rectToAlignBy,  
    CRect& rectResult,  
    BOOL bMoveImmediately);
```  
  
### Parameters  
 [in] `rectToAlignBy`  
 [in] `rectResult`  
 [in] `bMoveImmediately`  
  
### Remarks  
  
##  <a name="cdocksite__calcfixedlayout"></a>  CDockSite::CalcFixedLayout  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CSize CalcFixedLayout(
    BOOL bStretch,  
    BOOL bHorz);
```  
  
### Parameters  
 [in] `bStretch`  
 [in] `bHorz`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__canacceptpane"></a>  CDockSite::CanAcceptPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL CanAcceptPane(const CBasePane* pBar) const;

 
```  
  
### Parameters  
 [in] `pBar`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__createex"></a>  CDockSite::CreateEx  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL CreateEx(
    DWORD dwStyleEx,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    DWORD dwControlBarStyle,  
    CCreateContext* pContext = NULL);
```  
  
### Parameters  
 [in] `dwStyleEx`  
 [in] `dwStyle`  
 [in] `rect`  
 [in] `pParentWnd`  
 [in] `dwControlBarStyle`  
 [in] `pContext`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__createrow"></a>  CDockSite::CreateRow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CDockingPanesRow* CreateRow(
    CDockSite* pParentDockBar,  
    int nOffset,  
    int nRowHeight);
```  
  
### Parameters  
 [in] `pParentDockBar`  
 [in] `nOffset`  
 [in] `nRowHeight`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__dockpane"></a>  CDockSite::DockPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void DockPane(
    CPane* pWnd,  
    AFX_DOCK_METHOD dockMethod,  
    LPCRECT lpRect = NULL);
```  
  
### Parameters  
 [in] `pWnd`  
 [in] `dockMethod`  
 [in] `lpRect`  
  
### Remarks  
  
##  <a name="cdocksite__dockpaneleftof"></a>  CDockSite::DockPaneLeftOf  
 Docks a pane to the left of another pane.  
  
```  
virtual BOOL DockPaneLeftOf(
    CPane* pBarToDock,  
    CPane* pTargetBar);
```  
  
### Parameters  
 [in] [out] `pBarToDock`  
 A pointer to the pane to be docked to the left of `pTargetBar`.  
  
 [in] [out] `pTargetBar`  
 A pointer to the target pane.  
  
### Return Value  
 `TRUE` if the pane is docked successfully; otherwise, `FALSE`.  
  
### Remarks  
  
##  <a name="cdocksite__doesallowdyninsertbefore"></a>  CDockSite::DoesAllowDynInsertBefore  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL DoesAllowDynInsertBefore() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__findpanebyid"></a>  CDockSite::FindPaneByID  
 Returns the pane with the given ID.  
  
```  
CPane* FindPaneByID(UINT nID);
```  
  
### Parameters  
 [in] `nID`  
 The command ID of the pane to be found.  
  
### Return Value  
 A pointer to the pane with the specified command ID, or `NULL` if the pane is not found.  
  
### Remarks  
  
##  <a name="cdocksite__findrowindex"></a>  CDockSite::FindRowIndex  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int FindRowIndex(CDockingPanesRow* pRow);
```  
  
### Parameters  
 [in] `pRow`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__fixupvirtualrects"></a>  CDockSite::FixupVirtualRects  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void FixupVirtualRects();
```  
  
### Remarks  
  
##  <a name="cdocksite__getdocksiteid"></a>  CDockSite::GetDockSiteID  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual UINT GetDockSiteID() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__getdocksiterowslist"></a>  CDockSite::GetDockSiteRowsList  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
const CObList& GetDockSiteRowsList() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__getpanelist"></a>  CDockSite::GetPaneList  
 Returns a list of panes that are docked in the dock site.  
  
```  
const CObList& GetPaneList() const;

 
```  
  
### Return Value  
 A read-only reference to the list of panes currently docked in the docking bar.  
  
##  <a name="cdocksite__isaccessibilitycompatible"></a>  CDockSite::IsAccessibilityCompatible  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsAccessibilityCompatible();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__isdragmode"></a>  CDockSite::IsDragMode  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsDragMode() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__islastrow"></a>  CDockSite::IsLastRow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
bool IsLastRow(CDockingPanesRow* pRow) const;

 
```  
  
### Parameters  
 [in] `pRow`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__isrectwithindocksite"></a>  CDockSite::IsRectWithinDockSite  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsRectWithinDockSite(
    CRect rect,  
    CPoint& ptDelta);
```  
  
### Parameters  
 [in] `rect`  
 [in] `ptDelta`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__isresizable"></a>  CDockSite::IsResizable  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsResizable() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__movepane"></a>  CDockSite::MovePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL MovePane(
    CPane* pWnd,  
    UINT nFlags,  
    CPoint ptOffset);
```  
  
### Parameters  
 [in] `pWnd`  
 [in] `nFlags`  
 [in] `ptOffset`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__oninsertrow"></a>  CDockSite::OnInsertRow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnInsertRow(POSITION pos);
```  
  
### Parameters  
 [in] `pos`  
  
### Remarks  
  
##  <a name="cdocksite__onremoverow"></a>  CDockSite::OnRemoveRow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnRemoveRow(
    POSITION pos,  
    BOOL bByShow = FALSE);
```  
  
### Parameters  
 [in] `pos`  
 [in] `bByShow`  
  
### Remarks  
  
##  <a name="cdocksite__onresizerow"></a>  CDockSite::OnResizeRow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int OnResizeRow(
    CDockingPanesRow* pRowToResize,  
    int nOffset);
```  
  
### Parameters  
 [in] `pRowToResize`  
 [in] `nOffset`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__onsizeparent"></a>  CDockSite::OnSizeParent  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnSizeParent(
    CRect& rectAvailable,  
    UINT nSide,  
    BOOL bExpand,  
    int nOffset);
```  
  
### Parameters  
 [in] `rectAvailable`  
 [in] `nSide`  
 [in] `bExpand`  
 [in] `nOffset`  
  
### Remarks  
  
##  <a name="cdocksite__onsetwindowpos"></a>  CDockSite::OnSetWindowPos  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnSetWindowPos(
    const CWnd* pWndInsertAfter,  
    const CRect& rectWnd,  
    UINT nFlags);
```  
  
### Parameters  
 [in] `pWndInsertAfter`  
 [in] `rectWnd`  
 [in] `nFlags`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__onshowrow"></a>  CDockSite::OnShowRow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnShowRow(
    POSITION pos,  
    BOOL bShow);
```  
  
### Parameters  
 [in] `pos`  
 [in] `bShow`  
  
### Remarks  
  
##  <a name="cdocksite__panefrompoint"></a>  CDockSite::PaneFromPoint  
 Returns a pane that is docked in the dock site at the point specified by the given parameter.  
  
```  
virtual CPane* PaneFromPoint(CPoint pt);
```  
  
### Parameters  
 [in] `pt`  
 A point, in screen coordinates, for the pane to retrieve.  
  
### Return Value  
 A pointer to the pane located at the specified point or `NULL` if no pane was present at the specified point.  
  
### Remarks  
  
##  <a name="cdocksite__rectsidefrompoint"></a>  CDockSite::RectSideFromPoint  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
static int __stdcall RectSideFromPoint(
    const CRect& rect,  
    const CPoint& point);
```  
  
### Parameters  
 [in] `rect`  
 [in] `point`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__removepane"></a>  CDockSite::RemovePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void RemovePane(
    CPane* pWnd,  
    AFX_DOCK_METHOD dockMethod);
```  
  
### Parameters  
 [in] `pWnd`  
 [in] `dockMethod`  
  
### Remarks  
  
##  <a name="cdocksite__removerow"></a>  CDockSite::RemoveRow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void RemoveRow(CDockingPanesRow* pRow);
```  
  
### Parameters  
 [in] `pRow`  
  
### Remarks  
  
##  <a name="cdocksite__replacepane"></a>  CDockSite::ReplacePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL ReplacePane(
    CPane* pOldBar,  
    CPane* pNewBar);
```  
  
### Parameters  
 [in] `pOldBar`  
 [in] `pNewBar`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__repositionpanes"></a>  CDockSite::RepositionPanes  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void RepositionPanes(CRect& rectNewClientArea);
```  
  
### Parameters  
 [in] `rectNewClientArea`  
  
### Remarks  
  
##  <a name="cdocksite__resizedocksite"></a>  CDockSite::ResizeDockSite  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void ResizeDockSite(
    int nNewWidth,  
    int nNewHeight);
```  
  
### Parameters  
 [in] `nNewWidth`  
 [in] `nNewHeight`  
  
### Remarks  
  
##  <a name="cdocksite__resizerow"></a>  CDockSite::ResizeRow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int ResizeRow(
    CDockingPanesRow* pRow,  
    int nNewSize,  
    BOOL bAdjustLayout = TRUE);
```  
  
### Parameters  
 [in] `pRow`  
 [in] `nNewSize`  
 [in] `bAdjustLayout`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__showpane"></a>  CDockSite::ShowPane  
 Shows the pane.  
  
```  
virtual BOOL ShowPane(
    CBasePane* pBar,  
    BOOL bShow,  
    BOOL bDelay,  
    BOOL bActivate);
```  
  
### Parameters  
 [in] [out] `pBar`  
 A pointer to the pane to be shown or hidden.  
  
 [in] `bShow`  
 `TRUE` to specify that the pane is to be shown; `FALSE` to specify that the pane is to be hidden.  
  
 [in] `bDelay`  
 `TRUE` to specify that the layout of the pane should be delayed until after the pane is shown; otherwise, `FALSE`.  
  
 [in] `bActivate`  
 This parameter is not used.  
  
### Return Value  
 `TRUE` if the pane was shown or hidden successfully. `FALSE` if the specified pane does not belong to this dock site.  
  
### Remarks  
 Call this method to show or hide docked panes. Normally, you do not have to call `CDockSite::ShowPane` directly, because it is called by the parent frame window or by the base pane.  
  
##  <a name="cdocksite__showrow"></a>  CDockSite::ShowRow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void ShowRow(
    CDockingPanesRow* pRow,  
    BOOL bShow,  
    BOOL bAdjustLayout);
```  
  
### Parameters  
 [in] `pRow`  
 [in] `bShow`  
 [in] `bAdjustLayout`  
  
### Remarks  
  
##  <a name="cdocksite__swaprows"></a>  CDockSite::SwapRows  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SwapRows(
    CDockingPanesRow* pFirstRow,  
    CDockingPanesRow* pSecondRow);
```  
  
### Parameters  
 [in] `pFirstRow`  
 [in] `pSecondRow`  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CBasePane Class](../../mfc/reference/cbasepane-class.md)
