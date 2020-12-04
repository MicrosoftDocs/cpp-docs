---
description: "Learn more about: CPaneContainer Class"
title: "CPaneContainer Class"
ms.date: "11/04/2016"
f1_keywords: ["CPaneContainer", "AFXPANECONTAINER/CPaneContainer", "AFXPANECONTAINER/CPaneContainer::CPaneContainer", "AFXPANECONTAINER/CPaneContainer::AddPane", "AFXPANECONTAINER/CPaneContainer::AddRef", "AFXPANECONTAINER/CPaneContainer::AddSubPaneContainer", "AFXPANECONTAINER/CPaneContainer::CalcAvailablePaneSpace", "AFXPANECONTAINER/CPaneContainer::CalcAvailableSpace", "AFXPANECONTAINER/CPaneContainer::CalculateRecentSize", "AFXPANECONTAINER/CPaneContainer::CheckPaneDividerVisibility", "AFXPANECONTAINER/CPaneContainer::Copy", "AFXPANECONTAINER/CPaneContainer::DeletePane", "AFXPANECONTAINER/CPaneContainer::FindSubPaneContainer", "AFXPANECONTAINER/CPaneContainer::FindTabbedPane", "AFXPANECONTAINER/CPaneContainer::GetAssociatedSiblingPaneIDs", "AFXPANECONTAINER/CPaneContainer::GetLeftPane", "AFXPANECONTAINER/CPaneContainer::GetLeftPaneContainer", "AFXPANECONTAINER/CPaneContainer::GetMinSize", "AFXPANECONTAINER/CPaneContainer::GetMinSizeLeft", "AFXPANECONTAINER/CPaneContainer::GetMinSizeRight", "AFXPANECONTAINER/CPaneContainer::GetNodeCount", "AFXPANECONTAINER/CPaneContainer::GetPaneDivider", "AFXPANECONTAINER/CPaneContainer::GetParentPaneContainer", "AFXPANECONTAINER/CPaneContainer::GetRecentPaneDividerRect", "AFXPANECONTAINER/CPaneContainer::GetRecentPaneDividerStyle", "AFXPANECONTAINER/CPaneContainer::GetRecentPercent", "AFXPANECONTAINER/CPaneContainer::GetRefCount", "AFXPANECONTAINER/CPaneContainer::GetResizeStep", "AFXPANECONTAINER/CPaneContainer::GetRightPane", "AFXPANECONTAINER/CPaneContainer::GetRightPaneContainer", "AFXPANECONTAINER/CPaneContainer::GetTotalReferenceCount", "AFXPANECONTAINER/CPaneContainer::GetWindowRect", "AFXPANECONTAINER/CPaneContainer::IsDisposed", "AFXPANECONTAINER/CPaneContainer::IsEmpty", "AFXPANECONTAINER/CPaneContainer::IsLeftPane", "AFXPANECONTAINER/CPaneContainer::IsLeftPaneContainer", "AFXPANECONTAINER/CPaneContainer::IsLeftPartEmpty", "AFXPANECONTAINER/CPaneContainer::IsRightPartEmpty", "AFXPANECONTAINER/CPaneContainer::IsVisible", "AFXPANECONTAINER/CPaneContainer::Move", "AFXPANECONTAINER/CPaneContainer::OnDeleteHidePane", "AFXPANECONTAINER/CPaneContainer::OnMoveInternalPaneDivider", "AFXPANECONTAINER/CPaneContainer::OnShowPane", "AFXPANECONTAINER/CPaneContainer::Release", "AFXPANECONTAINER/CPaneContainer::ReleaseEmptyPaneContainer", "AFXPANECONTAINER/CPaneContainer::RemoveNonValidPanes", "AFXPANECONTAINER/CPaneContainer::RemovePane", "AFXPANECONTAINER/CPaneContainer::Resize", "AFXPANECONTAINER/CPaneContainer::ResizePane", "AFXPANECONTAINER/CPaneContainer::ResizePartOfPaneContainer", "AFXPANECONTAINER/CPaneContainer::Serialize", "AFXPANECONTAINER/CPaneContainer::SetPane", "AFXPANECONTAINER/CPaneContainer::SetPaneContainer", "AFXPANECONTAINER/CPaneContainer::SetPaneDivider", "AFXPANECONTAINER/CPaneContainer::SetParentPaneContainer", "AFXPANECONTAINER/CPaneContainer::SetRecentPercent", "AFXPANECONTAINER/CPaneContainer::SetUpByID", "AFXPANECONTAINER/CPaneContainer::StoreRecentDockSiteInfo", "AFXPANECONTAINER/CPaneContainer::StretchPaneContainer"]
helpviewer_keywords: ["CPaneContainer [MFC], CPaneContainer", "CPaneContainer [MFC], AddPane", "CPaneContainer [MFC], AddRef", "CPaneContainer [MFC], AddSubPaneContainer", "CPaneContainer [MFC], CalcAvailablePaneSpace", "CPaneContainer [MFC], CalcAvailableSpace", "CPaneContainer [MFC], CalculateRecentSize", "CPaneContainer [MFC], CheckPaneDividerVisibility", "CPaneContainer [MFC], Copy", "CPaneContainer [MFC], DeletePane", "CPaneContainer [MFC], FindSubPaneContainer", "CPaneContainer [MFC], FindTabbedPane", "CPaneContainer [MFC], GetAssociatedSiblingPaneIDs", "CPaneContainer [MFC], GetLeftPane", "CPaneContainer [MFC], GetLeftPaneContainer", "CPaneContainer [MFC], GetMinSize", "CPaneContainer [MFC], GetMinSizeLeft", "CPaneContainer [MFC], GetMinSizeRight", "CPaneContainer [MFC], GetNodeCount", "CPaneContainer [MFC], GetPaneDivider", "CPaneContainer [MFC], GetParentPaneContainer", "CPaneContainer [MFC], GetRecentPaneDividerRect", "CPaneContainer [MFC], GetRecentPaneDividerStyle", "CPaneContainer [MFC], GetRecentPercent", "CPaneContainer [MFC], GetRefCount", "CPaneContainer [MFC], GetResizeStep", "CPaneContainer [MFC], GetRightPane", "CPaneContainer [MFC], GetRightPaneContainer", "CPaneContainer [MFC], GetTotalReferenceCount", "CPaneContainer [MFC], GetWindowRect", "CPaneContainer [MFC], IsDisposed", "CPaneContainer [MFC], IsEmpty", "CPaneContainer [MFC], IsLeftPane", "CPaneContainer [MFC], IsLeftPaneContainer", "CPaneContainer [MFC], IsLeftPartEmpty", "CPaneContainer [MFC], IsRightPartEmpty", "CPaneContainer [MFC], IsVisible", "CPaneContainer [MFC], Move", "CPaneContainer [MFC], OnDeleteHidePane", "CPaneContainer [MFC], OnMoveInternalPaneDivider", "CPaneContainer [MFC], OnShowPane", "CPaneContainer [MFC], Release", "CPaneContainer [MFC], ReleaseEmptyPaneContainer", "CPaneContainer [MFC], RemoveNonValidPanes", "CPaneContainer [MFC], RemovePane", "CPaneContainer [MFC], Resize", "CPaneContainer [MFC], ResizePane", "CPaneContainer [MFC], ResizePartOfPaneContainer", "CPaneContainer [MFC], Serialize", "CPaneContainer [MFC], SetPane", "CPaneContainer [MFC], SetPaneContainer", "CPaneContainer [MFC], SetPaneDivider", "CPaneContainer [MFC], SetParentPaneContainer", "CPaneContainer [MFC], SetRecentPercent", "CPaneContainer [MFC], SetUpByID", "CPaneContainer [MFC], StoreRecentDockSiteInfo", "CPaneContainer [MFC], StretchPaneContainer"]
ms.assetid: beb79e08-f611-4d66-ba04-053baa79bf86
---
# CPaneContainer Class

