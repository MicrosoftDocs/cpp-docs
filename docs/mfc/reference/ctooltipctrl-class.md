---
description: "Learn more about: CToolTipCtrl Class"
title: "CToolTipCtrl Class"
ms.date: "11/04/2016"
f1_keywords: ["CToolTipCtrl", "AFXCMN/CToolTipCtrl", "AFXCMN/CToolTipCtrl::CToolTipCtrl", "AFXCMN/CToolTipCtrl::Activate", "AFXCMN/CToolTipCtrl::AddTool", "AFXCMN/CToolTipCtrl::AdjustRect", "AFXCMN/CToolTipCtrl::Create", "AFXCMN/CToolTipCtrl::CreateEx", "AFXCMN/CToolTipCtrl::DelTool", "AFXCMN/CToolTipCtrl::GetBubbleSize", "AFXCMN/CToolTipCtrl::GetCurrentTool", "AFXCMN/CToolTipCtrl::GetDelayTime", "AFXCMN/CToolTipCtrl::GetMargin", "AFXCMN/CToolTipCtrl::GetMaxTipWidth", "AFXCMN/CToolTipCtrl::GetText", "AFXCMN/CToolTipCtrl::GetTipBkColor", "AFXCMN/CToolTipCtrl::GetTipTextColor", "AFXCMN/CToolTipCtrl::GetTitle", "AFXCMN/CToolTipCtrl::GetToolCount", "AFXCMN/CToolTipCtrl::GetToolInfo", "AFXCMN/CToolTipCtrl::HitTest", "AFXCMN/CToolTipCtrl::Pop", "AFXCMN/CToolTipCtrl::Popup", "AFXCMN/CToolTipCtrl::RelayEvent", "AFXCMN/CToolTipCtrl::SetDelayTime", "AFXCMN/CToolTipCtrl::SetMargin", "AFXCMN/CToolTipCtrl::SetMaxTipWidth", "AFXCMN/CToolTipCtrl::SetTipBkColor", "AFXCMN/CToolTipCtrl::SetTipTextColor", "AFXCMN/CToolTipCtrl::SetTitle", "AFXCMN/CToolTipCtrl::SetToolInfo", "AFXCMN/CToolTipCtrl::SetToolRect", "AFXCMN/CToolTipCtrl::SetWindowTheme", "AFXCMN/CToolTipCtrl::Update", "AFXCMN/CToolTipCtrl::UpdateTipText"]
helpviewer_keywords: ["CToolTipCtrl [MFC], CToolTipCtrl", "CToolTipCtrl [MFC], Activate", "CToolTipCtrl [MFC], AddTool", "CToolTipCtrl [MFC], AdjustRect", "CToolTipCtrl [MFC], Create", "CToolTipCtrl [MFC], CreateEx", "CToolTipCtrl [MFC], DelTool", "CToolTipCtrl [MFC], GetBubbleSize", "CToolTipCtrl [MFC], GetCurrentTool", "CToolTipCtrl [MFC], GetDelayTime", "CToolTipCtrl [MFC], GetMargin", "CToolTipCtrl [MFC], GetMaxTipWidth", "CToolTipCtrl [MFC], GetText", "CToolTipCtrl [MFC], GetTipBkColor", "CToolTipCtrl [MFC], GetTipTextColor", "CToolTipCtrl [MFC], GetTitle", "CToolTipCtrl [MFC], GetToolCount", "CToolTipCtrl [MFC], GetToolInfo", "CToolTipCtrl [MFC], HitTest", "CToolTipCtrl [MFC], Pop", "CToolTipCtrl [MFC], Popup", "CToolTipCtrl [MFC], RelayEvent", "CToolTipCtrl [MFC], SetDelayTime", "CToolTipCtrl [MFC], SetMargin", "CToolTipCtrl [MFC], SetMaxTipWidth", "CToolTipCtrl [MFC], SetTipBkColor", "CToolTipCtrl [MFC], SetTipTextColor", "CToolTipCtrl [MFC], SetTitle", "CToolTipCtrl [MFC], SetToolInfo", "CToolTipCtrl [MFC], SetToolRect", "CToolTipCtrl [MFC], SetWindowTheme", "CToolTipCtrl [MFC], Update", "CToolTipCtrl [MFC], UpdateTipText"]
ms.assetid: 8973f70c-b73a-46c7-908d-758f364b9a97
---
# CToolTipCtrl Class

