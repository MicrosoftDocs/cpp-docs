---
description: "Learn more about: CContainedWindowT Class"
title: "CContainedWindowT Class"
ms.date: "11/04/2016"
f1_keywords: ["CContainedWindowT", "ATLWIN/ATL::CContainedWindowT", "ATLWIN/ATL::CContainedWindowT::CContainedWindowT", "ATLWIN/ATL::CContainedWindowT::Create", "ATLWIN/ATL::CContainedWindowT::DefWindowProc", "ATLWIN/ATL::CContainedWindowT::GetCurrentMessage", "ATLWIN/ATL::CContainedWindowT::RegisterWndSuperclass", "ATLWIN/ATL::CContainedWindowT::SubclassWindow", "ATLWIN/ATL::CContainedWindowT::SwitchMessageMap", "ATLWIN/ATL::CContainedWindowT::UnsubclassWindow", "ATLWIN/ATL::CContainedWindowT::WindowProc", "ATLWIN/ATL::CContainedWindowT::m_dwMsgMapID", "ATLWIN/ATL::CContainedWindowT::m_lpszClassName", "ATLWIN/ATL::CContainedWindowT::m_pfnSuperWindowProc", "ATLWIN/ATL::CContainedWindowT::m_pObject"]
helpviewer_keywords: ["CContainedWindow class", "contained windows", "CContainedWindowT class"]
ms.assetid: cde0ca36-9347-4068-995a-d294dae57ca9
---
# CContainedWindowT Class

This class implements a window contained within another object.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template <class TBase = CWindow, class TWinTraits = CControlWinTraits>
class CContainedWindowT : public TBase
```

#### Parameters

*TBase*<br/>
The base class of your new class. The default base class is `CWindow`.

*TWinTraits*<br/>
A traits class that defines styles for your window. The default is `CControlWinTraits`.

> [!NOTE]
> [CContainedWindow](ccontainedwindowt-class.md) is a specialization of `CContainedWindowT`. If you want to change the base class or traits, use `CContainedWindowT` directly.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CContainedWindowT::CContainedWindowT](#ccontainedwindowt)|Constructor. Initializes data members to specify which message map will process the contained window's messages.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CContainedWindowT::Create](#create)|Creates a window.|
|[CContainedWindowT::DefWindowProc](#defwindowproc)|Provides default message processing.|
|[CContainedWindowT::GetCurrentMessage](#getcurrentmessage)|Returns the current message.|
|[CContainedWindowT::RegisterWndSuperclass](#registerwndsuperclass)|Registers the window class of the contained window.|
|[CContainedWindowT::SubclassWindow](#subclasswindow)|Subclasses a window.|
|[CContainedWindowT::SwitchMessageMap](#switchmessagemap)|Changes which message map is used to process the contained window's messages.|
|[CContainedWindowT::UnsubclassWindow](#unsubclasswindow)|Restores a previously subclassed window.|
|[CContainedWindowT::WindowProc](#windowproc)|(Static) Processes messages sent to the contained window.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CContainedWindowT::m_dwMsgMapID](#m_dwmsgmapid)|Identifies which message map will process the contained window's messages.|
|[CContainedWindowT::m_lpszClassName](#m_lpszclassname)|Specifies the name of an existing window class on which a new window class will be based.|
|[CContainedWindowT::m_pfnSuperWindowProc](#m_pfnsuperwindowproc)|Points to the window class's original window procedure.|
|[CContainedWindowT::m_pObject](#m_pobject)|Points to the containing object.|

## Remarks

`CContainedWindowT` implements a window contained within another object. `CContainedWindowT`'s window procedure uses a message map in the containing object to direct messages to the appropriate handlers. When constructing a `CContainedWindowT` object, you specify which message map should be used.

`CContainedWindowT` allows you to create a new window by superclassing an existing window class. The `Create` method first registers a window class that is based on an existing class but uses `CContainedWindowT::WindowProc`. `Create` then creates a window based on this new window class. Each instance of `CContainedWindowT` can superclass a different window class.

`CContainedWindowT` also supports window subclassing. The `SubclassWindow` method attaches an existing window to the `CContainedWindowT` object and changes the window procedure to `CContainedWindowT::WindowProc`. Each instance of `CContainedWindowT` can subclass a different window.

> [!NOTE]
> For any given `CContainedWindowT` object, call either `Create` or `SubclassWindow`. You should not invoke both methods on the same object.

When you use the **Add control based on** option in the ATL Project Wizard, the wizard will automatically add a `CContainedWindowT` data member to the class implementing the control. The following example shows how the contained window is declared:

[!code-cpp[NVC_ATL_Windowing#38](../../atl/codesnippet/cpp/ccontainedwindowt-class_1.h)]

[!code-cpp[NVC_ATL_Windowing#39](../../atl/codesnippet/cpp/ccontainedwindowt-class_2.h)]

[!code-cpp[NVC_ATL_Windowing#40](../../atl/codesnippet/cpp/ccontainedwindowt-class_3.h)]

|For more information about|See|
|--------------------------------|---------|
|Creating controls|[ATL Tutorial](../../atl/active-template-library-atl-tutorial.md)|
|Using windows in ATL|[ATL Window Classes](../../atl/atl-window-classes.md)|
|ATL Project Wizard|[Creating an ATL Project](../../atl/reference/creating-an-atl-project.md)|
|Windows|[Windows](/windows/win32/winmsg/windows) and subsequent topics in the Windows SDK|

## Inheritance Hierarchy

`TBase`

`CContainedWindowT`

## Requirements

**Header:** atlwin.h

## <a name="ccontainedwindowt"></a> CContainedWindowT::CContainedWindowT

The constructor initializes data members.

```
CContainedWindowT(
    LPTSTR lpszClassName,
    CMessageMap* pObject,
    DWORD dwMsgMapID = 0);

