---
title: "CPaneContainer Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ['CPaneContainer', 'AFXPANECONTAINER/CPaneContainer', 'AFXPANECONTAINER/CPaneContainer::CPaneContainer', 'AFXPANECONTAINER/CPaneContainer::AddPane', 'AFXPANECONTAINER/CPaneContainer::AddRef', 'AFXPANECONTAINER/CPaneContainer::AddSubPaneContainer', 'AFXPANECONTAINER/CPaneContainer::CalcAvailablePaneSpace', 'AFXPANECONTAINER/CPaneContainer::CalcAvailableSpace', 'AFXPANECONTAINER/CPaneContainer::CalculateRecentSize', 'AFXPANECONTAINER/CPaneContainer::CheckPaneDividerVisibility', 'AFXPANECONTAINER/CPaneContainer::Copy', 'AFXPANECONTAINER/CPaneContainer::DeletePane', 'AFXPANECONTAINER/CPaneContainer::FindSubPaneContainer', 'AFXPANECONTAINER/CPaneContainer::FindTabbedPane', 'AFXPANECONTAINER/CPaneContainer::GetAssociatedSiblingPaneIDs', 'AFXPANECONTAINER/CPaneContainer::GetLeftPane', 'AFXPANECONTAINER/CPaneContainer::GetLeftPaneContainer', 'AFXPANECONTAINER/CPaneContainer::GetMinSize', 'AFXPANECONTAINER/CPaneContainer::GetMinSizeLeft', 'AFXPANECONTAINER/CPaneContainer::GetMinSizeRight', 'AFXPANECONTAINER/CPaneContainer::GetNodeCount', 'AFXPANECONTAINER/CPaneContainer::GetPaneDivider', 'AFXPANECONTAINER/CPaneContainer::GetParentPaneContainer', 'AFXPANECONTAINER/CPaneContainer::GetRecentPaneDividerRect', 'AFXPANECONTAINER/CPaneContainer::GetRecentPaneDividerStyle', 'AFXPANECONTAINER/CPaneContainer::GetRecentPercent', 'AFXPANECONTAINER/CPaneContainer::GetRefCount', 'AFXPANECONTAINER/CPaneContainer::GetResizeStep', 'AFXPANECONTAINER/CPaneContainer::GetRightPane', 'AFXPANECONTAINER/CPaneContainer::GetRightPaneContainer', 'AFXPANECONTAINER/CPaneContainer::GetTotalReferenceCount', 'AFXPANECONTAINER/CPaneContainer::GetWindowRect', 'AFXPANECONTAINER/CPaneContainer::IsDisposed', 'AFXPANECONTAINER/CPaneContainer::IsEmpty', 'AFXPANECONTAINER/CPaneContainer::IsLeftPane', 'AFXPANECONTAINER/CPaneContainer::IsLeftPaneContainer', 'AFXPANECONTAINER/CPaneContainer::IsLeftPartEmpty', 'AFXPANECONTAINER/CPaneContainer::IsRightPartEmpty', 'AFXPANECONTAINER/CPaneContainer::IsVisible', 'AFXPANECONTAINER/CPaneContainer::Move', 'AFXPANECONTAINER/CPaneContainer::OnDeleteHidePane', 'AFXPANECONTAINER/CPaneContainer::OnMoveInternalPaneDivider', 'AFXPANECONTAINER/CPaneContainer::OnShowPane', 'AFXPANECONTAINER/CPaneContainer::Release', 'AFXPANECONTAINER/CPaneContainer::ReleaseEmptyPaneContainer', 'AFXPANECONTAINER/CPaneContainer::RemoveNonValidPanes', 'AFXPANECONTAINER/CPaneContainer::RemovePane', 'AFXPANECONTAINER/CPaneContainer::Resize', 'AFXPANECONTAINER/CPaneContainer::ResizePane', 'AFXPANECONTAINER/CPaneContainer::ResizePartOfPaneContainer', 'AFXPANECONTAINER/CPaneContainer::Serialize', 'AFXPANECONTAINER/CPaneContainer::SetPane', 'AFXPANECONTAINER/CPaneContainer::SetPaneContainer', 'AFXPANECONTAINER/CPaneContainer::SetPaneDivider', 'AFXPANECONTAINER/CPaneContainer::SetParentPaneContainer', 'AFXPANECONTAINER/CPaneContainer::SetRecentPercent', 'AFXPANECONTAINER/CPaneContainer::SetUpByID', 'AFXPANECONTAINER/CPaneContainer::StoreRecentDockSiteInfo', 'AFXPANECONTAINER/CPaneContainer::StretchPaneContainer']
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CPaneContainer class"
ms.assetid: beb79e08-f611-4d66-ba04-053baa79bf86
caps.latest.revision: 32
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
# CPaneContainer Class
The `CPaneContainer` class is a basic component of the docking model implemented by MFC. An object of this class stores pointers to two docking panes or to two instances of `CPaneContainer.` It also stores a pointer to the divider that separates the panes (or the containers). By nesting containers inside containers, the framework can build a binary tree that represents complex docking layouts. The root of the binary tree is stored in a [CPaneContainerManager](../../mfc/reference/cpanecontainermanager-class.md) object.  
  
