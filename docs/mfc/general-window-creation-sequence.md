---
title: "General Window Creation Sequence | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["sequence [MFC], window creation", "frame windows [MFC], creating", "windows [MFC], creating", "sequence [MFC]"]
ms.assetid: 9cd8c7ea-5e24-429e-b6d9-d7b6041d8ba6
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# General Window Creation Sequence
When you create a window of your own, such as a child window, the framework uses much the same process as that described in [Document/View Creation](../mfc/document-view-creation.md).  
  
 All the window classes provided by MFC employ [two-stage construction](../mfc/one-stage-and-two-stage-construction-of-objects.md). That is, during an invocation of the C++ **new** operator, the constructor allocates and initializes a C++ object but does not create a corresponding Windows window. That is done afterward by calling the [Create](../mfc/reference/cwnd-class.md#create) member function of the window object.  
  
 The `Create` member function makes the Windows window and stores its `HWND` in the C++ object's public data member [m_hWnd](../mfc/reference/cwnd-class.md#m_hwnd). `Create` gives complete flexibility over the creation parameters. Before calling `Create`, you may want to register a window class with the global function [AfxRegisterWndClass](../mfc/reference/application-information-and-management.md#afxregisterwndclass) in order to set the icon and class styles for the frame.  
  
 For frame windows, you can use the [LoadFrame](../mfc/reference/cframewnd-class.md#loadframe) member function instead of `Create`. `LoadFrame` makes the Windows window using fewer parameters. It gets many default values from resources, including the frame's caption, icon, accelerator table, and menu.  
  
> [!NOTE]
>  Your icon, accelerator table, and menu resources must have a common resource ID, such as **IDR_MAINFRAME**, for them to be loaded by LoadFrame.  
  
## What do you want to know more about  
  
-   [Window objects](../mfc/window-objects.md)  
  
-   [Registering window "classes"](../mfc/registering-window-classes.md)  
  
-   [Destroying window objects](../mfc/destroying-window-objects.md)  
  
-   [Creating document frame windows](../mfc/creating-document-frame-windows.md)  
  
## See Also  
 [Creating Windows](../mfc/creating-windows.md)

