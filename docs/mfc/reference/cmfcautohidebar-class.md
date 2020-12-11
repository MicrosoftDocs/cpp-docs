---
description: "Learn more about: CMFCAutoHideBar Class"
title: "CMFCAutoHideBar Class"
ms.date: "10/18/2018"
f1_keywords: ["CMFCAutoHideBar", "AFXAUTOHIDEBAR/CMFCAutoHideBar", "AFXAUTOHIDEBAR/CMFCAutoHideBar::CMFCAutoHideBar", "AFXAUTOHIDEBAR/CMFCAutoHideBar::AddAutoHideWindow", "AFXAUTOHIDEBAR/CMFCAutoHideBar::AllowShowOnPaneMenu", "AFXAUTOHIDEBAR/CMFCAutoHideBar::CalcFixedLayout", "AFXAUTOHIDEBAR/CMFCAutoHideBar::Create", "AFXAUTOHIDEBAR/CMFCAutoHideBar::GetFirstAHWindow", "AFXAUTOHIDEBAR/CMFCAutoHideBar::GetVisibleCount", "AFXAUTOHIDEBAR/CMFCAutoHideBar::OnShowControlBarMenu", "AFXAUTOHIDEBAR/CMFCAutoHideBar::RemoveAutoHideWindow", "AFXAUTOHIDEBAR/CMFCAutoHideBar::SetActiveInGroup", "AFXAUTOHIDEBAR/CMFCAutoHideBar::SetRecentVisibleState", "AFXAUTOHIDEBAR/CMFCAutoHideBar::ShowAutoHideWindow", "AFXAUTOHIDEBAR/CMFCAutoHideBar::StretchPane", "AFXAUTOHIDEBAR/CMFCAutoHideBar::UnSetAutoHideMode", "AFXAUTOHIDEBAR/CMFCAutoHideBar::UpdateVisibleState", "AFXAUTOHIDEBAR/CMFCAutoHideBar::m_nShowAHWndDelay"]
helpviewer_keywords: ["CMFCAutoHideBar [MFC], CMFCAutoHideBar", "CMFCAutoHideBar [MFC], AddAutoHideWindow", "CMFCAutoHideBar [MFC], AllowShowOnPaneMenu", "CMFCAutoHideBar [MFC], CalcFixedLayout", "CMFCAutoHideBar [MFC], Create", "CMFCAutoHideBar [MFC], GetFirstAHWindow", "CMFCAutoHideBar [MFC], GetVisibleCount", "CMFCAutoHideBar [MFC], OnShowControlBarMenu", "CMFCAutoHideBar [MFC], RemoveAutoHideWindow", "CMFCAutoHideBar [MFC], SetActiveInGroup", "CMFCAutoHideBar [MFC], SetRecentVisibleState", "CMFCAutoHideBar [MFC], ShowAutoHideWindow", "CMFCAutoHideBar [MFC], StretchPane", "CMFCAutoHideBar [MFC], UnSetAutoHideMode", "CMFCAutoHideBar [MFC], UpdateVisibleState", "CMFCAutoHideBar [MFC], m_nShowAHWndDelay"]
ms.assetid: 54c8d84f-de64-4efd-8a47-3ea0ade40a70
---
# CMFCAutoHideBar Class

The `CMFCAutoHideBar` class is a special toolbar class that implements the auto-hide feature.

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

## Syntax

