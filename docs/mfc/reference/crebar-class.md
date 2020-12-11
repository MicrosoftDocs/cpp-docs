---
description: "Learn more about: CReBar Class"
title: "CReBar Class"
ms.date: "11/19/2018"
f1_keywords: ["CReBar", "AFXEXT/CReBar", "AFXEXT/CReBar::AddBar", "AFXEXT/CReBar::Create", "AFXEXT/CReBar::GetReBarCtrl"]
helpviewer_keywords: ["CReBar [MFC], AddBar", "CReBar [MFC], Create", "CReBar [MFC], GetReBarCtrl"]
ms.assetid: c1ad2720-1d33-4106-8e4e-80aa84f93559
---
# CReBar Class

A control bar that provides layout, persistence, and state information for rebar controls.

## Syntax

```
class CReBar : public CControlBar
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CReBar::AddBar](#addbar)|Adds a band to a rebar.|
|[CReBar::Create](#create)|Creates the rebar control and attaches it to the `CReBar` object.|
|[CReBar::GetReBarCtrl](#getrebarctrl)|Allows direct access to the underlying common control.|

## Remarks

A rebar object can contain a variety of child windows, usually other controls, including edit boxes, toolbars, and list boxes. A rebar object can display its child windows over a specified bitmap. Your application can automatically resize the rebar, or the user can manually resize the rebar by clicking or dragging its gripper bar.

![Example of RebarMenu](../../mfc/reference/media/vc4sc61.gif "Example of RebarMenu")

## Rebar Control

A rebar object behaves similarly to a toolbar object. A rebar uses the click-and-drag mechanism to resize its bands. A rebar control can contain one or more bands, with each band having any combination of a gripper bar, a bitmap, a text label, and a child window. However, bands cannot contain more than one child window.

`CReBar` uses the [CReBarCtrl](../../mfc/reference/crebarctrl-class.md) class to provide its implementation. You can access the rebar control through [GetReBarCtrl](#getrebarctrl) to take advantage of the control's customization options. For more information about rebar controls, see `CReBarCtrl`. For more information about using rebar controls, see [Using CReBarCtrl](../../mfc/using-crebarctrl.md).

> [!CAUTION]
> Rebar and rebar control objects do not support MFC control bar docking. If `CRebar::EnableDocking` is called, your application will assert.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CControlBar](../../mfc/reference/ccontrolbar-class.md)

`CReBar`

## Requirements

**Header:** afxext.h

## <a name="addbar"></a> CReBar::AddBar

Call this member function to add a band to the rebar.

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
A pointer to a `CWnd` object that is the child window to be inserted into the rebar. The referenced object must have a WS_CHILD.

*lpszText*<br/>
A pointer to a string containing the text to appear on the rebar. NULL by default. The text contained in *lpszText* is not part of the child window; it is on the rebar itself.

*pbmp*<br/>
A pointer to a `CBitmap` object to be displayed on the rebar background. NULL by default.

*dwStyle*<br/>
A DWORD containing the style to apply to the rebar. See the `fStyle` function description in the Win32 structure [REBARBANDINFO](/windows/win32/api/commctrl/ns-commctrl-rebarbandinfow) for a complete list of band styles.

*clrFore*<br/>
A COLORREF value that represents the foreground color of the rebar.

*clrBack*<br/>
A COLORREF value that represents the background color of the rebar.

### Return Value

Nonzero if successful; otherwise 0.

### Example

[!code-cpp[NVC_MFC_CReBarCtrl#1](../../mfc/reference/codesnippet/cpp/crebar-class_1.cpp)]

## <a name="create"></a> CReBar::Create

Call this member function to create a rebar.

```
virtual BOOL Create(
    CWnd* pParentWnd,
    DWORD dwCtrlStyle = RBS_BANDBORDERS,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN | CBRS_TOP,
    UINT nID = AFX_IDW_REBAR);
```

### Parameters

*pParentWnd*<br/>
Pointer to the `CWnd` object whose Windows window is the parent of the status bar. Normally your frame window.

*dwCtrlStyle*<br/>
The rebar control style. By default, RBS_BANDBORDERS, which displays narrow lines to separate adjacent bands within the rebar control. See [Rebar Control Styles](/windows/win32/Controls/rebar-control-styles) in the Windows SDK for a list of styles.

*dwStyle*<br/>
The rebar window styles.

*nID*<br/>
The rebar's child-window ID.

### Return Value

Nonzero if successful; otherwise 0.

### Example

  See the example for [CReBar::AddBar](#addbar).

## <a name="getrebarctrl"></a> CReBar::GetReBarCtrl

This member function allows direct access to the underlying common control.

```
CReBarCtrl& GetReBarCtrl() const;
```

### Return Value

A reference to a [CReBarCtrl](../../mfc/reference/crebarctrl-class.md) object.

### Remarks

Call this member function to take advantage of the functionality of the Windows rebar common control in customizing your rebar. When you call `GetReBarCtrl`, it returns a reference object to the `CReBarCtrl` object so you can use either set of member functions.

For more information about using `CReBarCtrl` to customize your rebar, see [Using CReBarCtrl](../../mfc/using-crebarctrl.md).

### Example

[!code-cpp[NVC_MFC_CReBarCtrl#2](../../mfc/reference/codesnippet/cpp/crebar-class_2.cpp)]

## See also

[MFC Sample MFCIE](../../overview/visual-cpp-samples.md)<br/>
[CControlBar Class](../../mfc/reference/ccontrolbar-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)