Encapsulates the functionality of a "tool tip control," a small pop-up window that displays a single line of text describing the purpose of a tool in an application.

## Syntax

```
class CToolTipCtrl : public CWnd
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CToolTipCtrl::CToolTipCtrl](#ctooltipctrl)|Constructs a `CToolTipCtrl` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CToolTipCtrl::Activate](#activate)|Activates and deactivates the tool tip control.|
|[CToolTipCtrl::AddTool](#addtool)|Registers a tool with the tool tip control.|
|[CToolTipCtrl::AdjustRect](#adjustrect)|Converts between a tool tip control's text display rectangle and its window rectangle.|
|[CToolTipCtrl::Create](#create)|Creates a tool tip control and attaches it to a `CToolTipCtrl` object.|
|[CToolTipCtrl::CreateEx](#createex)|Creates a tool tip control with the specified Windows extended styles and attaches it to a `CToolTipCtrl` object.|
|[CToolTipCtrl::DelTool](#deltool)|Removes a tool from the tool tip control.|
|[CToolTipCtrl::GetBubbleSize](#getbubblesize)|Retrieves the size of the tool tip.|
|[CToolTipCtrl::GetCurrentTool](#getcurrenttool)|Retrieves information, such as the size, position, and text, of the tooltip window that the current tooltip control displays.|
|[CToolTipCtrl::GetDelayTime](#getdelaytime)|Retrieves the initial, pop-up, and reshow durations that are currently set for a tool tip control.|
|[CToolTipCtrl::GetMargin](#getmargin)|Retrieves the top, left, bottom, and right margins that are set for a tool tip window.|
|[CToolTipCtrl::GetMaxTipWidth](#getmaxtipwidth)|Retrieves the maximum width for a tool tip window.|
|[CToolTipCtrl::GetText](#gettext)|Retrieves the text that a tool tip control maintains for a tool.|
|[CToolTipCtrl::GetTipBkColor](#gettipbkcolor)|Retrieves the background color in a tool tip window.|
|[CToolTipCtrl::GetTipTextColor](#gettiptextcolor)|Retrieves the text color in a tool tip window.|
|[CToolTipCtrl::GetTitle](#gettitle)|Retrieves the title of the current tooltip control.|
|[CToolTipCtrl::GetToolCount](#gettoolcount)|Retrieves a count of the tools maintained by a tool tip control.|
|[CToolTipCtrl::GetToolInfo](#gettoolinfo)|Retrieves the information that a tool tip control maintains about a tool.|
|[CToolTipCtrl::HitTest](#hittest)|Tests a point to determine whether it is within the bounding rectangle of the given tool. If so, retrieves information about the tool.|
|[CToolTipCtrl::Pop](#pop)|Removes a displayed tool tip window from view.|
|[CToolTipCtrl::Popup](#popup)|Causes the current ToolTip control to display at the coordinates of the last mouse message.|
|[CToolTipCtrl::RelayEvent](#relayevent)|Passes a mouse message to a tool tip control for processing.|
|[CToolTipCtrl::SetDelayTime](#setdelaytime)|Sets the initial, pop-up, and reshow durations for a tool tip control.|
|[CToolTipCtrl::SetMargin](#setmargin)|Sets the top, left, bottom, and right margins for a tool tip window.|
|[CToolTipCtrl::SetMaxTipWidth](#setmaxtipwidth)|Sets the maximum width for a tool tip window.|
|[CToolTipCtrl::SetTipBkColor](#settipbkcolor)|Sets the background color in a tool tip window.|
|[CToolTipCtrl::SetTipTextColor](#settiptextcolor)|Sets the text color in a tool tip window.|
|[CToolTipCtrl::SetTitle](#settitle)|Adds a standard icon and title string to a tool tip.|
|[CToolTipCtrl::SetToolInfo](#settoolinfo)|Sets the information that a tool tip maintains for a tool.|
|[CToolTipCtrl::SetToolRect](#settoolrect)|Sets a new bounding rectangle for a tool.|
|[CToolTipCtrl::SetWindowTheme](#setwindowtheme)|Sets the visual style of the tool tip window.|
|[CToolTipCtrl::Update](#update)|Forces the current tool to be redrawn.|
|[CToolTipCtrl::UpdateTipText](#updatetiptext)|Sets the tool tip text for a tool.|

## Remarks

A "tool" is either a window, such as a child window or control, or an application-defined rectangular area within a window's client area. A tool tip is hidden most of the time, appearing only when the user puts the cursor on a tool and leaves it there for approximately one-half second. The tool tip appears near the cursor and disappears when the user clicks a mouse button or moves the cursor off the tool.

`CToolTipCtrl` provides the functionality to control the initial time and duration of the tool tip, the margin widths surrounding the tool tip text, the width of the tool tip window itself, and the background and text color of the tool tip. A single tool tip control can provide information for more than one tool.

The `CToolTipCtrl` class provides the functionality of the Windows common tool tip control. This control (and therefore the `CToolTipCtrl` class) is available only to programs running under Windows 95/98 and Windows NT versions 3.51 and later.

For more information about enabling tool tips, see [Tool Tips in Windows not Derived from CFrameWnd](../../mfc/tool-tips-in-windows-not-derived-from-cframewnd.md).

For more information on using `CToolTipCtrl`, see [Controls](../../mfc/controls-mfc.md) and [Using CToolTipCtrl](../../mfc/using-ctooltipctrl.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CToolTipCtrl`