## Syntax  
  
```  
class CPaneContainer : public CObject    
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CPaneContainer::CPaneContainer](#cpanecontainer)|Default constructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CPaneContainer::AddPane](#addpane)||  
|[CPaneContainer::AddRef](#addref)||  
|[CPaneContainer::AddSubPaneContainer](#addsubpanecontainer)||  
|[CPaneContainer::CalcAvailablePaneSpace](#calcavailablepanespace)||  
|[CPaneContainer::CalcAvailableSpace](#calcavailablespace)||  
|[CPaneContainer::CalculateRecentSize](#calculaterecentsize)||  
|[CPaneContainer::CheckPaneDividerVisibility](#checkpanedividervisibility)||  
|[CPaneContainer::Copy](#copy)||  
|[CPaneContainer::DeletePane](#deletepane)||  
|[CPaneContainer::FindSubPaneContainer](#findsubpanecontainer)||  
|[CPaneContainer::FindTabbedPane](#findtabbedpane)||  
|[CPaneContainer::GetAssociatedSiblingPaneIDs](#getassociatedsiblingpaneids)||  
|[CPaneContainer::GetLeftPane](#getleftpane)||  
|[CPaneContainer::GetLeftPaneContainer](#getleftpanecontainer)||  
|[CPaneContainer::GetMinSize](#getminsize)||  
|[CPaneContainer::GetMinSizeLeft](#getminsizeleft)||  
|[CPaneContainer::GetMinSizeRight](#getminsizeright)||  
|[CPaneContainer::GetNodeCount](#getnodecount)||  
|[CPaneContainer::GetPaneDivider](#getpanedivider)||  
|[CPaneContainer::GetParentPaneContainer](#getparentpanecontainer)||  
|[CPaneContainer::GetRecentPaneDividerRect](#getrecentpanedividerrect)||  
|[CPaneContainer::GetRecentPaneDividerStyle](#getrecentpanedividerstyle)||  
|[CPaneContainer::GetRecentPercent](#getrecentpercent)||  
|[CPaneContainer::GetRefCount](#getrefcount)||  
|[CPaneContainer::GetResizeStep](#getresizestep)||  
|[CPaneContainer::GetRightPane](#getrightpane)||  
|[CPaneContainer::GetRightPaneContainer](#getrightpanecontainer)||  
|[CPaneContainer::GetTotalReferenceCount](#gettotalreferencecount)||  
|[CPaneContainer::GetWindowRect](#getwindowrect)||  
|[CPaneContainer::IsDisposed](#isdisposed)||  
|[CPaneContainer::IsEmpty](#isempty)||  
|[CPaneContainer::IsLeftPane](#isleftpane)||  
|[CPaneContainer::IsLeftPaneContainer](#isleftpanecontainer)||  
|[CPaneContainer::IsLeftPartEmpty](#isleftpartempty)||  
|[CPaneContainer::IsRightPartEmpty](#isrightpartempty)||  
|[CPaneContainer::IsVisible](#isvisible)||  
|[CPaneContainer::Move](#move)||  
|[CPaneContainer::OnDeleteHidePane](#ondeletehidepane)||  
|[CPaneContainer::OnMoveInternalPaneDivider](#onmoveinternalpanedivider)||  
|[CPaneContainer::OnShowPane](#onshowpane)||  
|[CPaneContainer::Release](#release)||  
|[CPaneContainer::ReleaseEmptyPaneContainer](#releaseemptypanecontainer)||  
|[CPaneContainer::RemoveNonValidPanes](#removenonvalidpanes)||  
|[CPaneContainer::RemovePane](#removepane)||  
|[CPaneContainer::Resize](#resize)||  
|[CPaneContainer::ResizePane](#resizepane)||  
|[CPaneContainer::ResizePartOfPaneContainer](#resizepartofpanecontainer)||  
|[CPaneContainer::Serialize](#serialize)|Reads or writes this object from or to an archive. (Overrides [CObject::Serialize](../../mfc/reference/cobject-class.md#serialize).)|  
|[CPaneContainer::SetPane](#setpane)||  
|[CPaneContainer::SetPaneContainer](#setpanecontainer)||  
|[CPaneContainer::SetPaneDivider](#setpanedivider)||  
|[CPaneContainer::SetParentPaneContainer](#setparentpanecontainer)||  
|[CPaneContainer::SetRecentPercent](#setrecentpercent)||  
|[CPaneContainer::SetUpByID](#setupbyid)||  
|[CPaneContainer::StoreRecentDockSiteInfo](#storerecentdocksiteinfo)||  
|[CPaneContainer::StretchPaneContainer](#stretchpanecontainer)||  
  
### Remarks  
 `CPaneContainer` objects are created automatically by the framework.  
  
## Example  
 The following example demonstrates how to construct an instance of the `CPaneContainer` class. This code snippet is part of the [Set Pane Size sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_SetPaneSize#2](../../mfc/reference/codesnippet/cpp/cpanecontainer-class_1.h)]  
[!code-cpp[NVC_MFC_SetPaneSize#1](../../mfc/reference/codesnippet/cpp/cpanecontainer-class_2.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CPaneContainer](../../mfc/reference/cpanecontainer-class.md)  
  
## Requirements  
 **Header:** afxpanecontainer.h  
  
##  <a name="addpane"></a>  CPaneContainer::AddPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CDockablePane* AddPane(CDockablePane* pBar);
```  
  