CContainedWindowT(
    CMessageMap* pObject,
    DWORD dwMsgMapID = 0)
    CContainedWindowT();
```

### Parameters

*lpszClassName*<br/>
[in] The name of an existing window class on which the contained window will be based.

*pObject*<br/>
[in] A pointer to the containing object that declares the message map. This object's class must derive from [CMessageMap](../../atl/reference/cmessagemap-class.md).

*dwMsgMapID*<br/>
[in] Identifies the message map that will process the contained window's messages. The default value, 0, specifies the default message map declared with [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map). To use an alternate message map declared with [ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map), pass `msgMapID`.

### Remarks

If you want to create a new window through [Create](#create), you must pass the name of an existing window class for the *lpszClassName* parameter. For an example, see the [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) overview.

There are three constructors:

- The constructor with three arguments is the one typically called.

- The constructor with two arguments uses the class name from `TBase::GetWndClassName`.

- The constructor with no arguments is used if you want to supply the arguments later. You must supply the window class name, message map object, and message map ID when you later call `Create`.

If you subclass an existing window through [SubclassWindow](#subclasswindow), the *lpszClassName* value will not be used; therefore, you can pass NULL for this parameter.

## <a name="create"></a> CContainedWindowT::Create

Calls [RegisterWndSuperclass](#registerwndsuperclass) to register a window class that is based on an existing class but uses [CContainedWindowT::WindowProc](#windowproc).

```
HWND Create(
    HWND hWndParent,
    _U_RECT rect,
    LPCTSTR szWindowName = NULL,
    DWORD dwStyle = 0,
    DWORD dwExStyle = 0,
    _U_MENUorID MenuOrID = 0U,
    LPVOID lpCreateParam = NULL);

HWND Create(
    CMessageMap* pObject,
    DWORD dwMsgMapID,
    HWND hWndParent,
    _U_RECT rect,
    LPCTSTR szWindowName = NULL,
    DWORD dwStyle = 0,
    DWORD dwExStyle = 0,
    _U_MENUorID MenuOrID = 0U,
    LPVOID lpCreateParam = NULL);

