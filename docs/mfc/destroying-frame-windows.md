---
title: "Destroying Frame Windows | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "PostNcDestroy"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Default method"
  - "DestroyWindow method"
  - "frame windows [C++], destroying"
  - "OnNcDestroy method, and frame windows"
  - "document frame windows, destroying"
  - "destroying frame windows"
  - "MFC [C++], frame windows"
  - "windows [C++], destroying"
  - "OnClose method"
  - "PostNcDestroy method"
ms.assetid: 5affca77-1999-4507-a2b2-9aa226611b4b
caps.latest.revision: 9
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
# Destroying Frame Windows
The MFC framework manages window destruction as well as creation for those windows associated with framework documents and views. If you create additional windows, you are responsible for destroying them.  
  
 In the framework, when the user closes the frame window, the window's default [OnClose](../mfc/reference/cwnd-class.md#cwnd__onclose) handler calls [DestroyWindow](../mfc/reference/cwnd-class.md#cwnd__destroywindow). The last member function called when the Windows window is destroyed is [OnNcDestroy](../mfc/reference/cwnd-class.md#cwnd__onncdestroy), which does some cleanup, calls the [Default](../mfc/reference/cwnd-class.md#cwnd__default) member function to perform Windows cleanup, and lastly calls the virtual member function [PostNcDestroy](../mfc/reference/cwnd-class.md#cwnd__postncdestroy). The [CFrameWnd](../mfc/reference/cframewnd-class.md) implementation of `PostNcDestroy` deletes the C++ window object. You should never use the C++ **delete** operator on a frame window. Use `DestroyWindow` instead.  
  
 When the main window closes, the application closes. If there are modified unsaved documents, the framework displays a message box to ask if the documents should be saved and ensures that the appropriate documents are saved if necessary.  
  
## What do you want to know more about  
  
-   [Creating document frame windows](../mfc/creating-document-frame-windows.md)  
  
## See Also  
 [Using Frame Windows](../mfc/using-frame-windows.md)

