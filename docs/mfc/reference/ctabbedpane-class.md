---
description: "Learn more about: CTabbedPane Class"
title: "CTabbedPane Class"
ms.date: "11/04/2016"
f1_keywords: ["CTabbedPane", "AFXTABBEDPANE/CTabbedPane", "AFXTABBEDPANE/CTabbedPane::DetachPane", "AFXTABBEDPANE/CTabbedPane::EnableTabAutoColor", "AFXTABBEDPANE/CTabbedPane::FloatTab", "AFXTABBEDPANE/CTabbedPane::GetTabArea", "AFXTABBEDPANE/CTabbedPane::GetTabWnd", "AFXTABBEDPANE/CTabbedPane::HasAutoHideMode", "AFXTABBEDPANE/CTabbedPane::IsTabLocationBottom", "AFXTABBEDPANE/CTabbedPane::ResetTabs", "AFXTABBEDPANE/CTabbedPane::SetTabAutoColors", "AFXTABBEDPANE/CTabbedPane::m_bTabsAlwaysTop", "AFXTABBEDPANE/CTabbedPane::m_pTabWndRTC"]
helpviewer_keywords: ["CTabbedPane [MFC], DetachPane", "CTabbedPane [MFC], EnableTabAutoColor", "CTabbedPane [MFC], FloatTab", "CTabbedPane [MFC], GetTabArea", "CTabbedPane [MFC], GetTabWnd", "CTabbedPane [MFC], HasAutoHideMode", "CTabbedPane [MFC], IsTabLocationBottom", "CTabbedPane [MFC], ResetTabs", "CTabbedPane [MFC], SetTabAutoColors", "CTabbedPane [MFC], m_bTabsAlwaysTop", "CTabbedPane [MFC], m_pTabWndRTC"]
ms.assetid: f4dc5215-b789-4f2d-8c62-477aceda3578
---
# CTabbedPane Class

Implements the functionality of a pane with detachable tabs.

or more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

## Syntax

```
class CTabbedPane : public CBaseTabbedPane
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|`CTabbedPane::CTabbedPane`|Default constructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CTabbedPane::DetachPane](#detachpane)|(Overrides [CBaseTabbedPane::DetachPane](../../mfc/reference/cbasetabbedpane-class.md#detachpane).)|
|[CTabbedPane::EnableTabAutoColor](#enabletabautocolor)|Enables or disables automatic coloring of tabs.|
|[CTabbedPane::FloatTab](#floattab)|Floats a pane, but only if the pane currently resides in a detachable tab. (Overrides [CBaseTabbedPane::FloatTab](../../mfc/reference/cbasetabbedpane-class.md#floattab).)|
|[CTabbedPane::GetTabArea](#gettabarea)|Returns the size and position of the tab area within the tabbed window.|
|[CTabbedPane::GetTabWnd](#gettabwnd)||
|[CTabbedPane::HasAutoHideMode](#hasautohidemode)|Determines whether the tabbed pane can be switched to autohide mode. (Overrides [CBaseTabbedPane::HasAutoHideMode](../../mfc/reference/cbasetabbedpane-class.md#hasautohidemode).)|
|[CTabbedPane::IsTabLocationBottom](#istablocationbottom)|Determines whether the tabs are located at the bottom of the window.|
|[CTabbedPane::ResetTabs](#resettabs)|Resets all tabbed panes to the default state.|
|[CTabbedPane::SetTabAutoColors](#settabautocolors)|Sets a list of custom colors that can be used when the auto color feature is enabled.|

### Data Members

|Name|Description|
|----------|-----------------|
|[CTabbedPane::m_bTabsAlwaysTop](#m_btabsalwaystop)|The default location for tabs in the application.|
|[CTabbedPane::m_pTabWndRTC](#m_ptabwndrtc)|Runtime class information for a custom `CMFCTabCtrl`-derived object.|

## Remarks

The framework automatically creates an instance of this class when a user attaches one pane to another by pointing to the caption of the second pane. All of the tabbed panes that are created by the framework have an ID of -1.

To specify regular tabs instead of Outlook-style tabs, pass the AFX_CBRS_REGULAR_TABS style to the [CDockablePane::CreateEx](../../mfc/reference/cdockablepane-class.md#createex) method.

If you create a tabbed pane with detachable tabs, the pane may be destroyed automatically by the framework, so you should not store the pointer. To get a pointer to the tabbed pane, call the `CBasePane::GetParentTabbedPane` method.

## Examples

In this example we create a `CTabbedPane` object. Next, we use [CBaseTabbedPane::AddTab](../../mfc/reference/cbasetabbedpane-class.md#addtab) to attach additional tabs.

```cpp
CTabbedPane* pTabbededBar = new CTabbedPane (TRUE);