```
class CMFCAutoHideBar : public CPane
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCAutoHideBar::CMFCAutoHideBar](#cmfcautohidebar)||

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCAutoHideBar::AddAutoHideWindow](#addautohidewindow)||
|[CMFCAutoHideBar::AllowShowOnPaneMenu](#allowshowonpanemenu)|(Overrides `CPane::AllowShowOnPaneMenu`.)|
|[CMFCAutoHideBar::CalcFixedLayout](#calcfixedlayout)|(Overrides [CBasePane::CalcFixedLayout](../../mfc/reference/cbasepane-class.md#calcfixedlayout).)|
|[CMFCAutoHideBar::Create](#create)|Creates a control bar and attaches it to the [CPane](../../mfc/reference/cpane-class.md) object. (Overrides [CPane::Create](../../mfc/reference/cpane-class.md#create).)|
|[CMFCAutoHideBar::GetFirstAHWindow](#getfirstahwindow)||
|[CMFCAutoHideBar::GetVisibleCount](#getvisiblecount)||
|[CMFCAutoHideBar::OnShowControlBarMenu](#onshowcontrolbarmenu)|Called by the framework when a special pane menu is about to be displayed. (Overrides [CPane::OnShowControlBarMenu](../../mfc/reference/cpane-class.md#onshowcontrolbarmenu).)|
|[CMFCAutoHideBar::RemoveAutoHideWindow](#removeautohidewindow)||
|[CMFCAutoHideBar::SetActiveInGroup](#setactiveingroup)|(Overrides [CPane::SetActiveInGroup](../../mfc/reference/cpane-class.md#setactiveingroup).)|
|[CMFCAutoHideBar::SetRecentVisibleState](#setrecentvisiblestate)||
|[CMFCAutoHideBar::ShowAutoHideWindow](#showautohidewindow)||
|[CMFCAutoHideBar::StretchPane](#stretchpane)|Stretches a pane vertically or horizontally. (Overrides [CBasePane::StretchPane](../../mfc/reference/cbasepane-class.md#stretchpane).)|
|[CMFCAutoHideBar::UnSetAutoHideMode](#unsetautohidemode)||
|[CMFCAutoHideBar::UpdateVisibleState](#updatevisiblestate)||

### Data Members

|Name|Description|
|----------|-----------------|
|[CMFCAutoHideBar::m_nShowAHWndDelay](#m_nshowahwnddelay)|The time delay between the moment when the user places the mouse cursor over a [CMFCAutoHideButton Class](../../mfc/reference/cmfcautohidebutton-class.md) and the moment when the framework shows the associated window.|

## Remarks

When the user switches a dock pane to auto-hide mode, the framework automatically creates a `CMFCAutoHideBar` object. It also creates the necessary [CAutoHideDockSite](../../mfc/reference/cautohidedocksite-class.md) and [CMFCAutoHideButton](../../mfc/reference/cmfcautohidebutton-class.md) objects. Each `CAutoHideDockSite` object is associated with an individual `CMFCAutoHideButton`.

The `CMFCAutoHideBar` class implements the display of a `CAutoHideDockSite` when a user's mouse hovers over a `CMFCAutoHideButton`. When the toolbar receives a WM_MOUSEMOVE message, `CMFCAutoHideBar` starts a timer. When the timer finishes, it sends the toolbar a WM_TIMER event notification. The toolbar handles this event by checking whether the mouse pointer is positioned over the same auto-hide button that it was positioned over when the timer started. If it is, the attached `CAutoHideDockSite` is displayed.

You can control the length of the timer's delay by setting `m_nShowAHWndDelay`. The default value is 400 ms.

## Example

The following example demonstrates how to construct a `CMFCAutoHideBar` object and use its `GetDockSiteRow` method.

[!code-cpp[NVC_MFC_RibbonApp#26](../../mfc/reference/codesnippet/cpp/cmfcautohidebar-class_1.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CPane](../../mfc/reference/cpane-class.md)

[CMFCAutoHideBar](../../mfc/reference/cmfcautohidebar-class.md)

## Requirements

**Header:** afxautohidebar.h

## <a name="addautohidewindow"></a> CMFCAutoHideBar::AddAutoHideWindow

Adds functionality to a `CDockablePane` window that enables it to auto-hide.

```
CMFCAutoHideButton* AddAutoHideWindow(
    CDockablePane* pAutoHideWnd,
    DWORD dwAlignment);
```

### Parameters

*pAutoHideWnd*<br/>
[in] The window that you want to hide.

*dwAlignment*<br/>
[in] A value that specifies the alignment of the auto-hide button with the application window.

### Return Value

### Remarks

The *dwAlignment* parameter indicates where the auto-hide button resides in the application. The parameter can be any one of the following values:

- CBRS_ALIGN_LEFT

- CBRS_ALIGN_RIGHT

- CBRS_ALIGN_TOP

- CBRS_ALIGN_BOTTOM

## <a name="allowshowonpanemenu"></a> CMFCAutoHideBar::AllowShowOnPaneMenu

```
virtual BOOL AllowShowOnPaneMenu() const;
```

### Return Value

### Remarks

## <a name="calcfixedlayout"></a> CMFCAutoHideBar::CalcFixedLayout

```
virtual CSize CalcFixedLayout(
    BOOL bStretch,
    BOOL bHorz);
```

### Parameters

[in] *bStretch*<br/>

[in] *bHorz*<br/>

### Return Value

### Remarks

## <a name="cmfcautohidebar"></a> CMFCAutoHideBar::CMFCAutoHideBar

Constructs a CMFCAutoHideBar object.

```
CMFCAutoHideBar();
```

### Remarks

## <a name="create"></a> CMFCAutoHideBar::Create

```
virtual BOOL Create(
    LPCTSTR lpszClassName,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID,
    DWORD dwControlBarStyle = AFX_DEFAULT_PANE_STYLE,
    CCreateContext* pContext = NULL);
