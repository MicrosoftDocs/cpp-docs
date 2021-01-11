---
description: "Learn more about: TN024: MFC-Defined Messages and Resources"
title: "TN024: MFC-Defined Messages and Resources"
ms.date: "11/04/2016"
helpviewer_keywords: ["resources [MFC]", "Windows messages [MFC], MFC-defined", "messages [MFC], MFC", "TN024"]
ms.assetid: c65353ce-8096-454b-ad22-1a7a1dd9a788
---
# TN024: MFC-Defined Messages and Resources

> [!NOTE]
> The following technical note has not been updated since it was first included in the online documentation. As a result, some procedures and topics might be out of date or incorrect. For the latest information, it is recommended that you search for the topic of interest in the online documentation index.

This note describes the internal Windows messages and resource formats used by MFC. This information explains the implementation of the framework, and will assist you in debugging your application. For the adventurous, even though all this information is officially unsupported, you may use some of this information for advanced implementations.

This note contains MFC private implementation details; all the contents are subject to change in the future. MFC private Windows messages have meaning in the scope of one application only but will change in the future to contain system-wide messages.

The range of MFC private Windows messages and resource types are in the reserved "system" range set aside by Microsoft Windows. Currently not all numbers in the ranges are used and, in the future, new numbers in the range may be used. The currently used numbers may be changed.

MFC private Windows messages are in the range 0x360->0x37F.

MFC private resource types are in the range 0xF0->0xFF.

**MFC Private Windows Messages**

These Windows messages are used in place of C++ virtual functions where relatively loose coupling is required between window objects and where a C++ virtual function would not be appropriate.

These private Windows messages and associated parameter structures are declared in the MFC private header 'AFXPRIV.H'. Be warned that any of your code that includes this header may be relying on undocumented behavior and will likely break in future versions of MFC.

In the rare case of needing to handle one of these messages, you should use the ON_MESSAGE message map macro and handle the message in the generic LRESULT/WPARAM/LPARAM format.

**WM_QUERYAFXWNDPROC**

This message is sent to a window that is being created. This is sent very early in the creation process as a method of determining if the WndProc is **AfxWndProc. AfxWndProc** returns 1.

| Parameters and return value | Description |
|-|-|
|wParam|Not used|
|lParam|Not used|
|returns|1 if processed by **AfxWndProc**|

**WM_SIZEPARENT**

This message is sent by a frame window to its immediate children during resizing (`CFrameWnd::OnSize` calls `CFrameWnd::RecalcLayout` which calls `CWnd::RepositionBars`) to reposition the control bars around the side of the frame. The AFX_SIZEPARENTPARAMS structure contains the current available client rectangle of the parent and a HDWP (which may be NULL) with which to call `DeferWindowPos` to minimize repainting.

| Parameters and return value | Description |
|-|-|
|wParam|Not used|
|lParam|Address of an AFX_SIZEPARENTPARAMS structure|
|returns|Not used (0)|

Ignoring the message indicates that the window doesn't take part in the layout.

**WM_SETMESSAGESTRING**

This message is sent to a frame window to ask it to update the message line in the status bar. Either a string ID or a LPCSTR can be specified (but not both).

| Parameters and return value | Description |
|-|-|
|wParam|String ID (or zero)|
|lParam|LPCSTR for the string (or NULL)|
|returns|Not used (0)|

**WM_IDLEUPDATECMDUI**

This message is sent in idle time to implement the idle-time update of update-command UI handlers. If the window (usually a control bar) handles the message, it creates a `CCmdUI` object (or an object of a derived class) and call `CCmdUI::DoUpdate` for each of the "items" in the window. This will in turn check for an ON_UPDATE_COMMAND_UI handler for the objects in the command-handler chain.

| Parameters and return value | Description |
|-|-|
|wParam|BOOL bDisableIfNoHandler|
|lParam|Not used (0)|
|returns|Not used (0)|

*bDisableIfNoHandler* is nonzero to disable the UI object if there is neither an ON_UPDATE_COMMAND_UI nor an ON_COMMAND handler.

**WM_EXITHELPMODE**

This message is posted to a `CFrameWnd` that to exit context sensitive help mode. The receipt of this message terminates the modal loop started by `CFrameWnd::OnContextHelp`.

| Parameter and return value | Description |
|-|-|
|wParam|Not used (0)|
|lParam|Not used (0)|
|returns|Not used|

**WM_INITIALUPDATE**

This message is sent by the document template to all descendants of a frame window when it is safe for them to do their initial update. It maps to a call to `CView::OnInitialUpdate` but can be used in other `CWnd`-derived classes for other one-shot updating.

| Parameters and return value | Description |
|-|-|
|wParam|Not used (0)|
|lParam|Not used (0)|
|returns|Not used (0)|

**WM_RECALCPARENT**

This message is sent by a view to its parent window (obtained via `GetParent`) to force a layout recalculation (usually, the parent will call `RecalcLayout`). This is used in OLE server applications where it is necessary for the frame to grow in size as the view's total size grows.

