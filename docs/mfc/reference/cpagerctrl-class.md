---
description: "Learn more about: CPagerCtrl Class"
title: "CPagerCtrl Class"
ms.date: "11/04/2016"
f1_keywords: ["CPagerCtrl", "AFXCMN/CPagerCtrl", "AFXCMN/CPagerCtrl::CPagerCtrl", "AFXCMN/CPagerCtrl::Create", "AFXCMN/CPagerCtrl::CreateEx", "AFXCMN/CPagerCtrl::ForwardMouse", "AFXCMN/CPagerCtrl::GetBkColor", "AFXCMN/CPagerCtrl::GetBorder", "AFXCMN/CPagerCtrl::GetButtonSize", "AFXCMN/CPagerCtrl::GetButtonState", "AFXCMN/CPagerCtrl::GetDropTarget", "AFXCMN/CPagerCtrl::GetScrollPos", "AFXCMN/CPagerCtrl::IsButtonDepressed", "AFXCMN/CPagerCtrl::IsButtonGrayed", "AFXCMN/CPagerCtrl::IsButtonHot", "AFXCMN/CPagerCtrl::IsButtonInvisible", "AFXCMN/CPagerCtrl::IsButtonNormal", "AFXCMN/CPagerCtrl::RecalcSize", "AFXCMN/CPagerCtrl::SetBkColor", "AFXCMN/CPagerCtrl::SetBorder", "AFXCMN/CPagerCtrl::SetButtonSize", "AFXCMN/CPagerCtrl::SetChild", "AFXCMN/CPagerCtrl::SetScrollPos"]
helpviewer_keywords: ["CPagerCtrl [MFC], CPagerCtrl", "CPagerCtrl [MFC], Create", "CPagerCtrl [MFC], CreateEx", "CPagerCtrl [MFC], ForwardMouse", "CPagerCtrl [MFC], GetBkColor", "CPagerCtrl [MFC], GetBorder", "CPagerCtrl [MFC], GetButtonSize", "CPagerCtrl [MFC], GetButtonState", "CPagerCtrl [MFC], GetDropTarget", "CPagerCtrl [MFC], GetScrollPos", "CPagerCtrl [MFC], IsButtonDepressed", "CPagerCtrl [MFC], IsButtonGrayed", "CPagerCtrl [MFC], IsButtonHot", "CPagerCtrl [MFC], IsButtonInvisible", "CPagerCtrl [MFC], IsButtonNormal", "CPagerCtrl [MFC], RecalcSize", "CPagerCtrl [MFC], SetBkColor", "CPagerCtrl [MFC], SetBorder", "CPagerCtrl [MFC], SetButtonSize", "CPagerCtrl [MFC], SetChild", "CPagerCtrl [MFC], SetScrollPos"]
ms.assetid: 65ac58dd-4f5e-4b7e-b15c-e0d435a7e884
---
# CPagerCtrl Class

The `CPagerCtrl` class wraps the Windows pager control, which can scroll into view a contained window that does not fit the containing window.

## Syntax

