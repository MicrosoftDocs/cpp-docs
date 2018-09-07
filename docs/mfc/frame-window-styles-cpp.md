---
title: "Frame-Window Styles (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["window styles [MFC]", "PreCreateWindow method, setting window styles", "windows [MFC], MFC", "frame windows [MFC], styles", "MFC, frame windows", "styles [MFC], windows"]
ms.assetid: fc5058c1-eec8-48d8-9f76-3fc01cfa53f7
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Frame-Window Styles (C++)
The frame windows you get with the framework are suitable for most programs, but you can gain additional flexibility by using the advanced functions [PreCreateWindow](../mfc/reference/cwnd-class.md#precreatewindow) and the MFC global function [AfxRegisterWndClass](../mfc/reference/application-information-and-management.md#afxregisterwndclass). `PreCreateWindow` is a member function of `CWnd`.  
  
 If you apply the **WS_HSCROLL** and **WS_VSCROLL** styles to the main frame window, they are instead applied to the **MDICLIENT** window so users can scroll the **MDICLIENT** area.  
  
 If the window's **FWS_ADDTOTITLE** style bit is set (which it is by default), the view tells the frame window what title to display in the window's title bar based on the view's document name.  
  
## What do you want to know more about  
  
-   [Managing MDI child windows (MDICLIENT)](../mfc/managing-mdi-child-windows.md), the window within an MDI frame that contains the MDI child windows  
  
-   [Changing the styles of a window created by MFC](../mfc/changing-the-styles-of-a-window-created-by-mfc.md)  
  
-   [Window styles](../mfc/reference/styles-used-by-mfc.md#window-styles)  
  
## See Also  
 [Frame Windows](../mfc/frame-windows.md)

