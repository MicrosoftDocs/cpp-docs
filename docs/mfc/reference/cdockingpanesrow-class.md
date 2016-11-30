---
title: "CDockingPanesRow Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDockingPanesRow"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDockingPanesRow class"
ms.assetid: e7a17832-0ebb-4bce-b799-cec9b60f76fe
caps.latest.revision: 25
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
# CDockingPanesRow Class
Manages a list of panes that are located in the same horizontal or vertical row (column) of a dock site.  
  
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
|[CDockingPanesRow::AddPane](#cdockingpanesrow__addpane)||  
|[CDockingPanesRow::AddPaneFromRow](#cdockingpanesrow__addpanefromrow)||  
|[CDockingPanesRow::ArrangePanes](#cdockingpanesrow__arrangepanes)|Arranges the panes in a row according to the specified margin and spacing parameters.|  
|[CDockingPanesRow::CalcFixedLayout](#cdockingpanesrow__calcfixedlayout)||  
|[CDockingPanesRow::Create](#cdockingpanesrow__create)||  
|[CDockingPanesRow::ExpandStretchedPanes](#cdockingpanesrow__expandstretchedpanes)||  
|[CDockingPanesRow::ExpandStretchedPanesRect](#cdockingpanesrow__expandstretchedpanesrect)||  
|[CDockingPanesRow::FixupVirtualRects](#cdockingpanesrow__fixupvirtualrects)||  
|[CDockingPanesRow::GetAvailableLength](#cdockingpanesrow__getavailablelength)||  
|[CDockingPanesRow::GetAvailableSpace](#cdockingpanesrow__getavailablespace)||  
|[CDockingPanesRow::GetClientRect](#cdockingpanesrow__getclientrect)||  
|[CDockingPanesRow::GetDockSite](#cdockingpanesrow__getdocksite)||  
|[CDockingPanesRow::GetExtraSpace](#cdockingpanesrow__getextraspace)||  
|[CDockingPanesRow::GetGroupFromPane](#cdockingpanesrow__getgroupfrompane)||  
|[CDockingPanesRow::GetID](#cdockingpanesrow__getid)||  
|[CDockingPanesRow::GetMaxPaneSize](#cdockingpanesrow__getmaxpanesize)||  
|[CDockingPanesRow::GetPaneCount](#cdockingpanesrow__getpanecount)||  
|[CDockingPanesRow::GetPaneList](#cdockingpanesrow__getpanelist)||  
|[CDockingPanesRow::GetRowAlignment](#cdockingpanesrow__getrowalignment)||  
|[CDockingPanesRow::GetRowHeight](#cdockingpanesrow__getrowheight)||  
|[CDockingPanesRow::GetRowOffset](#cdockingpanesrow__getrowoffset)||  
|[CDockingPanesRow::GetVisibleCount](#cdockingpanesrow__getvisiblecount)||  
|[CDockingPanesRow::GetWindowRect](#cdockingpanesrow__getwindowrect)||  
|[CDockingPanesRow::HasPane](#cdockingpanesrow__haspane)||  
|[CDockingPanesRow::IsEmpty](#cdockingpanesrow__isempty)||  
|[CDockingPanesRow::IsExclusiveRow](#cdockingpanesrow__isexclusiverow)||  
|[CDockingPanesRow::IsHorizontal](#cdockingpanesrow__ishorizontal)||  
|[CDockingPanesRow::IsVisible](#cdockingpanesrow__isvisible)||  
|[CDockingPanesRow::Move](#cdockingpanesrow__move)||  
|[CDockingPanesRow::MovePane](#cdockingpanesrow__movepane)||  
|[CDockingPanesRow::OnResizePane](#cdockingpanesrow__onresizepane)||  
|[CDockingPanesRow::RedrawAll](#cdockingpanesrow__redrawall)||  
|[CDockingPanesRow::RemovePane](#cdockingpanesrow__removepane)||  
|[CDockingPanesRow::ReplacePane](#cdockingpanesrow__replacepane)||  
|[CDockingPanesRow::RepositionPanes](#cdockingpanesrow__repositionpanes)||  
|[CDockingPanesRow::Resize](#cdockingpanesrow__resize)||  
|[CDockingPanesRow::ResizeByPaneDivider](#cdockingpanesrow__resizebypanedivider)||  
|[CDockingPanesRow::ScreenToClient](#cdockingpanesrow__screentoclient)||  
|[CDockingPanesRow::SetExtra](#cdockingpanesrow__setextra)||  
|[CDockingPanesRow::ShowDockSiteRow](#cdockingpanesrow__showdocksiterow)||  
|[CDockingPanesRow::ShowPane](#cdockingpanesrow__showpane)||  
|[CDockingPanesRow::UpdateVisibleState](#cdockingpanesrow__updatevisiblestate)||  
  
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
  
##  <a name="cdockingpanesrow__addpane"></a>  CDockingPanesRow::AddPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void AddPane(
    CPane* pControlBar,  
    AFX_DOCK_METHOD dockMethod,  
    LPCRECT lpRect = NULL,  
    BOOL bAddLast = FALSE);
```  
  
### Parameters  
 [in] `pControlBar`  
 [in] `dockMethod`  
 [in] `lpRect`  
 [in] `bAddLast`  
  
### Remarks  
  
##  <a name="cdockingpanesrow__addpanefromrow"></a>  CDockingPanesRow::AddPaneFromRow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void AddPaneFromRow(
    CPane* pControlBar,  
    AFX_DOCK_METHOD dockMethod);
```  
  
### Parameters  
 [in] `pControlBar`  
 [in] `dockMethod`  
  
### Remarks  
  
##  <a name="cdockingpanesrow__arrangepanes"></a>  CDockingPanesRow::ArrangePanes  
 Arranges docking panes in a row according to the specified margin and spacing parameters.  
  
```  
virtual void ArrangePanes(
    int nMargin,  
    int nSpacing);
```  
  
### Parameters  
 [in] `nMargin`  
 Specifies the offset, in pixels, of the first pane from the upper-left corner of the row.  
  
 [in] `nSpacing`  
 Specifies the spacing, in pixels, between panes.  
  
### Remarks  
 Call this method to arrange panes in the row where they will dock. After calling this method, you must call `CDockingPanesRow::FixupVirtualRects(FALSE, NULL)`.  
  
##  <a name="cdockingpanesrow__calcfixedlayout"></a>  CDockingPanesRow::CalcFixedLayout  
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
  
##  <a name="cdockingpanesrow__cdockingpanesrow"></a>  CDockingPanesRow::CDockingPanesRow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CDockingPanesRow(
    CDockSite* pParentDockBar,  
    int nOffset,  
    int nHeight);
```  
  
### Parameters  
 [in] `pParentDockBar`  
 [in] `nOffset`  
 [in] `nHeight`  
  
### Remarks  
  
##  <a name="cdockingpanesrow__create"></a>  CDockingPanesRow::Create  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL Create();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__expandstretchedpanes"></a>  CDockingPanesRow::ExpandStretchedPanes  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void ExpandStretchedPanes();
```  
  
### Remarks  
  
##  <a name="cdockingpanesrow__expandstretchedpanesrect"></a>  CDockingPanesRow::ExpandStretchedPanesRect  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void ExpandStretchedPanesRect();
```  
  
### Remarks  
  
##  <a name="cdockingpanesrow__fixupvirtualrects"></a>  CDockingPanesRow::FixupVirtualRects  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void FixupVirtualRects(
    bool bMoveBackToVirtualRect,  
    CPane* pBarToExclude = NULL);
```  
  
### Parameters  
 [in] `bMoveBackToVirtualRect`  
 [in] `pBarToExclude`  
  
### Remarks  
  
##  <a name="cdockingpanesrow__getavailablelength"></a>  CDockingPanesRow::GetAvailableLength  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetAvailableLength(BOOL bUseVirtualRect = FALSE) const;

 
```  
  
### Parameters  
 [in] `bUseVirtualRect`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__getavailablespace"></a>  CDockingPanesRow::GetAvailableSpace  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void GetAvailableSpace(CRect& rect);
```  
  
### Parameters  
 [in] `rect`  
  
### Remarks  
  
##  <a name="cdockingpanesrow__getclientrect"></a>  CDockingPanesRow::GetClientRect  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void GetClientRect(CRect& rect) const;

 
```  
  
### Parameters  
 [in] `rect`  
  
### Remarks  
  
##  <a name="cdockingpanesrow__getdocksite"></a>  CDockingPanesRow::GetDockSite  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CDockSite* GetDockSite() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__getextraspace"></a>  CDockingPanesRow::GetExtraSpace  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetExtraSpace() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__getgroupfrompane"></a>  CDockingPanesRow::GetGroupFromPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void GetGroupFromPane(
    CPane* pBar,  
    CObList& lst);
```  
  
### Parameters  
 [in] `pBar`  
 [in] `lst`  
  
### Remarks  
  
##  <a name="cdockingpanesrow__getid"></a>  CDockingPanesRow::GetID  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetID() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__getmaxpanesize"></a>  CDockingPanesRow::GetMaxPaneSize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetMaxPaneSize(BOOL bSkipHiddenBars = TRUE) const;

 
```  
  
### Parameters  
 [in] `bSkipHiddenBars`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__getpanecount"></a>  CDockingPanesRow::GetPaneCount  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetPaneCount() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__getpanelist"></a>  CDockingPanesRow::GetPaneList  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
const CObList& GetPaneList() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__getrowalignment"></a>  CDockingPanesRow::GetRowAlignment  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
DWORD GetRowAlignment() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__getrowheight"></a>  CDockingPanesRow::GetRowHeight  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetRowHeight() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__getrowoffset"></a>  CDockingPanesRow::GetRowOffset  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetRowOffset() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__getvisiblecount"></a>  CDockingPanesRow::GetVisibleCount  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetVisibleCount();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__getwindowrect"></a>  CDockingPanesRow::GetWindowRect  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void GetWindowRect(CRect& rect) const;

 
```  
  
### Parameters  
 [in] `rect`  
  
### Remarks  
  
##  <a name="cdockingpanesrow__haspane"></a>  CDockingPanesRow::HasPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL HasPane(CBasePane* pControlBar);
```  
  
### Parameters  
 [in] `pControlBar`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__isempty"></a>  CDockingPanesRow::IsEmpty  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsEmpty() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__isexclusiverow"></a>  CDockingPanesRow::IsExclusiveRow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsExclusiveRow() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__ishorizontal"></a>  CDockingPanesRow::IsHorizontal  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
bool IsHorizontal() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__isvisible"></a>  CDockingPanesRow::IsVisible  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsVisible() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__move"></a>  CDockingPanesRow::Move  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void Move(int nOffset);
```  
  
### Parameters  
 [in] `nOffset`  
  
### Remarks  
  
##  <a name="cdockingpanesrow__movepane"></a>  CDockingPanesRow::MovePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
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
 [in] `pControlBar`  
 [in] `ptOffset`  
 [in] `bSwapControlBars`  
 [in] `hdwp`  
 [in] `rectTarget`  
 [in] `nOffset`  
 [in] `bForward`  
 [in] `nAbsolutOffset`  
  
### Remarks  
  
##  <a name="cdockingpanesrow__onresizepane"></a>  CDockingPanesRow::OnResizePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnResizePane(CBasePane* pControlBar);
```  
  
### Parameters  
 [in] `pControlBar`  
  
### Remarks  
  
##  <a name="cdockingpanesrow__redrawall"></a>  CDockingPanesRow::RedrawAll  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void RedrawAll();
```  
  
### Remarks  
  
##  <a name="cdockingpanesrow__removepane"></a>  CDockingPanesRow::RemovePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void RemovePane(CPane* pControlBar);
```  
  
### Parameters  
 [in] `pControlBar`  
  
### Remarks  
  
##  <a name="cdockingpanesrow__replacepane"></a>  CDockingPanesRow::ReplacePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL ReplacePane(
    CPane* pBarOld,  
    CPane* pBarNew);
```  
  
### Parameters  
 [in] `pBarOld`  
 [in] `pBarNew`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__repositionpanes"></a>  CDockingPanesRow::RepositionPanes  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void RepositionPanes(
    CRect& rectNewParentBarArea,  
    UINT nSide = (UINT)-1,  
    BOOL bExpand = FALSE,  
    int nOffset = 0);
```  
  
### Parameters  
 [in] `rectNewParentBarArea`  
 [in] `nSide`  
 [in] `bExpand`  
 [in] `nOffset`  
  
### Remarks  
  
##  <a name="cdockingpanesrow__resize"></a>  CDockingPanesRow::Resize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int Resize(int nOffset);
```  
  
### Parameters  
 [in] `nOffset`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__resizebypanedivider"></a>  CDockingPanesRow::ResizeByPaneDivider  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int ResizeByPaneDivider(int);
```  
  
### Parameters  
 [in] `int`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__screentoclient"></a>  CDockingPanesRow::ScreenToClient  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void ScreenToClient(CRect& rect) const;

 
```  
  
### Parameters  
 [in] `rect`  
  
### Remarks  
  
##  <a name="cdockingpanesrow__setextra"></a>  CDockingPanesRow::SetExtra  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetExtra(
    int nExtraSpace,  
    AFX_ROW_ALIGNMENT rowExtraAlign);
```  
  
### Parameters  
 [in] `nExtraSpace`  
 [in] `rowExtraAlign`  
  
### Remarks  
  
##  <a name="cdockingpanesrow__showdocksiterow"></a>  CDockingPanesRow::ShowDockSiteRow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void ShowDockSiteRow(
    BOOL bShow,  
    BOOL bDelay);
```  
  
### Parameters  
 [in] `bShow`  
 [in] `bDelay`  
  
### Remarks  
  
##  <a name="cdockingpanesrow__showpane"></a>  CDockingPanesRow::ShowPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL ShowPane(
    CPane* pControlBar,  
    BOOL bShow,  
    BOOL bDelay = FALSE);
```  
  
### Parameters  
 [in] `pControlBar`  
 [in] `bShow`  
 [in] `bDelay`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__updatevisiblestate"></a>  CDockingPanesRow::UpdateVisibleState  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void UpdateVisibleState(BOOL bDelay);
```  
  
### Parameters  
 [in] `bDelay`  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [CDockSite Class](../../mfc/reference/cdocksite-class.md)   
 [CPane Class](../../mfc/reference/cpane-class.md)
