---
description: "Learn more about: CHotKeyCtrl Class"
title: "CHotKeyCtrl Class"
ms.date: "11/04/2016"
f1_keywords: ["CHotKeyCtrl", "AFXCMN/CHotKeyCtrl", "AFXCMN/CHotKeyCtrl::CHotKeyCtrl", "AFXCMN/CHotKeyCtrl::Create", "AFXCMN/CHotKeyCtrl::CreateEx", "AFXCMN/CHotKeyCtrl::GetHotKey", "AFXCMN/CHotKeyCtrl::GetHotKeyName", "AFXCMN/CHotKeyCtrl::GetKeyName", "AFXCMN/CHotKeyCtrl::SetHotKey", "AFXCMN/CHotKeyCtrl::SetRules"]
helpviewer_keywords: ["CHotKeyCtrl [MFC], CHotKeyCtrl", "CHotKeyCtrl [MFC], Create", "CHotKeyCtrl [MFC], CreateEx", "CHotKeyCtrl [MFC], GetHotKey", "CHotKeyCtrl [MFC], GetHotKeyName", "CHotKeyCtrl [MFC], GetKeyName", "CHotKeyCtrl [MFC], SetHotKey", "CHotKeyCtrl [MFC], SetRules"]
ms.assetid: 896f9766-0718-4f58-aab2-20325e118ca6
---
# CHotKeyCtrl Class

Provides the functionality of the Windows common hot key control.

## Syntax

```
class CHotKeyCtrl : public CWnd
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CHotKeyCtrl::CHotKeyCtrl](#chotkeyctrl)|Constructs a `CHotKeyCtrl` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CHotKeyCtrl::Create](#create)|Creates a hot key control and attaches it to a `CHotKeyCtrl` object.|
|[CHotKeyCtrl::CreateEx](#createex)|Creates a hot key control with the specified Windows extended styles and attaches it to a `CHotKeyCtrl` object.|
|[CHotKeyCtrl::GetHotKey](#gethotkey)|Retrieves the virtual key code and modifier flags of a hot key from a hot key control.|
|[CHotKeyCtrl::GetHotKeyName](#gethotkeyname)|Retrieves the key name, in the local character set, assigned to a hot key.|
|[CHotKeyCtrl::GetKeyName](#getkeyname)|Retrieves the key name, in the local character set, assigned to the specified virtual key code.|
|[CHotKeyCtrl::SetHotKey](#sethotkey)|Sets the hot key combination for a hot key control.|
|[CHotKeyCtrl::SetRules](#setrules)|Defines the invalid combinations and the default modifier combination for a hot key control.|

## Remarks

A "hot key control" is a window that enables the user to create a hot key. A "hot key" is a key combination that the user can press to perform an action quickly. (For example, a user can create a hot key that activates a given window and brings it to the top of the Z order.) The hot key control displays the user's choices and ensures that the user selects a valid key combination.

This control (and therefore the `CHotKeyCtrl` class) is available only to programs running under Windows 95/98 and Windows NT version 3.51 and later.

When the user has chosen a key combination, the application can retrieve the specified key combination from the control and use the WM_SETHOTKEY message to set up the hot key in the system. Whenever the user presses the hot key thereafter, from any part of the system, the window specified in the WM_SETHOTKEY message receives a WM_SYSCOMMAND message specifying SC_HOTKEY. This message activates the window that receives it. The hot key remains valid until the application that called WM_SETHOTKEY exits.

This mechanism is different from the hot key support that depends on the WM_HOTKEY message and the Windows [RegisterHotKey](/windows/win32/api/winuser/nf-winuser-registerhotkey) and [UnregisterHotKey](/windows/win32/api/winuser/nf-winuser-unregisterhotkey) functions.

For more information on using `CHotKeyCtrl`, see [Controls](../../mfc/controls-mfc.md) and [Using CHotKeyCtrl](../../mfc/using-chotkeyctrl.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CHotKeyCtrl`

## Requirements

**Header:** afxcmn.h

## <a name="chotkeyctrl"></a> CHotKeyCtrl::CHotKeyCtrl

Constructs a `CHotKeyCtrl` object.

```
CHotKeyCtrl();
```

## <a name="create"></a> CHotKeyCtrl::Create

Creates a hot key control and attaches it to a `CHotKeyCtrl` object.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### Parameters

*dwStyle*<br/>
Specifies the hot key control's style. Apply any combination of control styles. See [Common Control Styles](/windows/win32/Controls/common-control-styles) in the Windows SDK for more information.

*rect*<br/>
Specifies the hot key control's size and position. It can be either a [CRect](../../atl-mfc-shared/reference/crect-class.md) object or a [RECT structure](/windows/win32/api/windef/ns-windef-rect).

*pParentWnd*<br/>
Specifies the hot key control's parent window, usually a [CDialog](../../mfc/reference/cdialog-class.md). It must not be NULL.

*nID*<br/>
Specifies the hot key control's ID.

### Return Value

Nonzero, if initialization was successful; otherwise 0.

### Remarks

You construct a `CHotKeyCtrl` object in two steps. First, call the constructor and then call `Create`, which creates the hot key control and attaches it to the `CHotKeyCtrl` object.

