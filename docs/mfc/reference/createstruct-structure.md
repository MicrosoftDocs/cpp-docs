---
title: "CREATESTRUCT Structure"
ms.date: "11/04/2016"
f1_keywords: ["CREATESTRUCT"]
helpviewer_keywords: ["CREATESTRUCT structure [MFC]"]
ms.assetid: 028c7b5e-4fdc-48da-a550-d3e4f9e6cc85
---
# CREATESTRUCT Structure

The `CREATESTRUCT` structure defines the initialization parameters passed to the window procedure of an application.

## Syntax

```
typedef struct tagCREATESTRUCT {
    LPVOID lpCreateParams;
    HANDLE hInstance;
    HMENU hMenu;
    HWND hwndParent;
    int cy;
    int cx;
    int y;
    int x;
    LONG style;
    LPCSTR lpszName;
    LPCSTR lpszClass;
    DWORD dwExStyle;
} CREATESTRUCT;
```

#### Parameters

*lpCreateParams*<br/>
Points to data to be used to create the window.

*hInstance*<br/>
Identifies the module-instance handle of the module that owns the new window.

*hMenu*<br/>
Identifies the menu to be used by the new window. If a child window, contains the integer ID.

*hwndParent*<br/>
Identifies the window that owns the new window. This member is NULL if the new window is a top-level window.

*cy*<br/>
Specifies the height of the new window.

*cx*<br/>
Specifies the width of the new window.

*y*<br/>
Specifies the y-coordinate of the upper left corner of the new window. Coordinates are relative to the parent window if the new window is a child window; otherwise coordinates are relative to the screen origin.

*x*<br/>
Specifies the x-coordinate of the upper left corner of the new window. Coordinates are relative to the parent window if the new window is a child window; otherwise coordinates are relative to the screen origin.

*style*<br/>
Specifies the new window's [style](../../mfc/reference/styles-used-by-mfc.md).

*lpszName*<br/>
Points to a null-terminated string that specifies the new window's name.

*lpszClass*<br/>
Points to a null-terminated string that specifies the new window's Windows class name (a [WNDCLASS](https://msdn.microsoft.com/library/windows/desktop/ms633576) structure; for more information, see the Windows SDK).

*dwExStyle*<br/>
Specifies the [extended style](../../mfc/reference/styles-used-by-mfc.md#extended-window-styles) for the new window.

## Requirements

**Header:** winuser.h

## See Also

[Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CWnd::OnCreate](../../mfc/reference/cwnd-class.md#oncreate)

