---
title: "CDockingPanesRow Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CDockingPanesRow", "AFXDOCKINGPANESROW/CDockingPanesRow", "AFXDOCKINGPANESROW/CDockingPanesRow::AddPane", "AFXDOCKINGPANESROW/CDockingPanesRow::AddPaneFromRow", "AFXDOCKINGPANESROW/CDockingPanesRow::ArrangePanes", "AFXDOCKINGPANESROW/CDockingPanesRow::CalcFixedLayout", "AFXDOCKINGPANESROW/CDockingPanesRow::Create", "AFXDOCKINGPANESROW/CDockingPanesRow::ExpandStretchedPanes", "AFXDOCKINGPANESROW/CDockingPanesRow::ExpandStretchedPanesRect", "AFXDOCKINGPANESROW/CDockingPanesRow::FixupVirtualRects", "AFXDOCKINGPANESROW/CDockingPanesRow::GetAvailableLength", "AFXDOCKINGPANESROW/CDockingPanesRow::GetAvailableSpace", "AFXDOCKINGPANESROW/CDockingPanesRow::GetClientRect", "AFXDOCKINGPANESROW/CDockingPanesRow::GetDockSite", "AFXDOCKINGPANESROW/CDockingPanesRow::GetExtraSpace", "AFXDOCKINGPANESROW/CDockingPanesRow::GetGroupFromPane", "AFXDOCKINGPANESROW/CDockingPanesRow::GetID", "AFXDOCKINGPANESROW/CDockingPanesRow::GetMaxPaneSize", "AFXDOCKINGPANESROW/CDockingPanesRow::GetPaneCount", "AFXDOCKINGPANESROW/CDockingPanesRow::GetPaneList", "AFXDOCKINGPANESROW/CDockingPanesRow::GetRowAlignment", "AFXDOCKINGPANESROW/CDockingPanesRow::GetRowHeight", "AFXDOCKINGPANESROW/CDockingPanesRow::GetRowOffset", "AFXDOCKINGPANESROW/CDockingPanesRow::GetVisibleCount", "AFXDOCKINGPANESROW/CDockingPanesRow::GetWindowRect", "AFXDOCKINGPANESROW/CDockingPanesRow::HasPane", "AFXDOCKINGPANESROW/CDockingPanesRow::IsEmpty", "AFXDOCKINGPANESROW/CDockingPanesRow::IsExclusiveRow", "AFXDOCKINGPANESROW/CDockingPanesRow::IsHorizontal", "AFXDOCKINGPANESROW/CDockingPanesRow::IsVisible", "AFXDOCKINGPANESROW/CDockingPanesRow::Move", "AFXDOCKINGPANESROW/CDockingPanesRow::MovePane", "AFXDOCKINGPANESROW/CDockingPanesRow::OnResizePane", "AFXDOCKINGPANESROW/CDockingPanesRow::RedrawAll", "AFXDOCKINGPANESROW/CDockingPanesRow::RemovePane", "AFXDOCKINGPANESROW/CDockingPanesRow::ReplacePane", "AFXDOCKINGPANESROW/CDockingPanesRow::RepositionPanes", "AFXDOCKINGPANESROW/CDockingPanesRow::Resize", "AFXDOCKINGPANESROW/CDockingPanesRow::ResizeByPaneDivider", "AFXDOCKINGPANESROW/CDockingPanesRow::ScreenToClient", "AFXDOCKINGPANESROW/CDockingPanesRow::SetExtra", "AFXDOCKINGPANESROW/CDockingPanesRow::ShowDockSiteRow", "AFXDOCKINGPANESROW/CDockingPanesRow::ShowPane", "AFXDOCKINGPANESROW/CDockingPanesRow::UpdateVisibleState"]
dev_langs: ["C++"]
helpviewer_keywords: ["CDockingPanesRow [MFC], AddPane", "CDockingPanesRow [MFC], AddPaneFromRow", "CDockingPanesRow [MFC], ArrangePanes", "CDockingPanesRow [MFC], CalcFixedLayout", "CDockingPanesRow [MFC], Create", "CDockingPanesRow [MFC], ExpandStretchedPanes", "CDockingPanesRow [MFC], ExpandStretchedPanesRect", "CDockingPanesRow [MFC], FixupVirtualRects", "CDockingPanesRow [MFC], GetAvailableLength", "CDockingPanesRow [MFC], GetAvailableSpace", "CDockingPanesRow [MFC], GetClientRect", "CDockingPanesRow [MFC], GetDockSite", "CDockingPanesRow [MFC], GetExtraSpace", "CDockingPanesRow [MFC], GetGroupFromPane", "CDockingPanesRow [MFC], GetID", "CDockingPanesRow [MFC], GetMaxPaneSize", "CDockingPanesRow [MFC], GetPaneCount", "CDockingPanesRow [MFC], GetPaneList", "CDockingPanesRow [MFC], GetRowAlignment", "CDockingPanesRow [MFC], GetRowHeight", "CDockingPanesRow [MFC], GetRowOffset", "CDockingPanesRow [MFC], GetVisibleCount", "CDockingPanesRow [MFC], GetWindowRect", "CDockingPanesRow [MFC], HasPane", "CDockingPanesRow [MFC], IsEmpty", "CDockingPanesRow [MFC], IsExclusiveRow", "CDockingPanesRow [MFC], IsHorizontal", "CDockingPanesRow [MFC], IsVisible", "CDockingPanesRow [MFC], Move", "CDockingPanesRow [MFC], MovePane", "CDockingPanesRow [MFC], OnResizePane", "CDockingPanesRow [MFC], RedrawAll", "CDockingPanesRow [MFC], RemovePane", "CDockingPanesRow [MFC], ReplacePane", "CDockingPanesRow [MFC], RepositionPanes", "CDockingPanesRow [MFC], Resize", "CDockingPanesRow [MFC], ResizeByPaneDivider", "CDockingPanesRow [MFC], ScreenToClient", "CDockingPanesRow [MFC], SetExtra", "CDockingPanesRow [MFC], ShowDockSiteRow", "CDockingPanesRow [MFC], ShowPane", "CDockingPanesRow [MFC], UpdateVisibleState"]
ms.assetid: e7a17832-0ebb-4bce-b799-cec9b60f76fe
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CDockingPanesRow Class
Manages a list of panes that are located in the same horizontal or vertical row (column) of a dock site.  

 For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.  
  
