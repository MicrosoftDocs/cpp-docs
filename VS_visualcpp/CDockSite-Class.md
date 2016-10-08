---
title: "CDockSite Class"
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
ms.assetid: 0fcfff79-5f50-4281-b2de-a55653bbea40
caps.latest.revision: 25
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
# CDockSite Class
This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
 Provides functionality for arranging panes that are derived from the [CPane Class](../VS_visualcpp/CPane-Class.md) into sets of rows.  
  
## Syntax  
  
```  
class CDockSite: public CBasePane  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CDockSite::AddRow](#cdocksite__addrow)||  
|[CDockSite::AdjustDockingLayout](#cdocksite__adjustdockinglayout)|(Overrides [CBasePane::AdjustDockingLayout](../VS_visualcpp/CBasePane-Class.md#cbasepane__adjustdockinglayout).)|  
|[CDockSite::AdjustLayout](#cdocksite__adjustlayout)|(Overrides [CBasePane::AdjustLayout](../VS_visualcpp/CBasePane-Class.md#cbasepane__adjustlayout).)|  
|[CDockSite::AlignDockSite](#cdocksite__aligndocksite)||  
|[CDockSite::CalcFixedLayout](#cdocksite__calcfixedlayout)|(Overrides [CBasePane::CalcFixedLayout](../VS_visualcpp/CBasePane-Class.md#cbasepane__calcfixedlayout).)|  
|[CDockSite::CanAcceptPane](#cdocksite__canacceptpane)|(Overrides [CBasePane::CanAcceptPane](../VS_visualcpp/CBasePane-Class.md#cbasepane__canacceptpane).)|  
|[CDockSite::CreateEx](#cdocksite__createex)|(Overrides [CBasePane::CreateEx](../VS_visualcpp/CBasePane-Class.md#cbasepane__createex).)|  
|[CDockSite::CreateRow](#cdocksite__createrow)||  
|[CDockSite::DockPane](#cdocksite__dockpane)|(Overrides [CBasePane::DockPane](../VS_visualcpp/CBasePane-Class.md#cbasepane__dockpane).)|  
|[CDockSite::DoesAllowDynInsertBefore](#cdocksite__doesallowdyninsertbefore)|(Overrides [CBasePane::DoesAllowDynInsertBefore](../VS_visualcpp/CBasePane-Class.md#cbasepane__doesallowdyninsertbefore).)|  
|[CDockSite::FindRowIndex](#cdocksite__findrowindex)||  
|[CDockSite::FixupVirtualRects](#cdocksite__fixupvirtualrects)||  
|[CDockSite::GetDockSiteID](#cdocksite__getdocksiteid)||  
|[CDockSite::GetDockSiteRowsList](#cdocksite__getdocksiterowslist)||  
|[CDockSite::IsAccessibilityCompatible](#cdocksite__isaccessibilitycompatible)|(Overrides `CBasePane::IsAccessibilityCompatible`.)|  
|[CDockSite::IsDragMode](#cdocksite__isdragmode)||  
|[CDockSite::IsLastRow](#cdocksite__islastrow)||  
|[CDockSite::IsRectWithinDockSite](#cdocksite__isrectwithindocksite)||  
|[CDockSite::IsResizable](#cdocksite__isresizable)|(Overrides [CBasePane::IsResizable](../VS_visualcpp/CBasePane-Class.md#cbasepane__isresizable).)|  
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
 The framework creates `CDockSite` objects automatically when you call [CFrameWndEx::EnableDocking](../VS_visualcpp/CFrameWndEx-Class.md#cframewndex__enabledocking). Dock site windows are positioned at the edge of the client area on the main frame window.  
  
 You usually do not have to call the services provided by the dock site because [CFrameWndEx Class](../VS_visualcpp/CFrameWndEx-Class.md) handles these services.  
  
## Example  
 The following example demonstrates how to create an object of the `CDockSite` class.  
  
 [!CODE [NVC_MFC_RibbonApp#27](../CodeSnippet/VS_Snippets_Misc/NVC_MFC_RibbonApp#27)]  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md) [CCmdTarget](../VS_visualcpp/CCmdTarget-Class.md) [CWnd](../VS_visualcpp/CWnd-Class.md)  
  
 [CBasePane](../VS_visualcpp/CBasePane-Class.md) [CDockSite](../VS_visualcpp/CDockSite-Class.md)  
  
## Requirements  
 **Header:** afxDockSite.h  
  
##  <a name="cdocksite__addrow"></a>  CDockSite::AddRow  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
CDockingPanesRow* AddRow(  
    POSITION pos,  
    int nHeight );  
```  
  
