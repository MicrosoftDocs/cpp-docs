---
description: "Learn more about: CIPAddressCtrl Class"
title: "CIPAddressCtrl Class"
ms.date: "11/04/2016"
f1_keywords: ["CIPAddressCtrl", "AFXCMN/CIPAddressCtrl", "AFXCMN/CIPAddressCtrl::CIPAddressCtrl", "AFXCMN/CIPAddressCtrl::ClearAddress", "AFXCMN/CIPAddressCtrl::Create", "AFXCMN/CIPAddressCtrl::CreateEx", "AFXCMN/CIPAddressCtrl::GetAddress", "AFXCMN/CIPAddressCtrl::IsBlank", "AFXCMN/CIPAddressCtrl::SetAddress", "AFXCMN/CIPAddressCtrl::SetFieldFocus", "AFXCMN/CIPAddressCtrl::SetFieldRange"]
helpviewer_keywords: ["CIPAddressCtrl [MFC], CIPAddressCtrl", "CIPAddressCtrl [MFC], ClearAddress", "CIPAddressCtrl [MFC], Create", "CIPAddressCtrl [MFC], CreateEx", "CIPAddressCtrl [MFC], GetAddress", "CIPAddressCtrl [MFC], IsBlank", "CIPAddressCtrl [MFC], SetAddress", "CIPAddressCtrl [MFC], SetFieldFocus", "CIPAddressCtrl [MFC], SetFieldRange"]
ms.assetid: 9764d2f4-cb14-4ba8-b799-7f57a55a47c6
---
# CIPAddressCtrl Class

Provides the functionality of the Windows common IP Address control.

## Syntax

```
class CIPAddressCtrl : public CWnd
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CIPAddressCtrl::CIPAddressCtrl](#cipaddressctrl)|Constructs a `CIPAddressCtrl` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CIPAddressCtrl::ClearAddress](#clearaddress)|Clears the contents of the IP Address Control.|
|[CIPAddressCtrl::Create](#create)|Creates an IP Address Control and attaches it to a `CIPAddressCtrl` object.|
|[CIPAddressCtrl::CreateEx](#createex)|Creates an IP Address control with the specified Windows extended styles and attaches it to a `CIPAddressCtrl` object.|
|[CIPAddressCtrl::GetAddress](#getaddress)|Retrieves the address values for all four fields in the IP Address Control.|
|[CIPAddressCtrl::IsBlank](#isblank)|Determines if all fields in the IP Address Control are empty.|
|[CIPAddressCtrl::SetAddress](#setaddress)|Sets the address values for all four fields in the IP Address Control.|
|[CIPAddressCtrl::SetFieldFocus](#setfieldfocus)|Sets the keyboard focus to the specified field in the IP Address Control.|
|[CIPAddressCtrl::SetFieldRange](#setfieldrange)|Sets the range in the specified field in the IP Address Control.|

## Remarks

An IP Address control, a control similar to an edit control, allows you to enter and manipulate a numerical address in Internet Protocol (IP) format.

This control (and therefore the `CIPAddressCtrl` class) is available only to programs running under Microsoft Internet Explorer 4.0 and later. They will also be available under future versions of Windows and Windows NT.

For more general information about the IP Address Control, see [IP Address Controls](/windows/win32/Controls/ip-address-controls) in the Windows SDK.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CIPAddressCtrl`

## Requirements

**Header:** afxcmn.h

## <a name="cipaddressctrl"></a> CIPAddressCtrl::CIPAddressCtrl

Creates a `CIPAddressCtrl` object.

```
CIPAddressCtrl();
```

## <a name="clearaddress"></a> CIPAddressCtrl::ClearAddress

Clears the contents of the IP Address Control.

```cpp
void ClearAddress();
```

### Remarks

This member function implements the behavior of the Win32 message [IPM_CLEARADDRESS](/windows/win32/Controls/ipm-clearaddress), as described in the Windows SDK.

## <a name="create"></a> CIPAddressCtrl::Create

Creates an IP Address Control and attaches it to a `CIPAddressCtrl` object.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### Parameters

*dwStyle*<br/>
The IP Address control's style. Apply a combination of window styles. You must include the WS_CHILD style because the control must be a child window. See [CreateWindow](/windows/win32/api/winuser/nf-winuser-createwindoww) in the Windows SDK for a list of windows styles.

*rect*<br/>
A reference to the IP Address Control's size and position. It can be either a [CRect](../../atl-mfc-shared/reference/crect-class.md) object or a [RECT](/windows/win32/api/windef/ns-windef-rect) structure.

*pParentWnd*<br/>
A pointer to the IP Address Control's parent window. It must not be NULL.

*nID*<br/>
The IP Address Control's ID.

### Return Value

Nonzero if initialization was successful; otherwise 0.

### Remarks

You construct a `CIPAddressCtrl` object in two steps.

1. Call the constructor, which creates the `CIPAddressCtrl` object.

1. Call `Create`, which creates the IP Address Control.

