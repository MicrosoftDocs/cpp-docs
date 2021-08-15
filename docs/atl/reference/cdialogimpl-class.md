---
description: "Learn more about: CDialogImpl Class"
title: "CDialogImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["CDialogImpl", "ATLWIN/ATL::CDialogImpl", "ATLWIN/ATL::Create", "ATLWIN/ATL::DestroyWindow", "ATLWIN/ATL::DoModal", "ATLWIN/ATL::EndDialog", "ATLWIN/ATL::GetDialogProc", "ATLWIN/ATL::MapDialogRect", "ATLWIN/ATL::OnFinalMessage", "ATLWIN/ATL::DialogProc", "ATLWIN/ATL::StartDialogProc"]
helpviewer_keywords: ["dialog boxes, ATL", "CDialogImpl class"]
ms.assetid: d430bc7b-8a28-4ad3-9507-277bdd2c2c2e
---
# CDialogImpl Class

This class provides methods for creating a modal or modeless dialog box.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template <class T,
    class TBase = CWindow>
    class ATL_NO_VTABLE CDialogImpl : public CDialogImplBaseT<TBase>
```

#### Parameters

*T*<br/>
Your class, derived from `CDialogImpl`.

*TBase*<br/>
The base class of your new class. The default base class is [CWindow](../../atl/reference/cwindow-class.md).

## Members

### Methods

|Function|Description|
|-|-|
|[Create](#create)|Creates a modeless dialog box.|
|[DestroyWindow](#destroywindow)|Destroys a modeless dialog box.|
|[DoModal](#domodal)|Creates a modal dialog box.|
|[EndDialog](#enddialog)|Destroys a modal dialog box.|

### CDialogImplBaseT Methods

|Function|Description|
|-|-|
|[GetDialogProc](#getdialogproc)|Returns the current dialog box procedure.|
|[MapDialogRect](#mapdialogrect)|Maps the dialog-box units of the specified rectangle to screen units (pixels).|
|[OnFinalMessage](#onfinalmessage)|Called after receiving the last message, typically WM_NCDESTROY.|

### Static Functions

|Function|Description|
|-|-|
|[DialogProc](#dialogproc)|Processes messages sent to the dialog box.|
|[StartDialogProc](#startdialogproc)|Called when the first message is received to process messages sent to the dialog box.|

## Remarks

With `CDialogImpl` you can create a modal or modeless dialog box. `CDialogImpl` provides the dialog box procedure, which uses the default message map to direct messages to the appropriate handlers.

The base class destructor `~CWindowImplRoot` ensures that the window is gone before destroying the object.

`CDialogImpl` derives from `CDialogImplBaseT`, which in turn derives from `CWindowImplRoot`.

> [!NOTE]
> Your class must define an `IDD` member that specifies the dialog template resource ID. For example, the ATL Project Wizard automatically adds the following line to your class:

[!code-cpp[NVC_ATL_Windowing#41](../../atl/codesnippet/cpp/cdialogimpl-class_1.h)]

where `MyDlg` is the **Short name** entered in the wizard's **Names** page.

|For more information about|See|
|--------------------------------|---------|
|Creating controls|[ATL Tutorial](../../atl/active-template-library-atl-tutorial.md)|
|Using dialog boxes in ATL|[ATL Window Classes](../../atl/atl-window-classes.md)|
|ATL Project Wizard|[Creating an ATL Project](../../atl/reference/creating-an-atl-project.md)|
|Dialog boxes|[Dialog Boxes](/windows/win32/dlgbox/dialog-boxes) and subsequent topics in the Windows SDK|

## Requirements

**Header:** atlwin.h

## <a name="create"></a> CDialogImpl::Create

Creates a modeless dialog box.

```
HWND Create(
    HWND hWndParent,
    LPARAM dwInitParam = NULL );

HWND Create(
    HWND hWndParent,
    RECT&,
    LPARAM dwInitParam = NULL);
```

### Parameters

*hWndParent*<br/>
[in] The handle to the owner window.

**RECT&** *rect*
[in] A [RECT](/windows/win32/api/windef/ns-windef-rect) structure specifying the dialog's size and position.

*dwInitParam*<br/>
[in] Specifies the value to pass to the dialog box in the *lParam* parameter of the WM_INITDIALOG message.

### Return Value

The handle to the newly created dialog box.

### Remarks

This dialog box is automatically attached to the `CDialogImpl` object. To create a modal dialog box, call [DoModal](#domodal). The second override above is used only with [CComControl](../../atl/reference/ccomcontrol-class.md).

## <a name="destroywindow"></a> CDialogImpl::DestroyWindow

Destroys a modeless dialog box.

```
BOOL DestroyWindow();
```

### Return Value

TRUE if the dialog box was successfully destroyed; otherwise FALSE.

### Remarks

Returns TRUE if the dialog box was successfully destroyed; otherwise FALSE.

## <a name="dialogproc"></a> CDialogImpl::DialogProc

This static function implements the dialog box procedure.

```
static LRESULT CALLBACK DialogProc(
    HWND hWnd,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);