```
class CPagerCtrl : public CWnd
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CPagerCtrl::CPagerCtrl](#cpagerctrl)|Constructs a `CPagerCtrl` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CPagerCtrl::Create](#create)|Creates a pager control with specified styles and attaches it to the current `CPagerCtrl` object.|
|[CPagerCtrl::CreateEx](#createex)|Creates a pager control with specified extended styles and attaches it to the current `CPagerCtrl` object.|
|[CPagerCtrl::ForwardMouse](#forwardmouse)|Enables or disables forwarding [WM_MOUSEMOVE](/windows/win32/inputdev/wm-mousemove) messages to the window that is contained in the current pager control.|
|[CPagerCtrl::GetBkColor](#getbkcolor)|Retrieves the background color of the current pager control.|
|[CPagerCtrl::GetBorder](#getborder)|Retrieves the border size of the current pager control.|
|[CPagerCtrl::GetButtonSize](#getbuttonsize)|Retrieves the button size of the current pager control.|
|[CPagerCtrl::GetButtonState](#getbuttonstate)|Retrieves the state of the specified button in the current pager control.|
|[CPagerCtrl::GetDropTarget](#getdroptarget)|Retrieves the [IDropTarget](/windows/win32/api/oleidl/nn-oleidl-idroptarget) interface for the current pager control.|
|[CPagerCtrl::GetScrollPos](#getscrollpos)|Retrieves the scroll position of the current pager control.|
|[CPagerCtrl::IsButtonDepressed](#isbuttondepressed)|Indicates whether the specified button of the current pager control is in `pressed` state.|
|[CPagerCtrl::IsButtonGrayed](#isbuttongrayed)|Indicates whether the specified button of the current pager control is in `grayed` state.|
|[CPagerCtrl::IsButtonHot](#isbuttonhot)|Indicates whether the specified button of the current pager control is in `hot` state.|
|[CPagerCtrl::IsButtonInvisible](#isbuttoninvisible)|Indicates whether the specified button of the current pager control is in `invisible` state.|
|[CPagerCtrl::IsButtonNormal](#isbuttonnormal)|Indicates whether the specified button of the current pager control is in `normal` state.|
|[CPagerCtrl::RecalcSize](#recalcsize)|Causes the current pager control to recalculate the size of the contained window.|
|[CPagerCtrl::SetBkColor](#setbkcolor)|Sets the background color of the current pager control.|
|[CPagerCtrl::SetBorder](#setborder)|Sets the border size of the current pager control.|
|[CPagerCtrl::SetButtonSize](#setbuttonsize)|Sets the button size of the current pager control.|
|[CPagerCtrl::SetChild](#setchild)|Sets the contained window for the current pager control.|
|[CPagerCtrl::SetScrollPos](#setscrollpos)|Sets the scroll position of the current pager control.|

## Remarks

A pager control is a window that contains another window that is linear and larger than the containing window, and enables you to scroll the contained window into view. The pager control displays two scroll buttons that automatically disappear when the contained window is scrolled to its farthest extent, and reappear otherwise. You can create a pager control that scrolls either horizontally or vertically.

For example, if your application has a toolbar that is not wide enough to show all of its items, you can assign the toolbar to a pager control and users will be able to scroll the toolbar to the left or right to access all of the items. Microsoft Internet Explorer Version 4.0 (commctrl.dll version 4.71) introduces the pager control.

The `CPagerCtrl` class is derived from the [CWnd](../../mfc/reference/cwnd-class.md) class. For more information and an illustration of a pager control, see [Pager Controls](/windows/win32/Controls/pager-controls).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CPagerCtrl`

## Requirements

**Header:** afxcmn.h

## <a name="cpagerctrl"></a> CPagerCtrl::CPagerCtrl

Constructs a `CPagerCtrl` object.

```
CPagerCtrl();
```

### Remarks