## Syntax  
  
```  
class CDockingPanesRow : public CObject  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|`CDockingPanesRow::CDockingPanesRow`|Default constructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CDockingPanesRow::AddPane](#addpane)||  
|[CDockingPanesRow::AddPaneFromRow](#addpanefromrow)||  
|[CDockingPanesRow::ArrangePanes](#arrangepanes)|Arranges the panes in a row according to the specified margin and spacing parameters.|  
|[CDockingPanesRow::CalcFixedLayout](#calcfixedlayout)||  
|[CDockingPanesRow::Create](#create)||  
|[CDockingPanesRow::ExpandStretchedPanes](#expandstretchedpanes)||  
|[CDockingPanesRow::ExpandStretchedPanesRect](#expandstretchedpanesrect)||  
|[CDockingPanesRow::FixupVirtualRects](#fixupvirtualrects)||  
|[CDockingPanesRow::GetAvailableLength](#getavailablelength)||  
|[CDockingPanesRow::GetAvailableSpace](#getavailablespace)||  
|[CDockingPanesRow::GetClientRect](#getclientrect)||  
|[CDockingPanesRow::GetDockSite](#getdocksite)||  
|[CDockingPanesRow::GetExtraSpace](#getextraspace)||  
|[CDockingPanesRow::GetGroupFromPane](#getgroupfrompane)||  
|[CDockingPanesRow::GetID](#getid)||  
|[CDockingPanesRow::GetMaxPaneSize](#getmaxpanesize)||  
|[CDockingPanesRow::GetPaneCount](#getpanecount)||  
|[CDockingPanesRow::GetPaneList](#getpanelist)||  
|[CDockingPanesRow::GetRowAlignment](#getrowalignment)||  
|[CDockingPanesRow::GetRowHeight](#getrowheight)||  
|[CDockingPanesRow::GetRowOffset](#getrowoffset)||  
|[CDockingPanesRow::GetVisibleCount](#getvisiblecount)||  
|[CDockingPanesRow::GetWindowRect](#getwindowrect)||  
|[CDockingPanesRow::HasPane](#haspane)||  
|[CDockingPanesRow::IsEmpty](#isempty)||  
|[CDockingPanesRow::IsExclusiveRow](#isexclusiverow)||  
|[CDockingPanesRow::IsHorizontal](#ishorizontal)||  
|[CDockingPanesRow::IsVisible](#isvisible)||  
|[CDockingPanesRow::Move](#move)||  
|[CDockingPanesRow::MovePane](#movepane)||  
|[CDockingPanesRow::OnResizePane](#onresizepane)||  
|[CDockingPanesRow::RedrawAll](#redrawall)||  
|[CDockingPanesRow::RemovePane](#removepane)||  
|[CDockingPanesRow::ReplacePane](#replacepane)||  
|[CDockingPanesRow::RepositionPanes](#repositionpanes)||  
|[CDockingPanesRow::Resize](#resize)||  
|[CDockingPanesRow::ResizeByPaneDivider](#resizebypanedivider)||  
|[CDockingPanesRow::ScreenToClient](#screentoclient)||  
|[CDockingPanesRow::SetExtra](#setextra)||  
|[CDockingPanesRow::ShowDockSiteRow](#showdocksiterow)||  
|[CDockingPanesRow::ShowPane](#showpane)||  
|[CDockingPanesRow::UpdateVisibleState](#updatevisiblestate)||  
  
## Remarks  
 `CDockingPanesRow` objects are created internally by dock site objects.  
  
## Example  
 The following example demonstrates how to get a `CDockingPanesRow` object from a `CMFCAutoHideBar` object.  
  
 [!code-cpp[NVC_MFC_RibbonApp#26](../../mfc/reference/codesnippet/cpp/cdockingpanesrow-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CDockingPanesRow](../../mfc/reference/cdockingpanesrow-class.md)  
  
## Requirements  
 **Header:** afxDockingPanesRow.h  
  
##  <a name="addpane"></a>  CDockingPanesRow::AddPane  

  
```  
virtual void AddPane(
    CPane* pControlBar,  
    AFX_DOCK_METHOD dockMethod,  
    LPCRECT lpRect = NULL,  
    BOOL bAddLast = FALSE);
