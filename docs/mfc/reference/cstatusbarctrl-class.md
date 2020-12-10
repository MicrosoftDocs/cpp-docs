---
description: "Learn more about: CStatusBarCtrl Class"
title: "CStatusBarCtrl Class"
ms.date: "11/04/2016"
f1_keywords: ["CStatusBarCtrl", "AFXCMN/CStatusBarCtrl", "AFXCMN/CStatusBarCtrl::CStatusBarCtrl", "AFXCMN/CStatusBarCtrl::Create", "AFXCMN/CStatusBarCtrl::CreateEx", "AFXCMN/CStatusBarCtrl::DrawItem", "AFXCMN/CStatusBarCtrl::GetBorders", "AFXCMN/CStatusBarCtrl::GetIcon", "AFXCMN/CStatusBarCtrl::GetParts", "AFXCMN/CStatusBarCtrl::GetRect", "AFXCMN/CStatusBarCtrl::GetText", "AFXCMN/CStatusBarCtrl::GetTextLength", "AFXCMN/CStatusBarCtrl::GetTipText", "AFXCMN/CStatusBarCtrl::IsSimple", "AFXCMN/CStatusBarCtrl::SetBkColor", "AFXCMN/CStatusBarCtrl::SetIcon", "AFXCMN/CStatusBarCtrl::SetMinHeight", "AFXCMN/CStatusBarCtrl::SetParts", "AFXCMN/CStatusBarCtrl::SetSimple", "AFXCMN/CStatusBarCtrl::SetText", "AFXCMN/CStatusBarCtrl::SetTipText"]
helpviewer_keywords: ["CStatusBarCtrl [MFC], CStatusBarCtrl", "CStatusBarCtrl [MFC], Create", "CStatusBarCtrl [MFC], CreateEx", "CStatusBarCtrl [MFC], DrawItem", "CStatusBarCtrl [MFC], GetBorders", "CStatusBarCtrl [MFC], GetIcon", "CStatusBarCtrl [MFC], GetParts", "CStatusBarCtrl [MFC], GetRect", "CStatusBarCtrl [MFC], GetText", "CStatusBarCtrl [MFC], GetTextLength", "CStatusBarCtrl [MFC], GetTipText", "CStatusBarCtrl [MFC], IsSimple", "CStatusBarCtrl [MFC], SetBkColor", "CStatusBarCtrl [MFC], SetIcon", "CStatusBarCtrl [MFC], SetMinHeight", "CStatusBarCtrl [MFC], SetParts", "CStatusBarCtrl [MFC], SetSimple", "CStatusBarCtrl [MFC], SetText", "CStatusBarCtrl [MFC], SetTipText"]
ms.assetid: 8504ad38-7b91-4746-aede-ac98886eb47b
---
# CStatusBarCtrl Class

Provides the functionality of the Windows common status bar control.

## Syntax