Use the [CPagerCtrl::Create](#create) or [CPagerCtrl::CreateEx](#createex) method to create a pager control and attach it to the `CPagerCtrl` object.

## <a name="create"></a> CPagerCtrl::Create

Creates a pager control with specified styles and attaches it to the current `CPagerCtrl` object.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### Parameters

*dwStyle*\
[in] A bitwise combination (OR) of [window styles](../../mfc/reference/styles-used-by-mfc.md#window-styles) and [pager control styles](/windows/win32/Controls/pager-control-styles) to be applied to the control.

*rect*\
[in] A reference to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure that contains the position and size of the control in client coordinates.

*pParentWnd*\
[in] A pointer to a [CWnd](../../mfc/reference/cwnd-class.md) object that is the parent window of the control. This parameter cannot be NULL.

*nID*\
[in] The ID of the control.

### Return Value

TRUE if this method is successful; otherwise, FALSE.

### Remarks

To create a pager control, declare a `CPagerCtrl` variable, then call the [CPagerCtrl::Create](#create) or [CPagerCtrl::CreateEx](#createex) method on that variable.

### Example

The following example creates a pager control, then uses the [CPagerCtrl::SetChild](#setchild) method to associate a very long button control with the pager control. The example then uses the [CPagerCtrl::SetButtonSize](#setbuttonsize) method to set the height of the pager control to 20 pixels, and the [CPagerCtrl::SetBorder](#setborder) method to set the border thickness to 1 pixel.

[!code-cpp[NVC_MFC_CSplitButton_s2#1](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_1.cpp)]

## <a name="createex"></a> CPagerCtrl::CreateEx

Creates a pager control with specified extended styles and attaches it to the current `CPagerCtrl` object.

```
virtual BOOL CreateEx(
    DWORD dwExStyle,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### Parameters

*dwExStyle*\
[in] A bitwise combination of extended styles to be applied to the control. For more information, see the *dwExStyle* parameter of the [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) function.

*dwStyle*\
[in] A bitwise combination (OR) of [window styles](../../mfc/reference/styles-used-by-mfc.md#window-styles) and [pager control styles](/windows/win32/Controls/pager-control-styles) to be applied to the control.

*rect*\
[in] A reference to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure that contains the position and size of the control in client coordinates.

*pParentWnd*\
[in] A pointer to a [CWnd](../../mfc/reference/cwnd-class.md) object that is the parent window of the control. This parameter cannot be NULL.

*nID*\
[in] The ID of the control.

### Return Value

TRUE if this method is successful; otherwise, FALSE.

### Remarks

To create a pager control, declare a `CPagerCtrl` variable, then call the [CPagerCtrl::Create](#create) or [CPagerCtrl::CreateEx](#createex) method on that variable.

## <a name="forwardmouse"></a> CPagerCtrl::ForwardMouse

Enables or disables forwarding [WM_MOUSEMOVE](/windows/win32/inputdev/wm-mousemove) messages to the window that is contained in the current pager control.

```cpp
void ForwardMouse(BOOL bForward);
```

### Parameters

*bForward*\
[in] TRUE to forward mouse messages, or FALSE to not forward mouse messages.

### Remarks

This method sends the [PGM_FORWARDMOUSE](/windows/win32/Controls/pgm-forwardmouse) message, which is described in the Windows SDK.

## <a name="getborder"></a> CPagerCtrl::GetBorder

Retrieves the border size of the current pager control.

```
int GetBorder() const;
```

### Return Value

The current border size, measured in pixels.

### Remarks

This method sends the [PGM_GETBORDER](/windows/win32/Controls/pgm-getborder) message, which is described in the Windows SDK.

### Example

The following example uses the [CPagerCtrl::GetBorder](#getborder) method to retrieve the thickness of the pager control's border.

[!code-cpp[NVC_MFC_CSplitButton_s2#5](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_2.cpp)]

## <a name="getbkcolor"></a> CPagerCtrl::GetBkColor

Retrieves the background color of the current pager control.

```
COLORREF GetBkColor() const;
```

### Return Value

A [COLORREF](/windows/win32/gdi/colorref) value that contains the current background color of the pager control.

### Remarks

This method sends the [PGM_GETBKCOLOR](/windows/win32/Controls/pgm-getbkcolor) message, which is described in the Windows SDK.

### Example

The following example uses the [CPagerCtrl::SetBkColor](#setbkcolor) method to set the background color of the pager control to red, and the [CPagerCtrl::GetBkColor](#getbkcolor) method to confirm that the change was made.

[!code-cpp[NVC_MFC_CSplitButton_s2#4](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_3.cpp)]

## <a name="getbuttonsize"></a> CPagerCtrl::GetButtonSize

Retrieves the button size of the current pager control.

```
int GetButtonSize() const;
```

### Return Value

The current button size, measured in pixels.

### Remarks

This method sends the [PGM_GETBUTTONSIZE](/windows/win32/Controls/pgm-getbuttonsize) message, which is described in the Windows SDK.

If the pager control has the PGS_HORZ style, the button size determines the width of the pager buttons, and if the pager control has the PGS_VERT style, the button size determines the height of the pager buttons. For more information, see [Pager Control Styles](/windows/win32/Controls/pager-control-styles).

## <a name="getbuttonstate"></a> CPagerCtrl::GetButtonState

Retrieves the state of the specified scroll button in the current pager control.

```
DWORD GetButtonState(int iButton) const;
```

### Parameters

*iButton*\
[in] Indicates the button for which the state is retrieved. If the pager control style is PGS_HORZ, specify PGB_TOPORLEFT for the left button and PGB_BOTTOMORRIGHT for the right button. If the pager control style is PGS_VERT, specify PGB_TOPORLEFT for the top button and PGB_BOTTOMORRIGHT for the bottom button. For more information, see [Pager Control Styles](/windows/win32/Controls/pager-control-styles).

### Return Value

The state of the button specified by the *iButton* parameter. The state is either PGF_INVISIBLE, PGF_NORMAL, PGF_GRAYED, PGF_DEPRESSED, or PGF_HOT. For more information, see the Return Value section of the [PGM_GETBUTTONSTATE](/windows/win32/Controls/pgm-getbuttonstate) message.

### Remarks

This method sends the [PGM_GETBUTTONSTATE](/windows/win32/Controls/pgm-getbuttonstate) message, which is described in the Windows SDK.

## <a name="getdroptarget"></a> CPagerCtrl::GetDropTarget

Retrieves the [IDropTarget](/windows/win32/api/oleidl/nn-oleidl-idroptarget) interface for the current pager control.

```
IDropTarget* GetDropTarget() const;
```

### Return Value

A pointer to the `IDropTarget` interface for the current pager control.

### Remarks

`IDropTarget` is one of the interfaces you implement to support drag-and-drop operations in your application.

This method sends the [PGM_GETDROPTARGET](/windows/win32/Controls/pgm-getdroptarget) message, which is described in the Windows SDK. The caller of this method is responsible for calling the `Release` member of the [IDropTarget](/windows/win32/api/oleidl/nn-oleidl-idroptarget) interface when the interface is no longer needed.

## <a name="getscrollpos"></a> CPagerCtrl::GetScrollPos

Retrieves the scroll position of the current pager control.

```
int GetScrollPos() const;
```

### Return Value

The current scroll position, measured in pixels.

### Remarks

This method sends the [PGM_GETPOS](/windows/win32/Controls/pgm-getpos) message, which is described in the Windows SDK.

### Example

The following example uses the [CPagerCtrl::GetScrollPos](#getscrollpos) method to retrieve the current scroll position of the pager control. If the pager control is not already scrolled to zero, the leftmost position, the example uses the [CPagerCtrl::SetScrollPos](#setscrollpos) method to set the scroll position to zero.

[!code-cpp[NVC_MFC_CSplitButton_s2#7](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_4.cpp)]

## <a name="isbuttondepressed"></a> CPagerCtrl::IsButtonDepressed

Indicates whether the specified scroll button of the current pager control is in pressed state.

```
BOOL IsButtonDepressed(int iButton) const;
```

### Parameters

*iButton*\
[in] Indicates the button for which the state is retrieved. If the pager control style is PGS_HORZ, specify PGB_TOPORLEFT for the left button and PGB_BOTTOMORRIGHT for the right button. If the pager control style is PGS_VERT, specify PGB_TOPORLEFT for the top button and PGB_BOTTOMORRIGHT for the bottom button. For more information, see [Pager Control Styles](/windows/win32/Controls/pager-control-styles).

### Return Value

TRUE if the specified button is in pressed state; otherwise, FALSE.

### Remarks

This method sends the [PGM_GETBUTTONSTATE](/windows/win32/Controls/pgm-getbuttonstate) message, which is described in the Windows SDK. It then tests whether the state that is returned is PGF_DEPRESSED. For more information, see the Return Value section of the [PGM_GETBUTTONSTATE](/windows/win32/Controls/pgm-getbuttonstate) message.

## <a name="isbuttongrayed"></a> CPagerCtrl::IsButtonGrayed

Indicates whether the specified scroll button of the current pager control is in grayed state.

```
BOOL IsButtonGrayed(int iButton) const;
```

### Parameters

*iButton*\
[in] Indicates the button for which the state is retrieved. If the pager control style is PGS_HORZ, specify PGB_TOPORLEFT for the left button and PGB_BOTTOMORRIGHT for the right button. If the pager control style is PGS_VERT, specify PGB_TOPORLEFT for the top button and PGB_BOTTOMORRIGHT for the bottom button. For more information, see [Pager Control Styles](/windows/win32/Controls/pager-control-styles).

### Return Value

TRUE if the specified button is in grayed state; otherwise, FALSE.

### Remarks

This method sends the [PGM_GETBUTTONSTATE](/windows/win32/Controls/pgm-getbuttonstate) message, which is described in the Windows SDK. It then tests whether the state that is returned is PGF_GRAYED. For more information, see the Return Value section of the [PGM_GETBUTTONSTATE](/windows/win32/Controls/pgm-getbuttonstate) message.

## <a name="isbuttonhot"></a> CPagerCtrl::IsButtonHot

Indicates whether the specified scroll button of the current pager control is in hot state.

```
BOOL IsButtonHot(int iButton) const;
```

### Parameters

*iButton*\
[in] Indicates the button for which the state is retrieved. If the pager control style is PGS_HORZ, specify PGB_TOPORLEFT for the left button and PGB_BOTTOMORRIGHT for the right button. If the pager control style is PGS_VERT, specify PGB_TOPORLEFT for the top button and PGB_BOTTOMORRIGHT for the bottom button. For more information, see [Pager Control Styles](/windows/win32/Controls/pager-control-styles).

### Return Value

TRUE if the specified button is in hot state; otherwise, FALSE.

### Remarks

This method sends the [PGM_GETBUTTONSTATE](/windows/win32/Controls/pgm-getbuttonstate) message, which is described in the Windows SDK. It then tests whether the state that is returned is PGF_HOT. For more information, see the Return Value section of the [PGM_GETBUTTONSTATE](/windows/win32/Controls/pgm-getbuttonstate) message.

## <a name="isbuttoninvisible"></a> CPagerCtrl::IsButtonInvisible

Indicates whether the specified scroll button of the current pager control is in invisible state.

```
BOOL IsButtonInvisible(int iButton) const;
```

### Parameters

*iButton*\
[in] Indicates the button for which the state is retrieved. If the pager control style is PGS_HORZ, specify PGB_TOPORLEFT for the left button and PGB_BOTTOMORRIGHT for the right button. If the pager control style is PGS_VERT, specify PGB_TOPORLEFT for the top button and PGB_BOTTOMORRIGHT for the bottom button. For more information, see [Pager Control Styles](/windows/win32/Controls/pager-control-styles).

### Return Value

TRUE if the specified button is in invisible state; otherwise, FALSE.

### Remarks

Windows makes the scroll button in a particular direction invisible when the contained window is scrolled to its farthest extent because clicking the button further cannot bring more of the contained window into view.

This method sends the [PGM_GETBUTTONSTATE](/windows/win32/Controls/pgm-getbuttonstate) message, which is described in the Windows SDK. It then tests whether the state that is returned is PGF_INVISIBLE. For more information, see the Return Value section of the [PGM_GETBUTTONSTATE](/windows/win32/Controls/pgm-getbuttonstate) message.

### Example

The following example uses the [CPagerCtrl::IsButtonInvisible](#isbuttoninvisible) method to determine whether the pager control's left and right scroll buttons are visible.

[!code-cpp[NVC_MFC_CSplitButton_s2#6](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_5.cpp)]

## <a name="isbuttonnormal"></a> CPagerCtrl::IsButtonNormal

Indicates whether the specified scroll button of the current pager control is in normal state.

```
BOOL IsButtonNormal(int iButton) const;
```

### Parameters

*iButton*\
[in] Indicates the button for which the state is retrieved. If the pager control style is PGS_HORZ, specify PGB_TOPORLEFT for the left button and PGB_BOTTOMORRIGHT for the right button. If the pager control style is PGS_VERT, specify PGB_TOPORLEFT for the top button and PGB_BOTTOMORRIGHT for the bottom button. For more information, see [Pager Control Styles](/windows/win32/Controls/pager-control-styles).

### Return Value

TRUE if the specified button is in normal state; otherwise, FALSE.

### Remarks

This method sends the [PGM_GETBUTTONSTATE](/windows/win32/Controls/pgm-getbuttonstate) message, which is described in the Windows SDK. It then tests whether the state that is returned is PGF_NORMAL. For more information, see the Return Value section of the [PGM_GETBUTTONSTATE](/windows/win32/Controls/pgm-getbuttonstate) message.

## <a name="recalcsize"></a> CPagerCtrl::RecalcSize

Causes the current pager control to recalculate the size of the contained window.

```cpp
void RecalcSize();
```

### Remarks

This method sends the [PGM_RECALCSIZE](/windows/win32/Controls/pgm-recalcsize) message, which is described in the Windows SDK. Consequently, the pager control sends the [PGN_CALCSIZE](/windows/win32/Controls/pgn-calcsize) notification to obtain the scrollable dimensions of the contained window.

### Example

The following example uses the [CPagerCtrl::RecalcSize](#recalcsize) method to request the current pager control to recalculate its size.

[!code-cpp[NVC_MFC_CSplitButton_s2#3](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_6.cpp)]

### Example

The following example uses [message reflection](../../mfc/tn062-message-reflection-for-windows-controls.md) to enable the pager control to recalculate its own size instead of requiring the control's parent dialog to perform the calculation. The example derives the `MyPagerCtrl` class from the [CPagerCtrl class](../../mfc/reference/cpagerctrl-class.md), then uses a message map to associate the [PGN_CALCSIZE](/windows/win32/Controls/pgn-calcsize) notification with the `OnCalcsize` notification handler. In this example, the notification handler sets the width and height of the pager control to fixed values.

[!code-cpp[NVC_MFC_CSplitButton_s2#8](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_7.cpp)]

## <a name="setbkcolor"></a> CPagerCtrl::SetBkColor

Sets the background color of the current pager control.

```
COLORREF SetBkColor(COLORREF clrBk);
```

### Parameters

*clrBk*\
[in] A [COLORREF](/windows/win32/gdi/colorref) value that contains the new background color of the pager control.

### Return Value

A [COLORREF](/windows/win32/gdi/colorref) value that contains the previous background color of the pager control.

### Remarks

This method sends the [PGM_SETBKCOLOR](/windows/win32/Controls/pgm-setbkcolor) message, which is described in the Windows SDK.

### Example

The following example uses the [CPagerCtrl::SetBkColor](#setbkcolor) method to set the background color of the pager control to red, and the [CPagerCtrl::GetBkColor](#getbkcolor) method to confirm that the change was made.

[!code-cpp[NVC_MFC_CSplitButton_s2#4](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_3.cpp)]

## <a name="setborder"></a> CPagerCtrl::SetBorder

Sets the border size of the current pager control.

```
int SetBorder(int iBorder);
```

### Parameters

*iBorder*\
[in] The new border size, measured in pixels. If the *iBorder* parameter is negative, the border size is set to zero.

### Return Value

The previous border size, measured in pixels.

### Remarks

This method sends the [PGM_SETBORDER](/windows/win32/Controls/pgm-setborder) message, which is described in the Windows SDK.

### Example

The following example creates a pager control, then uses the [CPagerCtrl::SetChild](#setchild) method to associate a very long button control with the pager control. The example then uses the [CPagerCtrl::SetButtonSize](#setbuttonsize) method to set the height of the pager control to 20 pixels, and the [CPagerCtrl::SetBorder](#setborder) method to set the border thickness to 1 pixel.

[!code-cpp[NVC_MFC_CSplitButton_s2#1](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_1.cpp)]

## <a name="setbuttonsize"></a> CPagerCtrl::SetButtonSize

Sets the button size of the current pager control.

```
int SetButtonSize(int iButtonSize);
```

### Parameters

*iButtonSize*\
[in] The new button size, measured in pixels.

### Return Value

The previous button size, measured in pixels.

### Remarks

This method sends the [PGM_SETBUTTONSIZE](/windows/win32/Controls/pgm-setpos) message, which is described in the Windows SDK.

If the pager control has the PGS_HORZ style, the button size determines the width of the pager buttons, and if the pager control has the PGS_VERT style, the button size determines the height of the pager buttons. The default button size is three-fourths of the width of the scroll bar, and the minimum button size is 12 pixels. For more information, see [Pager Control Styles](/windows/win32/Controls/pager-control-styles).

### Example

The following example creates a pager control, then uses the [CPagerCtrl::SetChild](#setchild) method to associate a very long button control with the pager control. The example then uses the [CPagerCtrl::SetButtonSize](#setbuttonsize) method to set the height of the pager control to 20 pixels, and the [CPagerCtrl::SetBorder](#setborder) method to set the border thickness to 1 pixel.

[!code-cpp[NVC_MFC_CSplitButton_s2#1](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_1.cpp)]

## <a name="setchild"></a> CPagerCtrl::SetChild

Sets the contained window for the current pager control.

```cpp
void SetChild(HWND hwndChild);
```

### Parameters

*hwndChild*\
[in] Handle to the window to be contained.

### Remarks

This method sends the [PGM_SETCHILD](/windows/win32/Controls/pgm-setchild) message, which is described in the Windows SDK.

This method does not change the parent of the contained window; it only assigns a window handle to the pager control for scrolling. In most cases, the contained window will be a child window of the pager control.

### Example

The following example creates a pager control, then uses the [CPagerCtrl::SetChild](#setchild) method to associate a very long button control with the pager control. The example then uses the [CPagerCtrl::SetButtonSize](#setbuttonsize) method to set the height of the pager control to 20 pixels, and the [CPagerCtrl::SetBorder](#setborder) method to set the border thickness to 1 pixel.

[!code-cpp[NVC_MFC_CSplitButton_s2#1](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_1.cpp)]

## <a name="setscrollpos"></a> CPagerCtrl::SetScrollPos

Sets the scroll position of the current pager control.

```cpp
void SetScrollPos(int iPos);
```

### Parameters

*iPos*\
[in] The new scroll position, measured in pixels.

### Remarks

This method sends the [PGM_SETPOS](/windows/win32/Controls/pgm-setpos) message, which is described in the Windows SDK.

## See also

[CPagerCtrl Class](../../mfc/reference/cpagerctrl-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Pager Controls](/windows/win32/Controls/pager-controls)
