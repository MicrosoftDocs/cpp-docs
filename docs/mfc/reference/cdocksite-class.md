---
title: "CDockSite Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CDockSite", "AFXDOCKSITE/CDockSite", "AFXDOCKSITE/CDockSite::AddRow", "AFXDOCKSITE/CDockSite::AdjustDockingLayout", "AFXDOCKSITE/CDockSite::AdjustLayout", "AFXDOCKSITE/CDockSite::AlignDockSite", "AFXDOCKSITE/CDockSite::CalcFixedLayout", "AFXDOCKSITE/CDockSite::CanAcceptPane", "AFXDOCKSITE/CDockSite::CreateEx", "AFXDOCKSITE/CDockSite::CreateRow", "AFXDOCKSITE/CDockSite::DockPane", "AFXDOCKSITE/CDockSite::DoesAllowDynInsertBefore", "AFXDOCKSITE/CDockSite::FindRowIndex", "AFXDOCKSITE/CDockSite::FixupVirtualRects", "AFXDOCKSITE/CDockSite::GetDockSiteID", "AFXDOCKSITE/CDockSite::GetDockSiteRowsList", "AFXDOCKSITE/CDockSite::IsAccessibilityCompatible", "AFXDOCKSITE/CDockSite::IsDragMode", "AFXDOCKSITE/CDockSite::IsLastRow", "AFXDOCKSITE/CDockSite::IsRectWithinDockSite", "AFXDOCKSITE/CDockSite::IsResizable", "AFXDOCKSITE/CDockSite::MovePane", "AFXDOCKSITE/CDockSite::OnInsertRow", "AFXDOCKSITE/CDockSite::OnRemoveRow", "AFXDOCKSITE/CDockSite::OnResizeRow", "AFXDOCKSITE/CDockSite::OnSetWindowPos", "AFXDOCKSITE/CDockSite::OnShowRow", "AFXDOCKSITE/CDockSite::OnSizeParent", "AFXDOCKSITE/CDockSite::PaneFromPoint", "AFXDOCKSITE/CDockSite::DockPaneLeftOf", "AFXDOCKSITE/CDockSite::FindPaneByID", "AFXDOCKSITE/CDockSite::GetPaneList", "AFXDOCKSITE/CDockSite::RectSideFromPoint", "AFXDOCKSITE/CDockSite::RemovePane", "AFXDOCKSITE/CDockSite::RemoveRow", "AFXDOCKSITE/CDockSite::ReplacePane", "AFXDOCKSITE/CDockSite::RepositionPanes", "AFXDOCKSITE/CDockSite::ResizeDockSite", "AFXDOCKSITE/CDockSite::ResizeRow", "AFXDOCKSITE/CDockSite::ShowPane", "AFXDOCKSITE/CDockSite::ShowRow", "AFXDOCKSITE/CDockSite::SwapRows"]
dev_langs: ["C++"]
helpviewer_keywords: ["CDockSite [MFC], AddRow", "CDockSite [MFC], AdjustDockingLayout", "CDockSite [MFC], AdjustLayout", "CDockSite [MFC], AlignDockSite", "CDockSite [MFC], CalcFixedLayout", "CDockSite [MFC], CanAcceptPane", "CDockSite [MFC], CreateEx", "CDockSite [MFC], CreateRow", "CDockSite [MFC], DockPane", "CDockSite [MFC], DoesAllowDynInsertBefore", "CDockSite [MFC], FindRowIndex", "CDockSite [MFC], FixupVirtualRects", "CDockSite [MFC], GetDockSiteID", "CDockSite [MFC], GetDockSiteRowsList", "CDockSite [MFC], IsAccessibilityCompatible", "CDockSite [MFC], IsDragMode", "CDockSite [MFC], IsLastRow", "CDockSite [MFC], IsRectWithinDockSite", "CDockSite [MFC], IsResizable", "CDockSite [MFC], MovePane", "CDockSite [MFC], OnInsertRow", "CDockSite [MFC], OnRemoveRow", "CDockSite [MFC], OnResizeRow", "CDockSite [MFC], OnSetWindowPos", "CDockSite [MFC], OnShowRow", "CDockSite [MFC], OnSizeParent", "CDockSite [MFC], PaneFromPoint", "CDockSite [MFC], DockPaneLeftOf", "CDockSite [MFC], FindPaneByID", "CDockSite [MFC], GetPaneList", "CDockSite [MFC], RectSideFromPoint", "CDockSite [MFC], RemovePane", "CDockSite [MFC], RemoveRow", "CDockSite [MFC], ReplacePane", "CDockSite [MFC], RepositionPanes", "CDockSite [MFC], ResizeDockSite", "CDockSite [MFC], ResizeRow", "CDockSite [MFC], ShowPane", "CDockSite [MFC], ShowRow", "CDockSite [MFC], SwapRows"]
ms.assetid: 0fcfff79-5f50-4281-b2de-a55653bbea40
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
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
|[CDockSite::AddRow](#addrow)||  
|[CDockSite::AdjustDockingLayout](#adjustdockinglayout)|(Overrides [CBasePane::AdjustDockingLayout](../../mfc/reference/cbasepane-class.md#adjustdockinglayout).)|  
|[CDockSite::AdjustLayout](#adjustlayout)|(Overrides [CBasePane::AdjustLayout](../../mfc/reference/cbasepane-class.md#adjustlayout).)|  
|[CDockSite::AlignDockSite](#aligndocksite)||  
|[CDockSite::CalcFixedLayout](#calcfixedlayout)|(Overrides [CBasePane::CalcFixedLayout](../../mfc/reference/cbasepane-class.md#calcfixedlayout).)|  
|[CDockSite::CanAcceptPane](#canacceptpane)|(Overrides [CBasePane::CanAcceptPane](../../mfc/reference/cbasepane-class.md#canacceptpane).)|  
|[CDockSite::CreateEx](#createex)|(Overrides [CBasePane::CreateEx](../../mfc/reference/cbasepane-class.md#createex).)|  
|[CDockSite::CreateRow](#createrow)||  
|[CDockSite::DockPane](#dockpane)|(Overrides [CBasePane::DockPane](../../mfc/reference/cbasepane-class.md#dockpane).)|  
|[CDockSite::DoesAllowDynInsertBefore](#doesallowdyninsertbefore)|(Overrides [CBasePane::DoesAllowDynInsertBefore](../../mfc/reference/cbasepane-class.md#doesallowdyninsertbefore).)|  
|[CDockSite::FindRowIndex](#findrowindex)||  
|[CDockSite::FixupVirtualRects](#fixupvirtualrects)||  
|[CDockSite::GetDockSiteID](#getdocksiteid)||  
|[CDockSite::GetDockSiteRowsList](#getdocksiterowslist)||  
|[CDockSite::IsAccessibilityCompatible](#isaccessibilitycompatible)|(Overrides `CBasePane::IsAccessibilityCompatible`.)|  
|[CDockSite::IsDragMode](#isdragmode)||  
|[CDockSite::IsLastRow](#islastrow)||  
|[CDockSite::IsRectWithinDockSite](#isrectwithindocksite)||  
|[CDockSite::IsResizable](#isresizable)|(Overrides [CBasePane::IsResizable](../../mfc/reference/cbasepane-class.md#isresizable).)|  
|[CDockSite::MovePane](#movepane)||  
|[CDockSite::OnInsertRow](#oninsertrow)||  
|[CDockSite::OnRemoveRow](#onremoverow)||  
|[CDockSite::OnResizeRow](#onresizerow)||  
|[CDockSite::OnSetWindowPos](#onsetwindowpos)||  
|[CDockSite::OnShowRow](#onshowrow)||  
|[CDockSite::OnSizeParent](#onsizeparent)||  
|[CDockSite::PaneFromPoint](#panefrompoint)|Returns a pane that is docked in the dock site at the point specified by the given parameter.|  
|[CDockSite::DockPaneLeftOf](#dockpaneleftof)|Docks a pane to the left of another pane.|  
|[CDockSite::FindPaneByID](#findpanebyid)|Returns the pane that is identified by the given ID.|  
|[CDockSite::GetPaneList](#getpanelist)|Returns a list of panes that are docked at the dock site.|  
|[CDockSite::RectSideFromPoint](#rectsidefrompoint)||  
|[CDockSite::RemovePane](#removepane)||  
|[CDockSite::RemoveRow](#removerow)||  
|[CDockSite::ReplacePane](#replacepane)||  
|[CDockSite::RepositionPanes](#repositionpanes)||  
|[CDockSite::ResizeDockSite](#resizedocksite)||  
|[CDockSite::ResizeRow](#resizerow)||  
|[CDockSite::ShowPane](#showpane)|Shows the pane.|  
|[CDockSite::ShowRow](#showrow)||  
|[CDockSite::SwapRows](#swaprows)||  
  
## Remarks  
 The framework creates `CDockSite` objects automatically when you call [CFrameWndEx::EnableDocking](../../mfc/reference/cframewndex-class.md#enabledocking). Dock site windows are positioned at the edge of the client area on the main frame window.  
  
 You usually do not have to call the services provided by the dock site because [CFrameWndEx Class](../../mfc/reference/cframewndex-class.md) handles these services.  
  
## Example  
 The following example demonstrates how to create an object of the `CDockSite` class.  
  
 [!code-cpp[NVC_MFC_RibbonApp#27](../../mfc/reference/codesnippet/cpp/cdocksite-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md) [CCmdTarget](../../mfc/reference/ccmdtarget-class.md) [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md) [CDockSite](../../mfc/reference/cdocksite-class.md)  
  
## Requirements  
 **Header:** afxDockSite.h  
  
##  <a name="addrow"></a>  CDockSite::AddRow  

  
```  
CDockingPanesRow* AddRow(
    POSITION pos,  
    int nHeight);
```  
  
### Parameters  
 [in] *pos*  
 [in] *nHeight*  
  
### Return Value  
  
### Remarks  
  
##  <a name="adjustdockinglayout"></a>  CDockSite::AdjustDockingLayout  

  
```  
virtual void AdjustDockingLayout();
```  
  
### Remarks  
  
##  <a name="adjustlayout"></a>  CDockSite::AdjustLayout  

  
```  
virtual void AdjustLayout();
```  
  
### Remarks  
  
##  <a name="aligndocksite"></a>  CDockSite::AlignDockSite  

  
```  
void AlignDockSite(
    const CRect& rectToAlignBy,  
    CRect& rectResult,  
    BOOL bMoveImmediately);
```  
  
### Parameters  
 [in] *rectToAlignBy*  
 [in] *rectResult*  
 [in] *bMoveImmediately*  
  
### Remarks  
  
##  <a name="calcfixedlayout"></a>  CDockSite::CalcFixedLayout  

  
```  
virtual CSize CalcFixedLayout(
    BOOL bStretch,  
    BOOL bHorz);
```  
  
### Parameters  
 [in] *bStretch*  
 [in] *bHorz*  
  
### Return Value  
  
### Remarks  
  
##  <a name="canacceptpane"></a>  CDockSite::CanAcceptPane  

  
```  
virtual BOOL CanAcceptPane(const CBasePane* pBar) const;  
```  
  
### Parameters  
 [in] *pBar*  
  
### Return Value  
  
### Remarks  
  
##  <a name="createex"></a>  CDockSite::CreateEx  

  
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
 [in] *dwStyleEx*  
 [in] *dwStyle*  
 [in] *rect*  
 [in] *pParentWnd*  
 [in] *dwControlBarStyle*  
 [in] *pContext*  
  
### Return Value  
  
### Remarks  
  
##  <a name="createrow"></a>  CDockSite::CreateRow  

  
```  
virtual CDockingPanesRow* CreateRow(
    CDockSite* pParentDockBar,  
    int nOffset,  
    int nRowHeight);
```  
  
### Parameters  
 [in] *pParentDockBar*  
 [in] *nOffset*  
 [in] *nRowHeight*  
  
### Return Value  
  
### Remarks  
  
##  <a name="dockpane"></a>  CDockSite::DockPane  

  
```  
virtual void DockPane(
    CPane* pWnd,  
    AFX_DOCK_METHOD dockMethod,  
    LPCRECT lpRect = NULL);
```  
  
### Parameters  
 [in] *pWnd*  
 [in] *dockMethod*  
 [in] *lpRect*  
  
### Remarks  
  
##  <a name="dockpaneleftof"></a>  CDockSite::DockPaneLeftOf  
 Docks a pane to the left of another pane.  
  
```  
virtual BOOL DockPaneLeftOf(
    CPane* pBarToDock,  
    CPane* pTargetBar);
```  
  
### Parameters  
 [in] [out] *pBarToDock*  
 A pointer to the pane to be docked to the left of *pTargetBar*.  
  
 [in] [out] *pTargetBar*  
 A pointer to the target pane.  
  
### Return Value  
 TRUE if the pane is docked successfully; otherwise, FALSE.  
  
### Remarks  
  
##  <a name="doesallowdyninsertbefore"></a>  CDockSite::DoesAllowDynInsertBefore  

  
```  
virtual BOOL DoesAllowDynInsertBefore() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="findpanebyid"></a>  CDockSite::FindPaneByID  
 Returns the pane with the given ID.  
  
```  
CPane* FindPaneByID(UINT nID);
```  
  
### Parameters  
 [in] *nID*  
 The command ID of the pane to be found.  
  
### Return Value  
 A pointer to the pane with the specified command ID, or NULL if the pane is not found.  
  
### Remarks  
  
##  <a name="findrowindex"></a>  CDockSite::FindRowIndex  

  
```  
int FindRowIndex(CDockingPanesRow* pRow);
```  
  
### Parameters  
 [in] *pRow*  
  
### Return Value  
  
### Remarks  
  
##  <a name="fixupvirtualrects"></a>  CDockSite::FixupVirtualRects  

  
```  
virtual void FixupVirtualRects();
```  
  
### Remarks  
  
##  <a name="getdocksiteid"></a>  CDockSite::GetDockSiteID  

  
```  
virtual UINT GetDockSiteID() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getdocksiterowslist"></a>  CDockSite::GetDockSiteRowsList  

  
```  
const CObList& GetDockSiteRowsList() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getpanelist"></a>  CDockSite::GetPaneList  
 Returns a list of panes that are docked in the dock site.  
  
```  
const CObList& GetPaneList() const;  
```  
  
### Return Value  
 A read-only reference to the list of panes currently docked in the docking bar.  
  
##  <a name="isaccessibilitycompatible"></a>  CDockSite::IsAccessibilityCompatible  

  
```  
virtual BOOL IsAccessibilityCompatible();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="isdragmode"></a>  CDockSite::IsDragMode  

  
```  
virtual BOOL IsDragMode() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="islastrow"></a>  CDockSite::IsLastRow  

  
```  
bool IsLastRow(CDockingPanesRow* pRow) const;  
```  
  
### Parameters  
 [in] *pRow*  
  
### Return Value  
  
### Remarks  
  
##  <a name="isrectwithindocksite"></a>  CDockSite::IsRectWithinDockSite  

  
```  
BOOL IsRectWithinDockSite(
    CRect rect,  
    CPoint& ptDelta);
```  
  
### Parameters  
 [in] *rect*  
 [in] *ptDelta*  
  
### Return Value  
  
### Remarks  
  
##  <a name="isresizable"></a>  CDockSite::IsResizable  

  
```  
virtual BOOL IsResizable() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="movepane"></a>  CDockSite::MovePane  

  
```  
virtual BOOL MovePane(
    CPane* pWnd,  
    UINT nFlags,  
    CPoint ptOffset);
```  
  
### Parameters  
 [in] *pWnd*  
 [in] *nFlags*  
 [in] *ptOffset*  
  
### Return Value  
  
### Remarks  
  
##  <a name="oninsertrow"></a>  CDockSite::OnInsertRow  

  
```  
virtual void OnInsertRow(POSITION pos);
```  
  
### Parameters  
 [in] *pos*  
  
### Remarks  
  
##  <a name="onremoverow"></a>  CDockSite::OnRemoveRow  

  
```  
virtual void OnRemoveRow(
    POSITION pos,  
    BOOL bByShow = FALSE);
```  
  
### Parameters  
 [in] *pos*  
 [in] *bByShow*  
  
### Remarks  
  
##  <a name="onresizerow"></a>  CDockSite::OnResizeRow  

  
```  
virtual int OnResizeRow(
    CDockingPanesRow* pRowToResize,  
    int nOffset);
```  
  
### Parameters  
 [in] *pRowToResize*  
 [in] *nOffset*  
  
### Return Value  
  
### Remarks  
  
##  <a name="onsizeparent"></a>  CDockSite::OnSizeParent  

  
```  
virtual void OnSizeParent(
    CRect& rectAvailable,  
    UINT nSide,  
    BOOL bExpand,  
    int nOffset);
```  
  
### Parameters  
 [in] *rectAvailable*  
 [in] *nSide*  
 [in] *bExpand*  
 [in] *nOffset*  
  
### Remarks  
  
##  <a name="onsetwindowpos"></a>  CDockSite::OnSetWindowPos  

  
```  
virtual BOOL OnSetWindowPos(
    const CWnd* pWndInsertAfter,  
    const CRect& rectWnd,  
    UINT nFlags);
```  
  
### Parameters  
 [in] *pWndInsertAfter*  
 [in] *rectWnd*  
 [in] *nFlags*  
  
### Return Value  
  
### Remarks  
  
##  <a name="onshowrow"></a>  CDockSite::OnShowRow  

  
```  
virtual void OnShowRow(
    POSITION pos,  
    BOOL bShow);
```  
  
### Parameters  
 [in] *pos*  
 [in] *bShow*  
  
### Remarks  
  
##  <a name="panefrompoint"></a>  CDockSite::PaneFromPoint  
 Returns a pane that is docked in the dock site at the point specified by the given parameter.  
  
```  
virtual CPane* PaneFromPoint(CPoint pt);
```  
  
### Parameters  
 [in] *pt*  
 A point, in screen coordinates, for the pane to retrieve.  
  
### Return Value  
 A pointer to the pane located at the specified point or NULL if no pane was present at the specified point.  
  
### Remarks  
  
##  <a name="rectsidefrompoint"></a>  CDockSite::RectSideFromPoint  

  
```  
static int __stdcall RectSideFromPoint(
    const CRect& rect,  
    const CPoint& point);
```  
  
### Parameters  
 [in] *rect*  
 [in] *point*  
  
### Return Value  
  
### Remarks  
  
##  <a name="removepane"></a>  CDockSite::RemovePane  

  
```  
virtual void RemovePane(
    CPane* pWnd,  
    AFX_DOCK_METHOD dockMethod);
```  
  
### Parameters  
 [in] *pWnd*  
 [in] *dockMethod*  
  
### Remarks  
  
##  <a name="removerow"></a>  CDockSite::RemoveRow  

  
```  
void RemoveRow(CDockingPanesRow* pRow);
```  
  
### Parameters  
 [in] *pRow*  
  
### Remarks  
  
##  <a name="replacepane"></a>  CDockSite::ReplacePane  

  
```  
BOOL ReplacePane(
    CPane* pOldBar,  
    CPane* pNewBar);
```  
  
### Parameters  
 [in] *pOldBar*  
 [in] *pNewBar*  
  
### Return Value  
  
### Remarks  
  
##  <a name="repositionpanes"></a>  CDockSite::RepositionPanes  

  
```  
virtual void RepositionPanes(CRect& rectNewClientArea);
```  
  
### Parameters  
 [in] *rectNewClientArea*  
  
### Remarks  
  
##  <a name="resizedocksite"></a>  CDockSite::ResizeDockSite  

  
```  
void ResizeDockSite(
    int nNewWidth,  
    int nNewHeight);
```  
  
### Parameters  
 [in] *nNewWidth*  
 [in] *nNewHeight*  
  
### Remarks  
  
##  <a name="resizerow"></a>  CDockSite::ResizeRow  

  
```  
int ResizeRow(
    CDockingPanesRow* pRow,  
    int nNewSize,  
    BOOL bAdjustLayout = TRUE);
```  
  
### Parameters  
 [in] *pRow*  
 [in] *nNewSize*  
 [in] *bAdjustLayout*  
  
### Return Value  
  
### Remarks  
  
##  <a name="showpane"></a>  CDockSite::ShowPane  
 Shows the pane.  
  
```  
virtual BOOL ShowPane(
    CBasePane* pBar,  
    BOOL bShow,  
    BOOL bDelay,  
    BOOL bActivate);
```  
  
### Parameters  
 [in] [out] *pBar*  
 A pointer to the pane to be shown or hidden.  
  
 [in] *bShow*  
 TRUE to specify that the pane is to be shown; FALSE to specify that the pane is to be hidden.  
  
 [in] *bDelay*  
 TRUE to specify that the layout of the pane should be delayed until after the pane is shown; otherwise, FALSE.  
  
 [in] *bActivate*  
 This parameter is not used.  
  
### Return Value  
 TRUE if the pane was shown or hidden successfully. FALSE if the specified pane does not belong to this dock site.  
  
### Remarks  
 Call this method to show or hide docked panes. Normally, you do not have to call `CDockSite::ShowPane` directly, because it is called by the parent frame window or by the base pane.  
  
##  <a name="showrow"></a>  CDockSite::ShowRow  

  
```  
void ShowRow(
    CDockingPanesRow* pRow,  
    BOOL bShow,  
    BOOL bAdjustLayout);
```  
  
### Parameters  
 [in] *pRow*  
 [in] *bShow*  
 [in] *bAdjustLayout*  
  
### Remarks  
  
##  <a name="swaprows"></a>  CDockSite::SwapRows  

  
```  
void SwapRows(
    CDockingPanesRow* pFirstRow,  
    CDockingPanesRow* pSecondRow);
```  
  
### Parameters  
 [in] *pFirstRow*  
 [in] *pSecondRow*  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CBasePane Class](../../mfc/reference/cbasepane-class.md)
