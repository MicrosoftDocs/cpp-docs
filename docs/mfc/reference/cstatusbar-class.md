---
description: "Learn more about: CStatusBar Class"
title: "CStatusBar Class"
ms.date: "11/04/2016"
f1_keywords: ["CStatusBar", "AFXEXT/CStatusBar", "AFXEXT/CStatusBar::CStatusBar", "AFXEXT/CStatusBar::CommandToIndex", "AFXEXT/CStatusBar::Create", "AFXEXT/CStatusBar::CreateEx", "AFXEXT/CStatusBar::DrawItem", "AFXEXT/CStatusBar::GetItemID", "AFXEXT/CStatusBar::GetItemRect", "AFXEXT/CStatusBar::GetPaneInfo", "AFXEXT/CStatusBar::GetPaneStyle", "AFXEXT/CStatusBar::GetPaneText", "AFXEXT/CStatusBar::GetStatusBarCtrl", "AFXEXT/CStatusBar::SetIndicators", "AFXEXT/CStatusBar::SetPaneInfo", "AFXEXT/CStatusBar::SetPaneStyle", "AFXEXT/CStatusBar::SetPaneText"]
helpviewer_keywords: ["CStatusBar [MFC], CStatusBar", "CStatusBar [MFC], CommandToIndex", "CStatusBar [MFC], Create", "CStatusBar [MFC], CreateEx", "CStatusBar [MFC], DrawItem", "CStatusBar [MFC], GetItemID", "CStatusBar [MFC], GetItemRect", "CStatusBar [MFC], GetPaneInfo", "CStatusBar [MFC], GetPaneStyle", "CStatusBar [MFC], GetPaneText", "CStatusBar [MFC], GetStatusBarCtrl", "CStatusBar [MFC], SetIndicators", "CStatusBar [MFC], SetPaneInfo", "CStatusBar [MFC], SetPaneStyle", "CStatusBar [MFC], SetPaneText"]
ms.assetid: a3bde3db-e71c-4881-a3ca-1d5481c345ba
---
# CStatusBar Class

A control bar with a row of text output panes, or "indicators."

## Syntax

