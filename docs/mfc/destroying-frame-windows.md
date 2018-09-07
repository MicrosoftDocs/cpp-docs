---
title: "Destroying Frame Windows | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
f1_keywords: ["PostNcDestroy"]
dev_langs: ["C++"]
helpviewer_keywords: ["Default method [MFC]", "DestroyWindow method [MFC]", "frame windows [MFC], destroying", "OnNcDestroy method, and frame windows", "document frame windows [MFC], destroying", "destroying frame windows", "MFC, frame windows", "windows [MFC], destroying", "OnClose method [MFC]", "PostNcDestroy method [MFC]"]
ms.assetid: 5affca77-1999-4507-a2b2-9aa226611b4b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Destroying Frame Windows
The MFC framework manages window destruction as well as creation for those windows associated with framework documents and views. If you create additional windows, you are responsible for destroying them.  
  
 In the framework, when the user closes the frame window, the window's default [OnClose](../mfc/reference/cwnd-class.md#onclose) handler calls [DestroyWindow](../mfc/reference/cwnd-class.md#destroywindow). The last member function called when the Windows window is destroyed is [OnNcDestroy](../mfc/reference/cwnd-class.md#onncdestroy), which does some cleanup, calls the [Default](../mfc/reference/cwnd-class.md#default) member function to perform Windows cleanup, and lastly calls the virtual member function [PostNcDestroy](../mfc/reference/cwnd-class.md#postncdestroy). The [CFrameWnd](../mfc/reference/cframewnd-class.md) implementation of `PostNcDestroy` deletes the C++ window object. You should never use the C++ **delete** operator on a frame window. Use `DestroyWindow` instead.  
  
 When the main window closes, the application closes. If there are modified unsaved documents, the framework displays a message box to ask if the documents should be saved and ensures that the appropriate documents are saved if necessary.  
  
## What do you want to know more about  
  
-   [Creating document frame windows](../mfc/creating-document-frame-windows.md)  
  
## See Also  
 [Using Frame Windows](../mfc/using-frame-windows.md)

