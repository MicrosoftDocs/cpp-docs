---
description: "Learn more about: CSpinButtonCtrl Class"
title: "CSpinButtonCtrl Class"
ms.date: "11/04/2016"
f1_keywords: ["CSpinButtonCtrl", "AFXCMN/CSpinButtonCtrl", "AFXCMN/CSpinButtonCtrl::CSpinButtonCtrl", "AFXCMN/CSpinButtonCtrl::Create", "AFXCMN/CSpinButtonCtrl::CreateEx", "AFXCMN/CSpinButtonCtrl::GetAccel", "AFXCMN/CSpinButtonCtrl::GetBase", "AFXCMN/CSpinButtonCtrl::GetBuddy", "AFXCMN/CSpinButtonCtrl::GetPos", "AFXCMN/CSpinButtonCtrl::GetRange", "AFXCMN/CSpinButtonCtrl::SetAccel", "AFXCMN/CSpinButtonCtrl::SetBase", "AFXCMN/CSpinButtonCtrl::SetBuddy", "AFXCMN/CSpinButtonCtrl::SetPos", "AFXCMN/CSpinButtonCtrl::SetRange"]
helpviewer_keywords: ["CSpinButtonCtrl [MFC], CSpinButtonCtrl", "CSpinButtonCtrl [MFC], Create", "CSpinButtonCtrl [MFC], CreateEx", "CSpinButtonCtrl [MFC], GetAccel", "CSpinButtonCtrl [MFC], GetBase", "CSpinButtonCtrl [MFC], GetBuddy", "CSpinButtonCtrl [MFC], GetPos", "CSpinButtonCtrl [MFC], GetRange", "CSpinButtonCtrl [MFC], SetAccel", "CSpinButtonCtrl [MFC], SetBase", "CSpinButtonCtrl [MFC], SetBuddy", "CSpinButtonCtrl [MFC], SetPos", "CSpinButtonCtrl [MFC], SetRange"]
ms.assetid: 509bfd76-1c5a-4af6-973f-e133c0b87734
---
# CSpinButtonCtrl Class

Provides the functionality of the Windows common spin button control.

## Syntax

```
class CSpinButtonCtrl : public CWnd
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CSpinButtonCtrl::CSpinButtonCtrl](#cspinbuttonctrl)|Constructs a `CSpinButtonCtrl` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CSpinButtonCtrl::Create](#create)|Creates a spin button control and attaches it to a `CSpinButtonCtrl` object.|
|[CSpinButtonCtrl::CreateEx](#createex)|Creates a spin button control with the specified Windows extended styles and attaches it to a `CSpinButtonCtrl` object.|
|[CSpinButtonCtrl::GetAccel](#getaccel)|Retrieves acceleration information for a spin button control.|
|[CSpinButtonCtrl::GetBase](#getbase)|Retrieves the current base for a spin button control.|
|[CSpinButtonCtrl::GetBuddy](#getbuddy)|Retrieves a pointer to the current buddy window.|
|[CSpinButtonCtrl::GetPos](#getpos)|Retrieves the current position of a spin button control.|
|[CSpinButtonCtrl::GetRange](#getrange)|Retrieves the upper and lower limits (range) for a spin button control.|
|[CSpinButtonCtrl::SetAccel](#setaccel)|Sets the acceleration for a spin button control.|
|[CSpinButtonCtrl::SetBase](#setbase)|Sets the base for a spin button control.|
|[CSpinButtonCtrl::SetBuddy](#setbuddy)|Sets the buddy window for a spin button control.|
|[CSpinButtonCtrl::SetPos](#setpos)|Sets the current position for the control.|
|[CSpinButtonCtrl::SetRange](#setrange)|Sets the upper and lower limits (range) for a spin button control.|

## Remarks

A "spin button control" (also known as an up-down control) is a pair of arrow buttons that the user can click to increment or decrement a value, such as a scroll position or a number displayed in a companion control. The value associated with a spin button control is called its current position. A spin button control is most often used with a companion control, called a "buddy window."

This control (and therefore the `CSpinButtonCtrl` class) is available only to programs running under Windows 95/98 and Windows NT version 3.51 and later.

To the user, a spin button control and its buddy window often look like a single control. You can specify that a spin button control automatically position itself next to its buddy window, and that it automatically set the caption of the buddy window to its current position. You can use a spin button control with an edit control to prompt the user for numeric input.

Clicking the up arrow moves the current position toward the maximum, and clicking the down arrow moves the current position toward the minimum. By default, the minimum is 100 and the maximum is 0. Any time the minimum setting is greater than the maximum setting (for example, when the default settings are used), clicking the up arrow decreases the position value and clicking the down arrow increases it.

A spin button control without a buddy window functions as a sort of simplified scroll bar. For example, a tab control sometimes displays a spin button control to enable the user to scroll additional tabs into view.

For more information on using `CSpinButtonCtrl`, see [Controls](../../mfc/controls-mfc.md) and [Using CSpinButtonCtrl](../../mfc/using-cspinbuttonctrl.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CSpinButtonCtrl`

