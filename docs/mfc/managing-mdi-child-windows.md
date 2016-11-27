---
title: "Managing MDI Child Windows | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MDICLIENT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MDI [C++], child windows"
  - "child windows, and MDICLIENT window"
  - "MDICLIENT window"
  - "windows [C++], MDI"
  - "frame windows [C++], MDI child windows"
  - "child windows"
  - "MDI [C++], frame windows"
ms.assetid: 1828d96e-a561-48ae-a661-ba9701de6bee
caps.latest.revision: 10
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
# Managing MDI Child Windows
MDI main frame windows (one per application) contain a special child window called the **MDICLIENT** window. The **MDICLIENT** window manages the client area of the main frame window, and itself has child windows: the document windows, derived from `CMDIChildWnd`. Because the document windows are frame windows themselves (MDI child windows), they can also have their own children. In all of these cases, the parent window manages its child windows and forwards some commands to them.  
  
 In an MDI frame window, the frame window manages the **MDICLIENT** window, repositioning it in conjunction with control bars. The **MDICLIENT** window, in turn, manages all MDI child frame windows. The following figure shows the relationship between an MDI frame window, its **MDICLIENT** window, and its child document frame windows.  
  
 ![Child windows in an MDI frame window](../mfc/media/vc37gb1.gif "vc37gb1")  
MDI Frame Windows and Children  
  
 An MDI frame window also works in conjunction with the current MDI child window, if there is one. The MDI frame window delegates command messages to the MDI child before it tries to handle them itself.  
  
## What do you want to know more about  
  
-   [Creating document frame windows](../mfc/creating-document-frame-windows.md)  
  
-   [Frame-window styles](../mfc/frame-window-styles-cpp.md)  
  
## See Also  
 [Using Frame Windows](../mfc/using-frame-windows.md)

