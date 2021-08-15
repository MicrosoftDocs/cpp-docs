---
description: "Learn more about: CScrollBar Class"
title: "CScrollBar Class"
ms.date: "11/04/2016"
f1_keywords: ["CScrollBar", "AFXWIN/CScrollBar", "AFXWIN/CScrollBar::CScrollBar", "AFXWIN/CScrollBar::Create", "AFXWIN/CScrollBar::EnableScrollBar", "AFXWIN/CScrollBar::GetScrollBarInfo", "AFXWIN/CScrollBar::GetScrollInfo", "AFXWIN/CScrollBar::GetScrollLimit", "AFXWIN/CScrollBar::GetScrollPos", "AFXWIN/CScrollBar::GetScrollRange", "AFXWIN/CScrollBar::SetScrollInfo", "AFXWIN/CScrollBar::SetScrollPos", "AFXWIN/CScrollBar::SetScrollRange", "AFXWIN/CScrollBar::ShowScrollBar"]
helpviewer_keywords: ["CScrollBar [MFC], CScrollBar", "CScrollBar [MFC], Create", "CScrollBar [MFC], EnableScrollBar", "CScrollBar [MFC], GetScrollBarInfo", "CScrollBar [MFC], GetScrollInfo", "CScrollBar [MFC], GetScrollLimit", "CScrollBar [MFC], GetScrollPos", "CScrollBar [MFC], GetScrollRange", "CScrollBar [MFC], SetScrollInfo", "CScrollBar [MFC], SetScrollPos", "CScrollBar [MFC], SetScrollRange", "CScrollBar [MFC], ShowScrollBar"]
ms.assetid: f3735ca5-73ea-46dc-918b-4d824c9fe47f
---
# CScrollBar Class

Provides the functionality of a Windows scroll-bar control.

## Syntax

```
class CScrollBar : public CWnd
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CScrollBar::CScrollBar](#cscrollbar)|Constructs a `CScrollBar` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CScrollBar::Create](#create)|Creates the Windows scroll bar and attaches it to the `CScrollBar` object.|
|[CScrollBar::EnableScrollBar](#enablescrollbar)|Enables or disables one or both arrows of a scroll bar.|
|[CScrollBar::GetScrollBarInfo](#getscrollbarinfo)|Retrieves information about the scroll bar using a `SCROLLBARINFO` structure.|
|[CScrollBar::GetScrollInfo](#getscrollinfo)|Retrieves information about the scroll bar.|
|[CScrollBar::GetScrollLimit](#getscrolllimit)|Retrieves the limit of the scroll bar|
|[CScrollBar::GetScrollPos](#getscrollpos)|Retrieves the current position of a scroll box.|
|[CScrollBar::GetScrollRange](#getscrollrange)|Retrieves the current minimum and maximum scroll-bar positions for the given scroll bar.|
|[CScrollBar::SetScrollInfo](#setscrollinfo)|Sets information about the scroll bar.|
|[CScrollBar::SetScrollPos](#setscrollpos)|Sets the current position of a scroll box.|
|[CScrollBar::SetScrollRange](#setscrollrange)|Sets minimum and maximum position values for the given scroll bar.|
|[CScrollBar::ShowScrollBar](#showscrollbar)|Shows or hides a scroll bar.|

## Remarks

You create a scroll-bar control in two steps. First, call the constructor `CScrollBar` to construct the `CScrollBar` object, then call the [Create](#create) member function to create the Windows scroll-bar control and attach it to the `CScrollBar` object.

If you create a `CScrollBar` object within a dialog box (through a dialog resource), the `CScrollBar` is automatically destroyed when the user closes the dialog box.

If you create a `CScrollBar` object within a window, you may also need to destroy it.

If you create the `CScrollBar` object on the stack, it is destroyed automatically. If you create the `CScrollBar` object on the heap by using the **`new`** function, you must call **`delete`** on the object to destroy it when the user terminates the Windows scroll bar.

If you allocate any memory in the `CScrollBar` object, override the `CScrollBar` destructor to dispose of the allocations.

For related information about using `CScrollBar`, see [Controls](../../mfc/controls-mfc.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CScrollBar`

