---
description: "Learn more about: CMFCReBar Class"
title: "CMFCReBar Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCReBar", "AFXREBAR/CMFCReBar", "AFXREBAR/CMFCReBar::AddBar", "AFXREBAR/CMFCReBar::CalcFixedLayout", "AFXREBAR/CMFCReBar::CanFloat", "AFXREBAR/CMFCReBar::Create", "AFXREBAR/CMFCReBar::EnableDocking", "AFXREBAR/CMFCReBar::GetReBarBandInfoSize", "AFXREBAR/CMFCReBar::GetReBarCtrl", "AFXREBAR/CMFCReBar::OnShowControlBarMenu", "AFXREBAR/CMFCReBar::OnToolHitTest", "AFXREBAR/CMFCReBar::OnUpdateCmdUI", "AFXREBAR/CMFCReBar::SetPaneAlignment"]
helpviewer_keywords: ["CMFCReBar [MFC], AddBar", "CMFCReBar [MFC], CalcFixedLayout", "CMFCReBar [MFC], CanFloat", "CMFCReBar [MFC], Create", "CMFCReBar [MFC], EnableDocking", "CMFCReBar [MFC], GetReBarBandInfoSize", "CMFCReBar [MFC], GetReBarCtrl", "CMFCReBar [MFC], OnShowControlBarMenu", "CMFCReBar [MFC], OnToolHitTest", "CMFCReBar [MFC], OnUpdateCmdUI", "CMFCReBar [MFC], SetPaneAlignment"]
ms.assetid: 02a60e29-6224-49c1-9e74-e0a7d9f8d023
---
# CMFCReBar Class

A `CMFCReBar` object is a control bar that provides layout, persistence, and state information for rebar controls.
   For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

## Syntax

```
class CMFCReBar : public CPane
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCReBar::AddBar](#addbar)|Adds a band to a rebar.|
|[CMFCReBar::CalcFixedLayout](#calcfixedlayout)|(Overrides [CBasePane::CalcFixedLayout](../../mfc/reference/cbasepane-class.md#calcfixedlayout).)|
|[CMFCReBar::CanFloat](#canfloat)|(Overrides [CBasePane::CanFloat](../../mfc/reference/cbasepane-class.md#canfloat).)|
|[CMFCReBar::Create](#create)|Creates the rebar control and attaches it to the `CMFCReBar` object.|
|[CMFCReBar::EnableDocking](#enabledocking)|(Overrides [CBasePane::EnableDocking](../../mfc/reference/cbasepane-class.md#enabledocking).)|
|[CMFCReBar::GetReBarBandInfoSize](#getrebarbandinfosize)||
|[CMFCReBar::GetReBarCtrl](#getrebarctrl)|Provides direct access to the underlying [CReBarCtrl](../../mfc/reference/crebarctrl-class.md) common control.|
|[CMFCReBar::OnShowControlBarMenu](#onshowcontrolbarmenu)|(Overrides [CPane::OnShowControlBarMenu](../../mfc/reference/cpane-class.md#onshowcontrolbarmenu).)|
|[CMFCReBar::OnToolHitTest](#ontoolhittest)|(Overrides [CWnd::OnToolHitTest](../../mfc/reference/cwnd-class.md#ontoolhittest).)|
|[CMFCReBar::OnUpdateCmdUI](#onupdatecmdui)|(Overrides [CBasePane::OnUpdateCmdUI](cbasepane-class.md).)|
|[CMFCReBar::SetPaneAlignment](#setpanealignment)|(Overrides [CBasePane::SetPaneAlignment](../../mfc/reference/cbasepane-class.md#setpanealignment).)|

## Remarks

A `CMFCReBar` object can contain a variety of child windows. This includes edit boxes, toolbars, and list boxes. You can resize the rebar programmatically, or the user can manually resize the rebar by dragging its gripper bar. You can also set the background of a rebar object to a bitmap of your choice.

A rebar object behaves similarly to a toolbar object. A rebar control can contain one or more bands, and each band can contain a gripper bar, a bitmap, a text label, and a child window.

## Example

The following example demonstrates how to use various methods in the `CMFCReBar` class. The example shows how to create a rebar control and add a band to it. The band functions as an internal toolbar. This code snippet is part of the [Rebar Test sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_RebarTest#1](../../mfc/reference/codesnippet/cpp/cmfcrebar-class_1.h)]
[!code-cpp[NVC_MFC_RebarTest#2](../../mfc/reference/codesnippet/cpp/cmfcrebar-class_2.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)\
└&nbsp;[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)\
&nbsp;&nbsp;&nbsp;&nbsp;└&nbsp;[CWnd](../../mfc/reference/cwnd-class.md)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;└&nbsp;[CBasePane](../../mfc/reference/cbasepane-class.md)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;└&nbsp;[CPane](../../mfc/reference/cpane-class.md)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;└&nbsp;[CMFCReBar](../../mfc/reference/cmfcrebar-class.md)

## Requirements

**Header:** afxRebar.h

## <a name="addbar"></a> CMFCReBar::AddBar

Adds a band to a rebar.

```
BOOL AddBar(
    CWnd* pBar,
    LPCTSTR pszText = NULL,
    CBitmap* pbmp = NULL,
    DWORD dwStyle = RBBS_GRIPPERALWAYS | RBBS_FIXEDBMP);