## Requirements

**Header:** afxcmn.h

## <a name="create"></a> CSpinButtonCtrl::Create

Creates a spin button control and attaches it to a `CSpinButtonCtrl` object..

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### Parameters

*dwStyle*<br/>
Specifies the spin button control's style. Apply any combination of spin button control styles to the control. These styles are described in [Up-Down Control Styles](/windows/win32/Controls/up-down-control-styles) in the Windows SDK.

*rect*<br/>
Specifies the spin button control's size and position. It can be either a [CRect](../../atl-mfc-shared/reference/crect-class.md) object or a [RECT](/windows/win32/api/windef/ns-windef-rect) structure

*pParentWnd*<br/>
A pointer to the spin button control's parent window, usually a `CDialog`. It must not be NULL.

*nID*<br/>
Specifies the spin button control's ID.

### Return Value

Nonzero if initialization was successful; otherwise 0.

### Remarks

You construct a `CSpinButtonCtrl` object in two steps First, call the constructor, and then call `Create`, which creates the spin button control and attaches it to the `CSpinButtonCtrl` object.

To create a spin button control with extended window styles, call [CSpinButtonCtrl::CreateEx](#createex) instead of `Create`.

## <a name="createex"></a> CSpinButtonCtrl::CreateEx

Creates a control (a child window) and associates it with the `CSpinButtonCtrl` object.

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
Specifies the extended style of the control being created. For a list of extended windows styles, see the *dwExStyle* parameter for [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) in the Windows SDK.

*dwStyle*<br/>
Specifies the spin button control's style. Apply any combination of spin button control styles to the control. These styles are described in [Up-Down Control Styles](/windows/win32/Controls/up-down-control-styles) in the Windows SDK.

*rect*<br/>
A reference to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure describing the size and position of the window to be created, in client coordinates of *pParentWnd*.

*pParentWnd*<br/>
A pointer to the window that is the control's parent.

*nID*<br/>
The control's child-window ID.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

Use `CreateEx` instead of [Create](#create) to apply extended Windows styles, specified by the Windows extended style preface WS_EX_.

## <a name="cspinbuttonctrl"></a> CSpinButtonCtrl::CSpinButtonCtrl

Constructs a `CSpinButtonCtrl` object.

```
CSpinButtonCtrl();
```

## <a name="getaccel"></a> CSpinButtonCtrl::GetAccel

Retrieves acceleration information for a spin button control.

```
UINT GetAccel(
    int nAccel,
    UDACCEL* pAccel) const;
```

### Parameters

*nAccel*<br/>
Number of elements in the array specified by *pAccel*.

*pAccel*<br/>
Pointer to an array of [UDACCEL](/windows/win32/api/commctrl/ns-commctrl-udaccel) structures that receives acceleration information.

### Return Value

Number of accelerator structures retrieved.

## <a name="getbase"></a> CSpinButtonCtrl::GetBase

Retrieves the current base for a spin button control.

```
UINT GetBase() const;
```

### Return Value

The current base value.

## <a name="getbuddy"></a> CSpinButtonCtrl::GetBuddy

Retrieves a pointer to the current buddy window.

```
CWnd* GetBuddy() const;
```

### Return Value

A pointer to the current buddy window.

## <a name="getpos"></a> CSpinButtonCtrl::GetPos

Retrieves the current position of a spin button control.

```
int GetPos() const;  int GetPos32(LPBOOL lpbError = NULL) const;
```

### Parameters

*lpbError*<br/>
A pointer to a boolean value that is set to zero if the value is successfully retrieved or non-zero if an error occurs. If this parameter is set to NULL, errors are not reported.

### Return Value

The first version returns the 16-bit current position in the low-order word. The high-order word is nonzero if an error occurred.

The second version returns the 32-bit position.

### Remarks

When it processes the value returned, the control updates its current position based on the caption of the buddy window. The control returns an error if there is no buddy window or if the caption specifies an invalid or out-of-range value.

## <a name="getrange"></a> CSpinButtonCtrl::GetRange

Retrieves the upper and lower limits (range) for a spin button control.

```
DWORD GetRange() const;

void GetRange(
    int& lower,
    int& upper) const;

void GetRange32(
    int& lower,
    int &upper) const;
```

### Parameters

*lower*<br/>
Reference to an integer that receives the lower limit for the control.

*upper*<br/>
Reference to an integer that receives the upper limit for the control.

### Return Value

The first version returns a 32-bit value containing the upper and lower limits. The low-order word is the upper limit for the control, and the high-order word is the lower limit.

### Remarks

The member function `GetRange32` retrieves the spin button control's range as a 32-bit integer.

## <a name="setaccel"></a> CSpinButtonCtrl::SetAccel

Sets the acceleration for a spin button control.

```
BOOL SetAccel(
    int nAccel,
    UDACCEL* pAccel);
```

### Parameters

*nAccel*<br/>
Number of [UDACCEL](/windows/win32/api/commctrl/ns-commctrl-udaccel) structures specified by *pAccel*.

*pAccel*<br/>
Pointer to an array of UDACCEL structures, which contain acceleration information. Elements should be sorted in ascending order based on the `nSec` member.

### Return Value

Nonzero if successful; otherwise 0.

## <a name="setbase"></a> CSpinButtonCtrl::SetBase

Sets the base for a spin button control.

```
int SetBase(int nBase);
```

### Parameters

*nBase*<br/>
New base value for the control. It can be 10 for decimal or 16 for hexadecimal.

### Return Value

The previous base value if successful, or zero if an invalid base is given.

### Remarks

The base value determines whether the buddy window displays numbers in decimal or hexadecimal digits. Hexadecimal numbers are always unsigned; decimal numbers are signed.

## <a name="setbuddy"></a> CSpinButtonCtrl::SetBuddy

Sets the buddy window for a spin button control.

```
CWnd* SetBuddy(CWnd* pWndBuddy);
```

### Parameters

*pWndBuddy*<br/>
Pointer to the new buddy window.

### Return Value

A pointer to the previous buddy window.

### Remarks

A spin control is almost always associated with another window, such as an edit control, that displays some content. This other window is called the "buddy" of the spin control.

## <a name="setpos"></a> CSpinButtonCtrl::SetPos

Sets the current position for a spin button control.

```
int SetPos(int nPos);
int SetPos32(int nPos);
```

### Parameters

*nPos*<br/>
New position for the control. This value must be in the range specified by the upper and lower limits for the control.

### Return Value

The previous position (16-bit precision for `SetPos`, 32-bit precision for `SetPos32`).

### Remarks

`SetPos32` sets the 32-bit position.

## <a name="setrange"></a> CSpinButtonCtrl::SetRange

Sets the upper and lower limits (range) for a spin button control.

```cpp
void SetRange(
    short nLower,
    short nUpper);

void SetRange32(
    int nLower,
    int nUpper);
```

### Parameters

*nLower* and *nUpper*<br/>
Upper and lower limits for the control. For `SetRange`, neither limit can be greater than UD_MAXVAL or less than UD_MINVAL; in addition, the difference between the two limits cannot exceed UD_MAXVAL. `SetRange32` places no restrictions on the limits; use any integers.

### Remarks

The member function `SetRange32` sets the 32-bit range for the spin button control.

> [!NOTE]
> The default range for the spin button has the maximum set to zero (0) and the minimum set to 100. Because the maximum value is less than the minimum value, clicking the up arrow will decrease the position and clicking the down arrow will increase it. Use `CSpinButtonCtrl::SetRange` to adjust these values.

## See also

[MFC Sample CMNCTRL2](../../overview/visual-cpp-samples.md)<br/>
[CWnd Class](../../mfc/reference/cwnd-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CSliderCtrl Class](../../mfc/reference/csliderctrl-class.md)