### Parameters  
 [in] `pos`  
  [in] `nHeight`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__adjustdockinglayout"></a>  CDockSite::AdjustDockingLayout  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void AdjustDockingLayout();  
```  
  
### Remarks  
  
##  <a name="cdocksite__adjustlayout"></a>  CDockSite::AdjustLayout  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void AdjustLayout();  
```  
  
### Remarks  
  
##  <a name="cdocksite__aligndocksite"></a>  CDockSite::AlignDockSite  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void AlignDockSite(  
    const CRect& rectToAlignBy,  
    CRect& rectResult,  
    BOOL bMoveImmediately );  
```  
  
### Parameters  
 [in] `rectToAlignBy`  
  [in] `rectResult`  
  [in] `bMoveImmediately`  
  
### Remarks  
  
##  <a name="cdocksite__calcfixedlayout"></a>  CDockSite::CalcFixedLayout  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual CSize CalcFixedLayout(  
    BOOL bStretch,  
    BOOL bHorz );  
```  
  
### Parameters  
 [in] `bStretch`  
  [in] `bHorz`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__canacceptpane"></a>  CDockSite::CanAcceptPane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL CanAcceptPane( const CBasePane* pBar ) const;  
```  
  
### Parameters  
 [in] `pBar`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__createex"></a>  CDockSite::CreateEx  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
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
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual CDockingPanesRow* CreateRow(  
    CDockSite* pParentDockBar,  
    int nOffset,  
    int nRowHeight );  
```  
  
### Parameters  
 [in] `pParentDockBar`  
  [in] `nOffset`  
  [in] `nRowHeight`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__dockpane"></a>  CDockSite::DockPane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
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
    CPane* pTargetBar );  
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
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL DoesAllowDynInsertBefore() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__findpanebyid"></a>  CDockSite::FindPaneByID  
 Returns the pane with the given ID.  
  
```  
CPane* FindPaneByID( UINT nID );  
```  
  
### Parameters  
 [in] `nID`  
 The command ID of the pane to be found.  
  
### Return Value  
 A pointer to the pane with the specified command ID, or `NULL` if the pane is not found.  
  
### Remarks  
  
##  <a name="cdocksite__findrowindex"></a>  CDockSite::FindRowIndex  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
int FindRowIndex( CDockingPanesRow* pRow );  
```  
  
### Parameters  
 [in] `pRow`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__fixupvirtualrects"></a>  CDockSite::FixupVirtualRects  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void FixupVirtualRects();  
```  
  
### Remarks  
  
##  <a name="cdocksite__getdocksiteid"></a>  CDockSite::GetDockSiteID  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual UINT GetDockSiteID() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__getdocksiterowslist"></a>  CDockSite::GetDockSiteRowsList  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
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
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL IsAccessibilityCompatible();  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__isdragmode"></a>  CDockSite::IsDragMode  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL IsDragMode() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__islastrow"></a>  CDockSite::IsLastRow  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
bool IsLastRow( CDockingPanesRow* pRow ) const;  
```  
  
### Parameters  
 [in] `pRow`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__isrectwithindocksite"></a>  CDockSite::IsRectWithinDockSite  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
BOOL IsRectWithinDockSite(  
    CRect rect,  
    CPoint& ptDelta );  
```  
  
### Parameters  
 [in] `rect`  
  [in] `ptDelta`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__isresizable"></a>  CDockSite::IsResizable  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL IsResizable() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__movepane"></a>  CDockSite::MovePane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL MovePane(  
    CPane* pWnd,  
    UINT nFlags,  
    CPoint ptOffset );  
```  
  
### Parameters  
 [in] `pWnd`  
  [in] `nFlags`  
  [in] `ptOffset`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__oninsertrow"></a>  CDockSite::OnInsertRow  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnInsertRow( POSITION pos );  
```  
  
### Parameters  
 [in] `pos`  
  
### Remarks  
  
