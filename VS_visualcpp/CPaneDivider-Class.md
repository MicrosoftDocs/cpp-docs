---
title: "CPaneDivider Class"
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
ms.assetid: 8e828a5d-232f-4127-b8e3-7fa45a7a476e
caps.latest.revision: 21
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
# CPaneDivider Class
This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
 The `CPaneDivider` class divides two panes, divides two groups of panes, or separates a group of panes from the client area of the main frame window.  
  
## Syntax  
  
```  
class CPaneDivider : public CBasePane  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CPaneDivider::CPaneDivider](#cpanedivider__cpanedivider)||  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CPaneDivider::AddPaneContainer](#cpanedivider__addpanecontainer)||  
|[CPaneDivider::AddPane](#cpanedivider__addpane)||  
|[CPaneDivider::AddRecentPane](#cpanedivider__addrecentpane)||  
|[CPaneDivider::CalcExpectedDockedRect](#cpanedivider__calcexpecteddockedrect)||  
|[CPaneDivider::CalcFixedLayout](#cpanedivider__calcfixedlayout)|(Overrides [CBasePane::CalcFixedLayout](../VS_visualcpp/CBasePane-Class.md#cbasepane__calcfixedlayout).)|  
|[CPaneDivider::CheckVisibility](#cpanedivider__checkvisibility)||  
|[CPaneDivider::CreateEx](#cpanedivider__createex)|(Overrides [CBasePane::CreateEx](../VS_visualcpp/CBasePane-Class.md#cbasepane__createex).)|  
|[CPaneDivider::DoesAllowDynInsertBefore](#cpanedivider__doesallowdyninsertbefore)|(Overrides [CBasePane::DoesAllowDynInsertBefore](../VS_visualcpp/CBasePane-Class.md#cbasepane__doesallowdyninsertbefore).)|  
|[CPaneDivider::DoesContainFloatingPane](#cpanedivider__doescontainfloatingpane)||  
|[CPaneDivider::FindPaneContainer](#cpanedivider__findpanecontainer)||  
|[CPaneDivider::FindTabbedPane](#cpanedivider__findtabbedpane)||  
|[CPaneDivider::GetDefaultWidth](#cpanedivider__getdefaultwidth)||  
|[CPaneDivider::GetFirstPane](#cpanedivider__getfirstpane)||  
|[CPaneDivider::GetPaneDividerStyle](#cpanedivider__getpanedividerstyle)||  
|[CPaneDivider::GetRootContainerRect](#cpanedivider__getrootcontainerrect)||  
|[CPaneDivider::GetWidth](#cpanedivider__getwidth)||  
|[CPaneDivider::Init](#cpanedivider__init)||  
|[CPaneDivider::InsertPane](#cpanedivider__insertpane)||  
|[CPaneDivider::IsAutoHideMode](#cpanedivider__isautohidemode)|(Overrides [CBasePane::IsAutoHideMode](../VS_visualcpp/CBasePane-Class.md#cbasepane__isautohidemode).)|  
|[CPaneDivider::IsDefault](#cpanedivider__isdefault)||  
|[CPaneDivider::IsHorizontal](#cpanedivider__ishorizontal)|(Overrides [CBasePane::IsHorizontal](../VS_visualcpp/CBasePane-Class.md#cbasepane__ishorizontal).)|  
|[CPaneDivider::Move](#cpanedivider__move)||  
|[CPaneDivider::NotifyAboutRelease](#cpanedivider__notifyaboutrelease)||  
|[CPaneDivider::OnShowPane](#cpanedivider__onshowpane)||  
|[CPaneDivider::ReleaseEmptyPaneContainers](#cpanedivider__releaseemptypanecontainers)||  
|[CPaneDivider::RemovePane](#cpanedivider__removepane)||  
|[CPaneDivider::ReplacePane](#cpanedivider__replacepane)||  
|[CPaneDivider::RepositionPanes](#cpanedivider__repositionpanes)||  
|[CPaneDivider::Serialize](#cpanedivider__serialize)|(Overrides `CBasePane::Serialize`.)|  
|[CPaneDivider::SetAutoHideMode](#cpanedivider__setautohidemode)||  
|[CPaneDivider::SetPaneContainerManager](#cpanedivider__setpanecontainermanager)||  
|[CPaneDivider::ShowWindow](#cpanedivider__showwindow)||  
|[CPaneDivider::StoreRecentDockSiteInfo](#cpanedivider__storerecentdocksiteinfo)||  
|[CPaneDivider::StoreRecentTabRelatedInfo](#cpanedivider__storerecenttabrelatedinfo)||  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CPaneDivider::GetPanes](#cpanedivider__getpanes)|Returns the list of panes that reside in the [CPaneContainer Class](../VS_visualcpp/CPaneContainer-Class.md). This method should be called only for default pane dividers.|  
|[CPaneDivider::GetPaneDividers](#cpanedivider__getpanedividers)|Returns the list of pane dividers that reside in the [CPaneContainer Class](../VS_visualcpp/CPaneContainer-Class.md). This method should be called only for default pane dividers.|  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CPaneDivider::m_nDefaultWidth](#cpanedivider__m_ndefaultwidth)|Specifies the default width in pixels of all pane dividers in the application.|  
|[CPaneDivider::m_pSliderRTC](#cpanedivider__m_psliderrtc)|Holds a pointer to the runtime class information about a `CPaneDivider`-derived object.|  
  
## Remarks  
 The framework creates `CPaneDivider` objects automatically when a pane is docked.  
  
 There are two types of pane dividers:  
  
-   a default pane divider is created when a group of panes is docked to a side of the main frame window. The default pane divider holds a pointer to the [CPaneContainerManager Class](../VS_visualcpp/CPaneContainerManager-Class.md) and redirects most operations on the group of panes (such as resizing a pane, or docking another pane or container) to the container manager. Each docking pane maintains a pointer to its default pane divider.  
  
-   A regular pane divider just divides two panes in a container. For more information, see [CPaneContainer Class](../VS_visualcpp/CPaneContainer-Class.md).  
  
## Example  
 The following example demonstrates how to get a `CPaneDivider` object from a `CWorkspaceBar` object. This code snippet is part of the [MDI Tabs Demo sample](../VS_visualcpp/Visual-C---Samples.md).  
  
 [!CODE [NVC_MFC_MDITabsDemo#5](../CodeSnippet/VS_Snippets_Misc/NVC_MFC_MDITabsDemo#5)]  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md) [CCmdTarget](../VS_visualcpp/CCmdTarget-Class.md) [CWnd](../VS_visualcpp/CWnd-Class.md)  
  
 [CBasePane](../VS_visualcpp/CBasePane-Class.md) [CPaneDivider](../VS_visualcpp/CPaneDivider-Class.md)  
  
## Requirements  
 **Header:** afxPaneDivider.h  
  
##  <a name="cpanedivider__setautohidemode"></a>  CPaneDivider::SetAutoHideMode  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void SetAutoHideMode( BOOL bMode );  
```  
  