```
class CStatusBarCtrl : public CWnd
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CStatusBarCtrl::CStatusBarCtrl](#cstatusbarctrl)|Constructs a `CStatusBarCtrl` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CStatusBarCtrl::Create](#create)|Creates a status bar control and attaches it to a `CStatusBarCtrl` object.|
|[CStatusBarCtrl::CreateEx](#createex)|Creates a status bar control with the specified Windows extended styles and attaches it to a `CStatusBarCtrl` object.|
|[CStatusBarCtrl::DrawItem](#drawitem)|Called when a visual aspect of an owner-draw status bar control changes.|
|[CStatusBarCtrl::GetBorders](#getborders)|Retrieves the current widths of the horizontal and vertical borders of a status bar control.|
|[CStatusBarCtrl::GetIcon](#geticon)|Retrieves the icon for a part (also known as a pane) in the current status bar control.|
|[CStatusBarCtrl::GetParts](#getparts)|Retrieves a count of the parts in a status bar control.|
|[CStatusBarCtrl::GetRect](#getrect)|Retrieves the bounding rectangle of a part in a status bar control.|
|[CStatusBarCtrl::GetText](#gettext)|Retrieves the text from the given part of a status bar control.|
|[CStatusBarCtrl::GetTextLength](#gettextlength)|Retrieve the length, in characters, of the text from the given part of a status bar control.|
|[CStatusBarCtrl::GetTipText](#gettiptext)|Retrieves the tooltip text for a pane in a status bar.|
|[CStatusBarCtrl::IsSimple](#issimple)|Checks a status window control to determine if it is in simple mode.|
|[CStatusBarCtrl::SetBkColor](#setbkcolor)|Sets the background color in a status bar.|
|[CStatusBarCtrl::SetIcon](#seticon)|Sets the icon for a pane in a status bar.|
|[CStatusBarCtrl::SetMinHeight](#setminheight)|Sets the minimum height of a status bar control's drawing area.|
|[CStatusBarCtrl::SetParts](#setparts)|Sets the number of parts in a status bar control and the coordinate of the right edge of each part.|
|[CStatusBarCtrl::SetSimple](#setsimple)|Specifies whether a status bar control displays simple text or displays all control parts set by a previous call to `SetParts`.|
|[CStatusBarCtrl::SetText](#settext)|Sets the text in the given part of a status bar control.|
|[CStatusBarCtrl::SetTipText](#settiptext)|Sets the tooltip text for a pane in a status bar.|

## Remarks

A "status bar control" is a horizontal window, usually displayed at the bottom of a parent window, in which an application can display various kinds of status information. The status bar control can be divided into parts to display more than one type of information.

This control (and therefore the `CStatusBarCtrl` class) is available only to programs running under Windows 95/98 and Windows NT version 3.51 and later.

For more information on using `CStatusBarCtrl`, see [Controls](../../mfc/controls-mfc.md) and [Using CStatusBarCtrl](../../mfc/using-cstatusbarctrl.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CStatusBarCtrl`

## Requirements

**Header:** afxcmn.h

## <a name="create"></a> CStatusBarCtrl::Create

Creates a status bar control and attaches it to a `CStatusBarCtrl` object.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### Parameters

*dwStyle*<br/>
Specifies the status bar control's style. Apply any combination of status bar control styles listed in [Common Control Styles](/windows/win32/Controls/common-control-styles) in the Windows SDK. This parameter must include the WS_CHILD style. It should also include the WS_VISIBLE style.

*rect*<br/>
Specifies the status bar control's size and position. It can be either a [CRect](../../atl-mfc-shared/reference/crect-class.md) object or a [RECT](/windows/win32/api/windef/ns-windef-rect) structure.

*pParentWnd*<br/>
Specifies the status bar control's parent window, usually a `CDialog`. It must not be NULL.

*nID*<br/>
Specifies the status bar control's ID.

### Return Value

Nonzero if successful; otherwise zero.

### Remarks

You construct a `CStatusBarCtrl` in two steps. First, call the constructor, and then call `Create`, which creates the status bar control and attaches it to the `CStatusBarCtrl` object.

The default position of a status window is along the bottom of the parent window, but you can specify the CCS_TOP style to have it appear at the top of the parent window's client area. You can specify the SBARS_SIZEGRIP style to include a sizing grip at the right end of the status window. Combining the CCS_TOP and SBARS_SIZEGRIP styles is not recommended, because the resulting sizing grip is not functional even though the system draws it in the status window.

