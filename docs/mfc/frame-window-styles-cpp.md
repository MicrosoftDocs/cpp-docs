---
title: "Frame-Window Styles (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "window styles [C++]"
  - "PreCreateWindow method, setting window styles"
  - "windows [C++], MFC"
  - "frame windows [C++], styles"
  - "MFC [C++], frame windows"
  - "styles, windows"
ms.assetid: fc5058c1-eec8-48d8-9f76-3fc01cfa53f7
caps.latest.revision: 8
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
# Frame-Window Styles (C++)
The frame windows you get with the framework are suitable for most programs, but you can gain additional flexibility by using the advanced functions [PreCreateWindow](../mfc/reference/cwnd-class.md#cwnd__precreatewindow) and the MFC global function [AfxRegisterWndClass](../mfc/reference/application-information-and-management.md#afxregisterwndclass). `PreCreateWindow` is a member function of `CWnd`.  
  
 If you apply the **WS_HSCROLL** and **WS_VSCROLL** styles to the main frame window, they are instead applied to the **MDICLIENT** window so users can scroll the **MDICLIENT** area.  
  
 If the window's **FWS_ADDTOTITLE** style bit is set (which it is by default), the view tells the frame window what title to display in the window's title bar based on the view's document name.  
  
## What do you want to know more about  
  
-   [Managing MDI child windows (MDICLIENT)](../mfc/managing-mdi-child-windows.md), the window within an MDI frame that contains the MDI child windows  
  
-   [Changing the styles of a window created by MFC](../mfc/changing-the-styles-of-a-window-created-by-mfc.md)  
  
-   [Window styles](../mfc/reference/window-styles.md)  
  
## See Also  
 [Frame Windows](../mfc/frame-windows.md)

