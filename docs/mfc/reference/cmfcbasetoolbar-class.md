---
description: "Learn more about: CMFCBaseToolBar Class"
title: "CMFCBaseToolBar Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCBaseToolBar", "AFXBASETOOLBAR/CMFCBaseToolBar", "AFXBASETOOLBAR/CMFCBaseToolBar::GetDockingMode", "AFXBASETOOLBAR/CMFCBaseToolBar::GetMinSize", "AFXBASETOOLBAR/CMFCBaseToolBar::OnAfterChangeParent"]
helpviewer_keywords: ["CMFCBaseToolBar [MFC], GetDockingMode", "CMFCBaseToolBar [MFC], GetMinSize", "CMFCBaseToolBar [MFC], OnAfterChangeParent"]
ms.assetid: 5d79206d-55e4-46f8-b1b8-042e34d7f9da
---
# CMFCBaseToolBar Class

Base class for toolbars.

## Syntax

```
class CMFCBaseToolBar : public CPane
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|`CMFCBaseToolBar::CMFCBaseToolBar`|Default constructor.|
|`CMFCBaseToolBar::~CMFCBaseToolBar`|Destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|`CMFCBaseToolBar::CreateObject`|Used by the framework to create a dynamic instance of this class type.|
|[CMFCBaseToolBar::GetDockingMode](#getdockingmode)|Returns the docking mode. (Overrides [CBasePane::GetDockingMode](../../mfc/reference/cbasepane-class.md#getdockingmode).)|
|[CMFCBaseToolBar::GetMinSize](#getminsize)|Returns the minimum size of a toolbar. (Overrides [CPane::GetMinSize](../../mfc/reference/cpane-class.md#getminsize).)|
|[CMFCBaseToolBar::OnAfterChangeParent](#onafterchangeparent)|Called by the framework after the pane's parent changes. (Overrides [CBasePane::OnAfterChangeParent](../../mfc/reference/cbasepane-class.md#onafterchangeparent).)|

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CPane](../../mfc/reference/cpane-class.md)

[CMFCBaseToolBar](../../mfc/reference/cmfcbasetoolbar-class.md)

## Requirements

**Header:** afxbasetoolbar.h

## <a name="getdockingmode"></a> CMFCBaseToolBar::GetDockingMode

Returns the docking mode.

```
virtual AFX_DOCK_TYPE GetDockingMode() const;
```

### Return Value

The docking mode.

## <a name="getminsize"></a> CMFCBaseToolBar::GetMinSize

Returns the minimum size of a toolbar.

```
virtual void GetMinSize(CSize& size) const;
```

### Parameters

*size*<br/>
[out] The minimum size of a toolbar.

## <a name="onafterchangeparent"></a> CMFCBaseToolBar::OnAfterChangeParent

Called by the framework after the pane's parent changes.

```
virtual void OnAfterChangeParent(CWnd* pWndOldParent);
```

### Parameters

*pWndOldParent*<br/>
[in] A pointer to the previous parent window.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)