## Requirements

**Header:** afxcmn.h

## <a name="activate"></a> CToolTipCtrl::Activate

Call this function to activate or deactivate a tool tip control.

```cpp
void Activate(BOOL bActivate);
```

### Parameters

*bActivate*<br/>
Specifies whether the tool tip control is to be activated or deactivated.

### Remarks

If *bActivate* is TRUE, the control is activated; if FALSE, it is deactivated.

When a tool tip control is active, the tool tip information appears when the cursor is on a tool that is registered with the control; when it is inactive, the tool tip information does not appear, even when the cursor is on a tool.

### Example

  See the example for [CPropertySheet::GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).

## <a name="addtool"></a> CToolTipCtrl::AddTool

Registers a tool with the tool tip control.

```
BOOL AddTool(
    CWnd* pWnd,
    UINT nIDText,
    LPCRECT lpRectTool = NULL,
    UINT_PTR nIDTool = 0);

BOOL AddTool(
    CWnd* pWnd,
    LPCTSTR lpszText = LPSTR_TEXTCALLBACK,
    LPCRECT lpRectTool = NULL,
    UINT_PTR nIDTool = 0);
```

### Parameters

*pWnd*<br/>
Pointer to the window that contains the tool.

*nIDText*<br/>
ID of the string resource that contains the text for the tool.

*lpRectTool*<br/>
Pointer to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure containing coordinates of the tool's bounding rectangle. The coordinates are relative to the upper-left corner of the client area of the window identified by *pWnd*.

*nIDTool*<br/>
ID of the tool.

*lpszText*<br/>
Pointer to the text for the tool. If this parameter contains the value LPSTR_TEXTCALLBACK, TTN_NEEDTEXT notification messages go to the parent of the window that *pWnd* points to.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The *lpRectTool* and *nIDTool* parameters must both be valid, or if *lpRectTool* is NULL, *nIDTool* must be 0.

A tool tip control can be associated with more than one tool. Call this function to register a tool with the tool tip control, so that the information stored in the tool tip is displayed when the cursor is on the tool.

> [!NOTE]
> You cannot set a tool tip to a static control using `AddTool`.

### Example

  See the example for [CPropertySheet::GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).

## <a name="adjustrect"></a> CToolTipCtrl::AdjustRect

Converts between a tooltip control's text display rectangle and its window rectangle.

```
BOOL AdjustRect(
    LPRECT lprc,
    BOOL bLarger = TRUE);
```

### Parameters