```
class CStatusBar : public CControlBar
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CStatusBar::CStatusBar](#cstatusbar)|Constructs a `CStatusBar` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CStatusBar::CommandToIndex](#commandtoindex)|Gets index for a given indicator ID.|
|[CStatusBar::Create](#create)|Creates the status bar, attaches it to the `CStatusBar` object, and sets the initial font and bar height.|
|[CStatusBar::CreateEx](#createex)|Creates a `CStatusBar` object with additional styles for the embedded `CStatusBarCtrl` object.|
|[CStatusBar::DrawItem](#drawitem)|Called when a visual aspect of an owner-draw status bar control changes.|
|[CStatusBar::GetItemID](#getitemid)|Gets indicator ID for a given index.|
|[CStatusBar::GetItemRect](#getitemrect)|Gets display rectangle for a given index.|
|[CStatusBar::GetPaneInfo](#getpaneinfo)|Gets indicator ID, style, and width for a given index.|
|[CStatusBar::GetPaneStyle](#getpanestyle)|Gets indicator style for a given index.|
|[CStatusBar::GetPaneText](#getpanetext)|Gets indicator text for a given index.|
|[CStatusBar::GetStatusBarCtrl](#getstatusbarctrl)|Allows direct access to the underlying common control.|
|[CStatusBar::SetIndicators](#setindicators)|Sets indicator IDs.|
|[CStatusBar::SetPaneInfo](#setpaneinfo)|Sets indicator ID, style, and width for a given index.|
|[CStatusBar::SetPaneStyle](#setpanestyle)|Sets indicator style for a given index.|
|[CStatusBar::SetPaneText](#setpanetext)|Sets indicator text for a given index.|

## Remarks

The output panes commonly are used as message lines and as status indicators. Examples include the menu help-message lines that briefly explain the selected menu command and the indicators that show the status of the SCROLL LOCK, NUM LOCK, and other keys.

[CStatusBar::GetStatusBarCtrl](#getstatusbarctrl), a member function new to MFC 4.0, allows you to take advantage of the Windows common control's support for status bar customization and additional functionality. `CStatusBar` member functions give you most of the functionality of the Windows common controls; however, when you call `GetStatusBarCtrl`, you can give your status bars even more of the characteristics of a Windows 95/98 status bar. When you call `GetStatusBarCtrl`, it will return a reference to a `CStatusBarCtrl` object. See [CStatusBarCtrl](../../mfc/reference/cstatusbarctrl-class.md) for more information about designing toolbars using Windows common controls. For more general information about common controls, see [Common Controls](/windows/win32/Controls/common-controls-intro) in the Windows SDK.

The framework stores indicator information in an array with the leftmost indicator at position 0. When you create a status bar, you use an array of string IDs that the framework associates with the corresponding indicators. You can then use either a string ID or an index to access an indicator.

By default, the first indicator is "elastic": it takes up the status-bar length not used by the other indicator panes, so that the other panes are right-aligned.

To create a status bar, follow these steps:

1. Construct the `CStatusBar` object.

1. Call the [Create](#create) (or [CreateEx](#createex)) function to create the status-bar window and attach it to the `CStatusBar` object.

1. Call [SetIndicators](#setindicators) to associate a string ID with each indicator.

There are three ways to update the text in a status-bar pane:

1. Call [CWnd::SetWindowText](../../mfc/reference/cwnd-class.md#setwindowtext) to update the text in pane 0 only.

1. Call [CCmdUI::SetText](../../mfc/reference/ccmdui-class.md#settext) in the status bar's ON_UPDATE_COMMAND_UI handler.

1. Call [SetPaneText](#setpanetext) to update the text for any pane.

Call [SetPaneStyle](#setpanestyle) to update the style of a status-bar pane.

For more information on using `CStatusBar`, see the article [Status Bar Implementation in MFC](../../mfc/status-bar-implementation-in-mfc.md) and [Technical Note 31 : Control Bars](../../mfc/tn031-control-bars.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CControlBar](../../mfc/reference/ccontrolbar-class.md)

`CStatusBar`

## Requirements

**Header:** afxext.h

## <a name="commandtoindex"></a> CStatusBar::CommandToIndex

Gets the indicator index for a given ID.

```
int CommandToIndex(UINT nIDFind) const;
```

### Parameters

*nIDFind*<br/>
String ID of the indicator whose index is to be retrieved.

### Return Value

The index of the indicator if successful; -1 if not successful.

### Remarks

The index of the first indicator is 0.

## <a name="create"></a> CStatusBar::Create

Creates a status bar (a child window) and associates it with the `CStatusBar` object.

```
virtual BOOL Create(
    CWnd* pParentWnd,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_BOTTOM,
    UINT nID = AFX_IDW_STATUS_BAR);
```

### Parameters

*pParentWnd*<br/>
Pointer to the [CWnd](../../mfc/reference/cwnd-class.md) object whose Windows window is the parent of the status bar.

*dwStyle*<br/>
The status-bar style. In addition to the standard Windows [styles](../../mfc/reference/styles-used-by-mfc.md#window-styles), these styles are supported.

- CBRS_TOP Control bar is at top of frame window.

- CBRS_BOTTOM Control bar is at bottom of frame window.

- CBRS_NOALIGN Control bar is not repositioned when the parent is resized.

*nID*<br/>
The toolbar's child-window ID.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

Also sets the initial font and sets the status bar's height to a default value.

## <a name="createex"></a> CStatusBar::CreateEx

Call this function to create a status bar (a child window) and associate it with the `CStatusBar` object.

```
virtual BOOL CreateEx(
    CWnd* pParentWnd,
    DWORD dwCtrlStyle = 0,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_BOTTOM,
    UINT nID = AFX_IDW_STATUS_BAR);