### Parameters  
 [in] `bMode`  
  
### Remarks  
  
##  <a name="cpanedivider__setpanecontainermanager"></a>  CPaneDivider::SetPaneContainerManager  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void SetPaneContainerManager( CPaneContainerManager* p );  
```  
  
### Parameters  
 [in] `p`  
  
### Remarks  
  
##  <a name="cpanedivider__addpane"></a>  CPaneDivider::AddPane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void AddPane( CDockablePane* pBar );  
```  
  
### Parameters  
 [in] `pBar`  
  
### Remarks  
  
##  <a name="cpanedivider__addpanecontainer"></a>  CPaneDivider::AddPaneContainer  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL AddPaneContainer(  
    CPaneContainerManager& barContainerManager,  
    BOOL bOuterEdge );  
  
virtual BOOL AddPaneContainer(  
    CDockablePane* pTargetBar,  
    CPaneContainerManager& barContainerManager,  
    DWORD dwAlignment );  
```  
  
### Parameters  
 [in] `barContainerManager`  
  [in] `bOuterEdge`  
  [in] `pTargetBar`  
  [in] `dwAlignment`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanedivider__addrecentpane"></a>  CPaneDivider::AddRecentPane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual CDockablePane* AddRecentPane( CDockablePane* pBar );  
```  
  
### Parameters  
 [in] `pBar`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanedivider__calcexpecteddockedrect"></a>  CPaneDivider::CalcExpectedDockedRect  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void CalcExpectedDockedRect(  
    CWnd* pWndToDock,  
    CPoint ptMouse,  
    CRect& rectResult,  
    BOOL& bDrawTab,  
    CDockablePane** ppTargetBar );  
