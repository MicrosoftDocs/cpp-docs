---
description: "Learn more about: CAxDialogImpl Class"
title: "CAxDialogImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["CAxDialogImpl", "ATLWIN/ATL::CAxDialogImpl", "ATLWIN/ATL::CAxDialogImpl::AdviseSinkMap", "ATLWIN/ATL::CAxDialogImpl::Create", "ATLWIN/ATL::CAxDialogImpl::DestroyWindow", "ATLWIN/ATL::CAxDialogImpl::DoModal", "ATLWIN/ATL::CAxDialogImpl::EndDialog", "ATLWIN/ATL::CAxDialogImpl::GetDialogProc", "ATLWIN/ATL::CAxDialogImpl::GetIDD", "ATLWIN/ATL::CAxDialogImpl::IsDialogMessage", "ATLWIN/ATL::CAxDialogImpl::m_bModal"]
helpviewer_keywords: ["CAxDialogImpl class", "ATL, dialog boxes"]
ms.assetid: 817df483-3fa8-44e7-8487-72ba0881cd27
---
# CAxDialogImpl Class

This class implements a dialog box (modal or modeless) that hosts ActiveX controls.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template <class T, class TBase = CWindow>
class ATL_NO_VTABLE CAxDialogImpl : public CDialogImplBaseT<TBase>
```

#### Parameters

*T*<br/>
Your class, derived from `CAxDialogImpl`.

*TBase*<br/>
The base window class for `CDialogImplBaseT`.

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CAxDialogImpl::AdviseSinkMap](#advisesinkmap)|Call this method to advise or unadvise all entries in the object's sink map event map.|
|[CAxDialogImpl::Create](#create)|Call this method to create a modeless dialog box.|
|[CAxDialogImpl::DestroyWindow](#destroywindow)|Call this method to destroy a modeless dialog box.|
|[CAxDialogImpl::DoModal](#domodal)|Call this method to create a modal dialog box.|
|[CAxDialogImpl::EndDialog](#enddialog)|Call this method to destroy a modal dialog box.|
|[CAxDialogImpl::GetDialogProc](#getdialogproc)|Call this method to get a pointer to the `DialogProc` callback function.|
|[CAxDialogImpl::GetIDD](#getidd)|Call this method to get the dialog template resource ID|
|[CAxDialogImpl::IsDialogMessage](#isdialogmessage)|Call this method to determine whether a message is intended for this dialog box and, if it is, process the message.|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[CAxDialogImpl::m_bModal](#m_bmodal)|A variable that exists only in debug builds and is set to true if the dialog box is modal.|

## Remarks

`CAxDialogImpl` allows you to create a modal or modeless dialog box. `CAxDialogImpl` provides the dialog box procedure, which uses the default message map to direct messages to the appropriate handlers.

`CAxDialogImpl` derives from `CDialogImplBaseT`, which in turn derives from *TBase* (by default, `CWindow`) and `CMessageMap`.

Your class must define an IDD member that specifies the dialog template resource ID. For example, adding an ATL Dialog object using the **Add Class** dialog box automatically adds the following line to your class:

[!code-cpp[NVC_ATL_Windowing#41](../../atl/codesnippet/cpp/caxdialogimpl-class_1.h)]

where `MyDialog` is the **Short name** entered in the ATL Dialog Wizard.

See [Implementing a Dialog Box](../../atl/implementing-a-dialog-box.md) for more information.

Note that an ActiveX control on a modal dialog box created with `CAxDialogImpl` will not support accelerator keys. To support accelerator keys on a dialog box created with `CAxDialogImpl`, create a modeless dialog box and, using your own message loop, use [CAxDialogImpl::IsDialogMessage](#isdialogmessage) after getting a message from the queue to handle an accelerator key.

For more information on `CAxDialogImpl`, see [ATL Control Containment FAQ](../../atl/atl-control-containment-faq.md).

## Inheritance Hierarchy

[CMessageMap](../../atl/reference/cmessagemap-class.md)

`TBase`

`CWindowImplRoot`

`CDialogImplBaseT`

`CAxDialogImpl`

## Requirements

**Header:** atlwin.h

## <a name="advisesinkmap"></a> CAxDialogImpl::AdviseSinkMap

Call this method to advise or unadvise all entries in the object's sink map event map.

```
HRESULT AdviseSinkMap(bool bAdvise);
```

### Parameters

*bAdvise*<br/>
Set to true if all sink entries are to be advised; false if all sink entries are to be unadvised.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="create"></a> CAxDialogImpl::Create

Call this method to create a modeless dialog box.

```
HWND Create(HWND hWndParent, LPARAM dwInitParam = NULL);
HWND Create(HWND hWndParent, RECT&, LPARAM dwInitParam = NULL);
```

### Parameters

*hWndParent*<br/>
[in] The handle to the owner window.

*dwInitParam*<br/>
[in] Specifies the value to pass to the dialog box in the *lParam* parameter of the WM_INITDIALOG message.

*RECT&*<br/>
This parameter is not used. This parameter is passed in by `CComControl`.

### Return Value

The handle to the newly created dialog box.

### Remarks

This dialog box is automatically attached to the `CAxDialogImpl` object. To create a modal dialog box, call [DoModal](#domodal).

The second override is provided only so dialog boxes can be used with [CComControl](../../atl/reference/ccomcontrol-class.md).

## <a name="destroywindow"></a> CAxDialogImpl::DestroyWindow

Call this method to destroy a modeless dialog box.

```
BOOL DestroyWindow();
```

### Return Value

TRUE if the window is successfully destroyed; otherwise FALSE.

### Remarks

Do not call `DestroyWindow` to destroy a modal dialog box. Call [EndDialog](#enddialog) instead.

## <a name="domodal"></a> CAxDialogImpl::DoModal

Call this method to create a modal dialog box.

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

If successful, the value of the *nRetCode* parameter specified in the call to [EndDialog](#enddialog); otherwise, -1.

### Remarks

This dialog box is automatically attached to the `CAxDialogImpl` object.

To create a modeless dialog box, call [Create](#create).

## <a name="enddialog"></a> CAxDialogImpl::EndDialog

Call this method to destroy a modal dialog box.

```
BOOL EndDialog(int nRetCode);
```

### Parameters

*nRetCode*<br/>
[in] The value to be returned by [DoModal](#domodal).

### Return Value

TRUE if the dialog box is destroyed; otherwise, FALSE.

### Remarks

`EndDialog` must be called through the dialog box procedure. After the dialog box is destroyed, Windows uses the value of *nRetCode* as the return value for `DoModal`, which created the dialog box.

> [!NOTE]
> Do not call `EndDialog` to destroy a modeless dialog box. Call [DestroyWindow](#destroywindow) instead.

## <a name="getdialogproc"></a> CAxDialogImpl::GetDialogProc

Call this method to get a pointer to the `DialogProc` callback function.

```
virtual DLGPROC GetDialogProc();
```

### Return Value

Returns a pointer to the `DialogProc` callback function.

### Remarks

The `DialogProc` function is an application-defined callback function.

## <a name="getidd"></a> CAxDialogImpl::GetIDD

Call this method to get the dialog template resource ID.

```
int GetIDD();
```

### Return Value

Returns the dialog template resource ID.

## <a name="isdialogmessage"></a> CAxDialogImpl::IsDialogMessage

Call this method to determine whether a message is intended for this dialog box and, if it is, process the message.

```
BOOL IsDialogMessage(LPMSG pMsg);
```

### Parameters

*pMsg*<br/>
Pointer to a [MSG](/windows/win32/api/winuser/ns-winuser-msg) structure that contains the message to be checked.

### Return Value

Returns TRUE if the message has been processed, FALSE otherwise.

### Remarks

This method is intended to be called from within a message loop.

## <a name="m_bmodal"></a> CAxDialogImpl::m_bModal

A variable that exists only in debug builds and is set to true if the dialog box is modal.

```
bool m_bModal;
```

## See also

[CDialogImpl Class](../../atl/reference/cdialogimpl-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