```

### Parameters

*pParentWnd*<br/>
Pointer to the [CWnd](../../mfc/reference/cwnd-class.md) object whose Windows window is the parent of the status bar.

*dwCtrlStyle*<br/>
Additional styles for the creation of the embedded [CStatusBarCtrl](../../mfc/reference/cstatusbarctrl-class.md) object. The default specifies a status bar without a sizing grip or tooltip support. Status bar styles supported are:

- SBARS_SIZEGRIP The status bar control includes a sizing grip at the right end of the status bar. A sizing grip is similar to a sizing border; it is a rectangular area that the user can click and drag to resize the parent window.

- SBT_TOOLTIPS The status bar supports tooltips.

For details on these styles, see [Settings for the CStatusBarCtrl](../../mfc/settings-for-the-cstatusbarctrl.md).

*dwStyle*<br/>
The status bar style. The default specifies that a visible status bar be created at the bottom of the frame window. Apply any combination of status bar control styles listed in [Window Styles](../../mfc/reference/styles-used-by-mfc.md#window-styles) and [CDialogBar::Create](../../mfc/reference/cdialogbar-class.md#create). However, this parameter should always include the WS_CHILD and WS_VISIBLE styles.

*nID*<br/>
The status bar's child-window ID.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

This function also sets the initial font and sets the status bar's height to a default value.

Use `CreateEx`, instead of [Create](#create), when certain styles need to be present during the creation of the embedded status bar control. For example, set *dwCtrlStyle* to SBT_TOOLTIPS to display tooltips in a status bar object.

## <a name="cstatusbar"></a> CStatusBar::CStatusBar

Constructs a `CStatusBar` object, creates a default status-bar font if necessary, and sets the font characteristics to default values.

```
CStatusBar();
```

## <a name="drawitem"></a> CStatusBar::DrawItem

This member function is called by the framework when a visual aspect of an owner-drawn status bar changes.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### Parameters

*lpDrawItemStruct*<br/>
A pointer to a [DRAWITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-drawitemstruct) structure that contains information about the type of drawing required.

### Remarks

The `itemAction` member of the `DRAWITEMSTRUCT` structure defines the drawing action that is to be performed. Override this member function to implement drawing for an owner-draw `CStatusBar` object. The application should restore all graphics device interface (GDI) objects selected for the display context supplied in *lpDrawItemStruct* before the termination of this member function.

## <a name="getitemid"></a> CStatusBar::GetItemID

Returns the ID of the indicator specified by *nIndex*.

```
UINT GetItemID(int nIndex) const;
```

### Parameters

*nIndex*<br/>
Index of the indicator whose ID is to be retrieved.

### Return Value

The ID of the indicator specified by *nIndex*.

## <a name="getitemrect"></a> CStatusBar::GetItemRect

Copies the coordinates of the indicator specified by *nIndex* into the structure pointed to by *lpRect*.

```cpp
void GetItemRect(
    int nIndex,
    LPRECT lpRect) const;
```

### Parameters

*nIndex*<br/>
Index of the indicator whose rectangle coordinates are to be retrieved.

*lpRect*<br/>
Points to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure or a [CRect](../../atl-mfc-shared/reference/crect-class.md) object that will receive the coordinates of the indicator specified by *nIndex*.

### Remarks

Coordinates are in pixels relative to the upper-left corner of the status bar.

## <a name="getpaneinfo"></a> CStatusBar::GetPaneInfo

Sets *nID*, *nStyle*, and *cxWidth* to the ID, style, and width of the indicator pane at the location specified by *nIndex*.

```cpp
void GetPaneInfo(
    int nIndex,
    UINT& nID,
    UINT& nStyle,
    int& cxWidth) const;
```

### Parameters

*nIndex*<br/>
Index of the pane whose information is to be retrieved.

*nID*<br/>
Reference to a UINT that is set to the ID of the pane.

*nStyle*<br/>
Reference to a UINT that is set to the style of the pane.

*cxWidth*<br/>
Reference to an integer that is set to the width of the pane.

## <a name="getpanestyle"></a> CStatusBar::GetPaneStyle

Call this member function to retrieve the style of a status bar's pane.

```
UINT GetPaneStyle(int nIndex) const;
```

### Parameters

*nIndex*<br/>
Index of the pane whose style is to be retrieved.

### Return Value

The style of the status-bar pane specified by *nIndex*.

### Remarks

A pane's style determines how the pane appears.

For a list of styles available for status bars, see [Create](#create).

## <a name="getpanetext"></a> CStatusBar::GetPaneText

Call this member function to retrieve the text that appears in a status-bar pane.

```
CString GetPaneText(int nIndex) const;  void GetPaneText(int nIndex, CString& rString) const;
```

### Parameters

*nIndex*<br/>
Index of the pane whose text is to be retrieved.

*rString*<br/>
A reference to a [CString](../../atl-mfc-shared/reference/cstringt-class.md) object that contains the text to be retrieved.

### Return Value

A `CString` object containing the pane's text.

### Remarks

The second form of this member function fills a `CString` object with the string text.

## <a name="getstatusbarctrl"></a> CStatusBar::GetStatusBarCtrl

This member function allows direct access to the underlying common control.

```
CStatusBarCtrl& GetStatusBarCtrl() const;
```

### Return Value

Contains a reference to a [CStatusBarCtrl](../../mfc/reference/cstatusbarctrl-class.md) object.

### Remarks

Use `GetStatusBarCtrl` to take advantage of the functionality of the Windows status-bar common control, and to take advantage of the support [CStatusBarCtrl](../../mfc/reference/cstatusbarctrl-class.md) provides for status-bar customization. For example, by using the common control, you can specify a style that includes a sizing grip on the status bar, or you can specify a style to have the status bar appear at the top of the parent window's client area.

For more general information about common controls, See [Common Controls](/windows/win32/Controls/common-controls-intro) in the Windows SDK.

## <a name="setindicators"></a> CStatusBar::SetIndicators

Sets each indicator's ID to the value specified by the corresponding element of the array *lpIDArray*, loads the string resource specified by each ID, and sets the indicator's text to the string.

```
BOOL SetIndicators(
    const UINT* lpIDArray,
    int nIDCount);