```  
  
### Parameters  
 [in] `pWndToDock`  
  [in] `ptMouse`  
  [in] `rectResult`  
  [in] `bDrawTab`  
  [in] `ppTargetBar`  
  
### Remarks  
  
##  <a name="cpanedivider__calcfixedlayout"></a>  CPaneDivider::CalcFixedLayout  
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
  
##  <a name="cpanedivider__checkvisibility"></a>  CPaneDivider::CheckVisibility  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL CheckVisibility();  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanedivider__cpanedivider"></a>  CPaneDivider::CPaneDivider  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
CPaneDivider();  
  
CPaneDivider(  
    BOOL bDefaultSlider,  
    CWnd* pParent = NULL);  
```  
  
### Parameters  
 [in] `bDefaultSlider`  
  [in] `pParent`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanedivider__createex"></a>  CPaneDivider::CreateEx  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL CreateEx(  
    DWORD dwStyleEx,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID,  
    CCreateContext* pContext );  
```  
  
### Parameters  
 [in] `dwStyleEx`  
  [in] `dwStyle`  
  [in] `rect`  
  [in] `pParentWnd`  
  [in] `nID`  
  [in] `pContext`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanedivider__doesallowdyninsertbefore"></a>  CPaneDivider::DoesAllowDynInsertBefore  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL DoesAllowDynInsertBefore() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanedivider__doescontainfloatingpane"></a>  CPaneDivider::DoesContainFloatingPane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL DoesContainFloatingPane();  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanedivider__findpanecontainer"></a>  CPaneDivider::FindPaneContainer  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
CPaneContainer* FindPaneContainer(  
    CDockablePane* pBar,  
    BOOL& bLeftBar );  
```  
  
### Parameters  
 [in] `pBar`  
  [in] `bLeftBar`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanedivider__findtabbedpane"></a>  CPaneDivider::FindTabbedPane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
CDockablePane* FindTabbedPane( UINT nID );  
```  
  
### Parameters  
 [in] `nID`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanedivider__getdefaultwidth"></a>  CPaneDivider::GetDefaultWidth  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
static int __stdcall GetDefaultWidth();  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanedivider__getfirstpane"></a>  CPaneDivider::GetFirstPane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
const CBasePane* GetFirstPane() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanedivider__getpanedividers"></a>  CPaneDivider::GetPaneDividers  
 Returns the list of pane dividers that reside in the [CPaneContainer Class](../VS_visualcpp/CPaneContainer-Class.md). This method should be called only for default pane dividers.  
  
```  
void GetPaneDividers( CObList& lstSliders );  
```  
  
### Parameters  
 [out] `lstSliders`  
 Contains the list of pane dividers that reside in the pane container.  
  
### Remarks  
 This method should be called for default pane dividers only. A default pane divider is a divider that resizes the entire pane container.  
  
##  <a name="cpanedivider__getpanedividerstyle"></a>  CPaneDivider::GetPaneDividerStyle  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
DWORD GetPaneDividerStyle() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanedivider__getpanes"></a>  CPaneDivider::GetPanes  
 Returns the list of panes that reside in the [CPaneContainer Class](../VS_visualcpp/CPaneContainer-Class.md). This method should be called only to retrieve default pane dividers.  
  
```  
void GetPanes( CObList& lstBars );  
```  
  
### Parameters  
 [out] `lstBars`  
 Contains the list of panes that reside in the pane container.  
  
### Remarks  
 This method should be called for default pane dividers only. A default pane divider is a divider that resizes the entire pane container.  
  
##  <a name="cpanedivider__getrootcontainerrect"></a>  CPaneDivider::GetRootContainerRect  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
CRect GetRootContainerRect();  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanedivider__getwidth"></a>  CPaneDivider::GetWidth  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
int GetWidth() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanedivider__init"></a>  CPaneDivider::Init  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void Init(  
    BOOL bDefaultSlider = FALSE,  
    CWnd* pParent = NULL);  
```  
  
### Parameters  
 [in] `bDefaultSlider`  
  [in] `pParent`  
  
### Remarks  
  
##  <a name="cpanedivider__insertpane"></a>  CPaneDivider::InsertPane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL InsertPane(  
    CDockablePane* pBarToInsert,  
    CDockablePane* pTargetBar,  
    DWORD dwAlignment,  
    LPCRECT lpRect = NULL);  