*lprc*<br/>
Pointer to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure that holds either a tool tip window rectangle or a text display rectangle.

*bLarger*<br/>
If TRUE, *lprc* is used to specify a text-display rectangle, and it receives the corresponding window rectangle. If FALSE, *lprc* is used to specify a window rectangle, and it receives the corresponding text display rectangle.

### Return Value

Nonzero if the rectangle is successfully adjusted; otherwise 0.

### Remarks

This member function calculates a tool tip control's text display rectangle from its window rectangle, or the tool tip window rectangle needed to display a specified text display rectangle.

This member function implements the behavior of the Win32 message [TTM_ADJUSTRECT](/windows/win32/Controls/ttm-adjustrect), as described in the Windows SDK.

## <a name="create"></a> CToolTipCtrl::Create

Creates a tool tip control and attaches it to a `CToolTipCtrl` object.

```
virtual BOOL Create(CWnd* pParentWnd, DWORD dwStyle = 0);
```

### Parameters

*pParentWnd*<br/>
Specifies the tool tip control's parent window, usually a `CDialog`. It must not be NULL.

*dwStyle*<br/>
Specifies the tool tip control's style. See the **Remarks** section for more information.

### Return Value

Nonzero if the `CToolTipCtrl` object is successfully created; otherwise 0.

### Remarks

You construct a `CToolTipCtrl` in two steps. First, call the constructor to construct the `CToolTipCtrl` object, and then call `Create` to create the tool tip control and attach it to the `CToolTipCtrl` object.

