---
description: "Learn more about: CMiniFrameWnd Class"
title: "CMiniFrameWnd Class"
ms.date: "11/04/2016"
f1_keywords: ["CMiniFrameWnd", "AFXWIN/CMiniFrameWnd", "AFXWIN/CMiniFrameWnd::CMiniFrameWnd", "AFXWIN/CMiniFrameWnd::Create", "AFXWIN/CMiniFrameWnd::CreateEx"]
helpviewer_keywords: ["CMiniFrameWnd [MFC], CMiniFrameWnd", "CMiniFrameWnd [MFC], Create", "CMiniFrameWnd [MFC], CreateEx"]
ms.assetid: b8f534ed-0532-4d8e-9657-5595cf677749
---
# CMiniFrameWnd Class

Represents a half-height frame window typically seen around floating toolbars.

## Syntax

```
class CMiniFrameWnd : public CFrameWnd
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMiniFrameWnd::CMiniFrameWnd](#cminiframewnd)|Constructs a `CMiniFrameWnd` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMiniFrameWnd::Create](#create)|Creates a `CMiniFrameWnd` object after construction.|
|[CMiniFrameWnd::CreateEx](#createex)|Creates a `CMiniFrameWnd` object (with additional options) after construction.|

## Remarks

These mini-frame windows behave like normal frame windows, except that they do not have minimize/maximize buttons or menus and you only have to single-click on the system menu to dismiss them.

To use a `CMiniFrameWnd` object, first define the object. Then call the [Create](#create) member function to display the mini-frame window.

For more information on how to use `CMiniFrameWnd` objects, see the article [Docking and Floating Toolbars](../../mfc/docking-and-floating-toolbars.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CFrameWnd](../../mfc/reference/cframewnd-class.md)

`CMiniFrameWnd`

## Requirements

**Header:** afxwin.h

## <a name="cminiframewnd"></a> CMiniFrameWnd::CMiniFrameWnd

Constructs a `CMiniFrameWnd` object, but does not create the window.

```
CMiniFrameWnd();
```

### Remarks

To create the window, call [CMiniFrameWnd::Create](#create).

## <a name="create"></a> CMiniFrameWnd::Create

Creates the Windows mini-frame window and attaches it to the `CMiniFrameWnd` object.

```
virtual BOOL Create(
    LPCTSTR lpClassName,
    LPCTSTR lpWindowName,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd = NULL,
    UINT nID = 0);
```

### Parameters

*lpClassName*<br/>
Points to a null-terminated character string that names the Windows class. The class name can be any name registered with the global [AfxRegisterWndClass](application-information-and-management.md#afxregisterwndclass) function. If NULL, the window class will be registered for you by the framework. MFC gives the default class the following styles and attributes:

- Sets style bit CS_DBLCLKS, which sends double-click messages to the window procedure when the user double-clicks the mouse.

- Sets style bits CS_HREDRAW and CS_VREDRAW, which direct the contents of the client area to be redrawn when the window changes size.

- Sets the class cursor to the Windows standard IDC_ARROW.

- Sets the class background brush to NULL, so the window will not erase its background.

- Sets the class icon to the standard, waving-flag Windows logo icon.

- Sets the window to the default size and position, as indicated by Windows.

*lpWindowName*<br/>
Points to a null-terminated character string that contains the window name.

*dwStyle*<br/>
Specifies the window style attributes. These can include standard window styles and one or more of the following special styles:

- MFS_MOVEFRAME Allows the mini-frame window to be moved by clicking on any edge of the window, not just the caption.

- MFS_4THICKFRAME Disables resizing of the mini-frame window.

- MFS_SYNCACTIVE Synchronizes the activation of the mini-frame window to the activation of its parent window.

- MFS_THICKFRAME Allows the mini-frame window to be sized as small as the contents of the client area allow.

- MFS_BLOCKSYSMENU Disables access to the system menu and the control menu, and converts them to part of the caption (title bar).

See [CWnd::Create](../../mfc/reference/cwnd-class.md#create) for a description of possible window style values. The typical combination used for mini-frame windows is WS_POPUP&#124;WS_CAPTION&#124;WS_SYSMENU.

*rect*<br/>
A `RECT` structure specifying the desired dimensions of the window.

*pParentWnd*<br/>
Points to the parent window. Use NULL for top-level windows.

*nID*<br/>
If the mini-frame window is created as a child window, this is the identifier of the child control; otherwise 0.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

`Create` initializes the window's class name and window name and registers default values for its style and parent.

## <a name="createex"></a> CMiniFrameWnd::CreateEx

Creates a `CMiniFrameWnd` object.

```
virtual BOOL CreateEx(
    DWORD dwExStyle,
    LPCTSTR lpClassName,
    LPCTSTR lpWindowName,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd = NULL,
    UINT nID = 0);
```

### Parameters

*dwExStyle*<br/>
Specifies the extended style of the `CMiniFrameWnd` being created. Apply any of the [extended window styles](../../mfc/reference/styles-used-by-mfc.md#extended-window-styles) to the window.

*lpClassName*<br/>
Points to a null-terminated character string that names the Windows class (a [WNDCLASS](/windows/win32/api/winuser/ns-winuser-wndclassw) structure). The class name can be any name registered with the global [AfxRegisterWndClass](application-information-and-management.md#afxregisterwndclass) function or any of the predefined control-class names. It must not be NULL.

*lpWindowName*<br/>
Points to a null-terminated character string that contains the window name.

*dwStyle*<br/>
Specifies the window style attributes. See [Window Styles](../../mfc/reference/styles-used-by-mfc.md#window-styles) and [CWnd::Create](../../mfc/reference/cwnd-class.md#create) for a description of the possible values.

*rect*<br/>
The size and position of the window, in client coordinates of *pParentWnd*.

*pParentWnd*<br/>
Points to the parent window object.

*nID*<br/>
The identifier of the child window.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

The `CreateEx` parameters specify the WNDCLASS, window style, and (optionally) initial position and size of the window. `CreateEx` also specifies the window's parent (if any) and ID.

When `CreateEx` executes, Windows sends the [WM_GETMINMAXINFO](../../mfc/reference/cwnd-class.md#ongetminmaxinfo), [WM_NCCREATE](../../mfc/reference/cwnd-class.md#onnccreate), [WM_NCCALCSIZE](../../mfc/reference/cwnd-class.md#onnccalcsize), and [WM_CREATE](../../mfc/reference/cwnd-class.md#oncreate) messages to the window.

To extend the default message handling, derive a class from `CMiniFrameWnd`, add a message map to the new class, and provide member functions for the above messages. Override `OnCreate`, for example, to perform needed initialization for a new class.

Override further `On`*Message* message handlers to add further functionality to your derived class.

If the WS_VISIBLE style is given, Windows sends the window all the messages required to activate and show the window. If the window style specifies a title bar, the window title pointed to by the *lpszWindowName* parameter is displayed in the title bar.

The *dwStyle* parameter can be any combination of [window styles](../../mfc/reference/styles-used-by-mfc.md#window-styles).

The old style Palette toolbox windows are no longer supported. The old style, which did not have an "X" Close button, was supported when running an MFC application on previous versions of Windows, but is no longer supported in Visual C++.NET. Only the new WS_EX_TOOLWINDOW style is now supported; for a description of this style, see [Extended Window Styles](../../mfc/reference/styles-used-by-mfc.md#extended-window-styles).

## See also

[CFrameWnd Class](../../mfc/reference/cframewnd-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CFrameWnd Class](../../mfc/reference/cframewnd-class.md)
