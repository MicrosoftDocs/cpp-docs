---
description: "Learn more about: CMDIChildWnd Class"
title: "CMDIChildWnd Class"
ms.date: "11/04/2016"
f1_keywords: ["CMDIChildWnd", "AFXWIN/CMDIChildWnd", "AFXWIN/CMDIChildWnd::CMDIChildWnd", "AFXWIN/CMDIChildWnd::Create", "AFXWIN/CMDIChildWnd::GetMDIFrame", "AFXWIN/CMDIChildWnd::MDIActivate", "AFXWIN/CMDIChildWnd::MDIDestroy", "AFXWIN/CMDIChildWnd::MDIMaximize", "AFXWIN/CMDIChildWnd::MDIRestore", "AFXWIN/CMDIChildWnd::SetHandles"]
helpviewer_keywords: ["CMDIChildWnd [MFC], CMDIChildWnd", "CMDIChildWnd [MFC], Create", "CMDIChildWnd [MFC], GetMDIFrame", "CMDIChildWnd [MFC], MDIActivate", "CMDIChildWnd [MFC], MDIDestroy", "CMDIChildWnd [MFC], MDIMaximize", "CMDIChildWnd [MFC], MDIRestore", "CMDIChildWnd [MFC], SetHandles"]
ms.assetid: 6d07f5d4-9a3e-4723-9fa5-e65bb669fdd5
---
# CMDIChildWnd Class

Provides the functionality of a Windows multiple document interface (MDI) child window, along with members for managing the window.

## Syntax

```
class CMDIChildWnd : public CFrameWnd
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMDIChildWnd::CMDIChildWnd](#cmdichildwnd)|Constructs a `CMDIChildWnd` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMDIChildWnd::Create](#create)|Creates the Windows MDI child window associated with the `CMDIChildWnd` object.|
|[CMDIChildWnd::GetMDIFrame](#getmdiframe)|Returns the parent MDI frame of the MDI client window.|
|[CMDIChildWnd::MDIActivate](#mdiactivate)|Activates this MDI child window.|
|[CMDIChildWnd::MDIDestroy](#mdidestroy)|Destroys this MDI child window.|
|[CMDIChildWnd::MDIMaximize](#mdimaximize)|Maximizes this MDI child window.|
|[CMDIChildWnd::MDIRestore](#mdirestore)|Restores this MDI child window from maximized or minimized size.|
|[CMDIChildWnd::SetHandles](#sethandles)|Sets the handles for menu and accelerator resources.|

## Remarks

An MDI child window looks much like a typical frame window, except that the MDI child window appears inside an MDI frame window rather than on the desktop. An MDI child window does not have a menu bar of its own, but instead shares the menu of the MDI frame window. The framework automatically changes the MDI frame menu to represent the currently active MDI child window.

To create a useful MDI child window for your application, derive a class from `CMDIChildWnd`. Add member variables to the derived class to store data specific to your application. Implement message-handler member functions and a message map in the derived class to specify what happens when messages are directed to the window.

There are three ways to construct an MDI child window:

- Directly construct it using `Create`.

- Directly construct it using `LoadFrame`.

- Indirectly construct it through a document template.

Before you call `Create` or `LoadFrame`, you must construct the frame-window object on the heap using the C++ **`new`** operator. Before calling `Create` you can also register a window class with the [AfxRegisterWndClass](application-information-and-management.md#afxregisterwndclass) global function to set the icon and class styles for the frame.

Use the `Create` member function to pass the frame's creation parameters as immediate arguments.

`LoadFrame` requires fewer arguments than `Create`, and instead retrieves most of its default values from resources, including the frame's caption, icon, accelerator table, and menu. To be accessible by `LoadFrame`, all these resources must have the same resource ID (for example, IDR_MAINFRAME).

When a `CMDIChildWnd` object contains views and documents, they are created indirectly by the framework instead of directly by the programmer. The `CDocTemplate` object orchestrates the creation of the frame, the creation of the containing views, and the connection of the views to the appropriate document. The parameters of the `CDocTemplate` constructor specify the `CRuntimeClass` of the three classes involved (document, frame, and view). A `CRuntimeClass` object is used by the framework to dynamically create new frames when specified by the user (for example, by using the File New command or the MDI Window New command).

A frame-window class derived from `CMDIChildWnd` must be declared with DECLARE_DYNCREATE in order for the above RUNTIME_CLASS mechanism to work correctly.

The `CMDIChildWnd` class inherits much of its default implementation from `CFrameWnd`. For a detailed list of these features, please refer to the [CFrameWnd](../../mfc/reference/cframewnd-class.md) class description. The `CMDIChildWnd` class has the following additional features:

- In conjunction with the `CMultiDocTemplate` class, multiple `CMDIChildWnd` objects from the same document template share the same menu, saving Windows system resources.

- The currently active MDI child window menu entirely replaces the MDI frame window's menu, and the caption of the currently active MDI child window is added to the MDI frame window's caption. For further examples of MDI child window functions that are implemented in conjunction with an MDI frame window, see the `CMDIFrameWnd` class description.

Do not use the C++ **`delete`** operator to destroy a frame window. Use `CWnd::DestroyWindow` instead. The `CFrameWnd` implementation of `PostNcDestroy` will delete the C++ object when the window is destroyed. When the user closes the frame window, the default `OnClose` handler will call `DestroyWindow`.

For more information on `CMDIChildWnd`, see [Frame Windows](../../mfc/frame-windows.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CFrameWnd](../../mfc/reference/cframewnd-class.md)

`CMDIChildWnd`

## Requirements

**Header:** afxwin.h

## <a name="cmdichildwnd"></a> CMDIChildWnd::CMDIChildWnd

Call to construct a `CMDIChildWnd` object.

```
CMDIChildWnd();
```

### Remarks

Call `Create` to create the visible window.

### Example

  See the example for [CMDIChildWnd::Create](#create).

## <a name="create"></a> CMDIChildWnd::Create

Call this member function to create a Windows MDI child window and attach it to the `CMDIChildWnd` object.

```
virtual BOOL Create(
    LPCTSTR lpszClassName,
    LPCTSTR lpszWindowName,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | WS_OVERLAPPEDWINDOW,
    const RECT& rect = rectDefault,
    CMDIFrameWnd* pParentWnd = NULL,
    CCreateContext* pContext = NULL);
