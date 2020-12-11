---
description: "Learn more about: TN001: Window Class Registration"
title: "TN001: Window Class Registration"
ms.date: "11/04/2016"
f1_keywords: ["vc.registration"]
helpviewer_keywords: ["TN001", "WNDCLASS [MFC]", "AfxRegisterClass function"]
ms.assetid: 1abf678e-f220-4606-85e0-03df32f64c54
---
# TN001: Window Class Registration

This note describes the MFC routines that register the special [WNDCLASS](/windows/win32/api/winuser/ns-winuser-wndclassw)es needed by Microsoft Windows. Specific `WNDCLASS` attributes used by MFC and Windows are discussed.

## The Problem

The attributes of a [CWnd](../mfc/reference/cwnd-class.md) object, like an `HWND` handle in Windows, are stored in two places: the window object and the `WNDCLASS`. The name of the `WNDCLASS` is passed to general window creation functions such as [CWnd::Create](../mfc/reference/cwnd-class.md#create) and [CFrameWnd::Create](../mfc/reference/cframewnd-class.md#create) in the *lpszClassName* parameter.

This `WNDCLASS` must be registered through one of four means:

- Implicitly by using a MFC provided `WNDCLASS`.

- Implicitly by subclassing a Windows control (or some other control).

- Explicitly by calling the MFC [AfxRegisterWndClass](../mfc/reference/application-information-and-management.md#afxregisterwndclass) or [AfxRegisterClass](../mfc/reference/application-information-and-management.md#afxregisterclass).

- Explicitly by calling the Windows routine [RegisterClass](/windows/win32/api/winuser/nf-winuser-registerclassw).

## WNDCLASS Fields

The `WNDCLASS` structure consists of various fields that describe a window class. The following table shows the fields and specifies how they are used in an MFC application:

|Field|Description|
|-----------|-----------------|
|*lpfnWndProc*|window proc, must be an `AfxWndProc`|
|*cbClsExtra*|not used (should be zero)|
|*cbWndExtra*|not used (should be zero)|
|*hInstance*|automatically filled with [AfxGetInstanceHandle](../mfc/reference/application-information-and-management.md#afxgetinstancehandle)|
|*hIcon*|icon for frame windows, see below|
|*hCursor*|cursor for when mouse is over window, see below|
|*hbrBackground*|background color, see below|
|*lpszMenuName*|not used (should be NULL)|
|*lpszClassName*|class name, see below|

## Provided WNDCLASSes

Earlier versions of MFC (before MFC 4.0), provided several predefined Window classes. These Window classes are no longer provided by default. Applications should use `AfxRegisterWndClass` with the appropriate parameters.

If the application provides a resource with the specified resource ID (for example, AFX_IDI_STD_FRAME), MFC will use that resource. Otherwise it will use the default resource. For the icon, the standard application icon is used, and for the cursor, the standard arrow cursor is used.

Two icons support MDI applications with single document types: one icon for the main application, the other icon for iconic document/MDIChild windows. For multiple document types with different icons, you must register additional `WNDCLASS`es or use the [CFrameWnd::LoadFrame](../mfc/reference/cframewnd-class.md#loadframe) function.

`CFrameWnd::LoadFrame` will register a `WNDCLASS` using the icon ID you specify as the first parameter and the following standard attributes:

- class style : CS_DBLCLKS &#124; CS_HREDRAW &#124; CS_VREDRAW;

- icon AFX_IDI_STD_FRAME

- arrow cursor

- COLOR_WINDOW background color

The values for background color and cursor for the [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md) are not used since the client area of the `CMDIFrameWnd` is completely covered by the **MDICLIENT** window. Microsoft does not encourage subclassing the **MDICLIENT** window so use the standard colors and cursor types when possible.

## Subclassing and Superclassing Controls

If you subclass or superclass a Windows control (for example, [CButton](../mfc/reference/cbutton-class.md)) then your class automatically gets the `WNDCLASS` attributes provided in the Windows implementation of that control.

## The AfxRegisterWndClass Function

MFC provides a helper function for registering a window class. Given a set of attributes (window class style, cursor, background brush, and icon), a synthetic name is generated, and the resulting window class is registered. For example,

```
const char* AfxRegisterWndClass(UINT nClassStyle,
    HCURSOR hCursor,
    HBRUSH hbrBackground,
    HICON hIcon);
```

This function returns a temporary string of the generated registered window class name. For more information about this function, see [AfxRegisterWndClass](../mfc/reference/application-information-and-management.md#afxregisterwndclass).

The returned string is a temporary pointer to a static string buffer. It is valid until the next call to `AfxRegisterWndClass`. If you want to keep this string around, store it in a [CString](../atl-mfc-shared/using-cstring.md) variable, as in this example:

```
CString strWndClass = AfxRegisterWndClass(CS_DBLCLK, ...);

...
CWnd* pWnd = new CWnd;
pWnd->Create(strWndClass, ...);

...
```

`AfxRegisterWndClass` will throw a [CResourceException](../mfc/reference/cresourceexception-class.md) if the window class failed to register (either because of bad parameters, or out of Windows memory).

## The RegisterClass and AfxRegisterClass Functions

If you want to do anything more sophisticated than what `AfxRegisterWndClass` provides, you can call the Windows API `RegisterClass` or the MFC function `AfxRegisterClass`. The `CWnd`, [CFrameWnd](../mfc/reference/cframewnd-class.md) and [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md) `Create` functions take a *lpszClassName* string name for the window class as the first parameter. You can use any registered window class name, regardless of the method you used to register it.

It is important to use `AfxRegisterClass` (or `AfxRegisterWndClass`) in a DLL on Win32. Win32 does not automatically unregister classes registered by a DLL, so you must explicitly unregister classes when the DLL is terminated. By using `AfxRegisterClass` instead of `RegisterClass` this is handled automatically for you. `AfxRegisterClass` maintains a list of unique classes registered by your DLL and will automatically unregister them when the DLL terminates. When you use `RegisterClass` in a DLL, you must ensure that all classes are unregistered when the DLL is terminated (in your [DllMain](/windows/win32/Dlls/dllmain) function). Failure to do so might cause `RegisterClass` to fail unexpectedly when another client application tries to use your DLL.

## See also

[Technical Notes by Number](../mfc/technical-notes-by-number.md)<br/>
[Technical Notes by Category](../mfc/technical-notes-by-category.md)