## Requirements

**Header:** afxwin.h

## <a name="create"></a> CScrollBar::Create

Creates the Windows scroll bar and attaches it to the `CScrollBar` object.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### Parameters

*dwStyle*<br/>
Specifies the scroll bar's style. Apply any combination of [scroll-bar styles](../../mfc/reference/styles-used-by-mfc.md#scroll-bar-styles) to the scroll bar.

*rect*<br/>
Specifies the scroll bar's size and position. Can be either a `RECT` structure or a `CRect` object.

*pParentWnd*<br/>
Specifies the scroll bar's parent window, usually a `CDialog` object. It must not be NULL.

*nID*<br/>
The scroll bar's control ID.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

You construct a `CScrollBar` object in two steps. First, call the constructor, which constructs the `CScrollBar` object; then call `Create`, which creates and initializes the associated Windows scroll bar and attaches it to the `CScrollBar` object.

Apply the following [window styles](../../mfc/reference/styles-used-by-mfc.md#window-styles) to a scroll bar:

- WS_CHILD Always

- WS_VISIBLE Usually

- WS_DISABLED Rarely

- WS_GROUP To group controls

### Example

[!code-cpp[NVC_MFC_CScrollBar#1](../../mfc/reference/codesnippet/cpp/cscrollbar-class_1.cpp)]

## <a name="cscrollbar"></a> CScrollBar::CScrollBar

Constructs a `CScrollBar` object.

```
CScrollBar();
```

### Remarks

After constructing the object, call the `Create` member function to create and initialize the Windows scroll bar.

### Example

[!code-cpp[NVC_MFC_CScrollBar#2](../../mfc/reference/codesnippet/cpp/cscrollbar-class_2.h)]

## <a name="enablescrollbar"></a> CScrollBar::EnableScrollBar

Enables or disables one or both arrows of a scroll bar.

```
BOOL EnableScrollBar(UINT nArrowFlags = ESB_ENABLE_BOTH);
```

### Parameters

*nArrowFlags*<br/>
Specifies whether the scroll arrows are enabled or disabled and which arrows are enabled or disabled. This parameter can be one of the following values:

- ESB_ENABLE_BOTH Enables both arrows of a scroll bar.

- ESB_DISABLE_LTUP Disables the left arrow of a horizontal scroll bar or the up arrow of a vertical scroll bar.

- ESB_DISABLE_RTDN Disables the right arrow of a horizontal scroll bar or the down arrow of a vertical scroll bar.

- ESB_DISABLE_BOTH Disables both arrows of a scroll bar.

### Return Value

Nonzero if the arrows are enabled or disabled as specified; otherwise 0, which indicates that the arrows are already in the requested state or that an error occurred.

### Example

  See the example for [CScrollBar::SetScrollRange](#setscrollrange).

## <a name="getscrollbarinfo"></a> CScrollBar::GetScrollBarInfo

Retrieves the information that the `SCROLLBARINFO` structure maintains about a scroll bar.

```
BOOL GetScrollBarInfo(PSCROLLBARINFO pScrollInfo) const;
```

### Parameters

*pScrollInfo*<br/>
A pointer to the [SCROLLBARINFO](/windows/win32/api/winuser/ns-winuser-scrollbarinfo) structure.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

This member function emulates the functionality of the [SBM_SCROLLBARINFO](/windows/win32/Controls/sbm-getscrollbarinfo) message, as described in the Windows SDK.

## <a name="getscrollinfo"></a> CScrollBar::GetScrollInfo

Retrieves the information that the `SCROLLINFO` structure maintains about a scroll bar.

```
BOOL GetScrollInfo(
    LPSCROLLINFO lpScrollInfo,
    UINT nMask = SIF_ALL);
```

### Parameters

*lpScrollInfo*<br/>
A pointer to a [SCROLLINFO](/windows/win32/api/winuser/ns-winuser-scrollinfo) structure. See the Windows SDK for more information about this structure.

*nMask*<br/>
Specifies the scroll bar parameters to retrieve. Typical usage, SIF_ALL, specifies a combination of SIF_PAGE, SIF_POS, SIF_TRACKPOS, and SIF_RANGE. See `SCROLLINFO` for more information on the nMask values.

### Return Value

If the message retrieved any values, the return is TRUE. Otherwise, it is FALSE.

### Remarks

`GetScrollInfo` enables applications to use 32-bit scroll positions.

The [SCROLLINFO](/windows/win32/api/winuser/ns-winuser-scrollinfo) structure contains information about a scroll bar, including the minimum and maximum scrolling positions, the page size, and the position of the scroll box (the thumb). See the `SCROLLINFO` structure topic in the Windows SDK for more information about changing the structure defaults.

The MFC Windows message handlers that indicate scroll bar position, [CWnd::OnHScroll, and [CWnd::OnVScroll](../../mfc/reference/cwnd-class.md#onvscroll), provide only 16 bits of position data. `GetScrollInfo` and `SetScrollInfo` provide 32 bits of scroll bar position data. Thus, an application can call `GetScrollInfo` while processing either `CWnd::OnHScroll` or `CWnd::OnVScroll` to obtain 32-bit scroll bar position data.

### Example

  See the example for [CWnd::OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll).

## <a name="getscrolllimit"></a> CScrollBar::GetScrollLimit

Retrieves the maximum scrolling position of the scroll bar.

```
int GetScrollLimit();
```

### Return Value

Specifies the maximum position of a scroll bar if successful; otherwise 0.

### Example

  See the example for [CWnd::OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll).

## <a name="getscrollpos"></a> CScrollBar::GetScrollPos

Retrieves the current position of a scroll box.

```
int GetScrollPos() const;
```

### Return Value

Specifies the current position of the scroll box if successful; otherwise 0.

### Remarks

The current position is a relative value that depends on the current scrolling range. For example, if the scrolling range is 100 to 200 and the scroll box is in the middle of the bar, the current position is 150.

### Example

  See the example for [CWnd::OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll).

## <a name="getscrollrange"></a> CScrollBar::GetScrollRange

Copies the current minimum and maximum scroll-bar positions for the given scroll bar to the locations specified by *lpMinPos* and *lpMaxPos*.

```cpp
void GetScrollRange(
    LPINT lpMinPos,
    LPINT lpMaxPos) const;
```

### Parameters

*lpMinPos*<br/>
Points to the integer variable that is to receive the minimum position.

*lpMaxPos*<br/>
Points to the integer variable that is to receive the maximum position.

### Remarks

The default range for a scroll-bar control is empty (both values are 0).

### Example

  See the example for [CWnd::OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll).

## <a name="setscrollinfo"></a> CScrollBar::SetScrollInfo

Sets the information that the `SCROLLINFO` structure maintains about a scroll bar.

```
BOOL SetScrollInfo(
    LPSCROLLINFO lpScrollInfo,
    BOOL bRedraw = TRUE);
```

### Parameters

*lpScrollInfo*<br/>
A pointer to a [SCROLLINFO](/windows/win32/api/winuser/ns-winuser-scrollinfo) structure.

*bRedraw*<br/>
Specifies whether the scroll bar should be redrawn to reflect the new information. If *bRedraw* is TRUE, the scroll bar is redrawn. If it is FALSE, it is not redrawn. The scroll bar is redrawn by default.

### Return Value

If successful, the return is TRUE. Otherwise, it is FALSE.

### Remarks

You must provide the values required by the `SCROLLINFO` structure parameters, including the flag values.

The `SCROLLINFO` structure contains information about a scroll bar, including the minimum and maximum scrolling positions, the page size, and the position of the scroll box (the thumb). See the [SCROLLINFO](/windows/win32/api/winuser/ns-winuser-scrollinfo) structure topic in the Windows SDK for more information about changing the structure defaults.

### Example

[!code-cpp[NVC_MFC_CScrollBar#3](../../mfc/reference/codesnippet/cpp/cscrollbar-class_3.cpp)]

## <a name="setscrollpos"></a> CScrollBar::SetScrollPos

Sets the current position of a scroll box to that specified by *nPos* and, if specified, redraws the scroll bar to reflect the new position.

```
int SetScrollPos(
    int nPos,
    BOOL bRedraw = TRUE);
```

### Parameters

*nPos*<br/>
Specifies the new position for the scroll box. It must be within the scrolling range.

*bRedraw*<br/>
Specifies whether the scroll bar should be redrawn to reflect the new position. If *bRedraw* is TRUE, the scroll bar is redrawn. If it is FALSE, it is not redrawn. The scroll bar is redrawn by default.

### Return Value

Specifies the previous position of the scroll box if successful; otherwise 0.

### Remarks

Set *bRedraw* to FALSE whenever the scroll bar will be redrawn by a subsequent call to another function to avoid having the scroll bar redrawn twice within a short interval.

### Example

  See the example for [CScrollBar::SetScrollRange](#setscrollrange).

## <a name="setscrollrange"></a> CScrollBar::SetScrollRange

Sets minimum and maximum position values for the given scroll bar.

```cpp
void SetScrollRange(
    int nMinPos,
    int nMaxPos,
    BOOL bRedraw = TRUE);
```

### Parameters

*nMinPos*<br/>
Specifies the minimum scrolling position.

*nMaxPos*<br/>
Specifies the maximum scrolling position.

*bRedraw*<br/>
Specifies whether the scroll bar should be redrawn to reflect the change. If *bRedraw* is TRUE, the scroll bar is redrawn; if FALSE, it is not redrawn. It is redrawn by default.

### Remarks

Set *nMinPos* and *nMaxPos* to 0 to hide standard scroll bars.

Do not call this function to hide a scroll bar while processing a scroll-bar notification message.

If a call to `SetScrollRange` immediately follows a call to the `SetScrollPos` member function, set *bRedraw* in `SetScrollPos` to 0 to prevent the scroll bar from being redrawn twice.

The difference between the values specified by *nMinPos* and *nMaxPos* must not be greater than 32,767. The default range for a scroll-bar control is empty (both *nMinPos* and *nMaxPos* are 0).

### Example

[!code-cpp[NVC_MFC_CScrollBar#4](../../mfc/reference/codesnippet/cpp/cscrollbar-class_4.cpp)]

## <a name="showscrollbar"></a> CScrollBar::ShowScrollBar

Shows or hides a scroll bar.

```cpp
void ShowScrollBar(BOOL bShow = TRUE);
```

### Parameters

*bShow*<br/>
Specifies whether the scroll bar is shown or hidden. If this parameter is TRUE, the scroll bar is shown; otherwise it is hidden.

### Remarks

An application should not call this function to hide a scroll bar while processing a scroll-bar notification message.

### Example

  See the example for [CScrollBar::Create](#create).

## See also

[CWnd Class](../../mfc/reference/cwnd-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CWnd Class](../../mfc/reference/cwnd-class.md)<br/>
[CButton Class](../../mfc/reference/cbutton-class.md)<br/>
[CComboBox Class](../../mfc/reference/ccombobox-class.md)<br/>
[CEdit Class](../../mfc/reference/cedit-class.md)<br/>
[CListBox Class](../../mfc/reference/clistbox-class.md)<br/>
[CStatic Class](../../mfc/reference/cstatic-class.md)<br/>
[CDialog Class](../../mfc/reference/cdialog-class.md)