### Parameters  
 [in] `pBar`  
  
### Return Value  
  
### Remarks  
  
##  <a name="addref"></a>  CPaneContainer::AddRef  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void AddRef();
```  
  
### Remarks  
  
##  <a name="addsubpanecontainer"></a>  CPaneContainer::AddSubPaneContainer  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL AddSubPaneContainer(
    CPaneContainer* pContainer,  
    BOOL bRightNodeNew);
```  
  
### Parameters  
 [in] `pContainer`  
 [in] `bRightNodeNew`  
  
### Return Value  
  
### Remarks  
  
##  <a name="calcavailablepanespace"></a>  CPaneContainer::CalcAvailablePaneSpace  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int CalcAvailablePaneSpace(
    int nRequiredOffset,  
    CPane* pBar,  
    CPaneContainer* pContainer,  
    BOOL bLeftBar);
```  
  
### Parameters  
 [in] `nRequiredOffset`  
 [in] `pBar`  
 [in] `pContainer`  
 [in] `bLeftBar`  
  
### Return Value  
  
### Remarks  
  
##  <a name="calcavailablespace"></a>  CPaneContainer::CalcAvailableSpace  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CSize CalcAvailableSpace(
    CSize sizeStretch,  
    BOOL bLeftBar);
```  
  
### Parameters  
 [in] `sizeStretch`  
 [in] `bLeftBar`  
  