if (!pTabbededBar->Create (_T(""),
    this,
    CRect (0,
    0,
    200,
    200),
    TRUE,
    (UINT) -1,
    WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS |
    WS_CLIPCHILDREN | CBRS_LEFT |
    CBRS_FLOAT_MULTI))
{
    TRACE0("Failed to create Solution Explorer bar\n");

    return FALSE;      // fail to create
}

pTabbededBar->AddTab (&m_wndClassView);
pTabbededBar->AddTab (&m_wndResourceView);

pTabbededBar->AddTab (&m_wndFileView);
pTabbededBar->EnableDocking(CBRS_ALIGN_ANY);

DockPane(pTabbededBar);
```

Another way to create a tabbed control bar object is to use [CDockablePane::AttachToTabWnd](../../mfc/reference/cdockablepane-class.md#attachtotabwnd). The `AttachToTabWnd` method dynamically creates a tabbed pane object using runtime class information set by [CDockablePane::SetTabbedPaneRTC](../../mfc/reference/cdockablepane-class.md#settabbedpanertc).

In this example we create a tabbed pane dynamically, attach two tabs, and make the second tab non-detachable.

```cpp
DockPane(&m_wndClassView);

CTabbedPane* pTabbedBar = NULL;
m_wndResourceView.AttachToTabWnd (&m_wndClassView,
    DM_SHOW,
    TRUE,
    (CDockablePane**) &pTabbedBar);

m_wndFileView.AttachToTabWnd (pTabbedBar,
    DM_SHOW,
    TRUE,
    (CDockablePane**) &pTabbedBar);

pTabbedBar->GetUnderlyingWindow ()->EnableTabDetach (1,
    FALSE);
```

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CPane](../../mfc/reference/cpane-class.md)

[CDockablePane](../../mfc/reference/cdockablepane-class.md)

[CBaseTabbedPane](../../mfc/reference/cbasetabbedpane-class.md)

[CTabbedPane](../../mfc/reference/ctabbedpane-class.md)

## Requirements

**Header:** afxTabbedPane.h

## <a name="detachpane"></a> CTabbedPane::DetachPane

```
virtual BOOL DetachPane(
    CWnd* pBar,
    BOOL bHide = FALSE);
```

### Parameters

[in] *pBar*<br/>

[in] *bHide*<br/>

### Return Value

### Remarks

## <a name="enabletabautocolor"></a> CTabbedPane::EnableTabAutoColor

Enables or disables automatic coloring of tabs.

```
static void EnableTabAutoColor(BOOL bEnable = TRUE);
```

### Parameters

*bEnable*<br/>
[in] TRUE to enable auto coloring of tabs; otherwise, FALSE.

### Remarks

Use this static method to enable or disable automatic coloring of tabs in all tabbed panes in the application. When this feature is enabled, each tab is filled by its own color. You can find the list of colors that are used to color the tabs by calling the [CMFCBaseTabCtrl::GetAutoColors](../../mfc/reference/cmfcbasetabctrl-class.md#getautocolors) method.

You can specify the list of colors that will be used for tabs by calling [CTabbedPane::SetTabAutoColors](#settabautocolors).

By default, this option is disabled.

## <a name="floattab"></a> CTabbedPane::FloatTab

```
virtual BOOL FloatTab(
    CWnd* pBar,
    int nTabID,
    AFX_DOCK_METHOD dockMethod,
    BOOL bHide = FALSE);
