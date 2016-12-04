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
f1_keywords: 
  - "CPaneContainer"
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
|[CPaneContainer::CPaneContainer](#cpanecontainer__cpanecontainer)|Default constructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CPaneContainer::AddPane](#cpanecontainer__addpane)||  
|[CPaneContainer::AddRef](#cpanecontainer__addref)||  
|[CPaneContainer::AddSubPaneContainer](#cpanecontainer__addsubpanecontainer)||  
|[CPaneContainer::CalcAvailablePaneSpace](#cpanecontainer__calcavailablepanespace)||  
|[CPaneContainer::CalcAvailableSpace](#cpanecontainer__calcavailablespace)||  
|[CPaneContainer::CalculateRecentSize](#cpanecontainer__calculaterecentsize)||  
|[CPaneContainer::CheckPaneDividerVisibility](#cpanecontainer__checkpanedividervisibility)||  
|[CPaneContainer::Copy](#cpanecontainer__copy)||  
|[CPaneContainer::DeletePane](#cpanecontainer__deletepane)||  
|[CPaneContainer::FindSubPaneContainer](#cpanecontainer__findsubpanecontainer)||  
|[CPaneContainer::FindTabbedPane](#cpanecontainer__findtabbedpane)||  
|[CPaneContainer::GetAssociatedSiblingPaneIDs](#cpanecontainer__getassociatedsiblingpaneids)||  
|[CPaneContainer::GetLeftPane](#cpanecontainer__getleftpane)||  
|[CPaneContainer::GetLeftPaneContainer](#cpanecontainer__getleftpanecontainer)||  
|[CPaneContainer::GetMinSize](#cpanecontainer__getminsize)||  
|[CPaneContainer::GetMinSizeLeft](#cpanecontainer__getminsizeleft)||  
|[CPaneContainer::GetMinSizeRight](#cpanecontainer__getminsizeright)||  
|[CPaneContainer::GetNodeCount](#cpanecontainer__getnodecount)||  
|[CPaneContainer::GetPaneDivider](#cpanecontainer__getpanedivider)||  
|[CPaneContainer::GetParentPaneContainer](#cpanecontainer__getparentpanecontainer)||  
|[CPaneContainer::GetRecentPaneDividerRect](#cpanecontainer__getrecentpanedividerrect)||  
|[CPaneContainer::GetRecentPaneDividerStyle](#cpanecontainer__getrecentpanedividerstyle)||  
|[CPaneContainer::GetRecentPercent](#cpanecontainer__getrecentpercent)||  
|[CPaneContainer::GetRefCount](#cpanecontainer__getrefcount)||  
|[CPaneContainer::GetResizeStep](#cpanecontainer__getresizestep)||  
|[CPaneContainer::GetRightPane](#cpanecontainer__getrightpane)||  
|[CPaneContainer::GetRightPaneContainer](#cpanecontainer__getrightpanecontainer)||  
|[CPaneContainer::GetTotalReferenceCount](#cpanecontainer__gettotalreferencecount)||  
|[CPaneContainer::GetWindowRect](#cpanecontainer__getwindowrect)||  
|[CPaneContainer::IsDisposed](#cpanecontainer__isdisposed)||  
|[CPaneContainer::IsEmpty](#cpanecontainer__isempty)||  
|[CPaneContainer::IsLeftPane](#cpanecontainer__isleftpane)||  
|[CPaneContainer::IsLeftPaneContainer](#cpanecontainer__isleftpanecontainer)||  
|[CPaneContainer::IsLeftPartEmpty](#cpanecontainer__isleftpartempty)||  
|[CPaneContainer::IsRightPartEmpty](#cpanecontainer__isrightpartempty)||  
|[CPaneContainer::IsVisible](#cpanecontainer__isvisible)||  
|[CPaneContainer::Move](#cpanecontainer__move)||  
|[CPaneContainer::OnDeleteHidePane](#cpanecontainer__ondeletehidepane)||  
|[CPaneContainer::OnMoveInternalPaneDivider](#cpanecontainer__onmoveinternalpanedivider)||  
|[CPaneContainer::OnShowPane](#cpanecontainer__onshowpane)||  
|[CPaneContainer::Release](#cpanecontainer__release)||  
|[CPaneContainer::ReleaseEmptyPaneContainer](#cpanecontainer__releaseemptypanecontainer)||  
|[CPaneContainer::RemoveNonValidPanes](#cpanecontainer__removenonvalidpanes)||  
|[CPaneContainer::RemovePane](#cpanecontainer__removepane)||  
|[CPaneContainer::Resize](#cpanecontainer__resize)||  
|[CPaneContainer::ResizePane](#cpanecontainer__resizepane)||  
|[CPaneContainer::ResizePartOfPaneContainer](#cpanecontainer__resizepartofpanecontainer)||  
|[CPaneContainer::Serialize](#cpanecontainer__serialize)|Reads or writes this object from or to an archive. (Overrides [CObject::Serialize](../../mfc/reference/cobject-class.md#cobject__serialize).)|  
|[CPaneContainer::SetPane](#cpanecontainer__setpane)||  
|[CPaneContainer::SetPaneContainer](#cpanecontainer__setpanecontainer)||  
|[CPaneContainer::SetPaneDivider](#cpanecontainer__setpanedivider)||  
|[CPaneContainer::SetParentPaneContainer](#cpanecontainer__setparentpanecontainer)||  
|[CPaneContainer::SetRecentPercent](#cpanecontainer__setrecentpercent)||  
|[CPaneContainer::SetUpByID](#cpanecontainer__setupbyid)||  
|[CPaneContainer::StoreRecentDockSiteInfo](#cpanecontainer__storerecentdocksiteinfo)||  
|[CPaneContainer::StretchPaneContainer](#cpanecontainer__stretchpanecontainer)||  
  
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
  
##  <a name="cpanecontainer__addpane"></a>  CPaneContainer::AddPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CDockablePane* AddPane(CDockablePane* pBar);
```  
  
### Parameters  
 [in] `pBar`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainer__addref"></a>  CPaneContainer::AddRef  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void AddRef();
```  
  
### Remarks  
  
##  <a name="cpanecontainer__addsubpanecontainer"></a>  CPaneContainer::AddSubPaneContainer  
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
  
##  <a name="cpanecontainer__calcavailablepanespace"></a>  CPaneContainer::CalcAvailablePaneSpace  
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
  
##  <a name="cpanecontainer__calcavailablespace"></a>  CPaneContainer::CalcAvailableSpace  
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
  
##  <a name="cpanecontainer__calculaterecentsize"></a>  CPaneContainer::CalculateRecentSize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void CalculateRecentSize();
```  
  
### Remarks  
  
##  <a name="cpanecontainer__checkpanedividervisibility"></a>  CPaneContainer::CheckPaneDividerVisibility  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void CheckPaneDividerVisibility();
```  
  
### Remarks  
  
##  <a name="cpanecontainer__copy"></a>  CPaneContainer::Copy  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CPaneContainer* Copy(CPaneContainer* pParentContainer);
```  
  
### Parameters  
 [in] `pParentContainer`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainer__cpanecontainer"></a>  CPaneContainer::CPaneContainer  
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
  
##  <a name="cpanecontainer__deletepane"></a>  CPaneContainer::DeletePane  
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
  
##  <a name="cpanecontainer__findsubpanecontainer"></a>  CPaneContainer::FindSubPaneContainer  
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
  
##  <a name="cpanecontainer__findtabbedpane"></a>  CPaneContainer::FindTabbedPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CDockablePane* FindTabbedPane(UINT nID);
```  
  
### Parameters  
 [in] `nID`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainer__getassociatedsiblingpaneids"></a>  CPaneContainer::GetAssociatedSiblingPaneIDs  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CList<UINT, UINT>* GetAssociatedSiblingPaneIDs(
    CDockablePane* pBar);
```  
  
### Parameters  
 [in] `pBar`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainer__getleftpane"></a>  CPaneContainer::GetLeftPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
const CDockablePane* GetLeftPane() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainer__getleftpanecontainer"></a>  CPaneContainer::GetLeftPaneContainer  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
const CPaneContainer* GetLeftPaneContainer() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainer__getminsize"></a>  CPaneContainer::GetMinSize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void GetMinSize(CSize& size) const;

 
```  
  
### Parameters  
 [in] `size`  
  
### Remarks  
  
##  <a name="cpanecontainer__getminsizeleft"></a>  CPaneContainer::GetMinSizeLeft  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void GetMinSizeLeft(CSize& size) const;

 
```  
  
### Parameters  
 [in] `size`  
  
### Remarks  
  
##  <a name="cpanecontainer__getminsizeright"></a>  CPaneContainer::GetMinSizeRight  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void GetMinSizeRight(CSize& size) const;

 
```  
  
### Parameters  
 [in] `size`  
  
### Remarks  
  
##  <a name="cpanecontainer__getnodecount"></a>  CPaneContainer::GetNodeCount  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetNodeCount() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainer__getpanedivider"></a>  CPaneContainer::GetPaneDivider  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
const CPaneDivider* GetPaneDivider() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainer__getparentpanecontainer"></a>  CPaneContainer::GetParentPaneContainer  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CPaneContainer* GetParentPaneContainer() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainer__getrecentpanedividerrect"></a>  CPaneContainer::GetRecentPaneDividerRect  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CRect GetRecentPaneDividerRect() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainer__getrecentpanedividerstyle"></a>  CPaneContainer::GetRecentPaneDividerStyle  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
DWORD GetRecentPaneDividerStyle() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainer__getrecentpercent"></a>  CPaneContainer::GetRecentPercent  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetRecentPercent();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainer__getrefcount"></a>  CPaneContainer::GetRefCount  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
LONG GetRefCount();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainer__getresizestep"></a>  CPaneContainer::GetResizeStep  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetResizeStep() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainer__getrightpane"></a>  CPaneContainer::GetRightPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
const CDockablePane* GetRightPane() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainer__getrightpanecontainer"></a>  CPaneContainer::GetRightPaneContainer  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
const CPaneContainer* GetRightPaneContainer() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainer__gettotalreferencecount"></a>  CPaneContainer::GetTotalReferenceCount  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetTotalReferenceCount() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainer__getwindowrect"></a>  CPaneContainer::GetWindowRect  
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
  
##  <a name="cpanecontainer__isdisposed"></a>  CPaneContainer::IsDisposed  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsDisposed() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainer__isempty"></a>  CPaneContainer::IsEmpty  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsEmpty() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainer__isleftpane"></a>  CPaneContainer::IsLeftPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsLeftPane(CDockablePane* pBar) const;

 
```  
  
### Parameters  
 [in] `pBar`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainer__isleftpanecontainer"></a>  CPaneContainer::IsLeftPaneContainer  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsLeftPaneContainer() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainer__isleftpartempty"></a>  CPaneContainer::IsLeftPartEmpty  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsLeftPartEmpty(BOOL bCheckVisibility = FALSE) const;

 
```  
  
### Parameters  
 [in] `bCheckVisibility`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainer__isrightpartempty"></a>  CPaneContainer::IsRightPartEmpty  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsRightPartEmpty(BOOL bCheckVisibility = FALSE) const;

 
```  
  
### Parameters  
 [in] `bCheckVisibility`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainer__isvisible"></a>  CPaneContainer::IsVisible  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsVisible() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainer__move"></a>  CPaneContainer::Move  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void Move(CPoint ptNewLeftTop);
```  
  
### Parameters  
 [in] `ptNewLeftTop`  
  
### Remarks  
  
##  <a name="cpanecontainer__ondeletehidepane"></a>  CPaneContainer::OnDeleteHidePane  
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
  
##  <a name="cpanecontainer__onmoveinternalpanedivider"></a>  CPaneContainer::OnMoveInternalPaneDivider  
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
  
##  <a name="cpanecontainer__onshowpane"></a>  CPaneContainer::OnShowPane  
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
  
##  <a name="cpanecontainer__release"></a>  CPaneContainer::Release  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
DWORD Release();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cpanecontainer__releaseemptypanecontainer"></a>  CPaneContainer::ReleaseEmptyPaneContainer  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void ReleaseEmptyPaneContainer();
```  
  
### Remarks  
  
##  <a name="cpanecontainer__removenonvalidpanes"></a>  CPaneContainer::RemoveNonValidPanes  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void RemoveNonValidPanes();
```  
  
### Remarks  
  
##  <a name="cpanecontainer__removepane"></a>  CPaneContainer::RemovePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void RemovePane(CDockablePane* pBar);
```  
  
### Parameters  
 [in] `pBar`  
  
### Remarks  
  
##  <a name="cpanecontainer__resize"></a>  CPaneContainer::Resize  
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
  
##  <a name="cpanecontainer__resizepane"></a>  CPaneContainer::ResizePane  
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
  
##  <a name="cpanecontainer__resizepartofpanecontainer"></a>  CPaneContainer::ResizePartOfPaneContainer  
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
  
##  <a name="cpanecontainer__serialize"></a>  CPaneContainer::Serialize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void Serialize(CArchive& ar);
```  
  
### Parameters  
 [in] `ar`  
  
### Remarks  
  
##  <a name="cpanecontainer__setpane"></a>  CPaneContainer::SetPane  
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
  
##  <a name="cpanecontainer__setpanecontainer"></a>  CPaneContainer::SetPaneContainer  
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
  
##  <a name="cpanecontainer__setpanedivider"></a>  CPaneContainer::SetPaneDivider  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetPaneDivider(CPaneDivider* pSlider);
```  
  
### Parameters  
 [in] `pSlider`  
  
### Remarks  
  
##  <a name="cpanecontainer__setparentpanecontainer"></a>  CPaneContainer::SetParentPaneContainer  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetParentPaneContainer(CPaneContainer* p);
```  
  
### Parameters  
 [in] `p`  
  
### Remarks  
  
##  <a name="cpanecontainer__setrecentpercent"></a>  CPaneContainer::SetRecentPercent  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetRecentPercent(int nRecentPercent);
```  
  
### Parameters  
 [in] `nRecentPercent`  
  
### Remarks  
  
##  <a name="cpanecontainer__setupbyid"></a>  CPaneContainer::SetUpByID  
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
  
##  <a name="cpanecontainer__storerecentdocksiteinfo"></a>  CPaneContainer::StoreRecentDockSiteInfo  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void StoreRecentDockSiteInfo(CDockablePane* pBar);
```  
  
### Parameters  
 [in] `pBar`  
  
### Remarks  
  
##  <a name="cpanecontainer__stretchpanecontainer"></a>  CPaneContainer::StretchPaneContainer  
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