HWND Create(
    LPCTSTR lpszClassName,
    CMessageMap* pObject,
    DWORD dwMsgMapID,
    HWND hWndParent,
    _U_RECT rect,
    LPCTSTR szWindowName = NULL,
    DWORD dwStyle = 0,
    DWORD dwExStyle = 0,
    _U_MENUorID MenuOrID = 0U,
    LPVOID lpCreateParam = NULL);
```

### Parameters

*lpszClassName*<br/>
[in] The name of an existing window class on which the contained window will be based.

*pObject*<br/>
[in] A pointer to the containing object that declares the message map. This object's class must derive from [CMessageMap](../../atl/reference/cmessagemap-class.md).

*dwMsgMapID*<br/>
[in] Identifies the message map that will process the contained window's messages. The default value, 0, specifies the default message map declared with [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map). To use an alternate message map declared with [ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map), pass `msgMapID`.

*hWndParent*<br/>
[in] The handle to the parent or owner window.

*rect*<br/>
[in] A [RECT](/windows/win32/api/windef/ns-windef-rect) structure specifying the position of the window. The `RECT` can be passed by pointer or by reference.

*szWindowName*<br/>
[in] Specifies the name of the window. The default value is NULL.

*dwStyle*<br/>
[in] The style of the window. The default value is WS_CHILD &#124; WS_VISIBLE. For a list of possible values, see [CreateWindow](/windows/win32/api/winuser/nf-winuser-createwindoww) in the Windows SDK.

*dwExStyle*<br/>
[in] The extended window style. The default value is 0, meaning no extended style. For a list of possible values, see [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) in the Windows SDK.

*MenuOrID*<br/>
[in] For a child window, the window identifier. For a top-level window, a menu handle for the window. The default value is **0U**.

*lpCreateParam*<br/>
[in] A pointer to window-creation data. For a full description, see the description for the final parameter to [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw).

### Return Value

If successful, the handle to the newly created window; otherwise, NULL.

### Remarks

The existing window class name is saved in [m_lpszClassName](#m_lpszclassname). `Create` then creates a window based on this new class. The newly created window is automatically attached to the `CContainedWindowT` object.

> [!NOTE]
> Do not call `Create` if you have already called [SubclassWindow](#subclasswindow).

> [!NOTE]
> If 0 is used as the value for the *MenuOrID* parameter, it must be specified as 0U (the default value) to avoid a compiler error.

## <a name="defwindowproc"></a> CContainedWindowT::DefWindowProc

Called by [WindowProc](#windowproc) to process messages not handled by the message map.

```
LRESULT DefWindowProc()
LRESULT DefWindowProc(
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);
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

## <a name="getcurrentmessage"></a> CContainedWindowT::GetCurrentMessage

Returns the current message (`m_pCurrentMsg`).

```
const _ATL_MSG* GetCurrentMessage();
```

### Return Value

The current message, packaged in the `MSG` structure.

## <a name="m_dwmsgmapid"></a> CContainedWindowT::m_dwMsgMapID

Holds the identifier of the message map currently being used for the contained window.

```
DWORD m_dwMsgMapID;
```

### Remarks

This message map must be declared in the containing object.

The default message map, declared with [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map), is always identified by zero. An alternate message map, declared with [ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map), is identified by `msgMapID`.