```  
  
### Parameters  
*pControlBar*<br/>
[in] [in] *dockMethod*  
*lpRect*<br/>
[in] [in] *bAddLast*  
  
### Remarks  
  
##  <a name="addpanefromrow"></a>  CDockingPanesRow::AddPaneFromRow  

  
```  
virtual void AddPaneFromRow(
    CPane* pControlBar,  
    AFX_DOCK_METHOD dockMethod);
```  
  
### Parameters  
*pControlBar*<br/>
[in] [in] *dockMethod*  
  
### Remarks  
  
##  <a name="arrangepanes"></a>  CDockingPanesRow::ArrangePanes  
 Arranges docking panes in a row according to the specified margin and spacing parameters.  
  
```  
virtual void ArrangePanes(
    int nMargin,  
    int nSpacing);
```  
  
### Parameters  
*nMargin*<br/>
[in] Specifies the offset, in pixels, of the first pane from the upper-left corner of the row.  
  
*nSpacing*<br/>
[in] Specifies the spacing, in pixels, between panes.  
  
### Remarks  
 Call this method to arrange panes in the row where they will dock. After calling this method, you must call `CDockingPanesRow::FixupVirtualRects(FALSE, NULL)`.  
  
##  <a name="calcfixedlayout"></a>  CDockingPanesRow::CalcFixedLayout  

  
```  
virtual CSize CalcFixedLayout(
    BOOL bStretch,  
    BOOL bHorz);
```  
  
### Parameters  
*bStretch*<br/>
[in] [in] *bHorz*  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow"></a>  CDockingPanesRow::CDockingPanesRow  

  
```  
CDockingPanesRow(
    CDockSite* pParentDockBar,  
    int nOffset,  
    int nHeight);
```  
  
### Parameters  
*pParentDockBar*<br/>
[in] [in] *nOffset*  
 [in] *nHeight*  
  
### Remarks  
  
##  <a name="create"></a>  CDockingPanesRow::Create  

  
```  
virtual BOOL Create();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="expandstretchedpanes"></a>  CDockingPanesRow::ExpandStretchedPanes  

  
```  
void ExpandStretchedPanes();
```  
  
### Remarks  
  
##  <a name="expandstretchedpanesrect"></a>  CDockingPanesRow::ExpandStretchedPanesRect  

  
```  
void ExpandStretchedPanesRect();
```  
  
