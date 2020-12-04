---
description: "Learn more about: CWndClassInfo Class"
title: "CWndClassInfo Class"
ms.date: "11/04/2016"
f1_keywords: ["CWndClassInfo", "ATLWIN/ATL::CWndClassInfo", "ATLWIN/ATL::Register", "ATLWIN/ATL::m_atom", "ATLWIN/ATL::m_bSystemCursor", "ATLWIN/ATL::m_lpszCursorID", "ATLWIN/ATL::m_lpszOrigName", "ATLWIN/ATL::m_szAutoName", "ATLWIN/ATL::m_wc", "ATLWIN/ATL::pWndProc"]
helpviewer_keywords: ["CWndClassInfo class"]
ms.assetid: c36fe7e1-75f1-4cf5-a06f-9f59c43fe6fb
---
# CWndClassInfo Class

This class provides methods for registering information for a window class.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
class CWndClassInfo
```

## Members

### Public Methods

|Name|Description|
|-|-|
|[Register](#register)|Registers the window class.|

### Data Members

|Name|Description|
|-|-|
|[m_atom](#m_atom)|Uniquely identifies the registered window class.|
|[m_bSystemCursor](#m_bsystemcursor)|Specifies whether the cursor resource refers to a system cursor or to a cursor contained in a module resource.|
|[m_lpszCursorID](#m_lpszcursorid)|Specifies the name of the cursor resource.|
|[m_lpszOrigName](#m_lpszorigname)|Contains the name of an existing window class.|
|[m_szAutoName](#m_szautoname)|Holds an ATL-generated name of the window class.|
|[m_wc](#m_wc)|Maintains window class information in a `WNDCLASSEX` structure.|
|[pWndProc](#pwndproc)|Points to the window procedure of an existing window class.|

## Remarks

`CWndClassInfo` manages the information of a window class. You typically use `CWndClassInfo` through one of three macros, DECLARE_WND_CLASS, DECLARE_WND_CLASS_EX, or DECLARE_WND_SUPERCLASS, as described in the following table:

|Macro|Description|
|-----------|-----------------|
|[DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class)|`CWndClassInfo` registers information for a new window class.|
|[DECLARE_WND_CLASS_EX](window-class-macros.md#declare_wnd_class_ex)|`CWndClassInfo` registers information for a new window class, including the class parameters.|
|[DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass)|`CWndClassInfo` registers information for a window class that is based on an existing class but uses a different window procedure. This technique is called superclassing.|

By default, [CWindowImpl](../../atl/reference/cwindowimpl-class.md) includes the `DECLARE_WND_CLASS` macro to create a window based on a new window class. DECLARE_WND_CLASS provides default styles and background color for the control. If you want to specify the style and background color yourself, derive your class from `CWindowImpl` and include the DECLARE_WND_CLASS_EX macro in your class definition.

If you want to create a window based on an existing window class, derive your class from `CWindowImpl` and include the DECLARE_WND_SUPERCLASS macro in your class definition. For example:

[!code-cpp[NVC_ATL_Windowing#43](../../atl/codesnippet/cpp/cwndclassinfo-class_1.h)]

For more information about window classes, see [Window Classes](/windows/win32/winmsg/window-classes) in the Windows SDK.

For more information about using windows in ATL, see the article [ATL Window Classes](../../atl/atl-window-classes.md).

## Requirements

**Header:** atlwin.h

## <a name="m_atom"></a> CWndClassInfo::m_atom

Contains the unique identifier for the registered window class.

```
ATOM m_atom;
```

## <a name="m_bsystemcursor"></a> CWndClassInfo::m_bSystemCursor

If TRUE, the system cursor resource will be loaded when the window class is registered.

```
BOOL m_bSystemCursor;
```

### Remarks

Otherwise, the cursor resource contained in your module will be loaded.

`CWndClassInfo` uses `m_bSystemCursor` only when the [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) (the default in [CWindowImpl](../../atl/reference/cwindowimpl-class.md)) or the [DECLARE_WND_CLASS_EX](window-class-macros.md#declare_wnd_class_ex) macro is specified. In this case, `m_bSystemCursor` is initialized to TRUE. For more information, see the [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md) overview.

## <a name="m_lpszcursorid"></a> CWndClassInfo::m_lpszCursorID

Specifies either the name of the cursor resource or the resource identifier in the low-order word and zero in the high-order word.

```
LPCTSTR m_lpszCursorID;
```

### Remarks

When the window class is registered, the handle to the cursor identified by `m_lpszCursorID` is retrieved and stored by [m_wc](#m_wc).

`CWndClassInfo` uses `m_lpszCursorID` only when the [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) (the default in [CWindowImpl](../../atl/reference/cwindowimpl-class.md)) or the [DECLARE_WND_CLASS_EX](window-class-macros.md#declare_wnd_class_ex) macro is specified. In this case, `m_lpszCursorID` is initialized to IDC_ARROW. For more information, see the [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md) overview.

## <a name="m_lpszorigname"></a> CWndClassInfo::m_lpszOrigName

Contains the name of an existing window class.

```
LPCTSTR m_lpszOrigName;
```

### Remarks

`CWndClassInfo` uses `m_lpszOrigName` only when you include the [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) macro in your class definition. In this case, `CWndClassInfo` registers a window class based on the class named by `m_lpszOrigName`. For more information, see the [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md) overview.

## <a name="m_szautoname"></a> CWndClassInfo::m_szAutoName

Holds the name of the window class.

```
TCHAR m_szAutoName[13];
```

### Remarks

`CWndClassInfo` uses `m_szAutoName` only if NULL is passed for the `WndClassName` parameter to [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class), the [DECLARE_WND_CLASS_EX](window-class-macros.md#declare_wnd_class_ex) or [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass). ATL will construct a name when the window class is registered.

## <a name="m_wc"></a> CWndClassInfo::m_wc

Maintains the window class information in a [WNDCLASSEX](/windows/win32/api/winuser/ns-winuser-wndclassexw) structure.

```
WNDCLASSEX m_wc;
```

### Remarks

If you have specified the [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) (the default in [CWindowImpl](../../atl/reference/cwindowimpl-class.md)) or the [DECLARE_WND_CLASS_EX](window-class-macros.md#declare_wnd_class_ex) macro, `m_wc` contains information about a new window class.

If you have specified the [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) macro, `m_wc` contains information about a superclass — a window class that is based on an existing class but uses a different window procedure. [m_lpszOrigName](#m_lpszorigname) and [pWndProc](#pwndproc) save the existing window class's name and window procedure, respectively.

## <a name="pwndproc"></a> CWndClassInfo::pWndProc

Points to the window procedure of an existing window class.

```
WNDPROC pWndProc;
```

### Remarks

`CWndClassInfo` uses `pWndProc` only when you include the [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) macro in your class definition. In this case, `CWndClassInfo` registers a window class that is based on an existing class but uses a different window procedure. The existing window class's window procedure is saved in `pWndProc`. For more information, see the [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md) overview.

## <a name="register"></a> CWndClassInfo::Register

Called by [CWindowImpl::Create](../../atl/reference/cwindowimpl-class.md#create) to register the window class if it has not yet been registered.

```
ATOM Register(WNDPROC* pProc);
```

### Parameters

*pProc*<br/>
[out] Specifies the original window procedure of an existing window class.

### Return Value

If successful, an atom that uniquely identifies the window class being registered. Otherwise, 0.

### Remarks

If you have specified the [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) (the default in [CWindowImpl](../../atl/reference/cwindowimpl-class.md)) or the [DECLARE_WND_CLASS_EX](window-class-macros.md#declare_wnd_class_ex) macro, `Register` registers a new window class. In this case, the *pProc* parameter is not used.

If you have specified the [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) macro, `Register` registers a superclass — a window class that is based on an existing class but uses a different window procedure. The existing window class's window procedure is returned in *pProc*.

## See also

[CComControl Class](../../atl/reference/ccomcontrol-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