To create a status bar with extended window styles, call [CStatusBarCtrl::CreateEx](#createex) instead of `Create`.

### Example

[!code-cpp[NVC_MFC_CStatusBarCtrl#1](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_1.cpp)]

## <a name="createex"></a> CStatusBarCtrl::CreateEx

Creates a control (a child window) and associates it with the `CStatusBarCtrl` object.

```
virtual BOOL CreateEx(
    DWORD dwExStyle,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### Parameters

*dwExStyle*<br/>
Specifies the extended style of the control being created. For a list of extended Windows styles, see the *dwExStyle* parameter for [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) in the Windows SDK.

*dwStyle*<br/>
Specifies the status bar control's style. Apply any combination of status bar control styles listed in [Common Control Styles](/windows/win32/Controls/common-control-styles) in the Windows SDK. This parameter must include the WS_CHILD style. It should also include the WS_VISIBLE style.

*rect*<br/>
A reference to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure describing the size and position of the window to be created, in client coordinates of *pParentWnd*.

*pParentWnd*<br/>
A pointer to the window that is the control's parent.

*nID*<br/>
The control's child-window ID.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

Use `CreateEx` instead of [Create](#create) to apply extended Windows styles, specified by the Windows extended style preface **WS_EX_**.

## <a name="cstatusbarctrl"></a> CStatusBarCtrl::CStatusBarCtrl

Constructs a `CStatusBarCtrl` object.

```
CStatusBarCtrl();
```

## <a name="drawitem"></a> CStatusBarCtrl::DrawItem

Called by the framework when a visual aspect of an owner-draw status bar control changes.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### Parameters

*lpDrawItemStruct*<br/>
A long pointer to a [DRAWITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-drawitemstruct) structure that contains information about the type of drawing required.

### Remarks

The `itemAction` member of the `DRAWITEMSTRUCT` structure defines the drawing action that is to be performed.

By default, this member function does nothing. Override this member function to implement drawing for an owner-draw `CStatusBarCtrl` object.

The application should restore all graphics device interface (GDI) objects selected for the display context supplied in *lpDrawItemStruct* before this member function terminates.

## <a name="getborders"></a> CStatusBarCtrl::GetBorders

Retrieves the status bar control's current widths of the horizontal and vertical borders and of the space between rectangles.

```
BOOL GetBorders(int* pBorders) const;

BOOL GetBorders(
    int& nHorz,
    int& nVert,
    int& nSpacing) const;
```

### Parameters

*pBorders*<br/>
Address of an integer array having three elements. The first element receives the width of the horizontal border, the second receives the width of the vertical border, and the third receives the width of the border between rectangles.

*nHorz*<br/>
Reference to an integer that receives the width of the horizontal border.

*nVert*<br/>
Reference to an integer that receives the width of the vertical border.

*nSpacing*<br/>
Reference to an integer that receives the width of the border between rectangles.

### Return Value

Nonzero if successful; otherwise zero.

### Remarks

These borders determine the spacing between the outside edge of the control and the rectangles within the control that contain text.

### Example

[!code-cpp[NVC_MFC_CStatusBarCtrl#2](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_2.cpp)]

## <a name="geticon"></a> CStatusBarCtrl::GetIcon

Retrieves the icon for a part (also known as a pane) in the current status bar control.

```
HICON GetIcon(int iPart) const;
```

### Parameters

*iPart*\
[in] The zero-based index of the part that contains the icon to be retrieved. If this parameter is -1, the status bar is assumed to be a simple mode status bar.

### Return Value

The handle to the icon if the method successful; otherwise, NULL.

### Remarks

This method sends the [SB_GETICON](/windows/win32/Controls/sb-geticon) message, which is described in the Windows SDK.

A status bar control consists of a row of text output panes, which are also known as parts. For more information about the status bar, see [Status Bar Implementation in MFC](../../mfc/status-bar-implementation-in-mfc.md) and [Setting the Mode of a CStatusBarCtrl Object](../../mfc/setting-the-mode-of-a-cstatusbarctrl-object.md).

### Example

The following code example defines a variable, `m_statusBar`, that is used to access the current status bar control. This variable is used in the next example.

[!code-cpp[NVC_MFC_CStatusBarCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_3.h)]

### Example

The following code example copies an icon to two panes of the current status bar control. In an earlier section of the code example we created a status bar control with three panes and then added an icon to the first pane. This example retrieves the icon from the first pane and then adds it to the second and third pane.

[!code-cpp[NVC_MFC_CStatusBarCtrl_s1#2](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_4.cpp)]

## <a name="getparts"></a> CStatusBarCtrl::GetParts

Retrieves a count of the parts in a status bar control.

```
int GetParts(
    int nParts,
    int* pParts) const;
```

### Parameters

*nParts*<br/>
Number of parts for which to retrieve coordinates. If this parameter is greater than the number of parts in the control, the message retrieves coordinates for existing parts only.

*pParts*<br/>
Address of an integer array having the same number of elements as the number of parts specified by *nParts*. Each element in the array receives the client coordinate of the right edge of the corresponding part. If an element is set to - 1, the position of the right edge for that part extends to the right edge of the status bar.

### Return Value

The number of parts in the control if successful, or zero otherwise.

### Remarks

This member function also retrieves the coordinate of the right edge of the given number of parts.

### Example

[!code-cpp[NVC_MFC_CStatusBarCtrl#3](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_5.cpp)]

## <a name="getrect"></a> CStatusBarCtrl::GetRect

Retrieves the bounding rectangle of a part in a status bar control.

```
BOOL GetRect(
    int nPane,
    LPRECT lpRect) const;
```

### Parameters

*nPane*<br/>
Zero-based index of the part whose bounding rectangle is to be retrieved.

*lpRect*<br/>
Address of a [RECT](/windows/win32/api/windef/ns-windef-rect) structure that receives the bounding rectangle.

### Return Value

Nonzero if successful; otherwise zero.

### Example

[!code-cpp[NVC_MFC_CStatusBarCtrl#4](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_6.cpp)]

## <a name="gettext"></a> CStatusBarCtrl::GetText

Retrieves the text from the given part of a status bar control.

```
CString GetText(
    int nPane,
    int* pType = NULL) const;

int GetText(
    LPCTSTR lpszText,
    int nPane,
    int* pType = NULL) const;
```

### Parameters

*lpszText*<br/>
Address of the buffer that receives the text. This parameter is a null-terminated string.

*nPane*<br/>
Zero-based index of the part from which to retrieve text.

*pType*<br/>
Pointer to an integer that receives the type information. The type can be one of these values:

- **0** The text is drawn with a border to appear lower than the plane of the status bar.

- SBT_NOBORDERS The text is drawn without borders.

- SBT_POPOUT The text is drawn with a border to appear higher than the plane of the status bar.

- SBT_OWNERDRAW If the text has the SBT_OWNERDRAW drawing type, *pType* receives this message and returns the 32-bit value associated with the text instead of the length and operation type.

### Return Value

The length, in characters, of the text or a [CString](../../atl-mfc-shared/reference/cstringt-class.md) containing the current text.

### Example

[!code-cpp[NVC_MFC_CStatusBarCtrl#5](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_7.cpp)]

## <a name="gettextlength"></a> CStatusBarCtrl::GetTextLength

Retrieves the length, in characters, of the text from the given part of a status bar control.

```
int GetTextLength(
    int nPane,
    int* pType = NULL) const;
```

### Parameters

*nPane*<br/>
Zero-based index of the part from which to retrieve text.

*pType*<br/>
Pointer to an integer that receives the type information. The type can be one of these values:

- **0** The text is drawn with a border to appear lower than the plane of the status bar.

- SBT_NOBORDERS The text is drawn without borders.

- SBT_OWNERDRAW The text is drawn by the parent window.

- SBT_POPOUT The text is drawn with a border to appear higher than the plane of the status bar.

### Return Value

The length, in characters, of the text.

### Example

[!code-cpp[NVC_MFC_CStatusBarCtrl#6](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_8.cpp)]

## <a name="gettiptext"></a> CStatusBarCtrl::GetTipText

Retrieves the tooltip text for a pane in a status bar.

```
CString GetTipText(int nPane) const;
```

### Parameters

*nPane*<br/>
The zero-based index of status bar pane to receive the tooltip text.

### Return Value

A [CString](../../atl-mfc-shared/reference/cstringt-class.md) object containing the text to be used in the tooltip.

### Remarks

This member function implements the behavior of the Win32 message [SB_GETTIPTEXT](/windows/win32/Controls/sb-gettiptext), as described in the Windows SDK.

### Example

[!code-cpp[NVC_MFC_CStatusBarCtrl#7](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_9.cpp)]

## <a name="issimple"></a> CStatusBarCtrl::IsSimple

Checks a status window control to determine if it is in simple mode.

```
BOOL IsSimple() const;
```

### Return Value

Nonzero if the status window control is in simple mode; otherwise zero.

### Remarks

This member function implements the behavior of the Win32 message [SB_ISSIMPLE](/windows/win32/Controls/sb-issimple), as described in the Windows SDK.

## <a name="setbkcolor"></a> CStatusBarCtrl::SetBkColor

Sets the background color in a status bar.

```
COLORREF SetBkColor(COLORREF cr);
```

### Parameters

*cr*<br/>
COLORREF value that specifies the new background color. Specify the CLR_DEFAULT value to cause the status bar to use its default background color.

### Return Value

A [COLORREF](/windows/win32/gdi/colorref) value that represents the previous default background color.

### Remarks

This member function implements the behavior of the Win32 message [SB_SETBKCOLOR](/windows/win32/Controls/sb-setbkcolor), as described in the Windows SDK.

### Example

[!code-cpp[NVC_MFC_CStatusBarCtrl#8](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_10.cpp)]

## <a name="seticon"></a> CStatusBarCtrl::SetIcon

Sets the icon for a pane in a status bar.

```
BOOL SetIcon(
    int nPane,
    HICON hIcon);
```

### Parameters

*nPane*<br/>
The zero-based index of the pane that will receive the icon. If this parameter is -1, the status bar is assumed to be a simple status bar.

*hIcon*<br/>
Handle to the icon to be set. If this value is NULL, the icon is removed from the part.

### Return Value

Nonzero if successful; otherwise zero.

### Remarks

This member function implements the behavior of the Win32 message [SB_SETICON](/windows/win32/Controls/sb-seticon), as described in the Windows SDK.

### Example

  See the example for [CStatusBarCtrl::SetBkColor](#setbkcolor).

## <a name="setminheight"></a> CStatusBarCtrl::SetMinHeight

Sets the minimum height of a status bar control's drawing area.

```cpp
void SetMinHeight(int nMin);
```

### Parameters

*nMin*<br/>
Minimum height, in pixels, of the control.

### Remarks

The minimum height is the sum of *nMin* and twice the width, in pixels, of the vertical border of the status bar control.

### Example

[!code-cpp[NVC_MFC_CStatusBarCtrl#9](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_11.cpp)]

## <a name="setparts"></a> CStatusBarCtrl::SetParts

Sets the number of parts in a status bar control and the coordinate of the right edge of each part.

```
BOOL SetParts(
    int nParts,
    int* pWidths);
```

### Parameters

*nParts*<br/>
Number of parts to set. The number of parts cannot be greater than 255.

*pWidths*<br/>
Address of an integer array having the same number of elements as parts specified by *nParts*. Each element in the array specifies the position, in client coordinates, of the right edge of the corresponding part. If an element is - 1, the position of the right edge for that part extends to the right edge of the control.

### Return Value

Nonzero if successful; otherwise zero.

### Example

[!code-cpp[NVC_MFC_CStatusBarCtrl#10](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_12.cpp)]

## <a name="setsimple"></a> CStatusBarCtrl::SetSimple

Specifies whether a status bar control displays simple text or displays all control parts set by a previous call to [SetParts](#setparts).

```
BOOL SetSimple(BOOL bSimple = TRUE);
```

### Parameters

*bSimple*<br/>
[in] Display-type flag. If this parameter is TRUE, the control displays simple text; if it is FALSE, it displays multiple parts.

### Return Value

Always returns 0.

### Remarks

If your application changes the status bar control from non-simple to simple, or vice versa, the system immediately redraws the control.

## <a name="settext"></a> CStatusBarCtrl::SetText

Sets the text in the given part of a status bar control.

```
BOOL SetText(
    LPCTSTR lpszText,
    int nPane,
    int nType);
```

### Parameters

*lpszText*<br/>
Address of a null-terminated string specifying the text to set. If *nType* is SBT_OWNERDRAW, *lpszText* represents 32 bits of data.

*nPane*<br/>
Zero-based index of the part to set. If this value is 255, the status bar control is assumed to be a simple control having only one part.

*nType*<br/>
Type of drawing operation. See [SB_SETTEXT message](/windows/win32/Controls/sb-settext) for a list of possible values.

### Return Value

Nonzero if successful; otherwise zero.

### Remarks

The message invalidates the portion of the control that has changed, causing it to display the new text when the control next receives the WM_PAINT message.

### Example

[!code-cpp[NVC_MFC_CStatusBarCtrl#11](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_13.cpp)]

## <a name="settiptext"></a> CStatusBarCtrl::SetTipText

Sets the tooltip text for a pane in a status bar.

```cpp
void SetTipText(
    int nPane,
    LPCTSTR pszTipText);
```

### Parameters

*nPane*<br/>
The zero-based index of status bar pane to receive the tooltip text.

*pszTipText*<br/>
A pointer to a string containing the tooltip text.

### Remarks

This member function implements the behavior of the Win32 message [SB_SETTIPTEXT](/windows/win32/Controls/sb-settiptext), as described in the Windows SDK.

### Example

[!code-cpp[NVC_MFC_CStatusBarCtrl#12](../../mfc/reference/codesnippet/cpp/cstatusbarctrl-class_14.cpp)]

## See also

[CWnd Class](../../mfc/reference/cwnd-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CToolBarCtrl Class](../../mfc/reference/ctoolbarctrl-class.md)