### Remarks  
  
##  <a name="fixupvirtualrects"></a>  CDockingPanesRow::FixupVirtualRects  

  
```  
void FixupVirtualRects(
    bool bMoveBackToVirtualRect,  
    CPane* pBarToExclude = NULL);
```  
  
### Parameters  
*bMoveBackToVirtualRect*<br/>
[in] [in] *pBarToExclude*  
  
### Remarks  
  
##  <a name="getavailablelength"></a>  CDockingPanesRow::GetAvailableLength  

  
```  
virtual int GetAvailableLength(BOOL bUseVirtualRect = FALSE) const;  
```  
  
### Parameters  
 [in] *bUseVirtualRect*  
  
### Return Value  
  
### Remarks  
  
##  <a name="getavailablespace"></a>  CDockingPanesRow::GetAvailableSpace  

  
```  
virtual void GetAvailableSpace(CRect& rect);
```  
  
### Parameters  
 [in] *rect*  
  
### Remarks  
  
##  <a name="getclientrect"></a>  CDockingPanesRow::GetClientRect  

  
```  
void GetClientRect(CRect& rect) const;  
```  
  
### Parameters  
 [in] *rect*  
  
### Remarks  
  
##  <a name="getdocksite"></a>  CDockingPanesRow::GetDockSite  

  
```  
CDockSite* GetDockSite() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getextraspace"></a>  CDockingPanesRow::GetExtraSpace  

  
```  
int GetExtraSpace() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getgroupfrompane"></a>  CDockingPanesRow::GetGroupFromPane  

  
```  
void GetGroupFromPane(
    CPane* pBar,  
    CObList& lst);
```  
  
### Parameters  
*pBar*<br/>
[in] [in] *lst*  
  
### Remarks  
  
##  <a name="getid"></a>  CDockingPanesRow::GetID  

  
```  
int GetID() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getmaxpanesize"></a>  CDockingPanesRow::GetMaxPaneSize  

  
```  
int GetMaxPaneSize(BOOL bSkipHiddenBars = TRUE) const;  
```  
  
### Parameters  
 [in] *bSkipHiddenBars*  
  
### Return Value  
  
### Remarks  
  
##  <a name="getpanecount"></a>  CDockingPanesRow::GetPaneCount  

  
```  
int GetPaneCount() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getpanelist"></a>  CDockingPanesRow::GetPaneList  

  
```  
const CObList& GetPaneList() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getrowalignment"></a>  CDockingPanesRow::GetRowAlignment  

  
```  
DWORD GetRowAlignment() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getrowheight"></a>  CDockingPanesRow::GetRowHeight  

  
```  
int GetRowHeight() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getrowoffset"></a>  CDockingPanesRow::GetRowOffset  

  
```  
int GetRowOffset() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getvisiblecount"></a>  CDockingPanesRow::GetVisibleCount  

  
```  
virtual int GetVisibleCount();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getwindowrect"></a>  CDockingPanesRow::GetWindowRect  

  
```  
void GetWindowRect(CRect& rect) const;  
```  
  
### Parameters  
 [in] *rect*  
  
### Remarks  
  
##  <a name="haspane"></a>  CDockingPanesRow::HasPane  

  
```  
BOOL HasPane(CBasePane* pControlBar);
```  
  
### Parameters  
 [in] *pControlBar*  
  
### Return Value  
  
### Remarks  
  
##  <a name="isempty"></a>  CDockingPanesRow::IsEmpty  

  
```  
virtual BOOL IsEmpty() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="isexclusiverow"></a>  CDockingPanesRow::IsExclusiveRow  

  
```  
virtual BOOL IsExclusiveRow() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="ishorizontal"></a>  CDockingPanesRow::IsHorizontal  

  
```  
bool IsHorizontal() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="isvisible"></a>  CDockingPanesRow::IsVisible  

  
```  
virtual BOOL IsVisible() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="move"></a>  CDockingPanesRow::Move  

  
```  
virtual void Move(int nOffset);
```  
  
### Parameters  
 [in] *nOffset*  
  
### Remarks  
  
##  <a name="movepane"></a>  CDockingPanesRow::MovePane  

  
```  
void MovePane(
    CPane* pControlBar,  
    CPoint ptOffset,  
    BOOL bSwapControlBars,  
    HDWP& hdwp);

 
