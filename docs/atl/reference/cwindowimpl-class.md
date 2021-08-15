---
description: "Learn more about: CWindowImpl Class"
title: "CWindowImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["CWindowImpl", "ATLWIN/ATL::CWindowImpl", "ATLWIN/ATL::CWindowImpl::Create", "ATLWIN/ATL::CWindowImpl::DefWindowProc", "ATLWIN/ATL::CWindowImpl::GetCurrentMessage", "ATLWIN/ATL::CWindowImpl::GetWindowProc", "ATLWIN/ATL::CWindowImpl::OnFinalMessage", "ATLWIN/ATL::CWindowImpl::SubclassWindow", "ATLWIN/ATL::CWindowImpl::UnsubclassWindow", "ATLWIN/ATL::CWindowImpl::GetWndClassInfo", "ATLWIN/ATL::CWindowImpl::WindowProc", "ATLWIN/ATL::CWindowImpl::m_pfnSuperWindowProc"]
helpviewer_keywords: ["CWindowImpl class", "subclassing windows, ATL"]
ms.assetid: 02eefd45-a0a6-4d1b-99f6-dbf627e2cc2f
---
# CWindowImpl Class

Provides methods for creating or subclassing a window.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template <class T, class TBase = CWindow, class TWinTraits = CControlWinTraits>
class ATL_NO_VTABLE CWindowImpl : public CWindowImplBaseT<TBase, TWinTraits>
```

#### Parameters

*T*<br/>
Your new class, derived from `CWindowImpl`.

*TBase*<br/>
The base class of your class. By default, the base class is [CWindow](../../atl/reference/cwindow-class.md).

*TWinTraits*<br/>
A [traits class](../../atl/understanding-window-traits.md) that defines styles for your window. The default is `CControlWinTraits`.

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CWindowImpl::Create](#create)|Creates a window.|

### CWindowImplBaseT Methods

|Name|Description|
|-|-|
|[DefWindowProc](#defwindowproc)|Provides default message processing.|
|[GetCurrentMessage](#getcurrentmessage)|Returns the current message.|
|[GetWindowProc](#getwindowproc)|Returns the current window procedure.|
|[OnFinalMessage](#onfinalmessage)|Called after the last message is received (typically WM_NCDESTROY).|
|[SubclassWindow](#subclasswindow)|Subclasses a window.|
|[UnsubclassWindow](#unsubclasswindow)|Restores a previously subclassed window.|

### Static Methods

|Name|Description|
|-|-|
|[GetWndClassInfo](#getwndclassinfo)|Returns a static instance of [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md), which manages the window class information.|
|[WindowProc](#windowproc)|Processes messages sent to the window.|

### Data Members

|Name|Description|
|-|-|
|[m_pfnSuperWindowProc](#m_pfnsuperwindowproc)|Points to the window class's original window procedure.|

## Remarks

You can use `CWindowImpl` to create a window or subclass an existing window. the `CWindowImpl` window procedure uses a message map to direct messages to the appropriate handlers.

`CWindowImpl::Create` creates a window based on the window class information that's managed by [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md). `CWindowImpl` contains the [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) macro, which means `CWndClassInfo` registers a new window class. If you want to superclass an existing window class, derive your class from `CWindowImpl` and include the [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) macro. In this case, `CWndClassInfo` registers a window class that's based on an existing class but uses `CWindowImpl::WindowProc`. For example:

[!code-cpp[NVC_ATL_Windowing#43](../../atl/codesnippet/cpp/cwindowimpl-class_1.h)]

> [!NOTE]
> Because `CWndClassInfo` manages the information for just one window class, each window created through an instance of `CWindowImpl` is based on the same window class.

`CWindowImpl` also supports window subclassing. The `SubclassWindow` method attaches an existing window to the `CWindowImpl` object and changes the window procedure to `CWindowImpl::WindowProc`. Each instance of `CWindowImpl` can subclass a different window.

> [!NOTE]
> For any given `CWindowImpl` object, call either `Create` or `SubclassWindow`. Don't invoke both methods on the same object.

In addition to `CWindowImpl`, ATL provides [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) to create a window that's contained in another object.

The base class destructor (~ `CWindowImplRoot`) ensures that the window is gone before the object is destroyed.

`CWindowImpl` derives from `CWindowImplBaseT`, which derives from `CWindowImplRoot`, which derives from `TBase` and [CMessageMap](../../atl/reference/cmessagemap-class.md).

|For more information about|See|
|--------------------------------|---------|
|Creating controls|[ATL Tutorial](../../atl/active-template-library-atl-tutorial.md)|
|Using windows in ATL|[ATL Window Classes](../../atl/atl-window-classes.md)|
|ATL Project Wizard|[Creating an ATL Project](../../atl/reference/creating-an-atl-project.md)|

## Inheritance Hierarchy

[CMessageMap](../../atl/reference/cmessagemap-class.md)

`TBase`

`CWindowImplRoot`

`CWindowImplBaseT`

`CWindowImpl`

## Requirements

**Header:** atlwin.h

## <a name="create"></a> CWindowImpl::Create

Creates a window based on a new window class.

```
HWND Create(
    HWND hWndParent,
    _U_RECT rect = NULL,
    LPCTSTR szWindowName = NULL,
    DWORD dwStyle = 0,
    DWORD dwExStyle = 0,
    _U_MENUorID MenuOrID = 0U,
    LPVOID lpCreateParam = NULL);