`m_dwMsgMapID` is first initialized by the constructor and can be changed by calling [SwitchMessageMap](#switchmessagemap). For an example, see the [CContainedWindowT Overview](../../atl/reference/ccontainedwindowt-class.md).

## <a name="m_lpszclassname"></a> CContainedWindowT::m_lpszClassName

Specifies the name of an existing window class.

```
LPTSTR m_lpszClassName;
```

### Remarks

When you create a window, [Create](#create) registers a new window class that is based on this existing class but uses [CContainedWindowT::WindowProc](#windowproc).

`m_lpszClassName` is initialized by the constructor. For an example, see the [CContainedWindowT](../../atl/reference/ccontainedwindowt-class.md) overview.

## <a name="m_pfnsuperwindowproc"></a> CContainedWindowT::m_pfnSuperWindowProc

If the contained window is subclassed, `m_pfnSuperWindowProc` points to the original window procedure of the window class.

```
WNDPROC m_pfnSuperWindowProc;
```

### Remarks

If the contained window is superclassed, meaning it is based on a window class that modifies an existing class, `m_pfnSuperWindowProc` points to the existing window class's window procedure.

The [DefWindowProc](#defwindowproc) method sends message information to the window procedure saved in `m_pfnSuperWindowProc`.

## <a name="m_pobject"></a> CContainedWindowT::m_pObject

Points to the object containing the `CContainedWindowT` object.

```
CMessageMap* m_pObject;
```

### Remarks

This container, whose class must derive from [CMessageMap](../../atl/reference/cmessagemap-class.md), declares the message map used by the contained window.

`m_pObject` is initialized by the constructor. For an example, see the [CContainedWindowT](../../atl/reference/ccontainedwindowt-class.md) overview.

## <a name="registerwndsuperclass"></a> CContainedWindowT::RegisterWndSuperclass

Called by [Create](#create) to register the window class of the contained window.

```
ATOM RegisterWndSuperClass();
```

### Return Value

If successful, an atom that uniquely identifies the window class being registered; otherwise, zero.

### Remarks

This window class is based on an existing class but uses [CContainedWindowT::WindowProc](#windowproc). The existing window class's name and window procedure are saved in [m_lpszClassName](#m_lpszclassname) and [m_pfnSuperWindowProc](#m_pfnsuperwindowproc), respectively.

## <a name="subclasswindow"></a> CContainedWindowT::SubclassWindow

Subclasses the window identified by *hWnd* and attaches it to the `CContainedWindowT` object.

```
BOOL SubclassWindow(HWND hWnd);
```

### Parameters

*hWnd*<br/>
[in] The handle to the window being subclassed.

### Return Value

TRUE if the window is successfully subclassed; otherwise, FALSE.

### Remarks

The subclassed window now uses [CContainedWindowT::WindowProc](#windowproc). The original window procedure is saved in [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).

> [!NOTE]
> Do not call `SubclassWindow` if you have already called [Create](#create).

## <a name="switchmessagemap"></a> CContainedWindowT::SwitchMessageMap

Changes which message map will be used to process the contained window's messages.

```cpp
void SwitchMessageMap(DWORD dwMsgMapID);
```

### Parameters

*dwMsgMapID*<br/>
[in] The message map identifier. To use the default message map declared with [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map), pass zero. To use an alternate message map declared with [ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map), pass `msgMapID`.

### Remarks

The message map must be defined in the containing object.

You initially specify the message map identifier in the constructor.

## <a name="unsubclasswindow"></a> CContainedWindowT::UnsubclassWindow

Detaches the subclassed window from the `CContainedWindowT` object and restores the original window procedure, saved in [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).

```
HWND UnsubclassWindow(BOOL bForce = FALSE);
```

### Parameters

*bForce*<br/>
[in] Set to TRUE to force the original window procedure to be restored even if the window procedure for this `CContainedWindowT` object is not currently active. If *bForce* is set to FALSE and the window procedure for this `CContainedWindowT` object is not currently active, the original window procedure will not be restored.

### Return Value

The handle to the window previously subclassed. If *bForce* is set to FALSE and the window procedure for this `CContainedWindowT` object is not currently active, returns NULL.

### Remarks

Use this method only if you want to restore the original window procedure before the window is destroyed. Otherwise, [WindowProc](#windowproc) will automatically do this when the window is destroyed.

## <a name="windowproc"></a> CContainedWindowT::WindowProc

This static method implements the window procedure.

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

`WindowProc` directs messages to the message map identified by [m_dwMsgMapID](#m_dwmsgmapid). If necessary, `WindowProc` calls [DefWindowProc](#defwindowproc) for additional message processing.

## See also

[CWindow Class](../../atl/reference/cwindow-class.md)<br/>
[CWindowImpl Class](../../atl/reference/cwindowimpl-class.md)<br/>
[CMessageMap Class](../../atl/reference/cmessagemap-class.md)<br/>
[BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map)<br/>
[ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map)<br/>
[Class Overview](../../atl/atl-class-overview.md)