void MovePane(
    CPane* pControlBar,  
    CRect rectTarget,  
    HDWP& hdwp);

 
void MovePane(
    CPane* pControlBar,  
    int nOffset,  
    bool bForward,  
    HDWP& hdwp);

 
void MovePane(
    CPane* pControlBar,  
    int nAbsolutOffset,  
    HDWP& hdwp);
```  
  
### Parameters  
*pControlBar*<br/>
[in] [in] *ptOffset*  
*bSwapControlBars*<br/>
[in] [in] *hdwp*  
*rectTarget*<br/>
[in] [in] *nOffset*  
*bForward*<br/>
[in] [in] *nAbsolutOffset*  
  
### Remarks  
  
##  <a name="onresizepane"></a>  CDockingPanesRow::OnResizePane  

  
```  
virtual void OnResizePane(CBasePane* pControlBar);
```  
  
### Parameters  
 [in] *pControlBar*  
  
### Remarks  
  
##  <a name="redrawall"></a>  CDockingPanesRow::RedrawAll  

  
```  
void RedrawAll();
```  
  
### Remarks  
  
##  <a name="removepane"></a>  CDockingPanesRow::RemovePane  

  
```  
virtual void RemovePane(CPane* pControlBar);
```  
  
### Parameters  
 [in] *pControlBar*  
  
### Remarks  
  
##  <a name="replacepane"></a>  CDockingPanesRow::ReplacePane  

  
```  
virtual BOOL ReplacePane(
    CPane* pBarOld,  
    CPane* pBarNew);
```  
  
### Parameters  
*pBarOld*<br/>
[in] [in] *pBarNew*  
  
### Return Value  
  
### Remarks  
  
##  <a name="repositionpanes"></a>  CDockingPanesRow::RepositionPanes  

  
```  
virtual void RepositionPanes(
    CRect& rectNewParentBarArea,  
    UINT nSide = (UINT)-1,  
    BOOL bExpand = FALSE,  
    int nOffset = 0);
```  
  
### Parameters  
*rectNewParentBarArea*<br/>
[in] [in] *nSide*  
*bExpand*<br/>
[in] [in] *nOffset*  
  
### Remarks  
  
##  <a name="resize"></a>  CDockingPanesRow::Resize  

  
```  
virtual int Resize(int nOffset);
```  
  
### Parameters  
 [in] *nOffset*  
  
### Return Value  
  
### Remarks  
  
##  <a name="resizebypanedivider"></a>  CDockingPanesRow::ResizeByPaneDivider  

  
```  
virtual int ResizeByPaneDivider(int);
```  
  
### Parameters  
 [in] *int*  
  
### Return Value  
  
### Remarks  
  
##  <a name="screentoclient"></a>  CDockingPanesRow::ScreenToClient  

  
```  
void ScreenToClient(CRect& rect) const;  
```  
  
### Parameters  
 [in] *rect*  
  
### Remarks  
  
##  <a name="setextra"></a>  CDockingPanesRow::SetExtra  

  
```  
void SetExtra(
    int nExtraSpace,  
    AFX_ROW_ALIGNMENT rowExtraAlign);
```  
  
### Parameters  
*nExtraSpace*<br/>
[in] [in] *rowExtraAlign*  
  
### Remarks  
  
##  <a name="showdocksiterow"></a>  CDockingPanesRow::ShowDockSiteRow  

  
```  
virtual void ShowDockSiteRow(
    BOOL bShow,  
    BOOL bDelay);
```  
  
### Parameters  
*bShow*<br/>
[in] [in] *bDelay*  
  
### Remarks  
  
##  <a name="showpane"></a>  CDockingPanesRow::ShowPane  

  
```  
virtual BOOL ShowPane(
    CPane* pControlBar,  
    BOOL bShow,  
    BOOL bDelay = FALSE);
```  
  
### Parameters  
*pControlBar*<br/>
[in] [in] *bShow*  
 [in] *bDelay*  
  
### Return Value  
  
### Remarks  
  
##  <a name="updatevisiblestate"></a>  CDockingPanesRow::UpdateVisibleState  

  
```  
virtual void UpdateVisibleState(BOOL bDelay);
```  
  
### Parameters  
 [in] *bDelay*  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [CDockSite Class](../../mfc/reference/cdocksite-class.md)   
 [CPane Class](../../mfc/reference/cpane-class.md)