### Return Value  
  
### Remarks  
  
##  <a name="calculaterecentsize"></a>  CPaneContainer::CalculateRecentSize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void CalculateRecentSize();
```  
  
### Remarks  
  
##  <a name="checkpanedividervisibility"></a>  CPaneContainer::CheckPaneDividerVisibility  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void CheckPaneDividerVisibility();
```  
  
### Remarks  
  
##  <a name="copy"></a>  CPaneContainer::Copy  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CPaneContainer* Copy(CPaneContainer* pParentContainer);
```  
  
### Parameters  
 [in] `pParentContainer`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainer"></a>  CPaneContainer::CPaneContainer  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CPaneContainer(
    CPaneContainerManager* pManager = NULL,  
    CDockablePane* pLeftBar = NULL,  
    CDockablePane* pRightBar = NULL,  
    CPaneDivider* pSlider = NULL);
```  
  
### Parameters  
 [in] `pManager`  
 [in] `pLeftBar`  
 [in] `pRightBar`  
 [in] `pSlider`  
  
### Remarks  
  
##  <a name="deletepane"></a>  CPaneContainer::DeletePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void DeletePane(
    CDockablePane* pBar,  
    BC_FIND_CRITERIA barType);
```  
  
### Parameters  
 [in] `pBar`  
 [in] `barType`  
  
### Remarks  
  
##  <a name="findsubpanecontainer"></a>  CPaneContainer::FindSubPaneContainer  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CPaneContainer* FindSubPaneContainer(
    const CObject* pObject,  
    BC_FIND_CRITERIA findCriteria);
```  
  
### Parameters  
 [in] `pObject`  
 [in] `findCriteria`  
  
### Return Value  
  
### Remarks  
  
##  <a name="findtabbedpane"></a>  CPaneContainer::FindTabbedPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CDockablePane* FindTabbedPane(UINT nID);
```  
  
### Parameters  
 [in] `nID`  
  
### Return Value  
  
### Remarks  
  
##  <a name="getassociatedsiblingpaneids"></a>  CPaneContainer::GetAssociatedSiblingPaneIDs  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CList<UINT, UINT>* GetAssociatedSiblingPaneIDs(CDockablePane* pBar);
```  
  
### Parameters  
 [in] `pBar`  
  
### Return Value  
  
### Remarks  
  
##  <a name="getleftpane"></a>  CPaneContainer::GetLeftPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
const CDockablePane* GetLeftPane() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getleftpanecontainer"></a>  CPaneContainer::GetLeftPaneContainer  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
const CPaneContainer* GetLeftPaneContainer() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getminsize"></a>  CPaneContainer::GetMinSize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void GetMinSize(CSize& size) const;  
```  
  
### Parameters  
 [in] `size`  
  
### Remarks  
  
##  <a name="getminsizeleft"></a>  CPaneContainer::GetMinSizeLeft  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void GetMinSizeLeft(CSize& size) const;  
```  
  
### Parameters  
 [in] `size`  
  
### Remarks  
  
