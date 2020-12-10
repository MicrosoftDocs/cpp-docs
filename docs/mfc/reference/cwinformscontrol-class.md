---
description: "Learn more about: CWinFormsControl Class"
title: "CWinFormsControl Class"
ms.date: "11/04/2016"
f1_keywords: ["CWinFormsControl", "AFXWINFORMS/CWinFormsControl", "AFXWINFORMS/CWinFormsControl::CWinFormsControl", "AFXWINFORMS/CWinFormsControl::CreateManagedControl", "AFXWINFORMS/CWinFormsControl::GetControl", "AFXWINFORMS/CWinFormsControl::GetControlHandle"]
helpviewer_keywords: ["CWinFormsControl [MFC], CWinFormsControl", "CWinFormsControl [MFC], CreateManagedControl", "CWinFormsControl [MFC], GetControl", "CWinFormsControl [MFC], GetControlHandle"]
ms.assetid: 6406dd7b-fb89-4a18-ac3a-c010d6b6289a
---
# CWinFormsControl Class

Provides the basic functionality for hosting of a Windows Forms control.

## Syntax

```
template<class TManagedControl>
class CWinFormsControl : public CWnd
```

#### Parameters

*TManagedControl*<br/>
A .NET Framework Windows Forms control to be displayed in the MFC application.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CWinFormsControl::CWinFormsControl](#cwinformscontrol)|Constructs an MFC Windows Forms control wrapper object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CWinFormsControl::CreateManagedControl](#createmanagedcontrol)|Creates a Windows Forms control in an MFC container.|
|[CWinFormsControl::GetControl](#getcontrol)|Retrieves a pointer to the Windows Forms control.|
|[CWinFormsControl::GetControlHandle](#getcontrolhandle)|Retrieves a handle to the Windows Forms control.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CWinFormsControl::operator -&gt;](#operator_-_gt)|Replaces [CWinFormsControl::GetControl](#getcontrol) in expressions.|
|[CWinFormsControl::operator TManagedControl^](#operator_tmanagedcontrol)|Casts a type as a pointer to a Windows Forms control.|

## Remarks

The `CWinFormsControl` class provides the basic functionality for hosting of a Windows Forms control.

For more information on using Windows Forms, see [Using a Windows Form User Control in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

Your MFC code should not cache Window handles (usually stored in `m_hWnd`). Some Windows Forms control properties require that the underlying Win32 `Window` be destroyed and recreated using `DestroyWindow` and `CreateWindow`. The MFC Windows Forms implementation handles the `Destroy` and `Create` events of the controls to update the `m_hWnd` member.

> [!NOTE]
> MFC Windows Forms integration works only in projects which link dynamically with MFC (in which AFXDLL is defined).

## Requirements

**Header:** afxwinforms.h

## <a name="createmanagedcontrol"></a> CWinFormsControl::CreateManagedControl

Creates a Windows Forms control in an MFC container.

```
inline BOOL CreateManagedControl(
    System::Type^ pType,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    int nID)
inline BOOL CreateManagedControl(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    int nID);

inline BOOL CreateManagedControl(
    DWORD dwStyle,
    int nPlaceHolderID,
    CWnd* pParentWnd);

inline BOOL CreateManagedControl(
    typename TManagedControl^ pControl,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    int nID);
```

### Parameters

*pType*<br/>
The data type of the control to be created. Must be a [Type](/dotnet/api/system.type) data type.

*dwStyle*<br/>
The window style to apply to the control. Specify a combination of [Window Styles](../../mfc/reference/styles-used-by-mfc.md#window-styles). Currently, only the following styles are supported: WS_TABSTOP, WS_VISIBLE, WS_DISABLED and WS_GROUP.

*rect*<br/>
A [RECT Structure](/windows/win32/api/windef/ns-windef-rect) that defines the coordinates of the upper-left and lower-right corners of the control (first overload only).

*nPlaceHolderID*<br/>
The handle of the static place holder control placed in the Resource Editor. The newly created Windows Forms control replaces the static control, assuming its position, z-order, and styles (second overload only).

*pParentWnd*<br/>
A pointer to the parent window.

*nID*<br/>
The resource ID number to be assigned to the newly created control.

*pControl*<br/>
An instance of a Windows Forms control to be associated with the [CWinFormsControl](../../mfc/reference/cwinformscontrol-class.md) object (fourth overload only).

### Return Value

If successful, returns a nonzero value. If unsuccessful, returns zero.

### Remarks

This method instantiates a .NET Framework Windows Forms control in an MFC container.

The first overload of the method accepts a .NET Framework data type *pType* so that MFC can instantiate a new object of this type. *pType* must be a [Type](/dotnet/api/system.type) data type.

The second overload of the method creates a Windows Forms control based on the `TManagedControl` template parameter of the `CWinFormsControl` class. The size and position of the control is based on the `RECT` structure passed to the method. Only *dwStyle* matters for the styles.

The third overload of the method creates a Windows Forms control that replaces a static control, destroying it and assuming its position, z-order, and styles. The static control serves only as a placeholder for the Windows Forms control. When creating the control, this overload combines the styles from *dwStyle* with the static control's resource styles.

The fourth overload of the method allows you to pass in an already instantiated Windows Forms control *pControl* that MFC will wrap. It must be of the same type as the `TManagedControl` template parameter of the `CWinFormsControl` class.

See [Using a Windows Form User Control in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md) for samples on using Windows Form controls.

## <a name="cwinformscontrol"></a> CWinFormsControl::CWinFormsControl

Constructs an MFC Windows Forms control wrapper object.

```
CWinFormsControl();
```

### Remarks

The Windows Forms control is instantiated when you call [CWinFormsControl::CreateManagedControl](#createmanagedcontrol).

## <a name="getcontrol"></a> CWinFormsControl::GetControl

Retrieves a pointer to the Windows Forms control.

```
inline TManagedControl^ GetControl() const;
```

### Return Value

Returns a pointer to the Windows Forms control.

### Example

  See [CWinFormsControl::CreateManagedControl](#createmanagedcontrol).

## <a name="getcontrolhandle"></a> CWinFormsControl::GetControlHandle

Retrieves a handle to the Windows Forms control.

```
inline HWND GetControlHandle() const;
```

### Return Value

Returns a handle to the Windows Forms control.

### Remarks

`GetControlHandle` is a helper method that returns the window handle stored in the .NET Framework control properties. The window handle value is copied to [CWnd::m_hWnd](../../mfc/reference/cwnd-class.md#m_hwnd) during the call to [CWnd::Attach](../../mfc/reference/cwnd-class.md#attach).

## <a name="operator_-_gt"></a> CWinFormsControl::operator -&gt;

Replaces [CWinFormsControl::GetControl](#getcontrol) in expressions.

```
inline TManagedControl^  operator->() const;
```

### Remarks

This operator provides a convenient syntax that replaces `GetControl` in expressions.

For more information on Windows Forms, see [Using a Windows Form User Control in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

## <a name="operator_tmanagedcontrol"></a> CWinFormsControl::operator TManagedControl^

Casts a type as a pointer to a Windows Forms control.

```
inline operator TManagedControl^() const;
```

### Remarks

This operator passes `CWinFormsControl<TManagedControl>` to functions that accept a pointer to a Windows Forms control.

## See also

[CWinFormsDialog Class](../../mfc/reference/cwinformsdialog-class.md)<br/>
[CWinFormsView Class](../../mfc/reference/cwinformsview-class.md)