```

### Parameters

*hWnd*<br/>
[in] The handle to the dialog box.

*uMsg*<br/>
[in] The message sent to the dialog box.

*wParam*<br/>
[in] Additional message-specific information.

*lParam*<br/>
[in] Additional message-specific information.

### Return Value

TRUE if the message is processed; otherwise, FALSE.

### Remarks

`DialogProc` uses the default message map to direct messages to the appropriate handlers.

You can override `DialogProc` to provide a different mechanism for handling messages.

## <a name="domodal"></a> CDialogImpl::DoModal

Creates a modal dialog box.

```
INT_PTR DoModal(
    HWND hWndParent = ::GetActiveWindow(),
    LPARAM dwInitParam = NULL);
```

### Parameters

*hWndParent*<br/>
[in] The handle to the owner window. The default value is the return value of the [GetActiveWindow](/windows/win32/api/winuser/nf-winuser-getactivewindow) Win32 function.

*dwInitParam*<br/>
[in] Specifies the value to pass to the dialog box in the *lParam* parameter of the WM_INITDIALOG message.

### Return Value

If successful, the value of the *nRetCode* parameter specified in the call to [EndDialog](#enddialog). Otherwise, -1.

### Remarks

This dialog box is automatically attached to the `CDialogImpl` object.

To create a modeless dialog box, call [Create](#create).

## <a name="enddialog"></a> CDialogImpl::EndDialog

Destroys a modal dialog box.

```
BOOL EndDialog(int nRetCode);
```

### Parameters

*nRetCode*<br/>
[in] The value to be returned by [CDialogImpl::DoModal](#domodal).

### Return Value

TRUE if the dialog box is destroyed; otherwise, FALSE.

### Remarks

`EndDialog` must be called through the dialog procedure. After the dialog box is destroyed, Windows uses the value of *nRetCode* as the return value for `DoModal`, which created the dialog box.

> [!NOTE]
> Do not call `EndDialog` to destroy a modeless dialog box. Call [CWindow::DestroyWindow](../../atl/reference/cwindow-class.md#destroywindow) instead.

## <a name="getdialogproc"></a> CDialogImpl::GetDialogProc

Returns `DialogProc`, the current dialog box procedure.

```
virtual WNDPROC GetDialogProc();
```

### Return Value

The current dialog box procedure.

### Remarks

Override this method to replace the dialog procedure with your own.

## <a name="mapdialogrect"></a> CDialogImpl::MapDialogRect

Converts (maps) the dialog-box units of the specified rectangle to screen units (pixels).

```
BOOL MapDialogRect(LPRECT lpRect);
```

### Parameters

*lpRect*<br/>
Points to a `CRect` object or [RECT](/windows/win32/api/windef/ns-windef-rect) structure that is to receive the client coordinates of the update that encloses the update region.

### Return Value

Nonzero if the update succeeds; 0 if the update fails. To get extended error information, call `GetLastError`.

### Remarks

The function replaces the coordinates in the specified `RECT` structure with the converted coordinates, which allows the structure to be used to create a dialog box or position a control within a dialog box.

## <a name="onfinalmessage"></a> CDialogImpl::OnFinalMessage

Called after receiving the last message (typically `WM_NCDESTROY`).

```
virtual void OnFinalMessage(HWND hWnd);
```

### Parameters

*hWnd*<br/>
[in] A handle to the window being destroyed.

### Remarks

Note that if you want to automatically delete your object upon the window destruction, you can call **delete this;** here.

## <a name="startdialogproc"></a> CDialogImpl::StartDialogProc

Called only once, when the first message is received, to process messages sent to the dialog box.

```
static LRESULT CALLBACK StartDialogProc(
    HWND hWnd,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);
```

### Parameters

*hWnd*<br/>
[in] The handle to the dialog box.

*uMsg*<br/>
[in] The message sent to the dialog box.

*wParam*<br/>
[in] Additional message-specific information.

*lParam*<br/>
[in] Additional message-specific information.

### Return Value

The window procedure.

### Remarks

After the initial call to `StartDialogProc`, `DialogProc` is set as a dialog procedure, and further calls go there.

## See also

[BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map)<br/>
[Class Overview](../../atl/atl-class-overview.md)