##  <a name="getminsizeright"></a>  CPaneContainer::GetMinSizeRight  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void GetMinSizeRight(CSize& size) const;  
```  
  
### Parameters  
 [in] `size`  
  
### Remarks  
  
##  <a name="getnodecount"></a>  CPaneContainer::GetNodeCount  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetNodeCount() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getpanedivider"></a>  CPaneContainer::GetPaneDivider  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
const CPaneDivider* GetPaneDivider() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getparentpanecontainer"></a>  CPaneContainer::GetParentPaneContainer  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CPaneContainer* GetParentPaneContainer() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getrecentpanedividerrect"></a>  CPaneContainer::GetRecentPaneDividerRect  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CRect GetRecentPaneDividerRect() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getrecentpanedividerstyle"></a>  CPaneContainer::GetRecentPaneDividerStyle  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
DWORD GetRecentPaneDividerStyle() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getrecentpercent"></a>  CPaneContainer::GetRecentPercent  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetRecentPercent();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getrefcount"></a>  CPaneContainer::GetRefCount  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
LONG GetRefCount();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getresizestep"></a>  CPaneContainer::GetResizeStep  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetResizeStep() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getrightpane"></a>  CPaneContainer::GetRightPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
const CDockablePane* GetRightPane() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getrightpanecontainer"></a>  CPaneContainer::GetRightPaneContainer  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
const CPaneContainer* GetRightPaneContainer() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="gettotalreferencecount"></a>  CPaneContainer::GetTotalReferenceCount  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetTotalReferenceCount() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getwindowrect"></a>  CPaneContainer::GetWindowRect  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void GetWindowRect(
    CRect& rect,  
    BOOL bIgnoreVisibility = FALSE) const;  
```  
  
### Parameters  
 [in] `rect`  
 [in] `bIgnoreVisibility`  
  
### Remarks  
  
##  <a name="isdisposed"></a>  CPaneContainer::IsDisposed  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsDisposed() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="isempty"></a>  CPaneContainer::IsEmpty  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsEmpty() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="isleftpane"></a>  CPaneContainer::IsLeftPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsLeftPane(CDockablePane* pBar) const;  
```  
  
### Parameters  
 [in] `pBar`  
  
### Return Value  
  
### Remarks  
  
##  <a name="isleftpanecontainer"></a>  CPaneContainer::IsLeftPaneContainer  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsLeftPaneContainer() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="isleftpartempty"></a>  CPaneContainer::IsLeftPartEmpty  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsLeftPartEmpty(BOOL bCheckVisibility = FALSE) const;  
```  
  
### Parameters  
 [in] `bCheckVisibility`  
  
### Return Value  
  
### Remarks  
  
##  <a name="isrightpartempty"></a>  CPaneContainer::IsRightPartEmpty  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsRightPartEmpty(BOOL bCheckVisibility = FALSE) const;  
```  
  
### Parameters  
 [in] `bCheckVisibility`  
  
### Return Value  
  
### Remarks  
  
##  <a name="isvisible"></a>  CPaneContainer::IsVisible  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsVisible() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="move"></a>  CPaneContainer::Move  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void Move(CPoint ptNewLeftTop);
```  
  
### Parameters  
 [in] `ptNewLeftTop`  
  
### Remarks  
  
##  <a name="ondeletehidepane"></a>  CPaneContainer::OnDeleteHidePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void OnDeleteHidePane(
    CDockablePane* pBar,  
    BOOL bHide);
```  
  
### Parameters  
 [in] `pBar`  
 [in] `bHide`  
  
### Remarks  
  
##  <a name="onmoveinternalpanedivider"></a>  CPaneContainer::OnMoveInternalPaneDivider  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int OnMoveInternalPaneDivider(
    int nOffset,  
    HDWP& hdwp);
```  
  
### Parameters  
 [in] `nOffset`  
 [in] `hdwp`  
  
### Return Value  
  
### Remarks  
  
##  <a name="onshowpane"></a>  CPaneContainer::OnShowPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnShowPane(
    CDockablePane* pBar,  
    BOOL bShow);
```  
  
### Parameters  
 [in] `pBar`  
 [in] `bShow`  
  
### Remarks  
  
##  <a name="release"></a>  CPaneContainer::Release  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
DWORD Release();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="releaseemptypanecontainer"></a>  CPaneContainer::ReleaseEmptyPaneContainer  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void ReleaseEmptyPaneContainer();
```  
  
### Remarks  
  
##  <a name="removenonvalidpanes"></a>  CPaneContainer::RemoveNonValidPanes  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void RemoveNonValidPanes();
```  
  
### Remarks  
  
##  <a name="removepane"></a>  CPaneContainer::RemovePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void RemovePane(CDockablePane* pBar);
```  
  