If you want to use extended windows styles with your control, call [CreateEx](#createex) instead of `Create`.

## <a name="createex"></a> CIPAddressCtrl::CreateEx

Call this function to create a control (a child window) and associate it with the `CIPAddressCtrl` object.

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
The IP Address control's style. Apply a combination of window styles. You must include the WS_CHILD style because the control must be a child window. See [CreateWindow](/windows/win32/api/winuser/nf-winuser-createwindoww) in the Windows SDK for a list of windows styles.

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

## <a name="getaddress"></a> CIPAddressCtrl::GetAddress

Retrieves the address values for all four fields in the IP Address Control.

```
int GetAddress(
    BYTE& nField0,
    BYTE& nField1,
    BYTE& nField2,
    BYTE& nField3);

int GetAddress(DWORD& dwAddress);
```

### Parameters

*nField0*<br/>
A reference to the field 0 value from a packed IP address.

*nField1*<br/>
A reference to the field 1 value from a packed IP address.

*nField2*<br/>
A reference to the field 2 value from a packed IP address.

*nField3*<br/>
A reference to the field 3 value from a packed IP address.

*dwAddress*<br/>
A reference to the address of a DWORD value that receives the IP address. See **Remarks** for a table that shows how *dwAddress* is filled.

### Return Value

The number of non-blank fields in the IP Address Control.

### Remarks

This member function implements the behavior of the Win32 message [IPM_GETADDRESS](/windows/win32/Controls/ipm-getaddress), as described in the Windows SDK. In the first prototype above, the numbers in fields 0 through 3 of the control, read left to right respectively, populate the four parameters. In the second prototype above, *dwAddress* is populated as follows.

|Field|Bits containing the field value|
|-----------|-------------------------------------|
|0|24 through 31|
|1|16 through 23|
|2|8 through 15|
|3|0 through 7|

## <a name="isblank"></a> CIPAddressCtrl::IsBlank

Determines if all fields in the IP Address Control are empty.

```
BOOL IsBlank() const;
```

### Return Value

Nonzero if all of the IP Address Control fields are empty; otherwise 0.

### Remarks

This member function implements the behavior of the Win32 message [IPM_ISBLANK](/windows/win32/Controls/ipm-isblank), as described in the Windows SDK.

## <a name="setaddress"></a> CIPAddressCtrl::SetAddress

Sets the address values for all four fields in the IP Address Control.

```cpp
void SetAddress(
    BYTE nField0,
    BYTE nField1,
    BYTE nField2,
    BYTE nField3);

void SetAddress(DWORD dwAddress);
```

### Parameters

*nField0*<br/>
The field 0 value from a packed IP address.

*nField1*<br/>
The field 1 value from a packed IP address.

*nField2*<br/>
The field 2 value from a packed IP address.

*nField3*<br/>
The field 3 value from a packed IP address.

*dwAddress*<br/>
A DWORD value that contains the new IP address. See **Remarks** for a table that shows how the DWORD value is filled.

### Remarks

This member function implements the behavior of the Win32 message [IPM_SETADDRESS](/windows/win32/Controls/ipm-setaddress), as described in the Windows SDK. In the first prototype above, the numbers in fields 0 through 3 of the control, read left to right respectively, populate the four parameters. In the second prototype above, *dwAddress* is populated as follows.

|Field|Bits containing the field value|
|-----------|-------------------------------------|
|0|24 through 31|
|1|16 through 23|
|2|8 through 15|
|3|0 through 7|

## <a name="setfieldfocus"></a> CIPAddressCtrl::SetFieldFocus

Sets the keyboard focus to the specified field in the IP Address Control.

```cpp
void SetFieldFocus(WORD nField);
```

### Parameters

*nField*<br/>
Zero-based field index to which the focus should be set. If this value is greater than the number of fields, focus is set to the first blank field. If all fields are non-blank, focus is set to the first field.

### Remarks

This member function implements the behavior of the Win32 message [IPM_SETFOCUS](/windows/win32/Controls/ipm-setfocus), as described in the Windows SDK.

## <a name="setfieldrange"></a> CIPAddressCtrl::SetFieldRange

Sets the range in the specified field in the IP Address Control.

```cpp
void SetFieldRange(
    int nField,
    BYTE nLower,
    BYTE nUpper);
```

### Parameters

*nField*<br/>
Zero-based field index to which the range will be applied.

*nLower*<br/>
A reference to an integer receiving the lower limit of the specified field in this IP Address Control.

*nUpper*<br/>
A reference to an integer receiving the upper limit of the specified field in this IP Address Control.

### Remarks

This member function implements the behavior of the Win32 message [IPM_SETRANGE](/windows/win32/Controls/ipm-setrange), as described in the Windows SDK. Use the two parameters, *nLower* and *nUpper*, to indicate the lower and upper limits of the field, instead of the *wRange* parameter used with the Win32 message.

## See also

[CWnd Class](../../mfc/reference/cwnd-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)