BOOL AddBar(
    CWnd* pBar,
    COLORREF clrFore,
    COLORREF clrBack,
    LPCTSTR pszText = NULL,
    DWORD dwStyle = RBBS_GRIPPERALWAYS);
```

### Parameters

*pBar*<br/>
[in, out] A pointer to the child window that is to be inserted into the rebar. The referenced object must have the **WS_CHILD** window style.

*pszText*<br/>
[in] Specifies the text to appear on the rebar. The text is not part of the child window. Rather, it is displayed on the rebar itself.

*pbmp*<br/>
[in, out] Specifies the bitmap to be displayed on the rebar background.

*dwStyle*<br/>
[in] Contains the style to apply to the band. For a complete list of band styles, see the description for `fStyle` in the [REBARBANDINFO](/windows/win32/api/commctrl/ns-commctrl-rebarbandinfow) structure in the Windows SDK documentation.

*clrFore*<br/>
[in] Represents the foreground color of the rebar.

*clrBack*<br/>
[in] Represents the background color of the rebar.

### Return Value

TRUE if the band was successfully added to the rebar; otherwise, FALSE.

## <a name="create"></a> CMFCReBar::Create

Creates the rebar control and attaches it to the [CMFCReBar](../../mfc/reference/cmfcrebar-class.md) object.

```
BOOL Create(
    CWnd* pParentWnd,
    DWORD dwCtrlStyle = RBS_BANDBORDERS,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN | CBRS_TOP,
    UINT nID = AFX_IDW_REBAR);
```

### Parameters

*pParentWnd*<br/>
[in, out] A pointer to the parent window of this rebar control.

*dwCtrlStyle*<br/>
[in] Specifies the style for the rebar control. The default style value is **RBS_BANDBORDERS**, which displays narrow lines to separate adjacent bands on the rebar control. For a list of valid styles, see [Rebar Control Styles](/windows/win32/Controls/rebar-control-styles) in the Windows SDK documentation.

*dwStyle*<br/>
[in] The window style of the rebar control. For a list of valid styles, see [Window Styles](../../mfc/reference/styles-used-by-mfc.md#window-styles).

*nID*<br/>
[in] The rebar's child-window ID.

### Return Value

TRUE if the rebar was created successfully; otherwise, FALSE.

### Remarks

## <a name="getrebarctrl"></a> CMFCReBar::GetReBarCtrl

Provides direct access to `CReBarCtrl` the underlying common control for `CMFCReBar` objects.

```
CReBarCtrl& GetReBarCtrl() const;
```

### Return Value

A reference to the underlying `CReBarCtrl` object.

### Remarks

Call this method to take advantage of the Windows rebar common control functionality when customizing your rebar.

## <a name="calcfixedlayout"></a> CMFCReBar::CalcFixedLayout

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

## <a name="canfloat"></a> CMFCReBar::CanFloat

```
virtual BOOL CanFloat() const;
```

### Return Value

### Remarks

## <a name="enabledocking"></a> CMFCReBar::EnableDocking

```cpp
void EnableDocking(DWORD dwDockStyle);
```

### Parameters

[in] *dwDockStyle*<br/>

### Remarks

## <a name="getrebarbandinfosize"></a> CMFCReBar::GetReBarBandInfoSize

```
UINT GetReBarBandInfoSize() const;
```

### Return Value

### Remarks

## <a name="onshowcontrolbarmenu"></a> CMFCReBar::OnShowControlBarMenu

```
virtual BOOL OnShowControlBarMenu(CPoint);
```

### Parameters

[in] *CPoint*<br/>

### Return Value

### Remarks

## <a name="ontoolhittest"></a> CMFCReBar::OnToolHitTest

```
virtual INT_PTR OnToolHitTest(
    CPoint point,
    TOOLINFO* pTI) const;
```

### Parameters

[in] *point*<br/>
[in] *pTI*<br/>

### Return Value

### Remarks

## <a name="onupdatecmdui"></a> CMFCReBar::OnUpdateCmdUI

```
virtual void OnUpdateCmdUI(
    CFrameWnd* pTarget,
    BOOL bDisableIfNoHndler);
```

### Parameters

[in] *pTarget*<br/>
[in] *bDisableIfNoHndler*<br/>

### Remarks

## <a name="setpanealignment"></a> CMFCReBar::SetPaneAlignment

```
virtual void SetPaneAlignment(DWORD dwAlignment);
```

### Parameters

[in] *dwAlignment*<br/>

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CReBarCtrl Class](../../mfc/reference/crebarctrl-class.md)<br/>
[CPane Class](../../mfc/reference/cpane-class.md)