If the parent window processes this message it should return TRUE and fill the RECT passed in lParam with the new size of the client area. This is used in `CScrollView` to properly handle scrollbars (place then on the outside of the window when they are added) when a server object is in-place activated.

| Parameters and return value | Description |
|-|-|
|wParam|Not used (0)|
|lParam|LPRECT rectClient, may be NULL|
|returns|TRUE if new client rectangle returned, FALSE otherwise|

**WM_SIZECHILD**

This message is sent by `COleResizeBar` to its owner window (via `GetOwner`) when the user resizes the resize bar with the resize handles. `COleIPFrameWnd` responds to this message by attempting to reposition the frame window as the user has requested.

The new rectangle, given in client coordinates relative to the frame window which contains the resize bar, is pointed at by lParam.

| Parameters and return value | Description |
|-|-|
|wParam|Not used (0)|
|lParam|LPRECT rectNew|
|returns|Not used (0)|

**WM_DISABLEMODAL**

This message is sent to all pop-up windows owned by a frame window that is being deactivated. The frame window uses the result to determine whether or not to disable the pop-up window.

You can use this to perform special processing in your pop-up window when the frame enters a modal state or to keep certain pop-up windows from getting disabled. Tooltips use this message to destroy themselves when the frame window goes into a modal state, for example.

| Parameters and return value | Description |
|-|-|
|wParam|Not used (0)|
|lParam|Not used (0)|
|returns|Non-zero to **NOT** disable the window, 0 indicates the window will be disabled|

**WM_FLOATSTATUS**

This message is sent to all pop-up windows owned by a frame window when the frame is either activated or deactivated by another top-level frame window. This is used by the implementation of MFS_SYNCACTIVE in `CMiniFrameWnd`, to keep the activation of these pop-up windows in sync with the activation of the top level frame window.

| Parameters | Description |
|-|-|
|wParam|Is one of the following values:<br /><br /> FS_SHOW<br /><br /> FS_HIDE<br /><br /> FS_ACTIVATE<br /><br /> FS_DEACTIVATE<br /><br /> FS_ENABLEFS_DISABLE<br /><br /> FS_SYNCACTIVE|
|lParam|Not used (0)|

The return value should be non-zero if FS_SYNCACTIVE is set and the window syncronizes its activation with the parent frame. `CMiniFrameWnd` returns non-zero when the style is set to MFS_SYNCACTIVE.

For more information, see the implementation of `CMiniFrameWnd`.

## WM_ACTIVATETOPLEVEL

This message is sent to a top-level window when a window in its "top-level group" is either activated or deactivated. A window is part of a top-level group if it is a top-level window (no parent or owner), or it is owned by such a window. This message is similar in use to WM_ACTIVATEAPP, but works in situations where windows belonging to different processes are mixed in a single window hierarchy (common in OLE applications).

## WM_COMMANDHELP, WM_HELPHITTEST, WM_EXITHELPMODE

These messages are used in the implementation of context-sensitive Help. Please refer to [Technical Note 28](../mfc/tn028-context-sensitive-help-support.md) for more information.

## MFC Private Resource Formats

Currently, MFC defines two private resource formats: RT_TOOLBAR and RT_DLGINIT.

## RT_TOOLBAR Resource Format

The default toolbar supplied by AppWizard is based on an RT_TOOLBAR custom resource, which was introduced in MFC 4.0. You can edit this resource using the Toolbar editor.

## RT_DLGINIT Resource Format

One MFC private resource format is used to store extra dialog initialization information. This includes the initial strings stored in a combo box. The format of this resource is not designed to be manually edited, but is handled by Visual C++.

Visual C++ and this RT_DLGINIT resource are not required to use the related features of MFC since there are API alternative to using the information in the resource. Using Visual C++ makes it much easier to write, maintain, and translate your application in the long run.

The basic structure of a RT_DLGINIT resource is as follows:

```
+---------------+    \
| Control ID    |   UINT             |
+---------------+    |
| Message #     |   UINT             |
+---------------+    |
|length of data |   DWORD            |
+---------------+    |   Repeated
|   Data        |   Variable Length  |   for each control
|   ...         |   and Format       |   and message
+---------------+    /
|     0         |   BYTE
+---------------+
```

A repeated section contains the control ID to send the message to, the Message # to send (a normal Windows message) and a variable length of data. The Windows message is sent in a form:

```
SendDlgItemMessage(<Control ID>, <Message #>, 0, &<Data>);
```

This is a very general format, allowing any Windows messages and data content. The Visual C++ resource editor and MFC only support a limited subset of Windows messages: CB_ADDSTRING for the initial list-choices for combo boxes (the data is a text string).

## See also

[Technical Notes by Number](../mfc/technical-notes-by-number.md)<br/>
[Technical Notes by Category](../mfc/technical-notes-by-category.md)