```

### Parameters

*hWndParent*<br/>
[in] The handle to the parent or owner window.

*rect*<br/>
[in] A [RECT](/windows/win32/api/windef/ns-windef-rect) structure specifying the position of the window. The `RECT` can be passed by pointer or by reference.

*szWindowName*<br/>
[in] Specifies the name of the window. The default value is NULL.

*dwStyle*<br/>
[in] The style of the window. This value is combined with the style provided by the traits class for the window. The default value gives the traits class full control over the style. For a list of possible values, see [CreateWindow](/windows/win32/api/winuser/nf-winuser-createwindoww) in the Windows SDK.

*dwExStyle*<br/>
[in] The extended window style. This value is combined with the style provided by the traits class for the window. The default value gives the traits class full control over the style. For a list of possible values, see [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) in the Windows SDK.

*MenuOrID*<br/>
[in] For a child window, the window identifier. For a top-level window, a menu handle for the window. The default value is **0U**.

*lpCreateParam*<br/>
[in] A pointer to window-creation data. For a full description, see the description for the final parameter to [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw).

### Return Value

If successful, the handle to the newly created window. Otherwise, NULL.

### Remarks

`Create` first registers the window class if it has not yet been registered. The newly created window is automatically attached to the `CWindowImpl` object.

> [!NOTE]
> Do not call `Create` if you have already called [SubclassWindow](#subclasswindow).

To use a window class that is based on an existing window class, derive your class from `CWindowImpl` and include the [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) macro. The existing window class's window procedure is saved in [m_pfnSuperWindowProc](#m_pfnsuperwindowproc). For more information, see the [CWindowImpl](../../atl/reference/cwindowimpl-class.md) overview.

> [!NOTE]
> If 0 is used as the value for the *MenuOrID* parameter, it must be specified as 0U (the default value) to avoid a compiler error.

## <a name="defwindowproc"></a> CWindowImpl::DefWindowProc

Called by [WindowProc](#windowproc) to process messages not handled by the message map.

```
LRESULT DefWindowProc(
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);