The *dwStyle* parameter can be any combination of [Window Styles](../../mfc/reference/styles-used-by-mfc.md#window-styles). In addition, a tool tip control has two class-specific styles: TTS_ALWAYSTIP and TTS_NOPREFIX.

|Style|Meaning|
|-----------|-------------|
|TTS_ALWAYSTIP|Specifies that the tool tip will appear when the cursor is on a tool, regardless of whether the tool tip control's owner window is active or inactive. Without this style, the tool tip control appears when the tool's owner window is active, but not when it is inactive.|
|TTS_NOPREFIX|This style prevents the system from stripping the ampersand (&) character from a string. If a tool tip control does not have the TTS_NOPREFIX style, the system automatically strips ampersand characters, allowing an application to use the same string as both a menu item and as text in a tool tip control.|

A tool tip control has the WS_POPUP and WS_EX_TOOLWINDOW window styles, regardless of whether you specify them when creating the control.

To create a tool tip control with extended windows styles, call [CToolTipCtrl::CreateEx](#createex) instead of `Create`.

### Example

  See the example for [CPropertySheet::GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).

## <a name="createex"></a> CToolTipCtrl::CreateEx

Creates a control (a child window) and associate it with the `CToolTipCtrl` object.

```
virtual BOOL CreateEx(
    CWnd* pParentWnd,
    DWORD dwStyle = 0,
    DWORD dwStyleEx = 0);
```

### Parameters

*pParentWnd*<br/>
A pointer to the window that is the control's parent.

*dwStyle*<br/>
Specifies the tool tip control's style. See the **Remarks** section of [Create](#create) for more information.

*dwStyleEx*<br/>
Specifies the extended style of the control being created. For a list of extended Windows styles, see the *dwExStyle* parameter for [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) in the Windows SDK.

### Return Value

Nonzero if successful otherwise 0.

### Remarks

Use `CreateEx` instead of `Create` to apply extended Windows styles, specified by the Windows extended style preface **WS_EX_**.

## <a name="ctooltipctrl"></a> CToolTipCtrl::CToolTipCtrl

Constructs a `CToolTipCtrl` object.

```
CToolTipCtrl();
```

### Remarks

You must call `Create` after constructing the object.

### Example

[!code-cpp[NVC_MFCControlLadenDialog#74](../../mfc/codesnippet/cpp/ctooltipctrl-class_1.h)]

## <a name="deltool"></a> CToolTipCtrl::DelTool

Removes the tool specified by *pWnd* and *nIDTool* from the collection of tools supported by a tool tip control.

```cpp
void DelTool(
    CWnd* pWnd,
    UINT_PTR nIDTool = 0);
```

### Parameters

*pWnd*<br/>
Pointer to the window that contains the tool.

*nIDTool*<br/>
ID of the tool.

## <a name="getbubblesize"></a> CToolTipCtrl::GetBubbleSize

Retrieves the size of the tool tip.

```
CSize GetBubbleSize(LPTOOLINFO lpToolInfo) const;
```

### Parameters

*lpToolInfo*<br/>
A pointer to the tool tip's [TOOLINFO](/windows/win32/api/commctrl/ns-commctrl-tttoolinfoa) structure.

### Return Value

The size of the tool tip.

### Remarks

This member function implements the behavior of the Win32 message [TTM_GETBUBBLESIZE](/windows/win32/Controls/ttm-getbubblesize), as described in the Windows SDK.

## <a name="getcurrenttool"></a> CToolTipCtrl::GetCurrentTool

Retrieves information, such as the size, position, and text, of the tooltip window displayed by the current tooltip control.

```
BOOL GetCurrentTool(LPTOOLINFO lpToolInfo) const;
```

### Parameters

*lpToolInfo*\
[out] Pointer to a [TOOLINFO](/windows/win32/api/commctrl/ns-commctrl-tttoolinfoa) structure that receives information about the current tooltip window.

### Return Value

TRUE if the information is retrieved successfully; otherwise, FALSE.

### Remarks

This method sends the [TTM_GETCURRENTTOOL](/windows/win32/Controls/ttm-getcurrenttool) message, which is described in the Windows SDK.

### Example

The following code example retrieves information about the current tooltip window.

[!code-cpp[NVC_MFC_CToolBarCtrl_s1#6](../../mfc/reference/codesnippet/cpp/ctooltipctrl-class_2.cpp)]

## <a name="getdelaytime"></a> CToolTipCtrl::GetDelayTime

Retrieves the initial, pop-up, and reshow durations currently set for a tool tip control.

```
int GetDelayTime(DWORD dwDuration) const;
```

### Parameters

*dwDuration*<br/>
Flag that specifies which duration value will be retrieved. This parameter can be one of the following values:

- TTDT_AUTOPOP Retrieve the length of time the tool tip window remains visible if the pointer is stationary within a tool's bounding rectangle.

- TTDT_INITIAL Retrieve the length of time the pointer must remain stationary within a tool's bounding rectangle before the tool tip window appears.

- TTDT_RESHOW Retrieve the length of time it takes for subsequent tool tip windows to appear as the pointer moves from one tool to another.

### Return Value

The specified delay time, in milliseconds

### Remarks

This member function implements the behavior of the Win32 message [TTM_GETDELAYTIME](/windows/win32/Controls/ttm-getdelaytime), as described in the Windows SDK.

## <a name="getmargin"></a> CToolTipCtrl::GetMargin

Retrieves the top, left, bottom, and right margins set for a tool tip window.

```cpp
void GetMargin(LPRECT lprc) const;
```

### Parameters

*lprc*<br/>
Address of a `RECT` structure that will receive the margin information. The members of the [RECT](/windows/win32/api/windef/ns-windef-rect) structure do not define a bounding rectangle. For the purpose of this message, the structure members are interpreted as follows:

|Member|Representation|
|------------|--------------------|
|`top`|Distance between top border and top of tool tip text, in pixels.|
|`left`|Distance between left border and left end of tip text, in pixels.|
|`bottom`|Distance between bottom border and bottom of tip text, in pixels.|
|`right`|Distance between right border and right end of tip text, in pixels.|

### Remarks

This member function implements the behavior of the Win32 message [TTM_GETMARGIN](/windows/win32/Controls/ttm-getmargin), as described in the Windows SDK.

## <a name="getmaxtipwidth"></a> CToolTipCtrl::GetMaxTipWidth

Retrieves the maximum width for a tool tip window.

```
int GetMaxTipWidth() const;
```

### Return Value

The maximum width for a tool tip window.

### Remarks

This member function implements the behavior of the Win32 message [TTM_GETMAXTIPWIDTH](/windows/win32/Controls/ttm-getmaxtipwidth), as described in the Windows SDK.

## <a name="gettext"></a> CToolTipCtrl::GetText

Retrieves the text that a tool tip control maintains for a tool.

```cpp
void GetText(
    CString& str,
    CWnd* pWnd,
    UINT_PTR nIDTool = 0) const;
```

### Parameters

*str*<br/>
Reference to a `CString` object that receives the tool's text.

*pWnd*<br/>
Pointer to the window that contains the tool.

*nIDTool*<br/>
ID of the tool.

### Remarks

The *pWnd* and *nIDTool* parameters identify the tool. If that tool has been previously registered with the tool tip control through a previous call to `CToolTipCtrl::AddTool`, the object referenced by the *str* parameter is assigned the tool's text.

## <a name="gettipbkcolor"></a> CToolTipCtrl::GetTipBkColor

Retrieves the background color in a tool tip window.

```
COLORREF GetTipBkColor() const;
```

### Return Value

A [COLORREF](/windows/win32/gdi/colorref) value that represents the background color.

### Remarks

This member function implements the behavior of the Win32 message [TTM_GETTIPBKCOLOR](/windows/win32/Controls/ttm-gettipbkcolor), as described in the Windows SDK.

## <a name="gettiptextcolor"></a> CToolTipCtrl::GetTipTextColor

Retrieves the text color in a tool tip window.

```
COLORREF GetTipTextColor() const;
```

### Return Value

A [COLORREF](/windows/win32/gdi/colorref) value that represents the text color.

### Remarks

This member function implements the behavior of the Win32 message [TTM_GETTIPTEXTCOLOR](/windows/win32/Controls/ttm-gettiptextcolor), as described in the Windows SDK.

## <a name="gettitle"></a> CToolTipCtrl::GetTitle

Retrieves the title of the current tooltip control.

```cpp
void GetTitle(PTTGETTITLE pttgt) const;
```

### Parameters

*pttgt*\
[out] Pointer to a [TTGETTITLE](/windows/win32/api/commctrl/ns-commctrl-ttgettitle) structure that contains information about the ToolTip control. When this method returns, the *pszTitle* member of the [TTGETTITLE](/windows/win32/api/commctrl/ns-commctrl-ttgettitle) structure points to the text of the title.

### Remarks

This method sends the [TTM_GETTITLE](/windows/win32/Controls/ttm-gettitle) message, which is described in the Windows SDK.

## <a name="gettoolcount"></a> CToolTipCtrl::GetToolCount

Retrieves a count of the tools registered with the tool tip control.

```
int GetToolCount() const;
```

### Return Value

A count of tools registered with the tool tip control.

## <a name="gettoolinfo"></a> CToolTipCtrl::GetToolInfo

Retrieves the information that a tool tip control maintains about a tool.

```
BOOL GetToolInfo(
    CToolInfo& ToolInfo,
    CWnd* pWnd,
    UINT_PTR nIDTool = 0) const;
```

### Parameters

*ToolInfo*<br/>
Reference to a `TOOLINFO` object that receives the tool's text.

*pWnd*<br/>
Pointer to the window that contains the tool.

*nIDTool*<br/>
ID of the tool.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The `hwnd` and `uId` members of the [TOOLINFO](/windows/win32/api/commctrl/ns-commctrl-tttoolinfoa) structure referenced by *CToolInfo* identify the tool. If that tool has been registered with the tool tip control through a previous call to `AddTool`, the `TOOLINFO` structure is filled with information about the tool.

## <a name="hittest"></a> CToolTipCtrl::HitTest

Tests a point to determine whether it is within the bounding rectangle of the given tool and, if so, retrieve information about the tool.

```
BOOL HitTest(
    CWnd* pWnd,
    CPoint pt,
    LPTOOLINFO lpToolInfo) const;
```

### Parameters

*pWnd*<br/>
Pointer to the window that contains the tool.

*pt*<br/>
Pointer to a `CPoint` object containing the coordinates of the point to be tested.

*lpToolInfo*<br/>
Pointer to [TOOLINFO](/windows/win32/api/commctrl/ns-commctrl-tttoolinfoa) structure that contains information about the tool.

### Return Value

Nonzero if the point specified by the hit-test information is within the tool's bounding rectangle; otherwise 0.

### Remarks

If this function returns a nonzero value, the structure pointed to by *lpToolInfo* is filled with information on the tool within whose rectangle the point lies.

The `TTHITTESTINFO` structure is defined as follows:

```cpp
typedef struct _TT_HITTESTINFO { // tthti
    HWND hwnd;   // handle of tool or window with tool
    POINT pt;    // client coordinates of point to test
    TOOLINFO ti; // receives information about the tool
} TTHITTESTINFO, FAR * LPHITTESTINFO;
```

- `hwnd`

   Specifies the tool's handle.

- `pt`

   Specifies the coordinates of a point if the point is in the tool's bounding rectangle.

- `ti`

   Information about the tool. For more information about the `TOOLINFO` structure, see [CToolTipCtrl::GetToolInfo](#gettoolinfo).

## <a name="pop"></a> CToolTipCtrl::Pop

Removes a displayed tool tip window from the view.

```cpp
void Pop();
```

### Remarks

This member function implements the behavior of the Win32 message [TTM_POP](/windows/win32/Controls/ttm-pop), as described in the Windows SDK.

## <a name="popup"></a> CToolTipCtrl::Popup

Causes the current tooltip control to display at the coordinates of the last mouse message.

```cpp
void Popup();
```

### Remarks

This method sends the [TTM_POPUP](/windows/win32/Controls/ttm-popup) message, which is described in the Windows SDK.

### Example

The following code example displays a tooltip window.

[!code-cpp[NVC_MFC_CToolBarCtrl_s1#7](../../mfc/reference/codesnippet/cpp/ctooltipctrl-class_3.cpp)]

## <a name="relayevent"></a> CToolTipCtrl::RelayEvent

Passes a mouse message to a tool tip control for processing.

```cpp
void RelayEvent(LPMSG lpMsg);
```

### Parameters

*lpMsg*<br/>
Pointer to a [MSG](/windows/win32/api/winuser/ns-winuser-msg) structure that contains the message to relay.

### Remarks

A tool tip control processes only the following messages, which are sent to it by `RelayEvent`:

|WM_LBUTTONDOWN|WM_MOUSEMOVE|
|---------------------|-------------------|
|WM_LBUTTONUP|WM_RBUTTONDOWN|
|WM_MBUTTONDOWN|WM_RBUTTONUP|
|WM_MBUTTONUP||

### Example

  See the example for [CPropertySheet::GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).

## <a name="setdelaytime"></a> CToolTipCtrl::SetDelayTime

Sets the delay time for a tool tip control.

```cpp
void SetDelayTime(UINT nDelay);

void SetDelayTime(
    DWORD dwDuration,
    int iTime);
```

### Parameters

*nDelay*<br/>
Specifies the new delay time, in milliseconds.

*dwDuration*<br/>
Flag that specifies which duration value will be retrieved. See [CToolTipCtrl::GetDelayTime](#getdelaytime) for a description of the valid values.

*iTime*<br/>
The specified delay time, in milliseconds.

### Remarks

The delay time is the length of time the cursor must remain on a tool before the tool tip window appears. The default delay time is 500 milliseconds.

## <a name="setmargin"></a> CToolTipCtrl::SetMargin

Sets the top, left, bottom, and right margins for a tool tip window.

```cpp
void SetMargin(LPRECT lprc);
```

### Parameters

*lprc*<br/>
Address of a `RECT` structure that contains the margin information to be set. The members of the `RECT` structure do not define a bounding rectangle. See [CToolTipCtrl::GetMargin](#getmargin) for a description of the margin information.

### Remarks

This member function implements the behavior of the Win32 message [TTM_SETMARGIN](/windows/win32/Controls/ttm-setmargin), as described in the Windows SDK.

## <a name="setmaxtipwidth"></a> CToolTipCtrl::SetMaxTipWidth

Sets the maximum width for a tool tip window.

```
int SetMaxTipWidth(int iWidth);
```

### Parameters

*iWidth*<br/>
The maximum tool tip window width to be set.

### Return Value

The previous maximum tip width.

### Remarks

This member function implements the behavior of the Win32 message [TTM_SETMAXTIPWIDTH](/windows/win32/Controls/ttm-setmaxtipwidth), as described in the Windows SDK.

## <a name="settipbkcolor"></a> CToolTipCtrl::SetTipBkColor

Sets the background color in a tool tip window.

```cpp
void SetTipBkColor(COLORREF clr);
```

### Parameters

*clr*<br/>
The new background color.

### Remarks

This member function implements the behavior of the Win32 message [TTM_SETTIPBKCOLOR](/windows/win32/Controls/ttm-settipbkcolor), as described in the Windows SDK.

## <a name="settiptextcolor"></a> CToolTipCtrl::SetTipTextColor

Sets the text color in a tool tip window.

```cpp
void SetTipTextColor(COLORREF clr);
```

### Parameters

*clr*<br/>
The new text color.

### Remarks

This member function implements the behavior of the Win32 message [TTM_SETTIPTEXTCOLOR](/windows/win32/Controls/ttm-settiptextcolor), as described in the Windows SDK.

## <a name="settitle"></a> CToolTipCtrl::SetTitle

Adds a standard icon and title string to a tool tip.

```
BOOL SetTitle(
    UINT uIcon,
    LPCTSTR lpstrTitle);
```

### Parameters

*uIcon*<br/>
See *icon* in [TTM_SETTITLE](/windows/win32/Controls/ttm-settitle) in the Windows SDK.

*lpstrTitle*<br/>
Pointer to the title string.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

This member function implements the behavior of the Win32 message [TTM_SETTITLE](/windows/win32/Controls/ttm-settitle), as described in the Windows SDK.

## <a name="settoolinfo"></a> CToolTipCtrl::SetToolInfo

Sets the information that a tool tip maintains for a tool.

```cpp
void SetToolInfo(LPTOOLINFO lpToolInfo);
```

### Parameters

*lpToolInfo*<br/>
A pointer to a [TOOLINFO](/windows/win32/api/commctrl/ns-commctrl-tttoolinfoa) structure that specifies the information to set.

## <a name="settoolrect"></a> CToolTipCtrl::SetToolRect

Sets a new bounding rectangle for a tool.

```cpp
void SetToolRect(
    CWnd* pWnd,
    UINT_PTR nIDTool,
    LPCRECT lpRect);
```

### Parameters

*pWnd*<br/>
Pointer to the window that contains the tool.

*nIDTool*<br/>
ID of the tool.

*lpRect*<br/>
Pointer to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure specifying the new bounding rectangle.

## <a name="setwindowtheme"></a> CToolTipCtrl::SetWindowTheme

Sets the visual style of the tool tip window.

```
HRESULT SetWindowTheme(LPCWSTR pszSubAppName);
```

### Parameters

*pszSubAppName*<br/>
A pointer to a Unicode string that contains the visual style to set.

### Return Value

The return value is not used.

### Remarks

This member function emulates the functionality of the [TTM_SETWINDOWTHEME](/windows/win32/Controls/ttm-setwindowtheme) message, as described in the Windows SDK.

## <a name="update"></a> CToolTipCtrl::Update

Forces the current tool to be redrawn.

```cpp
void Update();
```

## <a name="updatetiptext"></a> CToolTipCtrl::UpdateTipText

Updates the tool tip text for this control's tools.

```cpp
void UpdateTipText(
    LPCTSTR lpszText,
    CWnd* pWnd,
    UINT_PTR nIDTool = 0);

void UpdateTipText(
    UINT nIDText,
    CWnd* pWnd,
    UINT_PTR nIDTool = 0);
```

### Parameters

*lpszText*<br/>
Pointer to the text for the tool.

*pWnd*<br/>
Pointer to the window that contains the tool.

*nIDTool*<br/>
ID of the tool.

*nIDText*<br/>
ID of the string resource that contains the text for the tool.

## See also

[CWnd Class](../../mfc/reference/cwnd-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CToolBar Class](../../mfc/reference/ctoolbar-class.md)