```

### Parameters

[in] *pBar*<br/>
[in] *nTabID*<br/>
[in] *dockMethod*<br/>
[in] *bHide*<br/>

### Return Value

### Remarks

## <a name="gettabarea"></a> CTabbedPane::GetTabArea

Returns the size and position of the tab area in the tabbed window.

```
virtual void GetTabArea(
    CRect& rectTabAreaTop,
    CRect& rectTabAreaBottom) const;
```

### Parameters

*rectTabAreaTop*<br/>
[out] Contains the size and position, in screen coordinates, of the top tab area.

*rectTabAreaBottom*<br/>
[out] Contains the size and position, in screen coordinates, of the bottom tab area.

### Remarks

The framework calls this method to determine how to dock a pane that a user is dragging. When the user drags a pane over the tab area of the target pane, the framework tries to add it as a new tab of the target pane. Otherwise, it tries to dock the pane to the side of the target pane, which involves creating a new pane container with a pane divider that separates the two panes.

Override this method in a `CTabbedPane`-derived class to change this behavior.

## <a name="gettabwnd"></a> CTabbedPane::GetTabWnd

```
CMFCTabCtrl* GetTabWnd() const;
```

### Return Value

### Remarks

## <a name="hasautohidemode"></a> CTabbedPane::HasAutoHideMode

```
virtual BOOL HasAutoHideMode() const;
```

### Return Value

### Remarks

## <a name="istablocationbottom"></a> CTabbedPane::IsTabLocationBottom

Determines whether the tabs are located at the bottom of the window.

```
virtual BOOL IsTabLocationBottom() const;
```

### Return Value

TRUE if the tab area is located at the bottom of the tabbed window; otherwise, FALSE.

### Remarks

## <a name="m_btabsalwaystop"></a> CTabbedPane::m_bTabsAlwaysTop

The default location for tabs in the application.

```
AFX_IMPORT_DATA static BOOL m_bTabsAlwaysTop;
```

### Remarks

Set this static member to TRUE to force all tabs in the application to be displayed at the top of the tabbed pane.

You must set this value before a tabbed pane has been created.

The default value is FALSE.

## <a name="m_ptabwndrtc"></a> CTabbedPane::m_pTabWndRTC

Runtime class information for a custom `CMFCTabCtrl`-derived object.

```
AFX_IMPORT_DATA static CRuntimeClass* m_pTabWndRTC;
```

### Remarks

Set this static member variable to a pointer to the runtime class information of a `CMFCTabCtrl`-derived object if you are using a custom tabbed window inside a tabbed pane.

## <a name="resettabs"></a> CTabbedPane::ResetTabs

Resets all tabbed panes to the default state.

```
static void ResetTabs();
```

### Remarks

Call this method to revert all tabbed panes to their default state. When called, this method resets the border sizes and auto color state of all tabbed panes.

## <a name="settabautocolors"></a> CTabbedPane::SetTabAutoColors

Sets a list of custom colors that are used when the auto color feature is enabled.

```
static void SetTabAutoColors(const CArray<COLORREF, COLORREF>& arColors);
```

### Parameters

*arColors*<br/>
[in] Contains the array of colors to set.

### Remarks

Use this method to customize the list of colors that are used when the auto color feature is enabled. This is a static function and affects all tabbed panes in your application.

Use [CTabbedPane::EnableTabAutoColor](#enabletabautocolor) to enable or disable the auto color feature.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CDockablePane Class](../../mfc/reference/cdockablepane-class.md)<br/>
[CBaseTabbedPane Class](../../mfc/reference/cbasetabbedpane-class.md)<br/>
[CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md)
