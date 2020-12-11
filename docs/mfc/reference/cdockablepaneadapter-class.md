---
description: "Learn more about: CDockablePaneAdapter Class"
title: "CDockablePaneAdapter Class"
ms.date: "11/04/2016"
f1_keywords: ["CDockablePaneAdapter", "AFXDOCKABLEPANEADAPTER/CDockablePaneAdapter", "AFXDOCKABLEPANEADAPTER/CDockablePaneAdapter::GetWrappedWnd", "AFXDOCKABLEPANEADAPTER/CDockablePaneAdapter::LoadState", "AFXDOCKABLEPANEADAPTER/CDockablePaneAdapter::SaveState", "AFXDOCKABLEPANEADAPTER/CDockablePaneAdapter::SetWrappedWnd"]
helpviewer_keywords: ["CDockablePaneAdapter [MFC], GetWrappedWnd", "CDockablePaneAdapter [MFC], LoadState", "CDockablePaneAdapter [MFC], SaveState", "CDockablePaneAdapter [MFC], SetWrappedWnd"]
ms.assetid: 6ed6cf82-f39c-4d0c-bf7c-8641495cf8f3
---
# CDockablePaneAdapter Class

Provides docking support for `CWnd`-derived panes.

## Syntax

```
class CDockablePaneAdapter : public CDockablePane
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CDockablePaneAdapter::GetWrappedWnd](#getwrappedwnd)|Returns the wrapped window.|
|[CDockablePaneAdapter::LoadState](#loadstate)|(Overrides [CDockablePane::LoadState](cdockablepane-class.md#loadstate).)|
|[CDockablePaneAdapter::SaveState](#savestate)|(Overrides [CDockablePane::SaveState](cdockablepane-class.md).)|
|[CDockablePaneAdapter::SetWrappedWnd](#setwrappedwnd)||

## Remarks

Usually, the framework instantiates objects of this class when you use the [CMFCBaseTabCtrl::AddTab](../../mfc/reference/cmfcbasetabctrl-class.md#addtab) or [CMFCBaseTabCtrl::InsertTab](../../mfc/reference/cmfcbasetabctrl-class.md#inserttab) methods.

If you want to customize the `CDockablePaneAdapter` behavior, just derive a new class from it and set the runtime class information to a tabbed window by using [CMFCBaseTabCtrl::SetDockingBarWrapperRTC](../../mfc/reference/cmfcbasetabctrl-class.md#setdockingbarwrapperrtc).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)\
└&nbsp;[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)\
&nbsp;&nbsp;&nbsp;&nbsp;└&nbsp;[CWnd](../../mfc/reference/cwnd-class.md)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;└&nbsp;[CBasePane](../../mfc/reference/cbasepane-class.md)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;└&nbsp;[CPane](../../mfc/reference/cpane-class.md)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;└&nbsp;[CDockablePane](../../mfc/reference/cdockablepane-class.md)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;└&nbsp;[CDockablePaneAdapter](../../mfc/reference/cdockablepaneadapter-class.md)

## Requirements

**Header:** afxDockablePaneAdapter.h

## <a name="getwrappedwnd"></a> CDockablePaneAdapter::GetWrappedWnd

Returns the underlying window for the dockable pane adapter.

```
virtual CWnd* GetWrappedWnd() const;
```

### Return Value

A pointer to the wrapped window.

### Remarks

Use this function to access the wrapped window.

## <a name="loadstate"></a> CDockablePaneAdapter::LoadState

Loads the state of the pane from the registry.

```
virtual BOOL LoadState(
    LPCTSTR lpszProfileName = NULL,
    int nIndex = -1,
    UINT uiID = (UINT) -1);
```

### Parameters

*lpszProfileName*<br/>
[in] The profile name.

*nIndex*<br/>
[in] The profile index.

*uiID*<br/>
[in] The pane ID.

### Return Value

### Remarks

## <a name="savestate"></a> CDockablePaneAdapter::SaveState

Saves the state of the pane to the registry.

```
virtual BOOL SaveState(
    LPCTSTR lpszProfileName = NULL,
    int nIndex = -1,
    UINT uiID = (UINT) -1);
```

### Parameters

*lpszProfileName*<br/>
[in] The profile name.

*nIndex*<br/>
[in] The profile index (defaults to the control ID of the window).

*uiID*<br/>
[in] The pane ID.

### Return Value

### Remarks

## <a name="setwrappedwnd"></a> CDockablePaneAdapter::SetWrappedWnd

Sets the underlying window for the dockable pane adapter.

```
virtual BOOL SetWrappedWnd(CWnd* pWnd);
```

### Parameters

*pWnd*<br/>
[in] A pointer to the window for the pane adapter to wrap.

### Return Value

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CDockablePane Class](../../mfc/reference/cdockablepane-class.md)
