---
title: "CDockingPanesRow Class"
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
ms.assetid: e7a17832-0ebb-4bce-b799-cec9b60f76fe
caps.latest.revision: 22
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
  
 [!CODE [NVC_MFC_RibbonApp#26](../CodeSnippet/VS_Snippets_Misc/NVC_MFC_RibbonApp#26)]  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CDockingPanesRow](../VS_visualcpp/CDockingPanesRow-Class.md)  
  
## Requirements  
 **Header:** afxDockingPanesRow.h  
  
##  <a name="cdockingpanesrow__addpane"></a>  CDockingPanesRow::AddPane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
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
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void AddPaneFromRow(  
    CPane* pControlBar,  
    AFX_DOCK_METHOD dockMethod );  
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
    int nSpacing );  
```  
  
### Parameters  
 [in] `nMargin`  
 Specifies the offset, in pixels, of the first pane from the upper-left corner of the row.  
  
 [in] `nSpacing`  
 Specifies the spacing, in pixels, between panes.  
  
### Remarks  
 Call this method to arrange panes in the row where they will dock. After calling this method, you must call `CDockingPanesRow::FixupVirtualRects(FALSE, NULL)`.  
  
##  <a name="cdockingpanesrow__calcfixedlayout"></a>  CDockingPanesRow::CalcFixedLayout  
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
  
##  <a name="cdockingpanesrow__cdockingpanesrow"></a>  CDockingPanesRow::CDockingPanesRow  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
CDockingPanesRow(  
    CDockSite* pParentDockBar,  
    int nOffset,  
    int nHeight );  
```  
  
### Parameters  
 [in] `pParentDockBar`  
  [in] `nOffset`  
  [in] `nHeight`  
  
### Remarks  
  
##  <a name="cdockingpanesrow__create"></a>  CDockingPanesRow::Create  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL Create();  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__expandstretchedpanes"></a>  CDockingPanesRow::ExpandStretchedPanes  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void ExpandStretchedPanes();  
```  
  
### Remarks  
  
##  <a name="cdockingpanesrow__expandstretchedpanesrect"></a>  CDockingPanesRow::ExpandStretchedPanesRect  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void ExpandStretchedPanesRect();  
```  
  
### Remarks  
  
##  <a name="cdockingpanesrow__fixupvirtualrects"></a>  CDockingPanesRow::FixupVirtualRects  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
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
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual int GetAvailableLength(  
    BOOL bUseVirtualRect = FALSE  
) const;  
```  
  
### Parameters  
 [in] `bUseVirtualRect`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__getavailablespace"></a>  CDockingPanesRow::GetAvailableSpace  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void GetAvailableSpace( CRect& rect );  
```  
  
### Parameters  
 [in] `rect`  
  
### Remarks  
  
##  <a name="cdockingpanesrow__getclientrect"></a>  CDockingPanesRow::GetClientRect  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void GetClientRect( CRect& rect ) const;  
```  
  
### Parameters  
 [in] `rect`  
  
### Remarks  
  
##  <a name="cdockingpanesrow__getdocksite"></a>  CDockingPanesRow::GetDockSite  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
CDockSite* GetDockSite() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__getextraspace"></a>  CDockingPanesRow::GetExtraSpace  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
int GetExtraSpace() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__getgroupfrompane"></a>  CDockingPanesRow::GetGroupFromPane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void GetGroupFromPane(  
    CPane* pBar,  
    CObList& lst );  
```  
  
### Parameters  
 [in] `pBar`  
  [in] `lst`  
  
### Remarks  
  
##  <a name="cdockingpanesrow__getid"></a>  CDockingPanesRow::GetID  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
int GetID() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__getmaxpanesize"></a>  CDockingPanesRow::GetMaxPaneSize  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
int GetMaxPaneSize(  
    BOOL bSkipHiddenBars = TRUE  
) const;  
```  
  
### Parameters  
 [in] `bSkipHiddenBars`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__getpanecount"></a>  CDockingPanesRow::GetPaneCount  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
int GetPaneCount() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__getpanelist"></a>  CDockingPanesRow::GetPaneList  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
const CObList& GetPaneList() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__getrowalignment"></a>  CDockingPanesRow::GetRowAlignment  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
DWORD GetRowAlignment() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__getrowheight"></a>  CDockingPanesRow::GetRowHeight  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
int GetRowHeight() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__getrowoffset"></a>  CDockingPanesRow::GetRowOffset  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
int GetRowOffset() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__getvisiblecount"></a>  CDockingPanesRow::GetVisibleCount  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual int GetVisibleCount();  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__getwindowrect"></a>  CDockingPanesRow::GetWindowRect  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void GetWindowRect( CRect& rect ) const;  
```  
  
### Parameters  
 [in] `rect`  
  
### Remarks  
  
##  <a name="cdockingpanesrow__haspane"></a>  CDockingPanesRow::HasPane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
BOOL HasPane( CBasePane* pControlBar );  
```  
  
### Parameters  
 [in] `pControlBar`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__isempty"></a>  CDockingPanesRow::IsEmpty  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL IsEmpty() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__isexclusiverow"></a>  CDockingPanesRow::IsExclusiveRow  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL IsExclusiveRow() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__ishorizontal"></a>  CDockingPanesRow::IsHorizontal  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
bool IsHorizontal() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__isvisible"></a>  CDockingPanesRow::IsVisible  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL IsVisible() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__move"></a>  CDockingPanesRow::Move  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void Move( int nOffset );  
```  
  
### Parameters  
 [in] `nOffset`  
  
### Remarks  
  
##  <a name="cdockingpanesrow__movepane"></a>  CDockingPanesRow::MovePane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void MovePane(  
    CPane* pControlBar,  
    CPoint ptOffset,  
    BOOL bSwapControlBars,  
    HDWP& hdwp );  
  