##  <a name="cdocksite__onremoverow"></a>  CDockSite::OnRemoveRow  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
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
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual int OnResizeRow(  
    CDockingPanesRow* pRowToResize,  
    int nOffset );  
```  
  
### Parameters  
 [in] `pRowToResize`  
  [in] `nOffset`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__onsizeparent"></a>  CDockSite::OnSizeParent  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnSizeParent(  
    CRect& rectAvailable,  
    UINT nSide,  
    BOOL bExpand,  
    int nOffset );  
```  
  
### Parameters  
 [in] `rectAvailable`  
  [in] `nSide`  
  [in] `bExpand`  
  [in] `nOffset`  
  
### Remarks  
  
##  <a name="cdocksite__onsetwindowpos"></a>  CDockSite::OnSetWindowPos  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL OnSetWindowPos(  
    const CWnd* pWndInsertAfter,  
    const CRect& rectWnd,  
    UINT nFlags );  
```  
  
### Parameters  
 [in] `pWndInsertAfter`  
  [in] `rectWnd`  
  [in] `nFlags`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__onshowrow"></a>  CDockSite::OnShowRow  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnShowRow(  
    POSITION pos,  
    BOOL bShow );  
```  
  
### Parameters  
 [in] `pos`  
  [in] `bShow`  
  
### Remarks  
  
##  <a name="cdocksite__panefrompoint"></a>  CDockSite::PaneFromPoint  
 Returns a pane that is docked in the dock site at the point specified by the given parameter.  
  
```  
virtual CPane* PaneFromPoint( CPoint pt );  
```  
  
### Parameters  
 [in] `pt`  
 A point, in screen coordinates, for the pane to retrieve.  
  
### Return Value  
 A pointer to the pane located at the specified point or `NULL` if no pane was present at the specified point.  
  
### Remarks  
  
##  <a name="cdocksite__rectsidefrompoint"></a>  CDockSite::RectSideFromPoint  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
static int __stdcall RectSideFromPoint(  
    const CRect& rect,  
    const CPoint& point );  
```  
  
### Parameters  
 [in] `rect`  
  [in] `point`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__removepane"></a>  CDockSite::RemovePane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void RemovePane(  
    CPane* pWnd,  
    AFX_DOCK_METHOD dockMethod );  
```  
  
### Parameters  
 [in] `pWnd`  
  [in] `dockMethod`  
  
### Remarks  
  
##  <a name="cdocksite__removerow"></a>  CDockSite::RemoveRow  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void RemoveRow( CDockingPanesRow* pRow );  
```  
  
### Parameters  
 [in] `pRow`  
  
### Remarks  
  
##  <a name="cdocksite__replacepane"></a>  CDockSite::ReplacePane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
BOOL ReplacePane(  
    CPane* pOldBar,  
    CPane* pNewBar );  
```  
  
### Parameters  
 [in] `pOldBar`  
  [in] `pNewBar`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdocksite__repositionpanes"></a>  CDockSite::RepositionPanes  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void RepositionPanes( CRect& rectNewClientArea );  
```  
  
### Parameters  
 [in] `rectNewClientArea`  
  
### Remarks  
  
##  <a name="cdocksite__resizedocksite"></a>  CDockSite::ResizeDockSite  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void ResizeDockSite(  
    int nNewWidth,  
    int nNewHeight );  
```  
  
### Parameters  
 [in] `nNewWidth`  
  [in] `nNewHeight`  
  
### Remarks  
  
##  <a name="cdocksite__resizerow"></a>  CDockSite::ResizeRow  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
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
    BOOL bActivate );  
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
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void ShowRow(  
    CDockingPanesRow* pRow,  
    BOOL bShow,  
    BOOL bAdjustLayout );  
```  
  
### Parameters  
 [in] `pRow`  
  [in] `bShow`  
  [in] `bAdjustLayout`  
  
### Remarks  
  
##  <a name="cdocksite__swaprows"></a>  CDockSite::SwapRows  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void SwapRows(  
    CDockingPanesRow* pFirstRow,  
    CDockingPanesRow* pSecondRow );  
```  
  
### Parameters  
 [in] `pFirstRow`  
  [in] `pSecondRow`  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Classes](../VS_visualcpp/MFC-Classes.md)   
 [CBasePane Class](../VS_visualcpp/CBasePane-Class.md)