The `CPaneContainer` class is a basic component of the docking model implemented by MFC. An object of this class stores pointers to two docking panes or to two instances of `CPaneContainer.` It also stores a pointer to the divider that separates the panes (or the containers). By nesting containers inside containers, the framework can build a binary tree that represents complex docking layouts. The root of the binary tree is stored in a [CPaneContainerManager](../../mfc/reference/cpanecontainermanager-class.md) object.

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

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

The following example demonstrates how to construct an instance of the `CPaneContainer` class. This code snippet is part of the [Set Pane Size sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_SetPaneSize#2](../../mfc/reference/codesnippet/cpp/cpanecontainer-class_1.h)]
[!code-cpp[NVC_MFC_SetPaneSize#1](../../mfc/reference/codesnippet/cpp/cpanecontainer-class_2.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CPaneContainer](../../mfc/reference/cpanecontainer-class.md)

## Requirements

**Header:** afxpanecontainer.h

## <a name="addpane"></a> CPaneContainer::AddPane

```
CDockablePane* AddPane(CDockablePane* pBar);
```

### Parameters

[in] *pBar*<br/>

### Return Value

### Remarks

## <a name="addref"></a> CPaneContainer::AddRef

```cpp
void AddRef();
```

### Remarks

## <a name="addsubpanecontainer"></a> CPaneContainer::AddSubPaneContainer

```
BOOL AddSubPaneContainer(
    CPaneContainer* pContainer,
    BOOL bRightNodeNew);
```

### Parameters

[in] *pContainer*<br/>
[in] *bRightNodeNew*<br/>

### Return Value

### Remarks

## <a name="calcavailablepanespace"></a> CPaneContainer::CalcAvailablePaneSpace

```
virtual int CalcAvailablePaneSpace(
    int nRequiredOffset,
    CPane* pBar,
    CPaneContainer* pContainer,
    BOOL bLeftBar);
```

### Parameters

[in] *nRequiredOffset*<br/>
[in] *pBar*<br/>
[in] *pContainer*<br/>
[in] *bLeftBar*<br/>

### Return Value

### Remarks

## <a name="calcavailablespace"></a> CPaneContainer::CalcAvailableSpace

```
virtual CSize CalcAvailableSpace(
    CSize sizeStretch,
    BOOL bLeftBar);
```

### Parameters

[in] *sizeStretch*<br/>
[in] *bLeftBar*<br/>

### Return Value

### Remarks

## <a name="calculaterecentsize"></a> CPaneContainer::CalculateRecentSize

```cpp
void CalculateRecentSize();
```

### Remarks

## <a name="checkpanedividervisibility"></a> CPaneContainer::CheckPaneDividerVisibility

```cpp
void CheckPaneDividerVisibility();
```

### Remarks

## <a name="copy"></a> CPaneContainer::Copy

```
virtual CPaneContainer* Copy(CPaneContainer* pParentContainer);
```

### Parameters

[in] *pParentContainer*<br/>

### Return Value

### Remarks

## <a name="cpanecontainer"></a> CPaneContainer::CPaneContainer

```
CPaneContainer(
    CPaneContainerManager* pManager = NULL,
    CDockablePane* pLeftBar = NULL,
    CDockablePane* pRightBar = NULL,
    CPaneDivider* pSlider = NULL);
```

### Parameters

[in] *pManager*<br/>
[in] *pLeftBar*<br/>
[in] *pRightBar*<br/>
[in] *pSlider*<br/>

### Remarks

## <a name="deletepane"></a> CPaneContainer::DeletePane

```
virtual void DeletePane(
    CDockablePane* pBar,
    BC_FIND_CRITERIA barType);
```

### Parameters

[in] *pBar*<br/>
[in] *barType*<br/>

### Remarks

## <a name="findsubpanecontainer"></a> CPaneContainer::FindSubPaneContainer

```
CPaneContainer* FindSubPaneContainer(
    const CObject* pObject,
    BC_FIND_CRITERIA findCriteria);
```

### Parameters

[in] *pObject*<br/>
[in] *findCriteria*<br/>

### Return Value

### Remarks

## <a name="findtabbedpane"></a> CPaneContainer::FindTabbedPane

```
CDockablePane* FindTabbedPane(UINT nID);
```

### Parameters

[in] *nID*<br/>

### Return Value

### Remarks

## <a name="getassociatedsiblingpaneids"></a> CPaneContainer::GetAssociatedSiblingPaneIDs

```
CList<UINT, UINT>* GetAssociatedSiblingPaneIDs(CDockablePane* pBar);
```

### Parameters

[in] *pBar*<br/>

### Return Value

### Remarks

## <a name="getleftpane"></a> CPaneContainer::GetLeftPane

```
const CDockablePane* GetLeftPane() const;
```

### Return Value

### Remarks

## <a name="getleftpanecontainer"></a> CPaneContainer::GetLeftPaneContainer

```
const CPaneContainer* GetLeftPaneContainer() const;
```

### Return Value

### Remarks

## <a name="getminsize"></a> CPaneContainer::GetMinSize

```
virtual void GetMinSize(CSize& size) const;
```

### Parameters

[in] *size*<br/>

### Remarks

## <a name="getminsizeleft"></a> CPaneContainer::GetMinSizeLeft

```
virtual void GetMinSizeLeft(CSize& size) const;
```

### Parameters

[in] *size*<br/>

### Remarks

## <a name="getminsizeright"></a> CPaneContainer::GetMinSizeRight

```
virtual void GetMinSizeRight(CSize& size) const;
```

### Parameters

[in] *size*<br/>

### Remarks

## <a name="getnodecount"></a> CPaneContainer::GetNodeCount

```
int GetNodeCount() const;
```

### Return Value

### Remarks

## <a name="getpanedivider"></a> CPaneContainer::GetPaneDivider

```
const CPaneDivider* GetPaneDivider() const;
```

### Return Value

### Remarks

## <a name="getparentpanecontainer"></a> CPaneContainer::GetParentPaneContainer

```
CPaneContainer* GetParentPaneContainer() const;
```

### Return Value

### Remarks

## <a name="getrecentpanedividerrect"></a> CPaneContainer::GetRecentPaneDividerRect

```
CRect GetRecentPaneDividerRect() const;
```

### Return Value

### Remarks

## <a name="getrecentpanedividerstyle"></a> CPaneContainer::GetRecentPaneDividerStyle

```
DWORD GetRecentPaneDividerStyle() const;
```

### Return Value

### Remarks

## <a name="getrecentpercent"></a> CPaneContainer::GetRecentPercent

```
int GetRecentPercent();
```

### Return Value

### Remarks

## <a name="getrefcount"></a> CPaneContainer::GetRefCount

```
LONG GetRefCount();
```

### Return Value

### Remarks

## <a name="getresizestep"></a> CPaneContainer::GetResizeStep

```
virtual int GetResizeStep() const;
```

### Return Value

### Remarks

## <a name="getrightpane"></a> CPaneContainer::GetRightPane

```
const CDockablePane* GetRightPane() const;
```

### Return Value

### Remarks

## <a name="getrightpanecontainer"></a> CPaneContainer::GetRightPaneContainer

```
const CPaneContainer* GetRightPaneContainer() const;
```

### Return Value

### Remarks

## <a name="gettotalreferencecount"></a> CPaneContainer::GetTotalReferenceCount

```
int GetTotalReferenceCount() const;
```

### Return Value

### Remarks

## <a name="getwindowrect"></a> CPaneContainer::GetWindowRect

```
virtual void GetWindowRect(
    CRect& rect,
    BOOL bIgnoreVisibility = FALSE) const;
```

### Parameters

[in] *rect*<br/>
[in] *bIgnoreVisibility*<br/>

### Remarks

## <a name="isdisposed"></a> CPaneContainer::IsDisposed

```
BOOL IsDisposed() const;
```

### Return Value

### Remarks

## <a name="isempty"></a> CPaneContainer::IsEmpty

```
BOOL IsEmpty() const;
```

### Return Value

### Remarks

## <a name="isleftpane"></a> CPaneContainer::IsLeftPane

```
BOOL IsLeftPane(CDockablePane* pBar) const;
```

### Parameters

[in] *pBar*<br/>

### Return Value

### Remarks

## <a name="isleftpanecontainer"></a> CPaneContainer::IsLeftPaneContainer

```
BOOL IsLeftPaneContainer() const;
```

### Return Value

### Remarks

## <a name="isleftpartempty"></a> CPaneContainer::IsLeftPartEmpty

```
BOOL IsLeftPartEmpty(BOOL bCheckVisibility = FALSE) const;
```

### Parameters

[in] *bCheckVisibility*<br/>

### Return Value

### Remarks

## <a name="isrightpartempty"></a> CPaneContainer::IsRightPartEmpty

```
BOOL IsRightPartEmpty(BOOL bCheckVisibility = FALSE) const;
```

### Parameters

[in] *bCheckVisibility*<br/>

### Return Value

### Remarks

## <a name="isvisible"></a> CPaneContainer::IsVisible

```
BOOL IsVisible() const;
```

### Return Value

### Remarks

## <a name="move"></a> CPaneContainer::Move

```
virtual void Move(CPoint ptNewLeftTop);
```

### Parameters

[in] *ptNewLeftTop*<br/>

### Remarks

## <a name="ondeletehidepane"></a> CPaneContainer::OnDeleteHidePane

```cpp
void OnDeleteHidePane(
    CDockablePane* pBar,
    BOOL bHide);
```

### Parameters

[in] *pBar*<br/>
[in] *bHide*<br/>

### Remarks

## <a name="onmoveinternalpanedivider"></a> CPaneContainer::OnMoveInternalPaneDivider

```
virtual int OnMoveInternalPaneDivider(
    int nOffset,
    HDWP& hdwp);
```

### Parameters

[in] *nOffset*<br/>
[in] *hdwp*<br/>

### Return Value

### Remarks

## <a name="onshowpane"></a> CPaneContainer::OnShowPane

```
virtual void OnShowPane(
    CDockablePane* pBar,
    BOOL bShow);
```

### Parameters

[in] *pBar*<br/>
[in] *bShow*<br/>

### Remarks

## <a name="release"></a> CPaneContainer::Release

```
DWORD Release();
```

### Return Value

### Remarks

## <a name="releaseemptypanecontainer"></a> CPaneContainer::ReleaseEmptyPaneContainer

```cpp
void ReleaseEmptyPaneContainer();
```

### Remarks

## <a name="removenonvalidpanes"></a> CPaneContainer::RemoveNonValidPanes

```cpp
void RemoveNonValidPanes();
```

### Remarks

## <a name="removepane"></a> CPaneContainer::RemovePane

```
virtual void RemovePane(CDockablePane* pBar);
```

### Parameters

[in] *pBar*<br/>

### Remarks

## <a name="resize"></a> CPaneContainer::Resize

```
virtual void Resize(
    CRect rect,
    HDWP& hdwp,
    BOOL bRedraw = FALSE);
```

### Parameters

[in] *rect*<br/>
[in] *hdwp*<br/>
[in] *bRedraw*<br/>

### Remarks

## <a name="resizepane"></a> CPaneContainer::ResizePane

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

[in] *nOffset*<br/>
[in] *pBar*<br/>
[in] *pContainer*<br/>
[in] *bHorz*<br/>
[in] *bLeftBar*<br/>
[in] *hdwp*<br/>

### Remarks

## <a name="resizepartofpanecontainer"></a> CPaneContainer::ResizePartOfPaneContainer

```
virtual void ResizePartOfPaneContainer(
    int nOffset,
    BOOL bLeftPart,
    HDWP& hdwp);
```

### Parameters

[in] *nOffset*<br/>
[in] *bLeftPart*<br/>
[in] *hdwp*<br/>

### Remarks

## <a name="serialize"></a> CPaneContainer::Serialize

```cpp
void Serialize(CArchive& ar);
```

### Parameters

[in] *ar*<br/>

### Remarks

## <a name="setpane"></a> CPaneContainer::SetPane

```cpp
void SetPane(
    CDockablePane* pBar,
    BOOL bLeft);
```

### Parameters

[in] *pBar*<br/>
[in] *bLeft*<br/>

### Remarks

## <a name="setpanecontainer"></a> CPaneContainer::SetPaneContainer

```cpp
void SetPaneContainer(
    CPaneContainer* pContainer,
    BOOL bLeft);
```

### Parameters

[in] *pContainer*<br/>
[in] *bLeft*<br/>

### Remarks

## <a name="setpanedivider"></a> CPaneContainer::SetPaneDivider

```cpp
void SetPaneDivider(CPaneDivider* pSlider);
```

### Parameters

[in] *pSlider*<br/>

### Remarks

## <a name="setparentpanecontainer"></a> CPaneContainer::SetParentPaneContainer

```cpp
void SetParentPaneContainer(CPaneContainer* p);
```

### Parameters

[in] *p*<br/>

### Remarks

## <a name="setrecentpercent"></a> CPaneContainer::SetRecentPercent

```cpp
void SetRecentPercent(int nRecentPercent);
```

### Parameters

[in] *nRecentPercent*<br/>

### Remarks

## <a name="setupbyid"></a> CPaneContainer::SetUpByID

```
BOOL SetUpByID(
    UINT nID,
    CDockablePane* pBar);
```

### Parameters

[in] *nID*<br/>
[in] *pBar*<br/>

### Return Value

### Remarks

## <a name="storerecentdocksiteinfo"></a> CPaneContainer::StoreRecentDockSiteInfo

```
virtual void StoreRecentDockSiteInfo(CDockablePane* pBar);
```

### Parameters

[in] *pBar*<br/>

### Remarks

## <a name="stretchpanecontainer"></a> CPaneContainer::StretchPaneContainer

```
virtual int StretchPaneContainer(
    int nOffset,
    BOOL bStretchHorz,
    BOOL bLeftBar,
    BOOL bMoveSlider,
    HDWP& hdwp);
```

### Parameters

[in] *nOffset*<br/>
[in] *bStretchHorz*<br/>
[in] *bLeftBar*<br/>
[in] *bMoveSlider*<br/>
[in] *hdwp*<br/>

### Return Value

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[CPaneContainerManager Class](../../mfc/reference/cpanecontainermanager-class.md)
