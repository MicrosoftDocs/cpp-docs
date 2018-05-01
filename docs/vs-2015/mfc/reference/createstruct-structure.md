---
title: "CREATESTRUCT Structure | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CREATESTRUCT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CREATESTRUCT structure"
ms.assetid: 028c7b5e-4fdc-48da-a550-d3e4f9e6cc85
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CREATESTRUCT Structure
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CREATESTRUCT Structure](https://docs.microsoft.com/cpp/mfc/reference/createstruct-structure).  
  
  
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
 `lpCreateParams`  
 Points to data to be used to create the window.  
  
 `hInstance`  
 Identifies the module-instance handle of the module that owns the new window.  
  
 `hMenu`  
 Identifies the menu to be used by the new window. If a child window, contains the integer ID.  
  
 `hwndParent`  
 Identifies the window that owns the new window. This member is **NULL** if the new window is a top-level window.  
  
 `cy`  
 Specifies the height of the new window.  
  
 `cx`  
 Specifies the width of the new window.  
  
 `y`  
 Specifies the y-coordinate of the upper left corner of the new window. Coordinates are relative to the parent window if the new window is a child window; otherwise coordinates are relative to the screen origin.  
  
 `x`  
 Specifies the x-coordinate of the upper left corner of the new window. Coordinates are relative to the parent window if the new window is a child window; otherwise coordinates are relative to the screen origin.  
  
 `style`  
 Specifies the new window's [style](../../mfc/reference/styles-used-by-mfc.md).  
  
 `lpszName`  
 Points to a null-terminated string that specifies the new window's name.  
  
 `lpszClass`  
 Points to a null-terminated string that specifies the new window's Windows class name (a [WNDCLASS](http://msdn.microsoft.com/library/windows/desktop/ms633576) structure; for more information, see the [!INCLUDE[winSDK](../../includes/winsdk-md.md)]).  
  
 `dwExStyle`  
 Specifies the [extended style](../../mfc/reference/extended-window-styles.md) for the new window.  
  
## Requirements  
 **Header:** winuser.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CWnd::OnCreate](../../mfc/reference/cwnd-class.md#cwnd__oncreate)