```  
  
### Parameters  
 [in] `pBarToInsert`  
  [in] `pTargetBar`  
  [in] `dwAlignment`  
  [in] `lpRect`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanedivider__isautohidemode"></a>  CPaneDivider::IsAutoHideMode  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
BOOL IsAutoHideMode() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanedivider__isdefault"></a>  CPaneDivider::IsDefault  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
BOOL IsDefault() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanedivider__ishorizontal"></a>  CPaneDivider::IsHorizontal  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
BOOL IsHorizontal() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanedivider__m_ndefaultwidth"></a>  CPaneDivider::m_nDefaultWidth  
 Specifies the default width, in pixels, of all pane dividers in the application.  
  
```  
AFX_IMPORT_DATA static int m_nDefaultWidth;  
```  
  
##  <a name="cpanedivider__move"></a>  CPaneDivider::Move  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void Move(  
    CPoint& ptOffset,  
    BOOL bAdjustLayout = TRUE);  
```  
  
### Parameters  
 [in] `ptOffset`  
  [in] `bAdjustLayout`  
  
### Remarks  
  
##  <a name="cpanedivider__m_psliderrtc"></a>  CPaneDivider::m_pSliderRTC  
 Holds a pointer to runtime class information about a `CPaneDivider`-derived object.  
  
```  
AFX_IMPORT_DATA static CRuntimeClass* m_pSliderRTC;  
```  
  
### Remarks  
 Set this member variable if you create a custom pane divider. This enables the framework to create your pane divider when the pane is drawn.  
  
### Example  
 The following example shows how to set the `m_pSliderRTC` member variable:  
  
```  
class CMySplitter : public CPaneDivider  
{  
...  
};  
  
CPaneDivider::m_pSliderRTC = RUNTIME_CLASS(CMySpliter);  
```  
  
##  <a name="cpanedivider__notifyaboutrelease"></a>  CPaneDivider::NotifyAboutRelease  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void NotifyAboutRelease();  
```  
  
### Remarks  
  
##  <a name="cpanedivider__onshowpane"></a>  CPaneDivider::OnShowPane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnShowPane(  
    CDockablePane* pBar,  
    BOOL bShow );  
```  
  
### Parameters  
 [in] `pBar`  
  [in] `bShow`  
  
### Remarks  
  
##  <a name="cpanedivider__releaseemptypanecontainers"></a>  CPaneDivider::ReleaseEmptyPaneContainers  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void ReleaseEmptyPaneContainers();  
```  
  
### Remarks  
  
##  <a name="cpanedivider__removepane"></a>  CPaneDivider::RemovePane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void RemovePane( CDockablePane* pBar );  
```  
  
### Parameters  
 [in] `pBar`  
  
### Remarks  
  
##  <a name="cpanedivider__replacepane"></a>  CPaneDivider::ReplacePane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL ReplacePane(  
    CDockablePane* pBarToReplace,  
    CDockablePane* pBarToReplaceWith );  
```  
  
### Parameters  
 [in] `pBarToReplace`  
  [in] `pBarToReplaceWith`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanedivider__repositionpanes"></a>  CPaneDivider::RepositionPanes  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void RepositionPanes(  
    CRect& rectNew,  
    HDWP& hdwp );  
```  
  
### Parameters  
 [in] `rectNew`  
  [in] `hdwp`  
  
### Remarks  
  
##  <a name="cpanedivider__serialize"></a>  CPaneDivider::Serialize  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void Serialize( CArchive& ar );  
```  
  
### Parameters  
 [in] `ar`  
  
### Remarks  
  
##  <a name="cpanedivider__showwindow"></a>  CPaneDivider::ShowWindow  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void ShowWindow( int nCmdShow );  
```  
  
### Parameters  
 [in] `nCmdShow`  
  
### Remarks  
  
##  <a name="cpanedivider__storerecentdocksiteinfo"></a>  CPaneDivider::StoreRecentDockSiteInfo  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void StoreRecentDockSiteInfo( CDockablePane* pBar );  
```  
  
### Parameters  
 [in] `pBar`  
  
### Remarks  
  
##  <a name="cpanedivider__storerecenttabrelatedinfo"></a>  CPaneDivider::StoreRecentTabRelatedInfo  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void StoreRecentTabRelatedInfo(  
    CDockablePane* pDockingBar,  
    CDockablePane* pTabbedBar );  
```  
  
### Parameters  
 [in] `pDockingBar`  
  [in] `pTabbedBar`  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Classes](../VS_visualcpp/MFC-Classes.md)   
 [CPaneContainerManager Class](../VS_visualcpp/CPaneContainerManager-Class.md)   
 [CPaneContainer Class](../VS_visualcpp/CPaneContainer-Class.md)   
 [CDockingManager Class](../VS_visualcpp/CDockingManager-Class.md)   
 [CBasePane Class](../VS_visualcpp/CBasePane-Class.md)