```

### Parameters

*lpszClassName*<br/>

*dwStyle*<br/>

*rect*<br/>

*pParentWnd*<br/>

*nID*<br/>

*dwControlBarStyle*<br/>

*pContext*<br/>

### Return Value

### Remarks

## <a name="getfirstahwindow"></a> CMFCAutoHideBar::GetFirstAHWindow

Returns a pointer to the first auto-hide window in the application.

```
CDockablePane* GetFirstAHWindow();
```

### Return Value

The first auto-hide window in the application, or NULL if there isn't one.

### Remarks

## <a name="getvisiblecount"></a> CMFCAutoHideBar::GetVisibleCount

Gets the number of visible auto-hide buttons.

```
int GetVisibleCount();
```

### Return Value

Returns the number of visible auto-hide buttons.

### Remarks

## <a name="m_nshowahwnddelay"></a> CMFCAutoHideBar::m_nShowAHWndDelay

The time delay between the moment when the user places the mouse cursor over a [CMFCAutoHideButton Class](../../mfc/reference/cmfcautohidebutton-class.md) and the moment when the framework shows the associated window.

```
int CMFCAutoHideBar::m_nShowAHWndDelay = 400;
```

### Remarks

When the user places the mouse cursor over a `CMFCAutoHideButton`, there is a slight delay before the framework displays the associated window. This parameter determines the length of that delay in milliseconds.

## <a name="onshowcontrolbarmenu"></a> CMFCAutoHideBar::OnShowControlBarMenu

```
virtual BOOL OnShowControlBarMenu(CPoint);
```

### Parameters

[in] *CPoint*<br/>

### Return Value

### Remarks

## <a name="removeautohidewindow"></a> CMFCAutoHideBar::RemoveAutoHideWindow

Removes and destroys the auto-hide window.

```
    BOOL RemoveAutoHideWindow(CDockablePane* pAutoHideWnd);
```

### Parameters

CDockablePane* *pAutoHideWnd*
The auto-hide window to remove.

### Return Value

TRUE if successful; otherwise FALSE.

### Remarks

## <a name="setactiveingroup"></a> CMFCAutoHideBar::SetActiveInGroup

Flags an auto-hide bar as active.

```
virtual void SetActiveInGroup(BOOL bActive);
```

### Parameters

[in] BOOL *bActive*
TRUE to set to active; otherwise FALSE.

### Remarks

See [CPane::SetActiveInGroup](../../mfc/reference/cpane-class.md#setactiveingroup).

## <a name="setrecentvisiblestate"></a> CMFCAutoHideBar::SetRecentVisibleState

```cpp
void SetRecentVisibleState(BOOL bState);
```

### Parameters

*bState*<br/>
[in] State to set.

### Remarks

## <a name="showautohidewindow"></a> CMFCAutoHideBar::ShowAutoHideWindow

Shows the auto-hide window.

```
BOOL ShowAutoHideWindow(
    CDockablePane* pAutoHideWnd,
    BOOL bShow,
    BOOL bDelay);
```

### Parameters

*pAutoHideWnd*<br/>
[in] Window to show.

*bShow*<br/>
[in] TRUE to show the window.

*bDelay*<br/>
[in] This parameter is ignored.

### Return Value

TRUE if successful; otherwise FALSE.

### Remarks

## <a name="stretchpane"></a> CMFCAutoHideBar::StretchPane

Resizes the auto-hide bar in its collapsed state to fit the `CMFCAutoHideButton` object.

```
virtual CSize StretchPane(
    int nLength,
    BOOL bVert);
```

### Parameters

*nLength*<br/>
[in] The value is unused in the base implementation. In derived implementations, use this value to indicate the length of the resized pane.

*bVert*<br/>
[in] The value is unused in the base implementation. In derived implementations, use TRUE to handle the case where the auto-hide bar is collapsed vertically, and FALSE for the case where the auto-hide bar is collapsed horizontally.

### Return Value

The resulting size of the resized pane.

### Remarks

Derived classes can override this method to customize the behavior.

## <a name="unsetautohidemode"></a> CMFCAutoHideBar::UnSetAutoHideMode

Disables auto-hide mode for a group of auto-hide bars.

```cpp
void UnSetAutoHideMode(CDockablePane* pFirstBarInGroup)
```

### Parameters

[in] pFirstBarInGroup
A pointer to the first auto-hide bar in the group.

### Remarks

## <a name="updatevisiblestate"></a> CMFCAutoHideBar::UpdateVisibleState

Called by the framework when the auto-hide bar needs to be redrawn.

```cpp
void UpdateVisibleState();
```

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CPane Class](../../mfc/reference/cpane-class.md)<br/>
[CAutoHideDockSite Class](../../mfc/reference/cautohidedocksite-class.md)<br/>
[CMFCAutoHideButton Class](../../mfc/reference/cmfcautohidebutton-class.md)