LRESULT DefWindowProc();
```

### Parameters

*uMsg*<br/>
[in] The message sent to the window.

*wParam*<br/>
[in] Additional message-specific information.

*lParam*<br/>
[in] Additional message-specific information.

### Return Value

The result of the message processing.

### Remarks

By default, `DefWindowProc` calls the [CallWindowProc](/windows/win32/api/winuser/nf-winuser-callwindowprocw) Win32 function to send the message information to the window procedure specified in [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).

The function with no parameters automatically retrieves the needed parameters from the current message.

## <a name="getcurrentmessage"></a> CWindowImpl::GetCurrentMessage

Returns the current message, packaged in the `MSG` structure.

```
const MSG* GetCurrentMessage();
```

### Return Value

The current message.

## <a name="getwindowproc"></a> CWindowImpl::GetWindowProc

Returns `WindowProc`, the current window procedure.

```
virtual WNDPROC GetWindowProc();
```

### Return Value

The current window procedure.

### Remarks

Override this method to replace the window procedure with your own.

## <a name="getwndclassinfo"></a> CWindowImpl::GetWndClassInfo

Called by [Create](#create) to access the window class information.

```
static CWndClassInfo& GetWndClassInfo();
```

### Return Value

A static instance of [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md).

### Remarks

By default, `CWindowImpl` obtains this method through the [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) macro, which specifies a new window class.

To superclass an existing window class, derive your class from `CWindowImpl` and include the [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) macro to override `GetWndClassInfo`. For more information, see the [CWindowImpl](../../atl/reference/cwindowimpl-class.md) overview.

Besides using the DECLARE_WND_CLASS and DECLARE_WND_SUPERCLASS macros, you can override `GetWndClassInfo` with your own implementation.

## <a name="m_pfnsuperwindowproc"></a> CWindowImpl::m_pfnSuperWindowProc

Depending on the window, points to one of the following window procedures.

```
WNDPROC m_pfnSuperWindowProc;
```

### Remarks

|Type of window|Window procedure|
|--------------------|----------------------|
|A window based on a new window class, specified through the [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) macro.|The [DefWindowProc](/windows/win32/api/winuser/nf-winuser-defwindowprocw) Win32 function.|
|A window based on a window class that modifies an existing class, specified through the [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) macro.|The existing window class's window procedure.|
|A subclassed window.|The subclassed window's original window procedure.|

[CWindowImpl::DefWindowProc](#defwindowproc) sends message information to the window procedure saved in `m_pfnSuperWindowProc`.

## <a name="onfinalmessage"></a> CWindowImpl::OnFinalMessage

Called after receiving the last message (typically WM_NCDESTROY).

```
virtual void OnFinalMessage(HWND hWnd);
```

### Parameters

*hWnd*<br/>
[in] A handle to the window being destroyed.

### Remarks

The default implementation of `OnFinalMessage` does nothing, but you can override this function to handle cleanup before destroying a window. If you want to automatically delete your object upon the window destruction, you can call **delete this;** in this function.

## <a name="subclasswindow"></a> CWindowImpl::SubclassWindow

Subclasses the window identified by *hWnd* and attaches it to the `CWindowImpl` object.

```
BOOL SubclassWindow(HWND hWnd);
```

### Parameters

*hWnd*<br/>
[in] The handle to the window being subclassed.

### Return Value

TRUE if the window is successfully subclassed; otherwise, FALSE.

### Remarks

The subclassed window now uses [CWindowImpl::WindowProc](#windowproc). The original window procedure is saved in [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).

> [!NOTE]
> Do not call `SubclassWindow` if you have already called [Create](#create).

## <a name="unsubclasswindow"></a> CWindowImpl::UnsubclassWindow

Detaches the subclassed window from the `CWindowImpl` object and restores the original window procedure, saved in [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).

```
HWND UnsubclassWindow();
```

### Return Value

The handle to the window previously subclassed.

## <a name="windowproc"></a> CWindowImpl::WindowProc

This static function implements the window procedure.

```
static LRESULT CALLBACK WindowProc(
    HWND hWnd,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);
```

### Parameters

*hWnd*<br/>
[in] The handle to the window.

*uMsg*<br/>
[in] The message sent to the window.

*wParam*<br/>
[in] Additional message-specific information.

*lParam*<br/>
[in] Additional message-specific information.

### Return Value

The result of the message processing.

### Remarks

`WindowProc` uses the default message map (declared with [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map)) to direct messages to the appropriate handlers. If necessary, `WindowProc` calls [DefWindowProc](#defwindowproc) for additional message processing. If the final message is not handled, `WindowProc` does the following:

- Performs unsubclassing if the window was unsubclassed.

- Clears `m_hWnd`.

- Calls [OnFinalMessage](#onfinalmessage) before the window is destroyed.

You can override `WindowProc` to provide a different mechanism for handling messages.

## See also

[BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map)<br/>
[CComControl Class](../../atl/reference/ccomcontrol-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