```

### Parameters

*lpIDArray*<br/>
Pointer to an array of IDs.

*nIDCount*<br/>
Number of elements in the array pointed to by *lpIDArray*.

### Return Value

Nonzero if successful; otherwise 0.

## <a name="setpaneinfo"></a> CStatusBar::SetPaneInfo

Sets the specified indicator pane to a new ID, style, and width.

```cpp
void SetPaneInfo(
    int nIndex,
    UINT nID,
    UINT nStyle,
    int cxWidth);
```

### Parameters

*nIndex*<br/>
Index of the indicator pane whose style is to be set.

*nID*<br/>
New ID for the indicator pane.

*nStyle*<br/>
New style for the indicator pane.

*cxWidth*<br/>
New width for the indicator pane.

### Remarks

The following indicator styles are supported:

- SBPS_NOBORDERS No 3-D border around the pane.

- SBPS_POPOUT Reverse border so that text "pops out."

- SBPS_DISABLED Do not draw text.

- SBPS_STRETCH Stretch pane to fill unused space. Only one pane per status bar can have this style.

- SBPS_NORMAL No stretch, borders, or pop-out.

## <a name="setpanestyle"></a> CStatusBar::SetPaneStyle

Call this member function to set the style of a status bar's pane.

```cpp
void SetPaneStyle(
    int nIndex,
    UINT nStyle);
```

### Parameters

*nIndex*<br/>
Index of the pane whose style is to be set.

*nStyle*<br/>
Style of the pane whose style is to be set.

### Remarks

A pane's style determines how the pane appears.

For a list of styles available for status bars, see [SetPaneInfo](#setpaneinfo).

## <a name="setpanetext"></a> CStatusBar::SetPaneText

Call this member function to set the pane text to the string pointed to by *lpszNewText*.

```
BOOL SetPaneText(
    int nIndex,
    LPCTSTR lpszNewText,
    BOOL bUpdate = TRUE);
```

### Parameters

*nIndex*<br/>
Index of the pane whose text is to be set.

*lpszNewText*<br/>
Pointer to the new pane text.

*bUpdate*<br/>
If TRUE, the pane is invalidated after the text is set.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

After you call `SetPaneText`, you must add a UI update handler to display the new text in the status bar.

### Example

[!code-cpp[NVC_MFCDocView#176](../../mfc/codesnippet/cpp/cstatusbar-class_1.cpp)]

[!code-cpp[NVC_MFCDocView#177](../../mfc/codesnippet/cpp/cstatusbar-class_2.cpp)]

[!code-cpp[NVC_MFCDocView#178](../../mfc/codesnippet/cpp/cstatusbar-class_3.cpp)]

## See also

[MFC Sample CTRLBARS](../../overview/visual-cpp-samples.md)<br/>
[MFC Sample DLGCBR32](../../overview/visual-cpp-samples.md)<br/>
[CControlBar Class](../../mfc/reference/ccontrolbar-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CStatusBarCtrl Class](../../mfc/reference/cstatusbarctrl-class.md)<br/>
[CControlBar Class](../../mfc/reference/ccontrolbar-class.md)