### Parameters  
 [in] `pBar`  
  
### Remarks  
  
##  <a name="resize"></a>  CPaneContainer::Resize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void Resize(
    CRect rect,  
    HDWP& hdwp,  
    BOOL bRedraw = FALSE);
```  
  
### Parameters  
 [in] `rect`  
 [in] `hdwp`  
 [in] `bRedraw`  
  
### Remarks  
  
##  <a name="resizepane"></a>  CPaneContainer::ResizePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void ResizePane(
    int nOffset,  
    CPane* pBar,  
    CPaneContainer* pContainer,  
    BOOL bHorz,  
    BOOL bLeftBar,  
    HDWP& hdwp);
```  
  
### Parameters  
 [in] `nOffset`  
 [in] `pBar`  
 [in] `pContainer`  
 [in] `bHorz`  
 [in] `bLeftBar`  
 [in] `hdwp`  
  
### Remarks  
  
##  <a name="resizepartofpanecontainer"></a>  CPaneContainer::ResizePartOfPaneContainer  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void ResizePartOfPaneContainer(
    int nOffset,  
    BOOL bLeftPart,  
    HDWP& hdwp);
```  
  
### Parameters  
 [in] `nOffset`  
 [in] `bLeftPart`  
 [in] `hdwp`  
  
### Remarks  
  
##  <a name="serialize"></a>  CPaneContainer::Serialize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void Serialize(CArchive& ar);
```  
  
### Parameters  
 [in] `ar`  
  
### Remarks  
  
##  <a name="setpane"></a>  CPaneContainer::SetPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetPane(
    CDockablePane* pBar,  
    BOOL bLeft);
```  
  
### Parameters  
 [in] `pBar`  
 [in] `bLeft`  
  
### Remarks  
  
##  <a name="setpanecontainer"></a>  CPaneContainer::SetPaneContainer  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetPaneContainer(
    CPaneContainer* pContainer,  
    BOOL bLeft);
```  
  
### Parameters  
 [in] `pContainer`  
 [in] `bLeft`  
  
### Remarks  
  
##  <a name="setpanedivider"></a>  CPaneContainer::SetPaneDivider  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetPaneDivider(CPaneDivider* pSlider);
```  
  
### Parameters  
 [in] `pSlider`  
  
### Remarks  
  
##  <a name="setparentpanecontainer"></a>  CPaneContainer::SetParentPaneContainer  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetParentPaneContainer(CPaneContainer* p);
```  
  
### Parameters  
 [in] `p`  
  
### Remarks  
  
##  <a name="setrecentpercent"></a>  CPaneContainer::SetRecentPercent  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetRecentPercent(int nRecentPercent);
```  
  
### Parameters  
 [in] `nRecentPercent`  
  
### Remarks  
  
##  <a name="setupbyid"></a>  CPaneContainer::SetUpByID  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL SetUpByID(
    UINT nID,  
    CDockablePane* pBar);
```  
  
### Parameters  
 [in] `nID`  
 [in] `pBar`  
  
### Return Value  
  
### Remarks  
  
##  <a name="storerecentdocksiteinfo"></a>  CPaneContainer::StoreRecentDockSiteInfo  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void StoreRecentDockSiteInfo(CDockablePane* pBar);
```  
  
### Parameters  
 [in] `pBar`  
  
### Remarks  
  
##  <a name="stretchpanecontainer"></a>  CPaneContainer::StretchPaneContainer  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int StretchPaneContainer(
    int nOffset,  
    BOOL bStretchHorz,  
    BOOL bLeftBar,  
    BOOL bMoveSlider,  
    HDWP& hdwp);
```  
  
### Parameters  
 [in] `nOffset`  
 [in] `bStretchHorz`  
 [in] `bLeftBar`  
 [in] `bMoveSlider`  
 [in] `hdwp`  
  
### Return Value  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [CPaneContainerManager Class](../../mfc/reference/cpanecontainermanager-class.md)