```

### Parameters

*lpszClassName*<br/>
Points to a null-terminated character string that names the Windows class (a [WNDCLASS](/windows/win32/api/winuser/ns-winuser-wndclassw) structure). The class name can be any name registered with the [AfxRegisterWndClass](application-information-and-management.md#afxregisterwndclass) global function. Should be NULL for a standard `CMDIChildWnd`.

*lpszWindowName*<br/>
Points to a null-terminated character string that represents the window name. Used as text for the title bar.

*dwStyle*<br/>
Specifies the window [style](../../mfc/reference/styles-used-by-mfc.md#window-styles) attributes. The WS_CHILD style is required.

*rect*<br/>
Contains the size and position of the window. The `rectDefault` value allows Windows to specify the size and position of the new `CMDIChildWnd`.

*pParentWnd*<br/>
Specifies the window's parent. If NULL, the main application window is used.

*pContext*<br/>
Specifies a [CCreateContext](../../mfc/reference/ccreatecontext-structure.md) structure. This parameter can be NULL.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The currently active MDI child frame window can determine the caption of the parent frame window. This feature is disabled by turning off the FWS_ADDTOTITLE style bit of the child frame window.

The framework calls this member function in response to a user command to create a child window, and the framework uses the *pContext* parameter to properly connect the child window to the application. When you call `Create`, *pContext* can be NULL.

### Example

Example 1:

[!code-cpp[NVC_MFCWindowing#7](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_1.cpp)]

### Example

Example 2:

[!code-cpp[NVC_MFCWindowing#8](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_2.cpp)]

[!code-cpp[NVC_MFCWindowing#9](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_3.cpp)]

## <a name="getmdiframe"></a> CMDIChildWnd::GetMDIFrame

Call this function to return the MDI parent frame.

```
CMDIFrameWnd* GetMDIFrame();
```

### Return Value

A pointer to the MDI parent frame window.

### Remarks

The frame returned is two parents removed from the `CMDIChildWnd` and is the parent of the window of type MDICLIENT that manages the `CMDIChildWnd` object. Call the [GetParent](../../mfc/reference/cwnd-class.md#getparent) member function to return the `CMDIChildWnd` object's immediate MDICLIENT parent as a temporary `CWnd` pointer.

### Example

  See the example for [CMDIFrameWnd::MDISetMenu](../../mfc/reference/cmdiframewnd-class.md#mdisetmenu).

## <a name="mdiactivate"></a> CMDIChildWnd::MDIActivate

Call this member function to activate an MDI child window independently of the MDI frame window.

```cpp
void MDIActivate();
```

### Remarks

When the frame becomes active, the child window that was last activated will be activated as well.

### Example

  See the example for [CMDIFrameWnd::GetWindowMenuPopup](../../mfc/reference/cmdiframewnd-class.md#getwindowmenupopup).

## <a name="mdidestroy"></a> CMDIChildWnd::MDIDestroy

Call this member function to destroy an MDI child window.

```cpp
void MDIDestroy();
```

### Remarks

The member function removes the title of the child window from the frame window and deactivates the child window.

### Example

[!code-cpp[NVC_MFCWindowing#10](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_4.cpp)]

## <a name="mdimaximize"></a> CMDIChildWnd::MDIMaximize

Call this member function to maximize an MDI child window.

```cpp
void MDIMaximize();
```

### Remarks

When a child window is maximized, Windows resizes it to make its client area fill the client area of the frame window. Windows places the child window's Control menu in the frame's menu bar so that the user can restore or close the child window and adds the title of the child window to the frame-window title.

### Example

[!code-cpp[NVC_MFCWindowing#11](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_5.cpp)]

## <a name="mdirestore"></a> CMDIChildWnd::MDIRestore

Call this member function to restore an MDI child window from maximized or minimized size.

```cpp
void MDIRestore();
```

### Example

[!code-cpp[NVC_MFCWindowing#12](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_6.cpp)]

## <a name="sethandles"></a> CMDIChildWnd::SetHandles

Sets the handles for menu and accelerator resources.

```cpp
void SetHandles(
    HMENU hMenu,
    HACCEL hAccel);
```

### Parameters

*hMenu*<br/>
The handle of a menu resource.

*hAccel*<br/>
The handle of an accelerator resource.

### Remarks

Call this function to set the menu and accelerator resources used by the MDI child window object.

## See also

[MFC Sample MDI](../../overview/visual-cpp-samples.md)<br/>
[MFC Sample MDIDOCVW](../../overview/visual-cpp-samples.md)<br/>
[MFC Sample SNAPVW](../../overview/visual-cpp-samples.md)<br/>
[CFrameWnd Class](../../mfc/reference/cframewnd-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CWnd Class](../../mfc/reference/cwnd-class.md)<br/>
[CMDIFrameWnd Class](../../mfc/reference/cmdiframewnd-class.md)