void MovePane(  
    CPane* pControlBar,  
    CRect rectTarget,  
    HDWP& hdwp );  
  
void MovePane(  
    CPane* pControlBar,  
    int nOffset,  
    bool bForward,  
    HDWP& hdwp );  
  
void MovePane(  
    CPane* pControlBar,  
    int nAbsolutOffset,  
    HDWP& hdwp );  
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
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnResizePane( CBasePane* pControlBar );  
```  
  
### Parameters  
 [in] `pControlBar`  
  
### Remarks  
  
##  <a name="cdockingpanesrow__redrawall"></a>  CDockingPanesRow::RedrawAll  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void RedrawAll();  
```  
  
### Remarks  
  
##  <a name="cdockingpanesrow__removepane"></a>  CDockingPanesRow::RemovePane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void RemovePane( CPane* pControlBar );  
```  
  
### Parameters  
 [in] `pControlBar`  
  
### Remarks  
  
##  <a name="cdockingpanesrow__replacepane"></a>  CDockingPanesRow::ReplacePane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL ReplacePane(  
    CPane* pBarOld,  
    CPane* pBarNew );  
```  
  
### Parameters  
 [in] `pBarOld`  
  [in] `pBarNew`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__repositionpanes"></a>  CDockingPanesRow::RepositionPanes  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
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
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual int Resize( int nOffset );  
```  
  
### Parameters  
 [in] `nOffset`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__resizebypanedivider"></a>  CDockingPanesRow::ResizeByPaneDivider  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual int ResizeByPaneDivider( int );  
```  
  
### Parameters  
 [in] `int`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cdockingpanesrow__screentoclient"></a>  CDockingPanesRow::ScreenToClient  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void ScreenToClient( CRect& rect ) const;  
```  
  
### Parameters  
 [in] `rect`  
  
### Remarks  
  
##  <a name="cdockingpanesrow__setextra"></a>  CDockingPanesRow::SetExtra  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void SetExtra(  
    int nExtraSpace,  
    AFX_ROW_ALIGNMENT rowExtraAlign );  
```  
  
### Parameters  
 [in] `nExtraSpace`  
  [in] `rowExtraAlign`  
  
### Remarks  
  
##  <a name="cdockingpanesrow__showdocksiterow"></a>  CDockingPanesRow::ShowDockSiteRow  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void ShowDockSiteRow(  
    BOOL bShow,  
    BOOL bDelay );  
```  
  
### Parameters  
 [in] `bShow`  
  [in] `bDelay`  
  
### Remarks  
  
##  <a name="cdockingpanesrow__showpane"></a>  CDockingPanesRow::ShowPane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
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
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void UpdateVisibleState( BOOL bDelay );  
```  
  
### Parameters  
 [in] `bDelay`  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Classes](../VS_visualcpp/MFC-Classes.md)   
 [CObject Class](../VS_visualcpp/CObject-Class.md)   
 [CDockSite Class](../VS_visualcpp/CDockSite-Class.md)   
 [CPane Class](../VS_visualcpp/CPane-Class.md)