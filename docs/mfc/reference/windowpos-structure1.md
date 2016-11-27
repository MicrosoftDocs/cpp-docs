---
title: "WINDOWPOS Structure1 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "WINDOWPOS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "WINDOWPOS structure"
ms.assetid: a4ea7cd9-c4c2-4480-9c55-cbbff72195e1
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# WINDOWPOS Structure1
The `WINDOWPOS` structure contains information about the size and position of a window.  
  
## Syntax  
  
```  
typedef struct tagWINDOWPOS { /* wp */  
    HWND hwnd;  
    HWND hwndInsertAfter;  
    int x;  
    int y;  
    int cx;  
    int cy;  
    UINT flags;  
} WINDOWPOS;  
```  
  
#### Parameters  
 *hwnd*  
 Identifies the window.  
  
 *hwndInsertAfter*  
 Identifies the window behind which this window is placed.  
  
 *x*  
 Specifies the position of the left edge of the window.  
  
 *y*  
 Specifies the position of the right edge of the window.  
  
 `cx`  
 Specifies the window width, in pixels.  
  
 `cy`  
 Specifies the window height, in pixels.  
  
 `flags`  
 Specifies window-positioning options. This member can be one of the following values:  
  
- **SWP_DRAWFRAME** Draws a frame (defined in the class description for the window) around the window. The window receives a `WM_NCCALCSIZE` message.  
  
- **SWP_FRAMECHANGED** Sends a `WM_NCCALCSIZE` message to the window, even if the window's size is not being changed. If this flag is not specified, `WM_NCCALCSIZE` is sent only when the window's size is being changed.  
  
- **SWP_HIDEWINDOW** Hides the window.  
  
- `SWP_NOACTIVATE` Does not activate the window.  
  
- **SWP_NOCOPYBITS** Discards the entire contents of the client area. If this flag is not specified, the valid contents of the client area are saved and copied back into the client area after the window is sized or repositioned.  
  
- `SWP_NOMOVE` Retains current position (ignores the **x** and **y** members).  
  
- **SWP_NOOWNERZORDER** Does not change the owner window's position in the Z-order.  
  
- `SWP_NOSIZE` Retains current size (ignores the **cx** and **cy** members).  
  
- **SWP_NOREDRAW** Does not redraw changes.  
  
- **SWP_NOREPOSITION** Same as **SWP_NOOWNERZORDER**.  
  
- **SWP_NOSENDCHANGING** Prevents the window from receiving the `WM_WINDOWPOSCHANGING` message.  
  
- `SWP_NOZORDER` Retains current ordering (ignores the **hwndInsertAfter** member).  
  
- **SWP_SHOWWINDOW** Displays the window.  
  
## Requirements  
 **Header:** winuser.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CWnd::OnWindowPosChanging](../../mfc/reference/cwnd-class.md#cwnd__onwindowposchanging)

