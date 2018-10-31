---
title: "PAINTSTRUCT Structure"
ms.date: "11/04/2016"
f1_keywords: ["PAINTSTRUCT"]
helpviewer_keywords: ["PAINTSTRUCT structure [MFC]"]
ms.assetid: 81ce4993-3e89-43b2-8c98-7946f1314d24
---
# PAINTSTRUCT Structure

The `PAINTSTRUCT` structure contains information that can be used to paint the client area of a window.

## Syntax

```
typedef struct tagPAINTSTRUCT {
    HDC hdc;
    BOOL fErase;
    RECT rcPaint;
    BOOL fRestore;
    BOOL fIncUpdate;
    BYTE rgbReserved[16];
} PAINTSTRUCT;
```

#### Parameters

*hdc*<br/>
Identifies the display context to be used for painting.

*fErase*<br/>
Specifies whether the background needs to be redrawn. It is not 0 if the application should redraw the background. The application is responsible for drawing the background if a Windows window-class is created without a background brush (see the description of the `hbrBackground` member of the [WNDCLASS](https://msdn.microsoft.com/library/windows/desktop/ms633576) structure in the Windows SDK).

*rcPaint*<br/>
Specifies the upper left and lower right corners of the rectangle in which the painting is requested.

*fRestore*<br/>
Reserved member. It is used internally by Windows.

*fIncUpdate*<br/>
Reserved member. It is used internally by Windows.

*rgbReserved[16]*<br/>
Reserved member. A reserved block of memory used internally by Windows.

## Requirements

**Header:** winuser.h

## See Also

[Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CPaintDC::m_ps](../../mfc/reference/cpaintdc-class.md#m_ps)