If you want to use extended windows styles with your control, call [CreateEx](#createex) instead of `Create`.

## <a name="createex"></a> CHotKeyCtrl::CreateEx

Call this function to create a control (a child window) and associate it with the `CHotKeyCtrl` object.

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
Specifies the hot key control's style. Apply any combination of control styles. For more information, see [Common Control Styles](/windows/win32/Controls/common-control-styles) in the Windows SDK.

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

## <a name="gethotkey"></a> CHotKeyCtrl::GetHotKey

Retrieves the virtual key code and modifier flags of a keyboard shortcut from a hot key control.

```
DWORD GetHotKey() const;

void GetHotKey(
    WORD& wVirtualKeyCode,
    WORD& wModifiers) const;
```

### Parameters

*wVirtualKeyCode*<br/>
[out] Virtual key code of the keyboard shortcut. For a list of standard virtual key codes, see Winuser.h.

*wModifiers*<br/>
[out] A bitwise combination (OR) of flags that indicate the modifier keys in the keyboard shortcut.

The modifier flags are as follows:

|Flag|Corresponding Key|
|----------|-----------------------|
|HOTKEYF_ALT|ALT key|
|HOTKEYF_CONTROL|CTRL key|
|HOTKEYF_EXT|Extended key|
|HOTKEYF_SHIFT|SHIFT key|

### Return Value

In the first overloaded method, a DWORD that contains the virtual key code and modifier flags. The low-order byte of the low-order word contains the virtual key code, the high-order byte of the low-order word contains the modifier flags, and the high-order word is zero.

### Remarks

The virtual key code and the modifier keys together define the keyboard shortcut.

## <a name="gethotkeyname"></a> CHotKeyCtrl::GetHotKeyName

Call this member function to get the localized name of the hot key.

```
CString GetHotKeyName() const;
```

### Return Value

The localized name of the currently selected hot key. If there is no selected hot key, `GetHotKeyName` returns an empty string.

### Remarks

The name that this member function returns comes from the keyboard driver. You can install a non-localized keyboard driver in a localized version of Windows, and vice versa.

## <a name="getkeyname"></a> CHotKeyCtrl::GetKeyName

Call this member function to get the localized name of the key assigned to a specified virtual key code.

```
static CString GetKeyName(
    UINT vk,
    BOOL fExtended);
```

### Parameters

*vk*<br/>
The virtual key code.

*fExtended*<br/>
If the virtual key code is an extended key, TRUE; otherwise FALSE.

### Return Value

The localized name of the key specified by the *vk* parameter. If the key has no mapped name, `GetKeyName` returns an empty string.

### Remarks

The key name that this function returns comes from the keyboard driver, so you can install a non-localized keyboard driver in a localized version of Windows, and vice versa.

### Example

[!code-cpp[NVC_MFCControlLadenDialog#69](../../mfc/codesnippet/cpp/chotkeyctrl-class_1.cpp)]

## <a name="sethotkey"></a> CHotKeyCtrl::SetHotKey

Sets the keyboard shortcut for a hot key control.

```cpp
void SetHotKey(
    WORD wVirtualKeyCode,
    WORD wModifiers);
```

### Parameters

*wVirtualKeyCode*<br/>
[in] Virtual key code of the keyboard shortcut. For a list of standard virtual key codes, see Winuser.h.

*wModifiers*<br/>
[in] A bitwise combination (OR) of flags that indicate the modifier keys in the keyboard shortcut.

The modifier flags are as follows:

|Flag|Corresponding Key|
|----------|-----------------------|
|HOTKEYF_ALT|ALT key|
|HOTKEYF_CONTROL|CTRL key|
|HOTKEYF_EXT|Extended key|
|HOTKEYF_SHIFT|SHIFT key|

### Remarks

The virtual key code and the modifier keys together define the keyboard shortcut.

## <a name="setrules"></a> CHotKeyCtrl::SetRules

Call this function to define the invalid combinations and the default modifier combination for a hot key control.

```cpp
void SetRules(
    WORD wInvalidComb,
    WORD wModifiers);
```

### Parameters

*wInvalidComb*<br/>
Array of flags that specifies invalid key combinations. It can be a combination of the following values:

- HKCOMB_A ALT

- HKCOMB_C CTRL

- HKCOMB_CA CTRL+ALT

- HKCOMB_NONE Unmodified keys

- HKCOMB_S SHIFT

- HKCOMB_SA SHIFT+ALT

- HKCOMB_SC SHIFT+CTRL

- HKCOMB_SCA SHIFT+CTRL+ALT

*wModifiers*<br/>
Array of flags that specifies the key combination to use when the user enters an invalid combination. For more information on the modifier flags, see [GetHotKey](#gethotkey).

### Remarks

When a user enters an invalid key combination, as defined by flags specified in *wInvalidComb*, the system uses the OR operator to combine the keys entered by the user with the flags specified in *wModifiers*. The resulting key combination is converted into a string and then displayed in the hot key control.

## See also

[CWnd Class](../../mfc/reference/cwnd-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)
