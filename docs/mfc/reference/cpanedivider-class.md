---
title: "CPaneDivider Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["CPaneDivider", "AFXPANEDIVIDER/CPaneDivider", "AFXPANEDIVIDER/CPaneDivider::CPaneDivider", "AFXPANEDIVIDER/CPaneDivider::AddPaneContainer", "AFXPANEDIVIDER/CPaneDivider::AddPane", "AFXPANEDIVIDER/CPaneDivider::AddRecentPane", "AFXPANEDIVIDER/CPaneDivider::CalcExpectedDockedRect", "AFXPANEDIVIDER/CPaneDivider::CalcFixedLayout", "AFXPANEDIVIDER/CPaneDivider::CheckVisibility", "AFXPANEDIVIDER/CPaneDivider::CreateEx", "AFXPANEDIVIDER/CPaneDivider::DoesAllowDynInsertBefore", "AFXPANEDIVIDER/CPaneDivider::DoesContainFloatingPane", "AFXPANEDIVIDER/CPaneDivider::FindPaneContainer", "AFXPANEDIVIDER/CPaneDivider::FindTabbedPane", "AFXPANEDIVIDER/CPaneDivider::GetDefaultWidth", "AFXPANEDIVIDER/CPaneDivider::GetFirstPane", "AFXPANEDIVIDER/CPaneDivider::GetPaneDividerStyle", "AFXPANEDIVIDER/CPaneDivider::GetRootContainerRect", "AFXPANEDIVIDER/CPaneDivider::GetWidth", "AFXPANEDIVIDER/CPaneDivider::Init", "AFXPANEDIVIDER/CPaneDivider::InsertPane", "AFXPANEDIVIDER/CPaneDivider::IsAutoHideMode", "AFXPANEDIVIDER/CPaneDivider::IsDefault", "AFXPANEDIVIDER/CPaneDivider::IsHorizontal", "AFXPANEDIVIDER/CPaneDivider::Move", "AFXPANEDIVIDER/CPaneDivider::NotifyAboutRelease", "AFXPANEDIVIDER/CPaneDivider::OnShowPane", "AFXPANEDIVIDER/CPaneDivider::ReleaseEmptyPaneContainers", "AFXPANEDIVIDER/CPaneDivider::RemovePane", "AFXPANEDIVIDER/CPaneDivider::ReplacePane", "AFXPANEDIVIDER/CPaneDivider::RepositionPanes", "AFXPANEDIVIDER/CPaneDivider::Serialize", "AFXPANEDIVIDER/CPaneDivider::SetAutoHideMode", "AFXPANEDIVIDER/CPaneDivider::SetPaneContainerManager", "AFXPANEDIVIDER/CPaneDivider::ShowWindow", "AFXPANEDIVIDER/CPaneDivider::StoreRecentDockSiteInfo", "AFXPANEDIVIDER/CPaneDivider::StoreRecentTabRelatedInfo", "AFXPANEDIVIDER/CPaneDivider::GetPanes", "AFXPANEDIVIDER/CPaneDivider::GetPaneDividers", "AFXPANEDIVIDER/CPaneDivider::m_nDefaultWidth", "AFXPANEDIVIDER/CPaneDivider::m_pSliderRTC"]
dev_langs: ["C++"]
helpviewer_keywords: ["CPaneDivider [MFC], CPaneDivider", "CPaneDivider [MFC], AddPaneContainer", "CPaneDivider [MFC], AddPane", "CPaneDivider [MFC], AddRecentPane", "CPaneDivider [MFC], CalcExpectedDockedRect", "CPaneDivider [MFC], CalcFixedLayout", "CPaneDivider [MFC], CheckVisibility", "CPaneDivider [MFC], CreateEx", "CPaneDivider [MFC], DoesAllowDynInsertBefore", "CPaneDivider [MFC], DoesContainFloatingPane", "CPaneDivider [MFC], FindPaneContainer", "CPaneDivider [MFC], FindTabbedPane", "CPaneDivider [MFC], GetDefaultWidth", "CPaneDivider [MFC], GetFirstPane", "CPaneDivider [MFC], GetPaneDividerStyle", "CPaneDivider [MFC], GetRootContainerRect", "CPaneDivider [MFC], GetWidth", "CPaneDivider [MFC], Init", "CPaneDivider [MFC], InsertPane", "CPaneDivider [MFC], IsAutoHideMode", "CPaneDivider [MFC], IsDefault", "CPaneDivider [MFC], IsHorizontal", "CPaneDivider [MFC], Move", "CPaneDivider [MFC], NotifyAboutRelease", "CPaneDivider [MFC], OnShowPane", "CPaneDivider [MFC], ReleaseEmptyPaneContainers", "CPaneDivider [MFC], RemovePane", "CPaneDivider [MFC], ReplacePane", "CPaneDivider [MFC], RepositionPanes", "CPaneDivider [MFC], Serialize", "CPaneDivider [MFC], SetAutoHideMode", "CPaneDivider [MFC], SetPaneContainerManager", "CPaneDivider [MFC], ShowWindow", "CPaneDivider [MFC], StoreRecentDockSiteInfo", "CPaneDivider [MFC], StoreRecentTabRelatedInfo", "CPaneDivider [MFC], GetPanes", "CPaneDivider [MFC], GetPaneDividers", "CPaneDivider [MFC], m_nDefaultWidth", "CPaneDivider [MFC], m_pSliderRTC"]
ms.assetid: 8e828a5d-232f-4127-b8e3-7fa45a7a476e
caps.latest.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# CPaneDivider Class
[!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
 The `CPaneDivider` class divides two panes, divides two groups of panes, or separates a group of panes from the client area of the main frame window.  
  
## Syntax  
  
```  
class CPaneDivider : public CBasePane  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CPaneDivider::CPaneDivider](#cpanedivider)||  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CPaneDivider::AddPaneContainer](#addpanecontainer)||  
|[CPaneDivider::AddPane](#addpane)||  
|[CPaneDivider::AddRecentPane](#addrecentpane)||  
|[CPaneDivider::CalcExpectedDockedRect](#calcexpecteddockedrect)||  
|[CPaneDivider::CalcFixedLayout](#calcfixedlayout)|(Overrides [CBasePane::CalcFixedLayout](../../mfc/reference/cbasepane-class.md#calcfixedlayout).)|  
|[CPaneDivider::CheckVisibility](#checkvisibility)||  
|[CPaneDivider::CreateEx](#createex)|(Overrides [CBasePane::CreateEx](../../mfc/reference/cbasepane-class.md#createex).)|  
|[CPaneDivider::DoesAllowDynInsertBefore](#doesallowdyninsertbefore)|(Overrides [CBasePane::DoesAllowDynInsertBefore](../../mfc/reference/cbasepane-class.md#doesallowdyninsertbefore).)|  
|[CPaneDivider::DoesContainFloatingPane](#doescontainfloatingpane)||  
|[CPaneDivider::FindPaneContainer](#findpanecontainer)||  
|[CPaneDivider::FindTabbedPane](#findtabbedpane)||  
|[CPaneDivider::GetDefaultWidth](#getdefaultwidth)||  
|[CPaneDivider::GetFirstPane](#getfirstpane)||  
|[CPaneDivider::GetPaneDividerStyle](#getpanedividerstyle)||  
|[CPaneDivider::GetRootContainerRect](#getrootcontainerrect)||  
|[CPaneDivider::GetWidth](#getwidth)||  
|[CPaneDivider::Init](#init)||  
|[CPaneDivider::InsertPane](#insertpane)||  
|[CPaneDivider::IsAutoHideMode](#isautohidemode)|(Overrides [CBasePane::IsAutoHideMode](../../mfc/reference/cbasepane-class.md#isautohidemode).)|  
|[CPaneDivider::IsDefault](#isdefault)||  
|[CPaneDivider::IsHorizontal](#ishorizontal)|(Overrides [CBasePane::IsHorizontal](../../mfc/reference/cbasepane-class.md#ishorizontal).)|  
|[CPaneDivider::Move](#move)||  
|[CPaneDivider::NotifyAboutRelease](#notifyaboutrelease)||  
|[CPaneDivider::OnShowPane](#onshowpane)||  
|[CPaneDivider::ReleaseEmptyPaneContainers](#releaseemptypanecontainers)||  
|[CPaneDivider::RemovePane](#removepane)||  
|[CPaneDivider::ReplacePane](#replacepane)||  
|[CPaneDivider::RepositionPanes](#repositionpanes)||  
|[CPaneDivider::Serialize](#serialize)|(Overrides `CBasePane::Serialize`.)|  
|[CPaneDivider::SetAutoHideMode](#setautohidemode)||  
|[CPaneDivider::SetPaneContainerManager](#setpanecontainermanager)||  
|[CPaneDivider::ShowWindow](#showwindow)||  
|[CPaneDivider::StoreRecentDockSiteInfo](#storerecentdocksiteinfo)||  
|[CPaneDivider::StoreRecentTabRelatedInfo](#storerecenttabrelatedinfo)||  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CPaneDivider::GetPanes](#getpanes)|Returns the list of panes that reside in the [CPaneContainer Class](../../mfc/reference/cpanecontainer-class.md). This method should be called only for default pane dividers.|  
|[CPaneDivider::GetPaneDividers](#getpanedividers)|Returns the list of pane dividers that reside in the [CPaneContainer Class](../../mfc/reference/cpanecontainer-class.md). This method should be called only for default pane dividers.|  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CPaneDivider::m_nDefaultWidth](#m_ndefaultwidth)|Specifies the default width in pixels of all pane dividers in the application.|  
|[CPaneDivider::m_pSliderRTC](#m_psliderrtc)|Holds a pointer to the runtime class information about a `CPaneDivider`-derived object.|  
  
## Remarks  
 The framework creates `CPaneDivider` objects automatically when a pane is docked.  
  
 There are two types of pane dividers:  
  
-   a default pane divider is created when a group of panes is docked to a side of the main frame window. The default pane divider holds a pointer to the [CPaneContainerManager Class](../../mfc/reference/cpanecontainermanager-class.md) and redirects most operations on the group of panes (such as resizing a pane, or docking another pane or container) to the container manager. Each docking pane maintains a pointer to its default pane divider.  
  
-   A regular pane divider just divides two panes in a container. For more information, see [CPaneContainer Class](../../mfc/reference/cpanecontainer-class.md).  
  
## Example  
 The following example demonstrates how to get a `CPaneDivider` object from a `CWorkspaceBar` object. This code snippet is part of the [MDI Tabs Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_MDITabsDemo#5](../../mfc/reference/codesnippet/cpp/cpanedivider-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md) [CCmdTarget](../../mfc/reference/ccmdtarget-class.md) [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md) [CPaneDivider](../../mfc/reference/cpanedivider-class.md)  
  
## Requirements  
 **Header:** afxPaneDivider.h  
  
##  <a name="setautohidemode"></a>  CPaneDivider::SetAutoHideMode  

  
```  
void SetAutoHideMode(BOOL bMode);
```  
  
### Parameters  
 [in] `bMode`  
  
### Remarks  
  
##  <a name="setpanecontainermanager"></a>  CPaneDivider::SetPaneContainerManager  

  
```  
void SetPaneContainerManager(CPaneContainerManager* p);
```  
  
### Parameters  
 [in] `p`  
  
### Remarks  
  
##  <a name="addpane"></a>  CPaneDivider::AddPane  

  
```  
virtual void AddPane(CDockablePane* pBar);
```  
  
### Parameters  
 [in] `pBar`  
  
### Remarks  
  
##  <a name="addpanecontainer"></a>  CPaneDivider::AddPaneContainer  

  
```  
virtual BOOL AddPaneContainer(
    CPaneContainerManager& barContainerManager,  
    BOOL bOuterEdge);

 
virtual BOOL AddPaneContainer(
    CDockablePane* pTargetBar,  
    CPaneContainerManager& barContainerManager,  
    DWORD dwAlignment);
```  
  
### Parameters  
 [in] `barContainerManager`  
 [in] `bOuterEdge`  
 [in] `pTargetBar`  
 [in] `dwAlignment`  
  
### Return Value  
  
### Remarks  
  
##  <a name="addrecentpane"></a>  CPaneDivider::AddRecentPane  

  
```  
virtual CDockablePane* AddRecentPane(CDockablePane* pBar);
```  
  
### Parameters  
 [in] `pBar`  
  
### Return Value  
  
### Remarks  
  
##  <a name="calcexpecteddockedrect"></a>  CPaneDivider::CalcExpectedDockedRect  

  
```  
virtual void CalcExpectedDockedRect(
    CWnd* pWndToDock,  
    CPoint ptMouse,  
    CRect& rectResult,  
    BOOL& bDrawTab,  
    CDockablePane** ppTargetBar);
```  
  
### Parameters  
 [in] `pWndToDock`  
 [in] `ptMouse`  
 [in] `rectResult`  
 [in] `bDrawTab`  
 [in] `ppTargetBar`  
  
### Remarks  
  
##  <a name="calcfixedlayout"></a>  CPaneDivider::CalcFixedLayout  

  
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
  
##  <a name="checkvisibility"></a>  CPaneDivider::CheckVisibility  

  
```  
virtual BOOL CheckVisibility();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanedivider"></a>  CPaneDivider::CPaneDivider  

  
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
  
##  <a name="createex"></a>  CPaneDivider::CreateEx  

  
```  
virtual BOOL CreateEx(
    DWORD dwStyleEx,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID,  
    CCreateContext* pContext);
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
  
##  <a name="doesallowdyninsertbefore"></a>  CPaneDivider::DoesAllowDynInsertBefore  

  
```  
virtual BOOL DoesAllowDynInsertBefore() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="doescontainfloatingpane"></a>  CPaneDivider::DoesContainFloatingPane  

  
```  
virtual BOOL DoesContainFloatingPane();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="findpanecontainer"></a>  CPaneDivider::FindPaneContainer  

  
```  
CPaneContainer* FindPaneContainer(
    CDockablePane* pBar,  
    BOOL& bLeftBar);
```  
  
### Parameters  
 [in] `pBar`  
 [in] `bLeftBar`  
  
### Return Value  
  
### Remarks  
  
##  <a name="findtabbedpane"></a>  CPaneDivider::FindTabbedPane  

  
```  
CDockablePane* FindTabbedPane(UINT nID);
```  
  
### Parameters  
 [in] `nID`  
  
### Return Value  
  
### Remarks  
  
##  <a name="getdefaultwidth"></a>  CPaneDivider::GetDefaultWidth  

  
```  
static int __stdcall GetDefaultWidth();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getfirstpane"></a>  CPaneDivider::GetFirstPane  

  
```  
const CBasePane* GetFirstPane() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getpanedividers"></a>  CPaneDivider::GetPaneDividers  
 Returns the list of pane dividers that reside in the [CPaneContainer Class](../../mfc/reference/cpanecontainer-class.md). This method should be called only for default pane dividers.  
  
```  
void GetPaneDividers(CObList& lstSliders);
```  
  
### Parameters  
 [out] `lstSliders`  
 Contains the list of pane dividers that reside in the pane container.  
  
### Remarks  
 This method should be called for default pane dividers only. A default pane divider is a divider that resizes the entire pane container.  
  
##  <a name="getpanedividerstyle"></a>  CPaneDivider::GetPaneDividerStyle  

  
```  
DWORD GetPaneDividerStyle() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getpanes"></a>  CPaneDivider::GetPanes  
 Returns the list of panes that reside in the [CPaneContainer Class](../../mfc/reference/cpanecontainer-class.md). This method should be called only to retrieve default pane dividers.  
  
```  
void GetPanes(CObList& lstBars);
```  
  
### Parameters  
 [out] `lstBars`  
 Contains the list of panes that reside in the pane container.  
  
### Remarks  
 This method should be called for default pane dividers only. A default pane divider is a divider that resizes the entire pane container.  
  
##  <a name="getrootcontainerrect"></a>  CPaneDivider::GetRootContainerRect  

  
```  
CRect GetRootContainerRect();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getwidth"></a>  CPaneDivider::GetWidth  

  
```  
int GetWidth() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="init"></a>  CPaneDivider::Init  

  
```  
void Init(
    BOOL bDefaultSlider = FALSE,  
    CWnd* pParent = NULL);
```  
  
### Parameters  
 [in] `bDefaultSlider`  
 [in] `pParent`  
  
### Remarks  
  
##  <a name="insertpane"></a>  CPaneDivider::InsertPane  

  
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
  
##  <a name="isautohidemode"></a>  CPaneDivider::IsAutoHideMode  

  
```  
BOOL IsAutoHideMode() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="isdefault"></a>  CPaneDivider::IsDefault  

  
```  
BOOL IsDefault() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="ishorizontal"></a>  CPaneDivider::IsHorizontal  

  
```  
BOOL IsHorizontal() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="m_ndefaultwidth"></a>  CPaneDivider::m_nDefaultWidth  
 Specifies the default width, in pixels, of all pane dividers in the application.  
  
```  
AFX_IMPORT_DATA static int m_nDefaultWidth;  
```  
  
##  <a name="move"></a>  CPaneDivider::Move  

  
```  
virtual void Move(
    CPoint& ptOffset,  
    BOOL bAdjustLayout = TRUE);
```  
  
### Parameters  
 [in] `ptOffset`  
 [in] `bAdjustLayout`  
  
### Remarks  
  
##  <a name="m_psliderrtc"></a>  CPaneDivider::m_pSliderRTC  
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
  
##  <a name="notifyaboutrelease"></a>  CPaneDivider::NotifyAboutRelease  

  
```  
virtual void NotifyAboutRelease();
```  
  
### Remarks  
  
##  <a name="onshowpane"></a>  CPaneDivider::OnShowPane  

  
```  
virtual void OnShowPane(
    CDockablePane* pBar,  
    BOOL bShow);
```  
  
### Parameters  
 [in] `pBar`  
 [in] `bShow`  
  
### Remarks  
  
##  <a name="releaseemptypanecontainers"></a>  CPaneDivider::ReleaseEmptyPaneContainers  

  
```  
void ReleaseEmptyPaneContainers();
```  
  
### Remarks  
  
##  <a name="removepane"></a>  CPaneDivider::RemovePane  

  
```  
virtual void RemovePane(CDockablePane* pBar);
```  
  
### Parameters  
 [in] `pBar`  
  
### Remarks  
  
##  <a name="replacepane"></a>  CPaneDivider::ReplacePane  

  
```  
virtual BOOL ReplacePane(
    CDockablePane* pBarToReplace,  
    CDockablePane* pBarToReplaceWith);
```  
  
### Parameters  
 [in] `pBarToReplace`  
 [in] `pBarToReplaceWith`  
  
### Return Value  
  
### Remarks  
  
##  <a name="repositionpanes"></a>  CPaneDivider::RepositionPanes  

  
```  
virtual void RepositionPanes(
    CRect& rectNew,  
    HDWP& hdwp);
```  
  
### Parameters  
 [in] `rectNew`  
 [in] `hdwp`  
  
### Remarks  
  
##  <a name="serialize"></a>  CPaneDivider::Serialize  

  
```  
void Serialize(CArchive& ar);
```  
  
### Parameters  
 [in] `ar`  
  
### Remarks  
  
##  <a name="showwindow"></a>  CPaneDivider::ShowWindow  

  
```  
void ShowWindow(int nCmdShow);
```  
  
### Parameters  
 [in] `nCmdShow`  
  
### Remarks  
  
##  <a name="storerecentdocksiteinfo"></a>  CPaneDivider::StoreRecentDockSiteInfo  

  
```  
void StoreRecentDockSiteInfo(CDockablePane* pBar);
```  
  
### Parameters  
 [in] `pBar`  
  
### Remarks  
  
##  <a name="storerecenttabrelatedinfo"></a>  CPaneDivider::StoreRecentTabRelatedInfo  

  
```  
void StoreRecentTabRelatedInfo(
    CDockablePane* pDockingBar,  
    CDockablePane* pTabbedBar);
```  
  
### Parameters  
 [in] `pDockingBar`  
 [in] `pTabbedBar`  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CPaneContainerManager Class](../../mfc/reference/cpanecontainermanager-class.md)   
 [CPaneContainer Class](../../mfc/reference/cpanecontainer-class.md)   
 [CDockingManager Class](../../mfc/reference/cdockingmanager-class.md)   
 [CBasePane Class](../../mfc/reference/cbasepane-class.md)
